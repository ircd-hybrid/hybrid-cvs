/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  ircd.h: A header for the ircd startup routines.
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
 *  $Id: ircd.h,v 7.67 2003/05/28 16:37:56 db Exp $
 */

#ifndef INCLUDED_ircd_h
#define INCLUDED_ircd_h

#include "config.h"
#include "tools.h"
#include "memory.h"

struct Client;
struct dlink_list;

struct SetOptions
{
  int maxclients;    /* max clients allowed               */
  int autoconn;      /* autoconn enabled for all servers? */
  int idletime;
  int floodcount;    /* Number of messages in 1 second    */
  int ident_timeout; /* timeout for identd lookups        */
  int spam_num;
  int spam_time;
};

struct Counter 
{
  int server;   /* servers             */
  int myserver; /* my servers          */
  int oper;     /* Opers               */
  int local;    /* Local Clients       */
  int total;    /* total clients       */
  int invisi;   /* invisible clients   */
  int max_loc;  /* MAX local clients   */
  int max_tot;  /* MAX global clients  */
  unsigned long totalrestartcount; /* Total client count ever */
};

extern struct SetOptions GlobalSetOptions;  /* defined in ircd.c */

struct ServerState_t
{
  int foreground;
};

extern struct ServerState_t server_state;

extern const char *creation;
extern const char *generation;
extern const char *platform;
extern const char *infotext[];
extern const char *serno;
extern const char *ircd_version;
extern const char *logFileName;
extern const char *pidFileName;
extern const char serveropts[];
extern int dorehash;
extern int doremotd;
extern struct Counter Count;
extern struct timeval SystemTime;
#define CurrentTime SystemTime.tv_sec
extern time_t         nextconnect;
extern int            default_server_capabs;
#ifdef HAVE_LIBCRYPTO
extern int            bio_spare_fd;
#endif /* HAVE_LIBCRYPTO */

extern int splitmode;
extern int splitchecking;
extern int split_users;
extern int split_servers;

extern dlink_list dead_list;
extern dlink_list abort_list;
extern dlink_list unknown_list;       /* unknown clients ON this server only */
extern dlink_list local_client_list;  /* local clients only ON this server */
extern dlink_list serv_list;          /* local servers to this server ONLY */
extern dlink_list global_serv_list;   /* global servers on the network */
extern dlink_list oper_list;          /* our opers, duplicated in local_client_list */
extern dlink_list lazylink_channels;  /* known about lazylink channels on HUB */
extern int callbacks_called;
extern int rehashed_klines;
extern int rehashed_xlines;
extern unsigned long get_maxrss(void);
extern void set_time(void);
#endif
