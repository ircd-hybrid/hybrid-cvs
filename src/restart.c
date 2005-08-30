/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  restart.c: Functions to allow the ircd to restart.
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
 *  $Id: restart.c,v 7.29 2005/08/30 11:42:02 michael Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "restart.h"
#include "common.h"
#include "fdlist.h"
#include "ircd.h"
#include "send.h"
#include "s_log.h"
#include "client.h" /* for UMODE_ALL */
#include "memory.h"


void
restart(const char *mesg)
{
  static int was_here = 0; /* redundant due to restarting flag below */

  if (was_here)
    abort();
  was_here = 1;

  ilog(L_NOTICE, "Restarting Server because: %s, memory data limit: %ld",
       mesg, get_maxrss());

  server_reboot();
}

void
server_reboot(void)
{
  int i;

  sendto_realops_flags(UMODE_ALL, L_ALL,
                       "Restarting server...");

  ilog(L_NOTICE, "Restarting server... (%s)", SPATH);
  send_queued_all();

  for (i = 0; i < HARD_FDLIMIT; ++i)
    while (fd_hash[i] != NULL)
      fd_close(fd_hash[i]);

  unlink(pidFileName);
  execv(SPATH, myargv);
  fprintf(stderr, "ircd: execv() failed: %s\n",
          strerror(errno));
  exit(-1);
}

void
server_die(const char *mesg)
{
  int i = 0;
  struct Client *target_p = NULL;
  dlink_node *ptr = NULL;

  DLINK_FOREACH(ptr, local_client_list.head)
  {
    target_p = ptr->data;

    sendto_one(target_p, ":%s NOTICE %s :Server terminating: %s",
               me.name, target_p->name, mesg);
  }

  DLINK_FOREACH(ptr, serv_list.head)
  {
    target_p = ptr->data;

    sendto_one(target_p, ":%s ERROR :Server terminating: %s",
               me.name, mesg);
  }

  ilog(L_NOTICE, "Server terminating: %s", mesg);
  send_queued_all();

  for (i = 0; i < HARD_FDLIMIT; ++i)
    while (fd_hash[i] != NULL)
      fd_close(fd_hash[i]);

  unlink(pidFileName);
  exit(0);
}
