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
 *  $Id: class.c,v 7.51 2003/05/25 01:05:24 michael Exp $
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
#include "s_debug.h"
#include "memory.h"

#define BAD_CONF_CLASS   -1
#define BAD_PING         -2
#define BAD_CLIENT_CLASS -3

dlink_list ClassList = { NULL, NULL, 0 };

/* find_class_ptr()
 *
 * inputs	- string name of class
 * output	- corresponding class pointer
 * side effects	- NONE
 */
static dlink_node *
find_class_ptr(const char *classname)
{
  dlink_node *ptr;
  struct Class *aclass;

  DLINK_FOREACH(ptr, ClassList.head)
  {
    aclass = ptr->data;

    if (!strcmp(ClassName(aclass), classname))
      return(ptr);
  }

  return(NULL);
}

static struct Class *
make_class(void)
{
  struct Class *aclass;

  aclass = (struct Class *)MyMalloc(sizeof(struct Class));

  return(aclass);
}

void
free_class(struct Class *aclass)
{
  MyFree(aclass->className);
  MyFree((char *)aclass);
}

/* get_conf_ping()
 *
 * inputs       - pointer to struct ConfItem
 * output       - ping frequency
 * side effects - NONE
 */
static int
get_conf_ping(struct ConfItem *aconf)
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
  struct ConfItem *aconf;
  const char *retc = "unknown";

  if (target_p && !IsMe(target_p) && (target_p->localClient->confs.head))
  {
    DLINK_FOREACH(ptr, target_p->localClient->confs.head)
    {
      aconf = ptr->data;

      if (aconf->className == NULL)
        retc = "default";
      else
        retc= aconf->className;
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
  struct ConfItem *aconf;
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
get_con_freq(struct Class *clptr)
{
  if (clptr != NULL)
    return(ConFreq(clptr));
  return(DEFAULT_CONNECTFREQUENCY);
}

/* add_class()
 *
 * inputs	- classname to use
 * 		- ping frequency
 *		- connection frequency
 * 		- maximum links
 *		- max sendq
 * output	- NONE
 * side effects -
 * When adding a class, check to see if it is already present first.
 * if so, then update the information for that class, rather than create
 * a new entry for it and later delete the old entry.
 * if no present entry is found, then create a new one and add it in
 * immediately after the first one (class 0).
 */
void
add_class(const char *classname, int ping, int confreq, int maxli, long sendq)
{
  dlink_node *ptr;
  struct Class *aclass;

  if (classname == NULL)
    return;

  if ((ptr = find_class_ptr(classname)) == NULL)
  {
    aclass = make_class();
    dlinkAdd(aclass, &aclass->class_node, &ClassList);
    Links(aclass) = 0;
  }
  else
    aclass = ptr->data;

  MyFree(ClassName(aclass));
  DupString(ClassName(aclass), classname);
  ConFreq(aclass)  = confreq;
  PingFreq(aclass) = ping;
  MaxLinks(aclass) = maxli;
  MaxSendq(aclass) = (sendq > 0) ? sendq : DEFAULT_SENDQ;
}

/* find_class()
 *
 * inputs	- string name of class
 * output	- corresponding Class pointer
 * side effects	- NONE
 */
struct Class *
find_class(const char *classname)
{
  dlink_node *ptr;
  struct Class *aclass;

  if ((ptr = find_class_ptr(classname)) != NULL)
  {
    return(ptr->data);
  }
  else
  {
    if ((ptr = find_class_ptr("default")) != NULL)
    {
      return(ptr->data);
    }
    else
    {
      aclass = make_class();
      DupString(ClassName(aclass), "default");
      ConFreq(aclass)  = DEFAULT_CONNECTFREQUENCY;
      PingFreq(aclass) = DEFAULT_PINGFREQUENCY;
      MaxLinks(aclass) = ConfigFileEntry.maximum_links;
      MaxSendq(aclass) = DEFAULT_SENDQ;
      Links(aclass)    = 0;
      dlinkAdd(aclass, &aclass->class_node, &ClassList);
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
  struct Class *aclass;

  DLINK_FOREACH_SAFE(ptr, next_ptr, ClassList.head)
  {
    aclass = ptr->data;

    if (MaxLinks(aclass) < 0)
    {
      dlinkDelete(&aclass->class_node, &ClassList);

      if (Links(aclass) <= 0)
        free_class(aclass);
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
  struct Class *aclass;

  aclass = make_class();

  ClassType(aclass) = 0;
  DupString(ClassName(aclass), "default");
  ConFreq(aclass)  = DEFAULT_CONNECTFREQUENCY;
  PingFreq(aclass) = DEFAULT_PINGFREQUENCY;
  MaxLinks(aclass) = ConfigFileEntry.maximum_links;
  MaxSendq(aclass) = DEFAULT_SENDQ;
  Links(aclass)    = 0;
  dlinkAdd(aclass, &aclass->class_node, &ClassList);
}

/* report_classes()
 *
 * inputs       - pointer to client to report to
 * output       - NONE
 * side effects	- class report is done to this client
 */
void
report_classes(struct Client *source_p)
{
  dlink_node *ptr;
  struct Class *aclass;

  DLINK_FOREACH(ptr, ClassList.head)
  {
    aclass = ptr->data;
    sendto_one(source_p, form_str(RPL_STATSYLINE),
               me.name, source_p->name, 'Y',
               ClassName(aclass), PingFreq(aclass),
               ConFreq(aclass),
               MaxLinks(aclass), MaxSendq(aclass));
  }
}

/* get_sendq()
 *
 * inputs       - pointer to client
 * output       - sendq for this client as found from its class
 * side effects	- NONE
 */
long
get_sendq(struct Client *client_p)
{
  int sendq = DEFAULT_SENDQ;
  int retc  = BAD_CLIENT_CLASS;
  dlink_node *ptr;
  struct Class *cl;
  struct ConfItem *aconf;

  if (client_p && !IsMe(client_p) && (client_p->localClient->confs.head))
  {
    DLINK_FOREACH(ptr, client_p->localClient->confs.head)
    {
      aconf = ptr->data;

      if (aconf == NULL)
        continue;

      if ((cl = ClassPtr(aconf)) == NULL)
        continue;

      if (ClassType(cl) > retc)
        sendq = MaxSendq(cl);
    }
  }

  return(sendq);
}
