/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_rxline.c: xlines an user with regular expression support.
 *
 *  Copyright (C) 2002 by the past and present ircd coders, and others.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 *  USA
 *
 *  $Id: m_rxline.c,v 1.7 2005/07/26 14:56:08 michael Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "channel.h"
#include "client.h"
#include "common.h"
#include "irc_string.h"
#include "sprintf_irc.h"
#include "ircd.h"
#include "hostmask.h"
#include "numeric.h"
#include "fdlist.h"
#include "s_bsd.h"
#include "s_conf.h"
#include "s_log.h"
#include "s_misc.h"
#include "send.h"
#include "hash.h"
#include "handlers.h"
#include "s_serv.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"
#include "cluster.h"
#include "resv.h"
#include "list.h"

static void mo_rxline(struct Client *, struct Client *, int, char **);
static void mo_unrxline(struct Client *, struct Client *, int, char **);

static int valid_xline(struct Client *, char *, char *, int);
static void write_xline(struct Client *, char *, char *, time_t);
static void remove_xline(struct Client *, char *, int);
static int remove_txline_match(const char *gecos);

struct Message rxline_msgtab = {
  "RXLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, m_ignore, m_ignore, mo_rxline, m_ignore}
};

struct Message unrxline_msgtab = {
  "UNRXLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, m_ignore, m_ignore, mo_unrxline, m_ignore}
};

extern dlink_list temporary_rxlines;

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&rxline_msgtab);
  mod_add_cmd(&unrxline_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&rxline_msgtab);
  mod_del_cmd(&unrxline_msgtab);
}

const char *_version = "$Revision: 1.7 $";
#endif

static char buffer[IRCD_BUFSIZE];

static void
mo_rxline(struct Client *client_p, struct Client *source_p,
         int parc, char *parv[])
{
  char def_reason[] = "No Reason";
  char *reason = def_reason;
  char *gecos=NULL;
  struct ConfItem *conf;
  struct MatchItem *match_item;
  time_t tkline_time = 0;

  if (!IsOperX(source_p))
  {
    sendto_one(source_p, form_str(ERR_NOPRIVS),
               me.name, source_p->name, "xline");
    return;
  }

  parv++;
  parc--;

  tkline_time = valid_tkline(*parv, TK_MINUTES);

  if (tkline_time != 0)
  {
    parv++;
    parc--;
  }

  if (parc == 0)
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
	       me.name, source_p->name, "RXLINE");
    return;
  }

  gecos = *parv;

  if (--parc != 0)
    reason = *++parv;

  if (!valid_xline(source_p, gecos, reason, 0))
    return;

  if ((conf = find_conf_name(&rxconf_items, gecos, RXLINE_TYPE)) != NULL)
  {
    match_item = (struct MatchItem *)map_to_conf(conf);

    sendto_one(source_p, ":%s NOTICE %s :[%s] already RX-Lined by [%s] - %s",
               me.name, source_p->name, gecos,
               conf->name, match_item->reason);
    return;
  }

  write_xline(source_p, gecos, reason, tkline_time);
}

static void
mo_unrxline(struct Client *client_p, struct Client *source_p,
            int parc, char *parv[])
{
  if (!IsOperX(source_p))
  {
    sendto_one(source_p, form_str(ERR_NOPRIVS),
               me.name, source_p->name, "unxline");
    return;
  }

  remove_xline(source_p, parv[1], 0);
}

/* valid_xline()
 *
 * inputs	- client to complain to, gecos, reason, whether to complain
 * outputs	- 1 for valid, else 0
 * side effects	- complains to client, when warn != 0
 */
static int
valid_xline(struct Client *source_p, char *gecos, char *reason, int warn)
{
  if (EmptyString(reason))
  {
    if (warn)
      sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
                 me.name, source_p->name, "RXLINE");
    return(0);
  }

  if (strchr(gecos, '"'))
  {
    sendto_one(source_p, ":%s NOTICE %s :Invalid character '\"'",
               me.name, source_p->name);
    return(0);
  }

  if (strchr(reason, ':'))
  {
    if (warn)
      sendto_one(source_p, ":%s NOTICE %s :Invalid character ':' in comment",
                 me.name, source_p->name);
    return(0);
  }

  if (!valid_wild_card_simple(gecos))
  {
    if (warn)
      sendto_one(source_p, ":%s NOTICE %s :Please include at least %d non-wildcard characters with the rxline",
                 me.name, source_p->name, ConfigFileEntry.min_nonwildcard_simple);

    return(0);
  }

  return(1);
}

/* write_xline()
 *
 * inputs	- client taking credit for xline, gecos, reason, xline type
 * outputs	- none
 * side effects	- when successful, adds an xline to the conf
 */
static void
write_xline(struct Client *source_p, char *gecos, char *reason,
	    time_t tkline_time)
{
  struct ConfItem *conf;
  struct MatchItem *match_item;
  const char *current_date;
  regex_t *exp_p = NULL;
  time_t cur_time;
  int ecode = 0;

  exp_p = MyMalloc(sizeof(regex_t));

  if ((ecode = regcomp(exp_p, gecos, REG_EXTENDED|REG_ICASE|REG_NOSUB)))
  {
    char errbuf[BUFSIZE];

    regerror(ecode, NULL, errbuf, sizeof(errbuf));

    MyFree(exp_p);
    sendto_realops_flags(UMODE_ALL, L_ALL,
           "Failed to add regular expression based X-Line: %s", errbuf);
    return;
  }

  conf = make_conf_item(RXLINE_TYPE);
  conf->regexpname = exp_p;

  match_item = map_to_conf(conf);

  DupString(conf->name, gecos);
  DupString(match_item->reason, reason);
  DupString(match_item->oper_reason, "");	/* XXX */
  set_time();
  cur_time = CurrentTime;
  current_date = smalldate(cur_time);

  if (tkline_time != 0)
  {
    ircsprintf(buffer, "Temporary RX-line %d min. - %s (%s)",
	       (int)(tkline_time/60), reason, current_date);

    sendto_realops_flags(UMODE_ALL, L_ALL,
			 "%s added temporary %d min. RX-Line for [%s] [%s]",
			 get_oper_name(source_p), (int)tkline_time/60,
			 conf->name, match_item->reason);
    sendto_one(source_p, ":%s NOTICE %s :Added temporary %d min. RX-Line [%s]",
	       MyConnect(source_p) ? me.name : ID_or_name(&me, source_p->from),
	       source_p->name, (int)tkline_time/60, conf->name);
    ilog(L_TRACE, "%s added temporary %d min. RX-Line for [%s] [%s]",
	 source_p->name, (int)tkline_time/60,
	 conf->name, match_item->reason);
    match_item->hold = CurrentTime + tkline_time;
    add_temp_line(conf);
  }
  else
    write_conf_line(source_p, conf, current_date, cur_time);
  rehashed_klines = 1;
}

static void
remove_xline(struct Client *source_p, char *gecos, int cluster)
{
  /* XXX use common temporary un function later */
  if (remove_txline_match(gecos))
  {
    sendto_one(source_p,
               ":%s NOTICE %s :Un-rxlined [%s] from temporary RX-Lines",
               me.name, source_p->name, gecos);
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "%s has removed the temporary RX-Line for: [%s]",
                         get_oper_name(source_p), gecos);
    ilog(L_NOTICE, "%s removed temporary RX-Line for [%s]",
         source_p->name, gecos);
    return;
  }

  if (remove_conf_line(RXLINE_TYPE, source_p, gecos, NULL) > 0)
  {
    if (!cluster)
      sendto_one(source_p, ":%s NOTICE %s :RX-Line for [%s] is removed",
                 me.name, source_p->name, gecos);
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "%s has removed the RX-Line for: [%s]",
                         get_oper_name(source_p), gecos);
    ilog(L_NOTICE, "%s removed RX-Line for [%s]",
         get_oper_name(source_p), gecos);
  }
  else if (!cluster)
    sendto_one(source_p, ":%s NOTICE %s :No RX-Line for %s",
               me.name, source_p->name, gecos);
}

/* static int remove_tkline_match(const char *host, const char *user)
 *
 * Inputs:	gecos
 * Output:	returns YES on success, NO if no tkline removed.
 * Side effects: Any matching tklines are removed.
 */
static int
remove_txline_match(const char *gecos)
{
  dlink_node *ptr = NULL, *next_ptr = NULL;

  DLINK_FOREACH_SAFE(ptr, next_ptr, temporary_rxlines.head)
  {
    struct ConfItem *conf = ptr->data;

    if (!irccmp(gecos, conf->name))
    {
      dlinkDelete(ptr, &temporary_rxlines);
      free_dlink_node(ptr);
      delete_conf_item(conf);
      return(1);
    }
  }

  return(0);
}
