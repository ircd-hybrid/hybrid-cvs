/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  hook.h: A header for the hooks into parts of ircd.
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
 *  $Id: hook.h,v 1.18 2005/08/13 05:15:19 db Exp $
 */

#ifndef __HOOK_H_INCLUDED
#define __HOOK_H_INCLUDED

#include "tools.h"


typedef struct
{
  char *name;
  dlink_list hooks;
} hook;

/* we don't define the arguments to hookfn, because
 * they can vary between different hooks
 */
typedef int (*hookfn)(void *data);

/* this is used when a hook is called by an m_function
 * stand data you'd need in that situation
 */
struct hook_mfunc_data 
{
  struct Client *client_p;
  struct Client *source_p;
  int parc;
  char **parv;
};

struct hook_stats_data 
{
  struct Client *source_p;
  char statchar;
  char *name;
};

struct hook_links_data
{
  struct Client *client_p;
  struct Client *source_p;
  int parc;
  char **parv;
  const char statchar;
  const char *mask;
};

struct hook_spy_data
{
  struct Client *source_p;
};

struct hook_io_data
{
  struct Client *connection;
  char *data;
  unsigned int len;
};

/* hook with AUTH_CALLBACK to call after start_auth() hook is called
 * when our auth is finished, AUTH_CALLBACK() will be called
 * struct Client * should be filled in with DNS, authd etc.as normal
 * int should be 1 to allow -1 to exit this client
 * const char * reason to exit client.
 */
typedef void AUTH_CALLBACK(struct Client *, int allow, const char *reason);

struct hook_auth_data
{
  struct Client *client;
  AUTH_CALLBACK *callback;
};

extern int hook_add_event(const char *);
extern int hook_add_hook(const char *, hookfn *);
extern int hook_call_event(const char *, void *);
extern int hook_del_event(const char *);
extern int hook_del_hook(const char *event, hookfn *fn);
extern void init_hooks(void);
#endif
