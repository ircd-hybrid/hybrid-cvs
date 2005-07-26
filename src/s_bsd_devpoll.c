/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  s_bsd_devpoll.c: /dev/poll compatible network routines.
 *
 *  Originally by Adrian Chadd <adrian@creative.net.au>
 *  Copyright (C) 2002 Hybrid Development Team
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
 *  $Id: s_bsd_devpoll.c,v 7.26 2005/07/26 03:33:05 adx Exp $
 */

#include "stdinc.h"

/* HPUX uses devpoll.h and not sys/devpoll.h */
#ifdef HAVE_DEVPOLL_H
# include <devpoll.h>
#else
# ifdef HAVE_SYS_DEVPOLL_H
#  include <sys/devpoll.h>
# else
#  error "No devpoll.h found! Try ./configuring and letting the script choose for you."
# endif
#endif

#include "fdlist.h"
#include "s_bsd.h"
#include "client.h"
#include "common.h"
#include "irc_string.h"
#include "ircdauth.h"
#include "ircd.h"
#include "list.h"
#include "listener.h"
#include "numeric.h"
#include "packet.h"
#include "irc_res.h"
#include "restart.h"
#include "s_auth.h"
#include "s_conf.h"
#include "s_log.h"
#include "s_serv.h"
#include "s_stats.h"
#include "send.h"
#include "memory.h"

#define POLL_LENGTH HARD_FDLIMIT

static void devpoll_update_events(int, short, PF *);
static int dpfd;
static short fdmask[POLL_LENGTH];
static void devpoll_update_events(int, short, PF *);  
static void devpoll_write_update(int, int);

/* XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX */
/* Private functions */

/*
 * Write an update to the devpoll filter.
 * See, we end up having to do a seperate (?) remove before we do an
 * add of a new polltype, so we have to have this function seperate from
 * the others.
 */
static void
devpoll_write_update(int fd, int events)
{
  struct pollfd pollfds[1]; /* Just to be careful */
  int retval;

  /* Build the pollfd entry */
  pollfds[0].revents = 0;
  pollfds[0].fd = fd;
  pollfds[0].events = events;

  /* Write the thing to our poll fd */
  retval = write(dpfd, &pollfds[0], sizeof(struct pollfd));
  if (retval != sizeof(struct pollfd))
    ilog(L_NOTICE, "devpoll_write_update: dpfd write failed %d: %s",
         errno, strerror(errno));
  /* Done! */
}

static void
devpoll_update_events(int fd, short filter, PF *handler)
{
  switch (filter) 
  {
    case COMM_SELECT_READ:
      if (!!handler == !!(fdmask[fd] & POLLRDNORM))
        return;
      fdmask[fd] |= POLLRDNORM;
      break;

    case COMM_SELECT_WRITE:
      if (!!handler == !!(fdmask[fd] & POLLWRNORM))
        return;
      fdmask[fd] |= POLLWRNORM;
  }

  /*
   * Ok, we can call devpoll_write_update() here now to re-build the
   * fd struct. If we end up with nothing on this fd, it won't write
   * anything.
   */
  devpoll_write_update(fd, POLLREMOVE);
  if (fdmask[fd]) 
    devpoll_write_update(fd, fdmask[fd]);
}

/* XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX */
/* Public functions */

/*
 * init_netio
 *
 * This is a needed exported function which will be called to initialise
 * the network loop code.
 */
void
init_netio(void)
{
  memset(&fdmask, 0, sizeof(fdmask));

  if ((dpfd = open("/dev/poll", O_RDWR)) < 0)
  {
    ilog(L_CRIT, "init_netio: Couldn't open /dev/poll - %d: %s",
         errno, strerror(errno));
    exit(115); /* Whee! */
  }
}

/*
 * comm_setselect
 *
 * This is a needed exported function which will be called to register
 * and deregister interest in a pending IO state for a given FD.
 */
void
comm_setselect(fde_t *F, unsigned int type, PF *handler,
               void *client_data, time_t timeout)
{  
  assert(F->flags.open);

  if (type & COMM_SELECT_READ) 
  {
    devpoll_update_events(F->fd, COMM_SELECT_READ, handler);
    F->read_handler = handler;
    F->read_data = client_data;
  }
  if (type & COMM_SELECT_WRITE) 
  {
    devpoll_update_events(F->fd, COMM_SELECT_WRITE, handler);
    F->write_handler = handler;
    F->write_data = client_data;
  }

  if (timeout)
    F->timeout = CurrentTime + (timeout / 1000);
}
 
/*
 * Check all connections for new connections and input data that is to be
 * processed. Also check for connections with data queued and whether we can
 * write it out.
 */

/*
 * comm_select
 *
 * Called to do the new-style IO, courtesy of squid (like most of this
 * new IO code). This routine handles the stuff we've hidden in
 * comm_setselect and fd_table[] and calls callbacks for IO ready
 * events.
 */

void
comm_select(unsigned long delay)
{
  int num, i;
  struct pollfd pollfds[POLL_LENGTH];
  struct dvpoll dopoll;
  PF *hdl;
  fde_t *F;

  do {
    dopoll.dp_timeout = delay;
    dopoll.dp_nfds = POLL_LENGTH;
    dopoll.dp_fds = &pollfds[0];
  } while ((num = ioctl(dpfd, DP_POLL, &dopoll)) < 0 && ignoreErrno(errno));

  set_time();

  for (i = 0; i < num; i++) 
  {
    F = lookup_fd(dopoll.dp_fds[i].fd);
    hdl = NULL;

    if ((dopoll.dp_fds[i].revents & (POLLRDNORM | POLLIN | POLLHUP | POLLERR))
        && (dopoll.dp_fds[i].events & (POLLRDNORM | POLLIN)))
    {
      if ((hdl = F->read_handler) != NULL) 
      {
        F->read_handler = NULL;
        hdl(F, F->read_data);
        /*
         * this call used to be with a NULL pointer, BUT
         * in the devpoll case we only want to update the
         * poll set *if* the handler changes state (active ->
         * NULL or vice versa.)
         */
        devpoll_update_events(F->fd, COMM_SELECT_READ, F->read_handler);
      }
      else ilog(L_NOTICE, "comm_select: Unhandled read event: fdmask: %x",
                fdmask[F->fd]);
    }
    if ((dopoll.dp_fds[i].revents & (POLLWRNORM | POLLOUT | POLLHUP | POLLERR))
        && (dopoll.dp_fds[i].events & (POLLWRNORM | POLLOUT))) 
    {
      if ((hdl = F->write_handler) != NULL) 
      {
        F->write_handler = NULL;
        hdl(F, F->write_data);
        /* See above similar code in the read case */
        devpoll_update_events(F->fd, COMM_SELECT_WRITE, F->write_handler);
      } 
      else ilog(L_NOTICE, "comm_select: Unhandled write event: fdmask: %x",
                fdmask[F->fd]);
    }
    if (dopoll.dp_fds[i].revents & POLLNVAL) 
      ilog(L_NOTICE, "revents was Invalid for %d", F->fd);
  }
}
