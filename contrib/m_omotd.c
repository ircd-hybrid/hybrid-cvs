/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_omotd.c: Shows oper motd
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
 *  $Id: m_omotd.c,v 1.1.2.3 2004/06/16 04:55:46 erik Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "handlers.h"
#include "channel.h"
#include "channel_mode.h"
#include "vchannel.h"
#include "client.h"
#include "common.h"   /* bleah */
#include "hash.h"
#include "irc_string.h"
#include "ircd.h"
#include "list.h"
#include "numeric.h"
#include "send.h"
#include "s_serv.h"
#include "s_conf.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"


static void mo_omotd(struct Client*, struct Client*, int, char**);

struct Message omotd_msgtab = {
  "OMOTD", 0, 0, 0, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, m_ignore, m_ignore, mo_omotd}
};
#ifndef STATIC_MODULES

void
_modinit(void)
{
  mod_add_cmd(&omotd_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&omotd_msgtab);
}

const char *_version = "$Revision: 1.1.2.3 $";
#endif

/*
 * mo_omotd
 */

/*
** mo_omotd
**      parv[0] = sender prefix
*/
static void
mo_omotd(struct Client *client_p, struct Client *source_p,
	 int parc, char *parv[])
{ 
  SendMessageFile(source_p, &ConfigFileEntry.opermotd);
}

