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
 *  $Id: hook.h,v 1.20 2005/08/16 15:14:05 knight Exp $
 */

#ifndef __HOOK_H_INCLUDED
#define __HOOK_H_INCLUDED

#include "tools.h"

typedef void *CBFUNC(va_list);

struct Callback {
  char *name;
  dlink_list chain;
  dlink_node node;
};

extern dlink_list callback_list;  /* listing/debugging purposes */

struct Callback *register_callback(const char *, CBFUNC *);
void *execute_callback(struct Callback *, ...);
struct Callback *find_callback(const char *);
dlink_node *install_hook(struct Callback *, CBFUNC *);
void uninstall_hook(struct Callback *, CBFUNC *);

#define is_callback_present(c) (!!dlink_list_length(&c->chain))
#define pass_callback(d,p) (d->next ? ((CBFUNC *) d->next->data)(p) : NULL)

#endif
