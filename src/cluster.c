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
 *  $Id: cluster.c,v 7.4 2005/08/08 21:28:44 db Exp $
 */

#include "cluster.h"
#include "tools.h"
#include "s_conf.h"
#include "s_serv.h"
#include "memory.h"
#include "irc_string.h"
#include "send.h"
#include "list.h"


/*
 * cluster_a_line
 *
 * inputs	- client sending the cluster
 * 		- int flag for action
 * output	- none
 * side effects	-
*/
void
cluster_a_line(struct Client *source_p, const char *command,
	       int capab, int action_type, const char *pattern, ...)
{
  va_list args;
  char buffer[BUFSIZE];
  struct ConfItem *conf;
  struct MatchItem *cptr;
  dlink_node *ptr;

  va_start(args, pattern);
  vsnprintf(buffer, sizeof(buffer), pattern, args);
  va_end(args);

  DLINK_FOREACH(ptr, cluster_items.head)
  {
    conf = ptr->data;
    cptr = (struct MatchItem *)map_to_conf(conf);

    if (cptr->action & action_type)
    {
      sendto_match_servs(source_p, conf->name, CAP_CLUSTER|capab,
			 "%s %s", command, buffer);
    }
  }
}
