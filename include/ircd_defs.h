/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  ircd_defs.h: A header for ircd global definitions.
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
 *  $Id: ircd_defs.h,v 7.34 2003/05/12 21:56:56 stu Exp $
 */

/*
 * NOTE: NICKLEN and TOPICLEN do not live here anymore. Set it with configure
 * Otherwise there are no user servicable part here. 
 *
 */
 /* ircd_defs.h - Global size definitions for record entries used
 * througout ircd. Please think 3 times before adding anything to this
 * file.
 */
#ifndef INCLUDED_ircd_defs_h
#define INCLUDED_ircd_defs_h

#include "config.h"

#if !defined(CONFIG_H_LEVEL_7)
#  error Incorrect config.h for this revision of ircd.
#endif

#define HOSTLEN         63      /* Length of hostname.  Updated to         */
                                /* comply with RFC1123                     */
#define PORTNAMELEN 6  /* ":31337" */

#define USERLEN         10
#define REALLEN         50
#define KILLLEN         90      
#define CHANNELLEN      200

/* 23+1 for \0 */
#define KEYLEN          24
#define BUFSIZE         512     /* WARNING: *DONT* CHANGE THIS!!!! */
#define MAXRECIPIENTS   20
#define MAXBANLENGTH    1024
#define OPERNICKLEN     NICKLEN*2 /* Length of OPERNICKs. */

#define USERHOST_REPLYLEN       (NICKLEN+HOSTLEN+USERLEN+5)
#define MAX_DATE_STRING 32      /* maximum string length for a date string */

#define HELPLEN         400
#define IRCD_MAXNS      2       /* Maximum number of nameservers in 
                                   /etc/resolv.conf we care about */

#define LOWEST_SAFE_FD  4	/* skip stdin, stdout, stderr, and profiler */

/* 
 * message return values 
 */
#define CLIENT_EXITED    -2
#define CLIENT_PARSE_ERROR -1
#define CLIENT_OK	1

/* This is to get around the fact that some implementations have ss_len and
 * others do not
 */
struct irc_ssaddr
{
  struct sockaddr_storage ss;
  unsigned char   ss_len;   
  in_port_t       ss_port;
};

#endif /* INCLUDED_ircd_defs_h */
