/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  hash.h: A header for the ircd hashtable code.
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
 *  $Id: hash.h,v 7.35 2005/07/16 07:22:23 michael Exp $
 */

#ifndef INCLUDED_hash_h
#define INCLUDED_hash_h

struct Client;
struct Channel;
struct ResvChannel;
struct UserHost;

extern void init_hash(void);
extern void hash_add_client(struct Client *);
extern void hash_del_client(struct Client *);
extern void hash_add_channel(struct Channel *);
extern void hash_del_channel(struct Channel *);
extern void hash_add_resv(struct ResvChannel *);
extern void hash_del_resv(struct ResvChannel *);
extern void hash_add_id(struct Client *);
extern void hash_del_id(struct Client *);
extern void hash_add_userhost(struct UserHost *);
extern void hash_del_userhost(struct UserHost *);

extern struct UserHost *hash_find_userhost(const char *);
extern struct Client *hash_find_id(const char *);
extern struct Client *find_client(const char *);
extern struct Client *find_server(const char *);
extern struct Channel *hash_find_channel(const char *);
extern struct Channel *hash_get_chptr(unsigned int);
extern struct ResvChannel *hash_find_resv(const char *);

extern void free_list_task(struct ListTask *, struct Client *);
extern void safe_list_channels(struct Client *, struct ListTask *, int, int);
#endif  /* INCLUDED_hash_h */
