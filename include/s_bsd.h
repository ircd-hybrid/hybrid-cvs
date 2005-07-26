/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  s_bsd.h: A header for the network subsystem.
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
 *  $Id: s_bsd.h,v 7.52 2005/07/26 21:26:37 adx Exp $
 */

#ifndef INCLUDED_s_bsd_h
#define INCLUDED_s_bsd_h

#include "setup.h"       
#include "fdlist.h"

/* Size of a read buffer */
#define READBUF_SIZE    16384   /* used by src/packet.c and src/s_serv.c */

/* Type of IO */
#define	COMM_SELECT_READ		1
#define	COMM_SELECT_WRITE		2

/* How long can comm_select() wait for network events [milliseconds] */
#define SELECT_DELAY    500

struct Client;
struct AccessItem;
struct hostent;
struct DNSReply;
struct Listener;

extern int readcalls;
extern const char* const NONB_ERROR_MSG; 
extern const char* const SETBUF_ERROR_MSG;

extern void add_connection(struct Listener *, int, void *);
extern void close_connection(struct Client *);
extern void close_standard_fds(void);
extern int  connect_server(struct AccessItem *, struct Client *,
                           struct DNSReply *);
extern void report_error(int, const char *, const char *, int);
extern int set_non_blocking(int);
extern int set_sock_buffers(int, int);
extern void set_no_delay(int);

extern int get_sockerr(int);
extern int ignoreErrno(int);

extern void comm_settimeout(fde_t *, time_t, PF *, void *);
extern void comm_setflush(fde_t *, time_t, PF *, void *);
extern void comm_checktimeouts(void *);
extern void comm_connect_tcp(fde_t *, const char *, u_short,
           		     struct sockaddr *, int, CNCB *, void *, int, int);
extern const char * comm_errstr(int status);
extern int comm_open(fde_t *F, int family, int sock_type, int proto,
           	     const char *note);
extern int comm_accept(struct Listener *, struct irc_ssaddr *pn, void **ssl);

/* These must be defined in the network IO loop code of your choice */
extern void comm_setselect(fde_t *, unsigned int, PF *, void *, time_t);
extern void init_netio(void);
extern int read_message (time_t, unsigned char);
extern void comm_select(void);
extern int disable_sock_options(int);
extern void check_can_use_v6(void);
#ifdef IPV6
extern void remove_ipv6_mapping(struct irc_ssaddr *);
#endif

#ifdef USE_SIGIO
void do_sigio(int);
void setup_sigio_fd(int);
#endif

#endif /* INCLUDED_s_bsd_h */
