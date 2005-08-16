/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  s_user.h: A header for the user functions.
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
 *  $Id: s_user.h,v 7.49 2005/08/16 08:01:40 adx Exp $
 */

#ifndef INCLUDED_s_user_h
#define INCLUDED_s_user_h

#define IRC_MAXSID 3
#define IRC_MAXUID 6
#define TOTALSIDUID (IRC_MAXSID + IRC_MAXUID)

struct Client;
struct AccessItem;

extern int MaxClientCount;     /* GLOBAL - highest number of clients     */
extern int MaxConnectionCount; /* GLOBAL - highest number of connections */
extern struct Callback *entering_umode_cb;
extern struct Callback *umode_cb;
extern unsigned int user_modes[];

void set_user_mode(struct Client *, struct Client *, int, char **);
void send_umode(struct Client *, struct Client *,
                unsigned int, unsigned int, char *);
void send_umode_out(struct Client *, struct Client *, unsigned int);
void show_lusers(struct Client *);
void show_isupport(struct Client *);
void oper_up(struct Client *);

void register_local_user(struct Client *, struct Client *,
                         const char *, const char *);
void register_remote_user(struct Client *, struct Client *,
                          const char *, const char *,
                          const char *, const char *);
void do_local_user(const char *, struct Client *, struct Client *,
                   const char *, const char *, const char *,
                   const char *);
void init_uid(void);
char *uid_get(void);
int valid_hostname(const char *);
int valid_username(const char *);
void add_isupport(const char *, const char *, int);
void delete_isupport(const char *);
void init_isupport(void);
void rebuild_isupport_message_line(void);

#endif
