/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_capture.c: Makes a designated client captive
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
 *  $Id: m_capture.c,v 1.4 2005/06/12 18:45:10 db Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "common.h"  
#include "handlers.h"
#include "client.h"
#include "hash.h"
#include "channel.h"
#include "channel_mode.h"
#include "hash.h"
#include "ircd.h"
#include "numeric.h"
#include "s_conf.h"
#include "s_serv.h"
#include "send.h"
#include "list.h"
#include "irc_string.h"
#include "sprintf_irc.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"
#include "hook.h"

static void mo_capture(struct Client*, struct Client*, int, char**);
static void mo_uncapture(struct Client*, struct Client*, int, char**);

struct Message capture_msgtab = {
  "CAPTURE", 0, 0, 0, 0, MFLG_SLOW, 0L,
  {m_unregistered, m_ignore, m_ignore, m_ignore, mo_capture, m_ignore}
};

struct Message uncapture_msgtab = {
  "UNCAPTURE", 0, 0, 0, 0, MFLG_SLOW, 0L,
  {m_unregistered, m_ignore, m_ignore, m_ignore, mo_uncapture, m_ignore}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&capture_msgtab);
  mod_add_cmd(&uncapture_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&capture_msgtab);
}

const char *_version = "$Revision: 1.4 $";
#endif

/* mo_capture
 *      parv[0] = sender prefix
 *      parv[1] = nickname masklist
 */
static void
mo_capture(struct Client *client_p, struct Client *source_p,
        int parc, char *parv[])
{
  struct Client *target_p;

  if (parc < 2 || EmptyString(parv[1]))
  {
    sendto_one(source_p, form_str(ERR_NONICKNAMEGIVEN),
               me.name, source_p->name);
    return;
  }

  if ((target_p = find_client(parv[1])) != NULL)
  {
    if (MyClient(target_p))
    {
      if (IsOper(target_p))
      {
	sendto_one(source_p, form_str(ERR_NOPRIVS),
		   me.name, source_p->name, "capture");
	return;
      }
      SetCaptured(target_p);
      sendto_one(source_p, form_str(RPL_ISCAPTURED),
		 me.name, source_p->name, target_p->name);
    }
  }
  else
    sendto_one(source_p, form_str(ERR_NOSUCHNICK),
               me.name, source_p->name, parv[1]);
}

/* mo_uncapture
 *      parv[0] = sender prefix
 *      parv[1] = nickname masklist
 */
static void
mo_uncapture(struct Client *client_p, struct Client *source_p,
        int parc, char *parv[])
{
  struct Client *target_p;

  if (parc < 2 || EmptyString(parv[1]))
  {
    sendto_one(source_p, form_str(ERR_NONICKNAMEGIVEN),
               me.name, source_p->name);
    return;
  }

  if ((target_p = find_client(parv[1])) != NULL)
  {
    if (MyClient(target_p))
    {
      ClearCaptured(target_p);
      sendto_one(source_p, form_str(RPL_ISUNCAPTURED),
		 me.name, source_p->name, target_p->name);
    }
  }
  else
    sendto_one(source_p, form_str(ERR_NOSUCHNICK),
               me.name, source_p->name, parv[1]);
}
