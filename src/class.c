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
 *  $Id: class.c,v 7.62 2003/07/05 06:21:02 db Exp $
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
get_conf_ping(struct ConfItem *conf)
{
  struct ClassItem *aclass;
  struct AccessItem *aconf;

  if (conf != NULL)
  {
    aconf = (struct AccessItem *)map_to_conf(conf);
    if (aconf->class_ptr != NULL)
    {
      aclass = (struct ClassItem *)map_to_conf(aconf->class_ptr);
      return(PingFreq(aclass));
    }
  }
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
  struct ConfItem *conf;
  const char *retc = "unknown";

  if (target_p && !IsMe(target_p) && (target_p->localClient->confs.head))
  {
    DLINK_FOREACH(ptr, target_p->localClient->confs.head)
    {
      conf = ptr->data;

      if (conf->name == NULL)
        retc = "default";
      else
        retc = conf->name;
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
  struct ConfItem *conf;
  dlink_node *nlink;

  if (target_p->localClient->confs.head != NULL)
  {
    DLINK_FOREACH(nlink, target_p->localClient->confs.head)
    {
      conf = nlink->data;

      if ((conf->type == CLIENT_TYPE) || (conf->type == SERVER_TYPE) ||
	  (conf->type == OPER_TYPE))
      {
        ping2 = get_conf_ping(conf);
        if ((ping2 != BAD_PING) && ((ping > ping2) || (ping == 0)))
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
struct ConfItem *
find_class(const char *classname)
{
  struct ConfItem *conf;

  if ((conf = find_exact_name_conf(CLASS_TYPE, classname, NULL, NULL)) != NULL)
  {
    return(conf);
  }
  else
  {
    if ((conf = find_exact_name_conf(CLASS_TYPE, "default",
				     NULL, NULL)) != NULL)
    {
      return(conf);
    }
    else
    {
      conf = make_conf_item(CLASS_TYPE);
      DupString(conf->name, "default");
      return(conf);
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
  DupString(conf->name, "default");
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
  struct ConfItem *conf;
  struct ConfItem *class_conf;
  struct ClassItem *aclass;
  struct AccessItem *aconf;

  if (client_p && !IsMe(client_p) && (client_p->localClient->confs.head))
  {
    DLINK_FOREACH(ptr, client_p->localClient->confs.head)
    {
      conf = ptr->data;
      if ((conf->type == SERVER_TYPE) || (conf->type == OPER_TYPE)
	  || (conf->type == CLIENT_TYPE))
      {
	aconf = (struct AccessItem *)map_to_conf(conf);
	if ((class_conf = aconf->class_ptr) == NULL)
	  continue;
	aclass = (struct ClassItem *)map_to_conf(class_conf);
	sendq = MaxSendq(aclass);
	return(sendq);
      }
    }
  }
  /* XXX return a default?
   * if here, then there wasn't an attached conf with a sendq
   * that is very bad -Dianora
   */
  return(DEFAULT_SENDQ);
}
