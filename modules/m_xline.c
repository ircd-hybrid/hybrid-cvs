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
 *  $Id: m_xline.c,v 1.9 2003/05/24 09:25:42 michael Exp $
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

static void mo_xline(struct Client *,struct Client *,int,char **);
static void ms_xline(struct Client *,struct Client *,int,char **);

static void mo_unxline(struct Client *,struct Client *,int,char **);
static void ms_unxline(struct Client *,struct Client *,int,char **);

struct Message xline_msgtab = {
  "XLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, ms_xline, mo_xline, m_ignore}
};

struct Message unxline_msgtab = {
  "UNXLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, ms_unxline, mo_unxline, m_ignore}
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
const char *_version = "$Revision: 1.9 $";
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
  const char *type=NULL, *reason=NULL, *current_date;
  char *pattern=NULL, *target_server=NULL;
  int type_i = 1;	/* default */
  time_t cur_time;

  if (!IsOperX(source_p))
  {
    sendto_one(source_p, ":%s NOTICE %s :You need xline = yes;",
               me.name, source_p->name);
    return;
  }

  if (parc < 4)
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, source_p->name, "XLINE");
    return;
  }

  type = parv[1];
  pattern = parv[2];

  if ((aconf = find_x_conf(pattern)) != NULL)
  {
    sendto_one(source_p, ":%s NOTICE %s :[%s] already X-Lined by [%s] - %s",
               me.name, source_p->name, parv[1], aconf->name, aconf->reason);
    return;
  }

  if (irccmp(type,"WARN") == 0)
    type_i = 0;
  else if (irccmp(type,"REJECT") == 0)
    type_i = 1;
  else if (irccmp(type,"SILENT") == 0)
    type_i = 2;


  /* XLINE <type> <gecos> ON <server> */
  if (parc >= 5)
  {
    if (irccmp(parv[3], "ON") == 0)
    {
      target_server = parv[4];
    }
    else
    {
      sendto_one(source_p, form_str(ERR_NORECIPIENT),
		 me.name, source_p->name, "XLINE");
      return;
    }
    if (parc < 6)
    {
      sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
		 me.name, source_p->name, "XLINE");
      return;
    }
    else
      reason = parv[5];
  }
  else
    reason = parv[3];

  if (target_server != NULL)
  {
    /* XXX - CAP_CLUSTER?  Perhaps we can think of something better. */
    sendto_match_servs(source_p, target_server, CAP_CLUSTER,
                       "XLINE %s %s %d :%s",
                       target_server, parv[1], type_i, reason);
    if (!match(target_server, me.name))
      return;
  }

  aconf = make_conf(CONF_XLINE);
  aconf->port = type_i;

  if (EmptyString(reason))
    reason = "No Reason";

  collapse(pattern);
  DupString(aconf->name, pattern);
  DupString(aconf->reason, reason);
  set_time();
  cur_time = CurrentTime;
  current_date = smalldate(cur_time);
  write_conf_line(source_p, aconf, current_date, cur_time);
  conf_add_conf(aconf);

  check_xlines();
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
  if (parc != 5 || EmptyString(parv[4]))
    return;

  if (!IsPerson(source_p))
    return;

  /* XXX - CAP_CLUSTER */
  sendto_match_servs(source_p, parv[1], CAP_CLUSTER,
                     "XLINE %s %s %s :%s",
                     parv[1], parv[2], parv[3], parv[4]);

  if (!match(parv[1], me.name))
    return;

  /* XXX - CLUSTER code here! */

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
  char *x_pattern;

  if (!IsOperX(source_p))
  {
    sendto_one(source_p, ":%s NOTICE %s :You need xline = yes;",
	       me.name, source_p->name);
    return;
  }

  x_pattern = parv[1];

  if (remove_conf_line(CONF_XLINE, source_p, x_pattern, NULL) > 0)
  {
    sendto_one(source_p, ":%s NOTICE %s :X-Line for [%s] is removed",
	       me.name, parv[0], x_pattern);
    sendto_realops_flags(UMODE_ALL, L_ALL,
			 "%s has removed the X-Line for: [%s]",
			 get_oper_name(source_p), x_pattern);
    ilog(L_NOTICE, "%s removed X-Line for [%s]", get_oper_name(source_p),
	 x_pattern);
  }
  else
    sendto_one(source_p, ":%s NOTICE %s :No X-Line for %s",
	       me.name, parv[0], x_pattern);

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
  if (parc != 3)
    return;

  if (EmptyString(parv[2]))
    return;

  /* XXX - CAP_CLUSTER */
  sendto_match_servs(source_p, parv[1], CAP_CLUSTER,
                     "UNXLINE %s %s",
                     parv[1], parv[2]);

  if (!match(parv[1], me.name))
    return;

  /* XXX - We propogate, even if the source is not a person? LEE! */
  if (!IsPerson(source_p))
    return;


}
