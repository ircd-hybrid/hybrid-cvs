/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  cluster.h: A header for the cluster functions.
 *
 *  Copyright (C) 2003 by the past and present ircd coders, and others.
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
 *  $Id: cluster.h,v 7.2 2003/05/24 19:25:27 michael Exp $
 */

#ifndef __CLUSTER_H_
#define __CLUSTER_H_

#include "ircd_defs.h"
#include "tools.h"

struct Client;

struct cluster
{
  dlink_node node;
  char name[HOSTLEN + 1];
  int type;
};

#define CLUSTER_KLINE	0x0001
#define CLUSTER_UNKLINE	0x0002
#define CLUSTER_XLINE	0x0004
#define CLUSTER_UNXLINE	0x0008
#define CLUSTER_RESV	0x0010
#define CLUSTER_UNRESV	0x0020
#define CLUSTER_LOCOPS	0x0040

#define CLUSTER_ALL	(CLUSTER_KLINE | CLUSTER_UNKLINE | CLUSTER_XLINE |\
			 CLUSTER_UNXLINE | CLUSTER_RESV | CLUSTER_UNRESV |\
			 CLUSTER_LOCOPS)

#define IsClusterKline(x)	((x)->type & CLUSTER_KLINE)
#define IsClusterXline(x)	((x)->type & CLUSTER_XLINE)
#define IsClusterUnkline(x)	((x)->type & CLUSTER_UNKLINE)
#define IsClusterUnxline(x)	((x)->type & CLUSTER_UNXLINE)
#define IsClusterResv(x)	((x)->type & CLUSTER_RESV)
#define IsClusterUnresv(x)	((x)->type & CLUSTER_UNRESV)
#define IsClusterLocops(x)	((x)->type & CLUSTER_LOCOPS)

extern struct cluster *make_cluster(void);
extern void add_cluster(struct cluster *);
extern int find_cluster(const char *, int);
extern unsigned int cluster_servers(void);

extern void clear_clusters(void);
extern void cluster_kline(struct Client *, int, const char *, const char *, const char *);
extern void cluster_unkline(struct Client *, const char *, const char *);
extern void cluster_xline(struct Client *, const char *, int, const char *);
extern void cluster_unxline(struct Client *, const char *);
extern void cluster_resv(struct Client *, const char *, const char *);
extern void cluster_unresv(struct Client *, const char *);
extern void cluster_locops(struct Client *, const char *);
#endif /* __CLUSTER_H_ */
