/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_xline.c: xlines an user.
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
 *  $Id: m_xline.c,v 1.29.2.4 2004/06/16 04:55:55 erik Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "channel.h"
#include "class.h"
#include "client.h"
#include "common.h"
#include "irc_string.h"
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
#include "resv.h"

static void mo_xline(struct Client *, struct Client *, int, char **);
static void ms_xline(struct Client *, struct Client *, int, char **);

static void mo_unxline(struct Client *, struct Client *, int, char **);
static void ms_unxline(struct Client *, struct Client *, int, char **);

static int valid_xline(struct Client *, char *, char *, int);
static void write_xline(struct Client *, char *, char *, int);
static void remove_xline(struct Client *, char *, int);

static int valid_wild_card(char *gecos);

struct Message xline_msgtab = {
  "XLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, ms_xline, ms_xline, mo_xline}
};

struct Message unxline_msgtab = {
  "UNXLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, ms_unxline, ms_unxline, mo_unxline}
};


#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&xline_msgtab);
  mod_add_cmd(&unxline_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&xline_msgtab);
  mod_del_cmd(&unxline_msgtab);
}
const char *_version = "$Revision: 1.29.2.4 $";
#endif


/*
 * mo_xline
 *
 * inputs	- pointer to server
 *		- pointer to client
 *		- parameter count
 *		- parameter list
 * output	-
 * side effects - x line is added
 *
 */
static void
mo_xline(struct Client *client_p, struct Client *source_p,
         int parc, char *parv[])
{
  struct ConfItem *aconf;
  char *type, *reason, *pattern;
  int type_i = 1;

  type = reason = pattern = NULL;

  if (!IsOperX(source_p))
  {
    sendto_one(source_p, ":%s NOTICE %s :You need xline = yes;",
               me.name, source_p->name);
    return;
  }

  if ((aconf = find_x_conf(parv[1])) != NULL)
  {
    sendto_one(source_p, ":%s NOTICE %s :[%s] already X-Lined by [%s] - %s",
               me.name, source_p->name, parv[1], aconf->name, aconf->passwd);
    return;
  }

  /* XLINE <gecos> <type> :<reason> */
  if (parc == 4)
  {
    reason = parv[3];
    type = parv[2];
  }
  /* XLINE <gecos> :<reason> */
  else if (parc == 3)
  {
    reason = parv[2];
    type = "REJECT";
  }
  else
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, source_p->name, "XLINE");
    return;
  }

  if (irccmp(type,"WARN") == 0)
    type_i = 0;
  else if (irccmp(type,"REJECT") == 0)
    type_i = 1;
  else if (irccmp(type,"SILENT") == 0)
    type_i = 2;
  else
    type_i = atoi(type);

  if (EmptyString(reason))
    reason = "No Reason";

  if (!valid_xline(source_p, parv[1], reason, 1))
    return;

  write_xline(source_p, parv[1], reason, type_i);
  rehashed_xlines = 1;
} /* mo_xline() */

/*
 * ms_xline()
 *
 * inputs	- oper, target server, xline, type, reason
 * outputs	- none
 * side effects	- propogates xline, applies it if we are a target
 */
static void
ms_xline(struct Client *client_p, struct Client *source_p,
	 int parc, char *parv[])
{
}

/*
 * mo_unxline
 *
 * inputs	- pointer to server
 *		- pointer to client
 *		- parameter count
 *		- parameter list
 * output	-
 * side effects - x line is added
 *
 */
static void
mo_unxline(struct Client *client_p, struct Client *source_p,
           int parc, char *parv[])
{
  if (!IsOperX(source_p))
  {
    sendto_one(source_p, ":%s NOTICE %s :You need xline = yes;",
	       me.name, source_p->name);
    return;
  }

  if (EmptyString(parv[1]))
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, source_p->name, "UNXLINE");
    return;
  }

  if (parc > 1)
  {
    remove_xline(source_p, parv[1], 0);
  }
  else
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, source_p->name, "UNXLINE");

} /* mo_unxline() */

/*
 * ms_unxline()
 *
 * inputs	- oper, target server, gecos
 * outputs	- none
 * side effects	- propogates unxline, applies it if we are a target
 */
static void
ms_unxline(struct Client *client_p, struct Client *source_p,
	   int parc, char *parv[])
{
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
                 me.name, source_p->name, "XLINE");
    return 0;
  }

  if (strchr(reason, ':') != NULL)
  {
    if (warn)
      sendto_one(source_p, ":%s NOTICE %s :Invalid character ':' in comment",
                 me.name, source_p->name);
    return 0;
  }

  if (!valid_wild_card(gecos))
  {
    if (warn)
      sendto_one(source_p, ":%s NOTICE %s :Please include at least %d non-wildcard characters with the xline",
                 me.name, source_p->name, ConfigFileEntry.min_nonwildcard);

    return 0;
  }

  return 1;
}

/* write_xline()
 *
 * inputs	- client taking credit for xline, gecos, reason, xline type
 * outputs	- none
 * side effects	- when succesful, adds an xline to the conf
 */
static void
write_xline(struct Client *source_p, char *gecos, char *reason, int type)
{
  struct ConfItem *aconf;
  const char *current_date;
  time_t cur_time;

  aconf = make_conf();
  aconf->status = CONF_XLINE;
  aconf->port = type;

  collapse(gecos);
  DupString(aconf->name, gecos);
  DupString(aconf->passwd, reason);
  set_time();
  cur_time = CurrentTime;
  current_date = smalldate(cur_time);
  write_conf_line(XLINE_TYPE, source_p, aconf, current_date, cur_time);
  conf_add_conf(aconf);
}

static void
remove_xline(struct Client *source_p, char *gecos, int cluster)
{
  if (remove_conf_line(XLINE_TYPE, source_p, gecos, NULL) > 0)
  {
    if (!cluster)
      sendto_one(source_p, ":%s NOTICE %s :X-Line for [%s] is removed",
                 me.name, source_p->name, gecos);
    sendto_realops_flags(FLAGS_ALL, L_ALL,
                         "%s has removed the X-Line for: [%s]",
                         get_oper_name(source_p), gecos);
    ilog(L_NOTICE, "%s removed X-Line for [%s]", get_oper_name(source_p),
         gecos);
  }
  else if (!cluster)
    sendto_one(source_p, ":%s NOTICE %s :No X-Line for %s",
               me.name, source_p->name, gecos);
}

/*
 * valid_wild_card
 * input        - pointer to string to check
 * output       - 0 if not valid, 1 if valid
 * side effects -
 */
static int
valid_wild_card(char *gecos)
{
  char *p;
  char tmpch;
  int nonwild;

  /*
   * Now we must check the user and host to make sure there
   * are at least NONWILDCHARS non-wildcard characters in
   * them, otherwise assume they are attempting to kline
   * *@* or some variant of that. This code will also catch
   * people attempting to kline *@*.tld, as long as NONWILDCHARS
   * is greater than 3. In that case, there are only 3 non-wild
   * characters (tld), so if NONWILDCHARS is 4, the kline will
   * be disallowed.
   * -wnder
   */

  nonwild = 0;
  p = gecos;
  while ((tmpch = *p++))
  {
    if (!IsKWildChar(tmpch))
    {
      /*
       * If we find enough non-wild characters, we can
       * break - no point in searching further.
       */
      if (++nonwild >= ConfigFileEntry.min_nonwildcard)
        break;
    }
  }

  if (nonwild < ConfigFileEntry.min_nonwildcard)
    return 0;
  else
    return 1;
}
