/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  fdlist.h: The file descriptor list header.
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
 *  $Id: fdlist.h,v 7.30 2005/07/11 03:03:27 adx Exp $
 */

#ifndef INCLUDED_fdlist_h
#define INCLUDED_fdlist_h

#include "ircd_defs.h"
#include "irc_res.h"
#define FD_DESC_SZ 128  /* hostlen + comment */

/* FD type values */
enum {
    FD_NONE,
    FD_LOG,
    FD_FILE,
    FD_FILECLOSE,
    FD_SOCKET,
    FD_PIPE,
    FD_UNKNOWN
};

enum {
    COMM_OK,
    COMM_ERR_BIND,
    COMM_ERR_DNS,
    COMM_ERR_TIMEOUT,
    COMM_ERR_CONNECT,
    COMM_ERROR,
    COMM_ERR_MAX
};

typedef enum fdlist_t {
    FDLIST_NONE,
    FDLIST_SERVICE,
    FDLIST_SERVER,
    FDLIST_IDLECLIENT,
    FDLIST_BUSYCLIENT,
    FDLIST_MAX
} fdlist_t;

typedef struct _fde fde_t;

/* Callback for completed IO events */
typedef void PF(int, void *);

/* Callback for completed connections */
/* int fd, int status, void * */
typedef void CNCB(int, int, void *);

extern int highest_fd;
extern int number_fd;

struct Client;

struct _fde {
    /* New-school stuff, again pretty much ripped from squid */
    /*
     * Yes, this gives us only one pending read and one pending write per
     * filedescriptor. Think though: when do you think we'll need more?
     */
    int fd;		/* So we can use the fde_t as a callback ptr */
    int type;
    fdlist_t list;	/* Which list this FD should sit on */
    int comm_index;	/* where in the poll list we live */
    char desc[FD_DESC_SZ];
    PF *read_handler;
    void *read_data;
    PF *write_handler;
    void *write_data;
    PF *timeout_handler;
    void *timeout_data;
    time_t timeout;
    PF *flush_handler;
    void *flush_data;
    time_t flush_timeout;
    struct DNSQuery *dns_query;
    struct {
        unsigned int open:1;
        unsigned int close_request:1;
        unsigned int write_daemon:1;   
        unsigned int closing:1;
        unsigned int socket_eof:1;
        unsigned int nolinger:1;
        unsigned int nonblocking:1;
        unsigned int ipc:1;
        unsigned int called_connect:1;
#ifdef HAVE_LIBCRYPTO
        unsigned int accept_read:1;
        unsigned int accept_write:1;
#endif
    } flags;
    struct {
        /* We don't need the host here ? */
	struct irc_ssaddr S;
	struct irc_ssaddr hostaddr;
        CNCB *callback;
        void *data;
        /* We'd also add the retry count here when we get to that -- adrian */
    } connect;
#ifdef HAVE_LIBCRYPTO
    SSL *ssl;
#endif
};


extern fde_t *fd_table;

void fdlist_init(void);

extern void  fd_open(int, unsigned int, const char *, void *);
extern void  fd_close(int);
extern void  fd_dump(struct Client *source_p);
#ifndef __GNUC__
extern void  fd_note(int fd, const char *format, ...);
#else
extern void  fd_note(int fd, const char *format, ...)
  __attribute__((format (printf, 2, 3)));
#endif
#endif /* INCLUDED_fdlist_h */

