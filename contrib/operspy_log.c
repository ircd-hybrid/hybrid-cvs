/************************************************************************
 *   IRC - Internet Relay Chat, contrib/operspy_log.c
 *   Copyright (C) 2003 Hybrid Development Team
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 1, or (at your option)
 *   any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *   $Id: operspy_log.c,v 1.1 2003/06/09 20:48:25 bill Exp $
 */

#include <stdlib.h>
#include "msg.h"
#include "parse.h"
#include "handlers.h"
#include "client.h"

/* define this to log incoming operspy usage to LOGPATH/operspy.remote.log */
#define OPERSPY_LOGFILE

/* define this to send incoming operspy usage to active +y (UMODE_SPY) opers */
#define OPERSPY_NOTICE

static void ms_operspy_log(struct Client *, struct Client *, int, char **);

struct Message operspy_encap = {
  "OPERSPY", 0, 0, 3, 5, MFLG_ENCAP, 0,
  {m_ignore, m_ignore, ms_operspy_log, m_ignore}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&operspy_encap);
}

void
_moddeinit(void)
{
  mod_del_cmd(&operspy_encap);
}

const char *_version = "$Revision: 1.1 $";
#endif

#ifdef OPERSPY_LOGFILE
#include "fileio.h"
#include "ircd.h"
#include "s_misc.h"
#include "s_conf.h"
#include "sprintf_irc.h"
#endif

#ifdef OPERSPY_NOTICE
#include "send.h"

#ifndef OPERSPY_LOGFILE
#include "s_conf.h"
#endif
#endif

static void
ms_operspy_log(struct Client *client_p, struct Client *source_p,
               int parc, char *parv[])
{
#ifdef OPERSPY_LOGFILE
  FBFILE *log_fb;
  char logfile[BUFSIZE], linebuf[BUFSIZE];

  ircsprintf(logfile, "%s/operspy.remote.log", LOGPATH);
  if ((log_fb = fbopen(logfile, "a")) == NULL)
  {
#ifdef OPERSPY_NOTICE
    sendto_realops_flags(UMODE_ADMIN, L_ALL, "Failed to open remote operspy logfile");
#endif
    return;
  }

  ircsprintf(linebuf, "[%s] %s -- OPERSPY %s :%s\n",
             smalldate(CurrentTime),
             get_oper_name(source_p),
             parv[1], parv[2]);
  fbputs(linebuf, log_fb);
  fbclose(log_fb);
#endif

#ifdef OPERSPY_NOTICE
  sendto_realops_flags(UMODE_SPY, L_ALL, "Received OPERSPY message from %s -- %s :%s",
                       get_oper_name(source_p), parv[1], parv[2]);
#endif
}
