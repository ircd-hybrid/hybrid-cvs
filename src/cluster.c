/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  cluster.c: Code for handling kline/dline/xline/resv clusters
 *
 *  Copyright (C) 2003 Hybrid Development Team
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
 *  $Id: cluster.c,v 7.1 2003/05/24 16:15:15 bill Exp $
 */

#include "cluster.h"
#include "tools.h"
#include "s_serv.h"
#include "memory.h"
#include "irc_string.h"
#include "send.h"
#include "list.h"

struct cluster *
make_cluster(void)
{
  struct cluster *cptr;

  cptr = (struct cluster *) MyMalloc(sizeof(struct cluster));
  memset(cptr, 0, sizeof(struct cluster));

  return cptr;
}

void
add_cluster(struct cluster *cptr)
{
  dlinkAdd(cptr, make_dlink_node(), &cluster_list);
}

int
find_cluster(char *name, int type)
{
  struct cluster *cptr;
  dlink_node *ptr;

  DLINK_FOREACH(ptr, cluster_list.head)
  {
    cptr = ptr->data;

    if (cptr->type & type && match(cptr->name, name))
      return 1;
  }

  return 0;
}

unsigned int
cluster_servers(void)
{
  return (unsigned int)dlink_list_length(&cluster_list);
}

void
cluster_kline(struct Client *source_p, int tkline_time, char *user,
              char *host, char *reason)
{
  struct cluster *cptr;
  dlink_node *ptr;

  DLINK_FOREACH(ptr, cluster_list.head)
  {
    cptr = ptr->data;

    if (IsClusterKline(cptr))
      sendto_match_servs(source_p, cptr->name, CAP_KLN,
                         "KLINE %s %d %s %s :%s",
                         cptr->name, tkline_time, user, host, reason);
  }
}

void
cluster_unkline(struct Client *source_p, char *user, char *host)
{
  struct cluster *cptr;
  dlink_node *ptr;

  DLINK_FOREACH(ptr, cluster_list.head)
  {
    cptr = ptr->data;

    if (IsClusterUnkline(cptr))
      sendto_match_servs(source_p, cptr->name, CAP_UNKLN,
                         "UNKLINE %s %s %s",
                         cptr->name, user, host);
  }
}

void
cluster_xline(struct Client *source_p, char *gecos,
              int xtype, char *reason)
{
  struct cluster *cptr;
  dlink_node *ptr;

  DLINK_FOREACH(ptr, cluster_list.head)
  {
    cptr = ptr->data;

    if (IsClusterXline(cptr))
      sendto_match_servs(source_p, cptr->name, CAP_CLUSTER,
                         "XLINE %s %s %d :%s",
                         cptr->name, gecos, xtype, reason);
  }
}

void
cluster_unxline(struct Client *source_p, char *gecos)
{
  struct cluster *cptr;
  dlink_node *ptr;

  DLINK_FOREACH(ptr, cluster_list.head)
  {
    cptr = ptr->data;

    if (IsClusterUnxline(cptr))
      sendto_match_servs(source_p, cptr->name, CAP_CLUSTER,
                         "UNXLINE %s %s",
                         cptr->name, gecos);
  }
}

void
cluster_resv(struct Client *source_p, char *name, char *reason)
{
  struct cluster *cptr;
  dlink_node *ptr;

  DLINK_FOREACH(ptr, cluster_list.head)
  {
    cptr = ptr->data;

    if (IsClusterResv(cptr))
      sendto_match_servs(source_p, cptr->name, CAP_CLUSTER,
                         "RESV %s %s :%s",
                         cptr->name, name, reason);
  }
}

void
cluster_unresv(struct Client *source_p, char *name)
{
  struct cluster *cptr;
  dlink_node *ptr;

  DLINK_FOREACH(ptr, cluster_list.head)
  {
    cptr = ptr->data;

    if (IsClusterUnresv(cptr))
      sendto_match_servs(source_p, cptr->name, CAP_CLUSTER,
                         "UNRESV %s %s",
                         cptr->name, name);
  }
}

void
cluster_locops(struct Client *source_p, char *message)
{
  struct cluster *cptr;
  dlink_node *ptr;

  DLINK_FOREACH(ptr, cluster_list.head)
  {
    cptr = ptr->data;

    if (IsClusterLocops(cptr))
      sendto_match_servs(source_p, cptr->name, CAP_CLUSTER,
                         "LOCOPS %s :%s", cptr->name, message);
  }
}
