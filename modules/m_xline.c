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
 *  $Id: m_xline.c,v 1.3 2003/05/15 03:50:46 db Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "m_kline.h"
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
  "XLINE", 0, 0, 0, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, ms_xline, mo_xline, m_ignore}
};

struct Message unxline_msgtab = {
  "UNXLINE", 0, 0, 0, 0, MFLG_SLOW, 0,
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
  mod_add_cmd(&unxline_msgtab);
}
const char *_version = "$Revision: 1.3 $";
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
  const char *x_type, *x_reason;
  char *x_pattern;
  const char* current_date;
  time_t cur_time;

  if (!IsOperX(source_p))
  {
    sendto_one(source_p,":%s NOTICE %s :You need to have XLINE privs;",
	       me.name,source_p->name);
    return;
  }

  if (parc < 3)
  {
    sendto_one(source_p,":%s NOTICE %s :XLINE {WARN|REJECT|SILENT| pattern reason",
	       me.name,source_p->name);
    return;
  }

  x_type = parv[1];
  x_pattern = parv[2];
  x_reason = parv[3];

  aconf = make_conf(CONF_XLINE);
  if (irccmp(x_type,"WARN") == 0)
    aconf->port = 0;
  else if (irccmp(x_type,"REJECT") == 0)
    aconf->port = 1;
  else if (irccmp(x_type,"SILENT") == 0)
    aconf->port = 2;
  else
    aconf->port = 0; /* default = WARN(0) */

  if (EmptyString(x_reason))
    x_reason = "No Reason";

  collapse(x_pattern);
  DupString(aconf->name, x_pattern);
  DupString(aconf->reason, x_reason);
  set_time();
  cur_time = CurrentTime;
  current_date = smalldate(cur_time);
  write_conf_line(source_p, aconf, current_date, cur_time);
  conf_add_conf(aconf);

} /* mo_xline() */

/*
 * ms_xline()
 *
 *
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
  char *x_pattern;

  if (!IsOperX(source_p))
  {
    sendto_one(source_p,":%s NOTICE %s :You need to have XLINE privs;",
	       me.name,source_p->name);
    return;
  }

  if (parc < 2)
  {
    sendto_one(source_p,":%s NOTICE %s :UNXLINE pattern",
	       me.name,source_p->name);
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
    sendto_one(source_p, ":%s NOTICE %s :No X-Line for [%s] found",
	       me.name, parv[0], x_pattern);

} /* mo_unxline() */

/*
 * ms_unxline()
 *
 *
 */
static void
ms_unxline(struct Client *client_p, struct Client *source_p,
	   int parc, char *parv[])
{
}
