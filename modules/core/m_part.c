/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_part.c: Parts a user from a channel.
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
 *  $Id: m_part.c,v 1.60 2003/01/31 13:17:55 a1kmm Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "handlers.h"
#include "channel.h"
#include "vchannel.h"
#include "client.h"
#include "common.h"  
#include "hash.h"
#include "irc_string.h"
#include "ircd.h"
#include "list.h"
#include "numeric.h"
#include "send.h"
#include "s_serv.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"
#include "s_conf.h"
#include "packet.h"

static void m_part(struct Client*, struct Client*, int, char**);
void check_spambot_warning(struct Client *source_p, const char *name);

struct Message part_msgtab = {
  "PART", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_part, m_part, m_part}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&part_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&part_msgtab);
}
const char *_version = "$Revision: 1.60 $";
#endif

/*
** m_part
**      parv[0] = sender prefix
**      parv[1] = channel
**      parv[2] = reason
*/
static void m_part(struct Client *client_p,
                  struct Client *source_p,
                  int parc,
                  char *parv[])
{
  char  *p, *name;
  char reason[TOPICLEN+1];

  if (*parv[1] == '\0')
    {
      sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
                 me.name, parv[0], "PART");
      return;
    }

  reason[0] = '\0';

  if (parc > 2)
    strlcpy(reason, parv[2], TOPICLEN);

  name = strtoken( &p, parv[1], ",");

  /* Finish the flood grace period... */
  if(MyClient(source_p) && !IsFloodDone(source_p))
    flood_endgrace(source_p);

  while(name)
  {
    part_one_client(client_p, source_p, name, reason);
    name = strtoken(&p, (char *)NULL, ",");
  }
  return;
}
