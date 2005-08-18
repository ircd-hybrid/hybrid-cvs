/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  hook.c: Provides a generic event hooking interface.
 *
 *  Copyright (C) 2003 Piotr Nizynski, Advanced IRC Services Project Team
 *  Copyright (C) 2005 Hybrid Development Team
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
 *  $Id: hook.c,v 7.29 2005/08/18 04:55:28 db Exp $
 */

#include "stdinc.h"
#include "hook.h"
#include "list.h"
#include "memory.h"
#include "tools.h"
#include "irc_string.h"

dlink_list callback_list = {NULL, NULL, 0};

/*
 * register_callback()
 *
 * Creates a new callback.
 *
 * inputs:
 *   name  -  name used to identify the callback
 *            (can be NULL for anonymous callbacks)
 *   func  -  initial function attached to the chain
 *            (can be NULL to create an empty chain)
 * output: pointer to Callback structure or NULL if already exists
 *
 * NOTE: Once registered, a callback should never be freed!
 * That's because there may be modules which depend on it
 * (even if no functions are attached). That's also why
 * we dynamically allocate the struct here -- we don't want
 * to allow anyone to place it in module data, which can be
 * unloaded at any time.
 */
struct Callback *
register_callback(const char *name, CBFUNC *func)
{
  struct Callback *cb;

  if (name != NULL)
    if ((cb = find_callback(name)) != NULL)
    {
      /* re-attaching an empty hook chain? */
      if (!is_callback_present(cb))
      {
        dlinkAdd(func, make_dlink_node(), &cb->chain);
	return (cb);
      }
      return (NULL);
    }

  cb = MyMalloc(sizeof(struct Callback));
  if (func != NULL)
    dlinkAdd(func, make_dlink_node(), &cb->chain);
  if (name != NULL)
  {
    DupString(cb->name, name);
    dlinkAdd(cb, &cb->node, &callback_list);
  }
  return (cb);
}

/*
 * execute_callback()
 *
 * Passes control down the callback hook chain.
 *
 * inputs:
 *   callback  -  pointer to Callback structure
 *   param     -  argument to pass
 * output: function return value
 */
void *
execute_callback(struct Callback *cb, ...)
{
  void *res;
  va_list args;

  if (!is_callback_present(cb))
    return (NULL);

  va_start(args, cb);
  res = ((CBFUNC *) cb->chain.head->data)(args);
  va_end(args);
  return (res);
}

/*
 * find_callback()
 *
 * Finds a named callback.
 *
 * inputs:
 *   name  -  name of the callback
 * output: pointer to Callback structure or NULL if not found
 */
struct Callback *
find_callback(const char *name)
{
  struct Callback *cb;
  dlink_node *ptr;

  DLINK_FOREACH(ptr, callback_list.head)
  {
    cb = ptr->data;
    if (!irccmp(cb->name, name))
      return (cb);
  }

  return (NULL);
}

/*
 * install_hook()
 *
 * Installs a hook for the given callback.
 *
 * inputs:
 *   cb      -  pointer to Callback structure
 *   hook    -  address of hook function
 * output: pointer to dlink_node of the hook (used when
 *         passing control to the next hook in the chain);
 *         valid till uninstall_hook() is called
 *
 * NOTE: The new hook is installed at the beginning of the chain,
 * so it has full control over functions installed earlier.
 */
dlink_node *
install_hook(struct Callback *cb, CBFUNC *hook)
{
  dlink_node *node = make_dlink_node();

  dlinkAdd(hook, node, &cb->chain);
  return (node);
}

/*
 * uninstall_hook()
 *
 * Removes a specific hook for the given callback.
 *
 * inputs:
 *   cb      -  pointer to Callback structure
 *   hook    -  address of hook function
 * output: none
 */
void
uninstall_hook(struct Callback *cb, CBFUNC *hook)
{
  /* let it core if not found */
  dlink_node *ptr = dlinkFind(&cb->chain, hook);

  dlinkDelete(ptr, &cb->chain);
  free_dlink_node(ptr);
}
