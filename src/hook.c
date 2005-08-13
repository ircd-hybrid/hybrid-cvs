/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  hook.c: Provides a generic event hooking interface.
 *
 *  Copyright (C) 2000-2002 Edward Brocklesby, Hybrid Development Team
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
 *  $Id: hook.c,v 7.24 2005/08/13 05:15:19 db Exp $
 */

/* hooks are used by modules to hook into events called by other parts of
 * the code.  modules can also register their own events, and call them
 * as appropriate.
 *
 * A hook event is registered using hook_add_event("name")
 * A hook_call_event("name") is then inserted at the given event.
 * i.e. for event "start_auth" an hook_call_event("start_auth") is 
 * inserted just before the start_auth() is called.
 * Now, if a module calls hook_add_hook("start_auth", hookfn fn)
 * the fn is called just before start_auth() is called. This enables
 * us to replace how authentication is done with an user provided module.
 *
 */

#include "stdinc.h"
#include "tools.h"
#include "list.h"
#include "hook.h"
#include "memory.h"

static dlink_list hooks = { NULL, NULL, 0 };
static hook *find_hook(const char *name);

void
init_hooks(void)
{
#ifndef NDEBUG
  hook_add_event("iosend");
  hook_add_event("iorecv");
  hook_add_event("iorecvctrl");
#endif
  hook_add_event("register_local_user");
  hook_add_event("start_auth");
}

/*
 * new_hook
 *
 * inputs	- name of hook
 * output	- pointer to newly created hook 
 * side effects -
 */
static hook *
new_hook(const char *name)
{
  hook *h;

  h = MyMalloc(sizeof(hook));
  DupString(h->name, name);
  return(h);
}

/*
 * hook_add_event
 *
 * inputs	- name of hook
 * output	- -1 if hook is not found
 * side effects -
 */
int
hook_add_event(const char *name)
{
  hook *newhook;

  if (find_hook(name) != NULL)
    return(-1);

  newhook = new_hook(name);
	
  dlinkAdd(newhook, make_dlink_node(), &hooks);
  return(0);
}

/*
 * hook_del_event
 *
 * inputs	- name of hook
 * output	- returns 0 in all cases
 * side effects - removes given hook from hook system
 */
int
hook_del_event(const char *name)
{
  dlink_node *node;
  hook *h;

  DLINK_FOREACH(node, hooks.head)
  {
    h = node->data;

    if (!strcmp(h->name, name))
    {
      dlinkDelete(node, &hooks);
      MyFree(h);
      return(0);
    }
  }

  return(0);
}

/*
 * find_hook
 *
 * inputs	- name of hook
 * output	- return pointer to given named hook or NULL if not found
 * side effects - none
 */
static hook *
find_hook(const char *name)
{
  dlink_node *node;
  hook *h;

  DLINK_FOREACH(node, hooks.head)
  {
    h = node->data;

    if (!strcmp(h->name, name))
      return(h);
  }

  return(NULL);
}

/*
 * hook_del_hook
 *
 * inputs	- name of event
 *		- name of hook attached to named event
 * output	- -1 if hook not found on event
 * side effects - none
 */
int 
hook_del_hook(const char *event, hookfn *fn)
{
  hook *h;
  dlink_node *node, *nnode;

  if ((h = find_hook(event)) == NULL)
    return(-1);

  DLINK_FOREACH_SAFE(node, nnode, h->hooks.head)
  {
    if (fn == node->data)
    {
      dlinkDelete(node, &h->hooks);
      free_dlink_node(node);
    } 
  }

  return(0);
}

/*
 * hook_add_hook
 *
 * inputs	- name of event
 *		- name of hook to attach to named event
 * output	- -1 if hook event name is not found
 * side effects - add given named hook to given event
 */
int
hook_add_hook(const char *event, hookfn *fn)
{
  hook *h;

  if ((h = find_hook(event)) == NULL)
    return(-1);

  dlinkAdd(fn, make_dlink_node(), &h->hooks);
  return(0);
}

/*
 * hook_call_event
 *
 * inputs	- name of event
 *		- void pointer to hook data
 * output	- -1 if no hook executed, 
 *		  0 if no further processing by ircd needed
 *		  1 if further processing by original ircd code needed.
 * side effects - add given named hook to given event, 
 *		  Can possibly replace given event handling code normally
 *		  done by the ircd itself. Example: "start_auth"
 *		  A given module can replace the work done by "start_auth".
 */
int
hook_call_event(const char *event, void *data)
{
  hook *h;
  dlink_node *node;
  hookfn fn;

  if ((h = find_hook(event)) == NULL)
    return(-1);

  DLINK_FOREACH(node, h->hooks.head)
  {
    fn = (hookfn)(uintptr_t)node->data;

    /* If the hook function is successful, and returns 1
     * return 0 to ircd, signifying no further processing by ircd
     * is needed.
     * if hook function returns 0, return 1 to ircd signifying
     * the ircd should continue to process.
     */
    if (fn(data) != 0)
      return(0);
    else
      return(1);
  }

  return(-1);
}

