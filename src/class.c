/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  class.c: Controls connection classes.
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
 *  $Id: class.c,v 7.61 2003/06/26 04:35:07 db Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "class.h"
#include "client.h"
#include "common.h"
#include "ircd.h"
#include "list.h"
#include "numeric.h"
#include "s_conf.h"
#include "send.h"
#include "irc_string.h"
#include "memory.h"

#define BAD_PING (-1)

/* get_conf_ping()
 *
 * inputs       - pointer to struct AccessItem
 * output       - ping frequency
 * side effects - NONE
 */
static int
get_conf_ping(struct AccessItem *aconf)
{
  if (aconf != NULL && ClassPtr(aconf))
    return(ConfPingFreq(aconf));

  return(BAD_PING);
}

/* get_client_class()
 *
 * inputs	- pointer to client struct
 * output	- pointer to name of class
 * side effects - NONE
 */
const char *
get_client_class(struct Client *target_p)
{
  dlink_node *ptr;
  struct AccessItem *aconf;
  const char *retc = "unknown";

  if (target_p && !IsMe(target_p) && (target_p->localClient->confs.head))
  {
    DLINK_FOREACH(ptr, target_p->localClient->confs.head)
    {
      aconf = ptr->data;

      if (aconf->class_name == NULL)
        retc = "default";
      else
        retc = aconf->class_name;
    }
  }

  return(retc);
}

/* get_client_ping()
 *
 * inputs	- pointer to client struct
 * output	- ping frequency
 * side effects - NONE
 */
int
get_client_ping(struct Client *target_p)
{
  int ping = 0;
  int ping2;
  struct AccessItem *aconf;
  dlink_node *nlink;

  if (target_p->localClient->confs.head != NULL)
  {
    DLINK_FOREACH(nlink, target_p->localClient->confs.head)
    {
      aconf = nlink->data;

      if (aconf->status & (CONF_CLIENT|CONF_SERVER))
      {
        ping2 = get_conf_ping(aconf);

        if ((ping2 != BAD_PING) && ((ping > ping2) || !ping))
          ping = ping2;
      }
    }
  }
  else
  {
    ping = DEFAULT_PINGFREQUENCY;
  }

  if (ping <= 0)
    ping = DEFAULT_PINGFREQUENCY;

  return(ping);
}

/* get_con_freq()
 *
 * inputs	- pointer to class struct
 * output	- connection frequency
 * side effects - NONE
 */
int
get_con_freq(struct ClassItem *clptr)
{
  if (clptr != NULL)
    return(ConFreq(clptr));

  return(DEFAULT_CONNECTFREQUENCY);
}

/* find_class()
 *
 * inputs	- string name of class
 * output	- corresponding Class pointer
 * side effects	- NONE
 */
struct ClassItem *
find_class(const char *classname)
{
  struct ConfItem *conf;
  struct ClassItem *aclass;

  if ((conf = find_exact_name_conf(CLASS_TYPE, classname, NULL, NULL)) != NULL)
  {
    aclass = (struct ClassItem *)map_to_conf(conf);
    return(aclass);
  }
  else
  {
    if ((conf = find_exact_name_conf(CLASS_TYPE, "default",
				     NULL, NULL)) != NULL)
    {
      aclass = (struct ClassItem *)map_to_conf(conf);
      return(aclass);
    }
    else
    {
      conf = make_conf_item(CLASS_TYPE);
      aclass = (struct ClassItem *)map_to_conf(conf);
      DupString(aclass->class_name, "default");
      return(aclass);
    }
  }
}

/* check_class()
 *
 * inputs       - NONE
 * output       - NONE
 * side effects	- 
 */
void
check_class(void)
{
  dlink_node *ptr;
  dlink_node *next_ptr;
  struct ConfItem *conf;
  struct ClassItem *aclass;

  DLINK_FOREACH_SAFE(ptr, next_ptr, class_items.head)
  {
    conf = ptr->data;
    aclass = (struct ClassItem *)map_to_conf(conf);

    if (MaxTotal(aclass) < 0)
    {
      dlinkDelete(&conf->node, &class_items);

      if (CurrUserCount(aclass) <= 0)
        delete_conf_item(conf);
    }
  }
}

/* init_class()
 *
 * inputs       - NONE
 * output       - NONE
 * side effects	- 
 */
void
init_class(void)
{
  struct ConfItem *conf;
  struct ClassItem *aclass;

  conf = make_conf_item(CLASS_TYPE);
  aclass = (struct ClassItem *)map_to_conf(conf);
  DupString(aclass->class_name, "default");
  ConFreq(aclass)  = DEFAULT_CONNECTFREQUENCY;
  PingFreq(aclass) = DEFAULT_PINGFREQUENCY;
  MaxTotal(aclass) = ConfigFileEntry.maximum_links;
  MaxSendq(aclass) = DEFAULT_SENDQ;
  CurrUserCount(aclass) = 0;
}

/* get_sendq()
 *
 * inputs       - pointer to client
 * output       - sendq for this client as found from its class
 * side effects	- NONE
 */
unsigned long
get_sendq(struct Client *client_p)
{
  unsigned long sendq = DEFAULT_SENDQ;
  dlink_node *ptr;
  struct ClassItem *aclass;
  struct AccessItem *aconf;

  if (client_p && !IsMe(client_p) && (client_p->localClient->confs.head))
  {
    DLINK_FOREACH(ptr, client_p->localClient->confs.head)
    {
      aconf = ptr->data;

      if (aconf == NULL)
        continue;

      if ((aclass = ClassPtr(aconf)) == NULL)
        continue;

      sendq = MaxSendq(aclass);
    }
  }

  return(sendq);
}
