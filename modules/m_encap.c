/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_encap.c: subcommand propogation
 *
 *  Copyright (C) 2003 by the past and present ircd coders, and others.
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
 *  $Id: m_encap.c,v 1.1 2003/05/17 18:00:50 bill Exp $
 */

#include "setup.h"
#include "client.h"
#include "msg.h"
#include "handlers.h"
#include "parse.h"
#include "sprintf_irc.h"
#include "s_serv.h"
#include "send.h"

static void ms_encap(struct Client *client_p, struct Client *source_p,
                     int parc, char *parv[]);

struct Message encap_msgtab = {
  "ENCAP", 0, 0, 3, 0, MFLG_SLOW, 0,
  {m_ignore, m_ignore, ms_encap, m_ignore, m_ignore}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&encap_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&encap_msgtab);
}
const char *_version = "$Revision: 1.1 $";
#endif

/*
 * ms_encap()
 *
 * inputs	- destination server, subcommand, parameters
 * outputs	- none
 * side effects	- propogates subcommand to locally connected servers
 */
void
ms_encap(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
  char buffer[BUFSIZE], *ptr = buffer;
  int cur_len = 0, len, i;

  for (i = 1; i < parc - 1; i++)
  {
    len = strlen(parv[i]) + 1;

    if ((cur_len + len) >= sizeof(buffer))
      return;

    ircsprintf(ptr, "%s ", parv[i]);
    cur_len += len;
    ptr += len;
  }

  len = strlen(parv[i]);

  /*
   * if the final parameter crosses our buffer size, should we bail, 
   * like the rest, or should we truncate?  ratbox seems to think truncate,
   * so i'll do that for now until i can talk to lee.  -bill
   */

  if (parc == 3)
    ircsprintf(ptr, "%s", parv[2]);
  else
    ircsprintf(ptr, ":%s", parv[parc-1]);

  if ((cur_len + len) >= sizeof(buffer))
    buffer[sizeof(buffer)-1] = '\0';

  sendto_match_servs(source_p, parv[1], CAP_ENCAP,
                     "ENCAP %s", buffer);
}
