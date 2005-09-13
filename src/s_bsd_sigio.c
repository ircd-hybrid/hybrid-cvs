/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  s_bsd_sigio.c: Linux Realtime SIGIO compatible network routines.
 *
 *  Originally by Aaron Sethman <androsyn@ratbox.org>
 *    based upon: s_bsd_poll.c by Adrian Chadd <adrian@creative.net.au>
 *  Copyright (C) 2001-2002 Hybrid Development Team
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
 *  $Id: s_bsd_sigio.c,v 7.35 2005/09/13 18:15:56 adx Exp $
 */

#ifndef _GNU_SOURCE
#define _GNU_SOURCE 1           /* Needed for F_SETSIG */
#endif

#include "stdinc.h"
#include <sys/poll.h>

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

#define SIGIO_SIGNAL SIGRTMIN

static pid_t my_pid;
static sigset_t our_sigset;
static struct pollfd pollfds[HARD_FDLIMIT];
static int pollmax = -1;  /* highest FD number */

/* 
 * static void mask_our_signal(int s)
 *
 * Input: None
 * Output: None
 * Side Effects:  Block our signal
 */
static void
mask_our_signal()
{
  sigemptyset(&our_sigset);
  sigaddset(&our_sigset, SIGIO_SIGNAL);
  sigaddset(&our_sigset, SIGIO);
  sigprocmask(SIG_BLOCK, &our_sigset, NULL);
}

/*
 * void setup_sigio_fd(int fd)
 * 
 * Input: File descriptor
 * Output: None
 * Side Effect: Sets the FD up for SIGIO
 */
void
setup_sigio_fd(int fd)
{
  fcntl(fd, F_SETFL, fcntl(fd, F_GETFL, 0) | O_ASYNC | O_NONBLOCK);
  fcntl(fd, F_SETSIG, SIGIO_SIGNAL);
  fcntl(fd, F_SETOWN, my_pid);
}

/*
 * void init_netio(void)
 *
 * Input: None
 * Output: None
 * Side Effects: This is a needed exported function which will 
 *		 be called to initialise the network loop code.
 */
void
init_netio(void)
{
  int fd;

  my_pid = getpid();
  for (fd = 0; fd < HARD_FDLIMIT; fd++)
    pollfd_list.pollfds[fd].fd = -1;
  pollfd_list.maxindex = 0;
  mask_our_signal(SIGIO_SIGNAL);
}

/*
 * find a spare slot in the fd list. We can optimise this out later!
 *   -- adrian
 */
static inline int
poll_findslot(void)
{
  int i;

  for (i = 0; i < HARD_FDLIMIT; i++)
  {
    if (pollfd_list.pollfds[i].fd == -1)
    {
      /* MATCH!!#$*&$ */
      return i;
    }
  }

  assert(1 == 0);
  /* NOTREACHED */
  return -1;
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
  int new_events;

  if ((type & COMM_SELECT_READ))
  {
    F->read_handler = handler;
    F->read_data = client_data;
  }

  if ((type & COMM_SELECT_WRITE))
  {
    F->write_handler = handler;
    F->write_data = client_data;
  }

  new_events = (F->read_handler ? POLLRDNORM : 0) |
    (F->write_handler ? POLLWRNORM : 0);

  if (timeout != 0)
    F->timeout = CurrentTime + (timeout / 1000);

  if (new_events != F->evcache)
  {
    if (F->new_events == 0)
    {
      pollfds[F->comm_index].fd = -1;
      pollfds[F->comm_index].revents = 0;

      if (pollmax == F->comm_index)
        while (pollmax >= 0 && pollfds[pollmax].fd == -1)
          pollmax--;
    }
    else
    {
      if (F->evcache == 0)
      {
        F->comm_index = poll_findslot();
        if (F->comm_index > pollmax)
          pollmax = F->comm_index;

        pollfds[F->comm_index].fd = F->fd;
      }
      pollfds[F->comm_index].events = new_events;
    }

    F->evcache = new_events;
  }
}

/*
 * comm_select
 *
 * Called to do the new-style IO, courtesy of squid (like most of this
 * new IO code). This routine handles the stuff we've hidden in
 * comm_setselect and fd_table[] and calls callbacks for IO ready
 * events.
 */
void
comm_select(void)
{
  static time_t last_rtsigqo_warning = 0;
  struct timespec timeout;
  struct siginfo si;
  int i, revents, num;
  fde_t *F;
  PF *hdl;

  timeout.tv_sec = 0;
  timeout.tv_nsec = 1000000 * SELECT_DELAY;
  i = sigtimedwait(&our_sigset, &si, &timeout);

  set_time();

  if (i != SIGIO)
  {
    if (i > 0)
    {
      F = lookup_fd(si.si_fd);
      if (F == NULL || !F->flags.open)
        return;

      if (si.si_band & (POLLRDNORM | POLLIN | POLLHUP | POLLERR))
        if ((hdl = F->read_handler) != NULL)
        {
          F->read_handler = NULL;
          hdl(F, F->read_data);
	  if (!F->flags.open)
	    return;
        }

      if (si.si_band & (POLLWRNORM | POLLOUT | POLLHUP | POLLERR))
        if ((hdl = F->write_handler) != NULL)
        {
          F->write_handler = NULL;
          hdl(F, F->write_data);
	  if (!F->flags.open)
	    return;
        }

      comm_setselect(F, 0, NULL, NULL, 0);
    }

    return;
  }

  /* RT signal queue overflowed.. */

  if (CurrentTime - last_rtsigqo_warning >= 30)
  {
    ilog(L_WARN, "Kernel RT Signal queue overflowed.  "
                 "Is /proc/sys/kernel/rtsig-max too small?");
    last_rtsigqo_warning = CurrentTime;
  }

  signal(SIGIO_SIGNAL, SIG_IGN);
  signal(SIGIO_SIGNAL, SIG_DFL);

  /* ..try polling instead */

  while ((num = poll(pollfd_list.pollfds, pollfd_list.maxindex + 1, 0)) < 0
         && ignoreErrno(errno))
    ;

  /* update current time again, eww.. */
  set_time();

  for (i = 0; i <= pollmax && num > 0; i++)
  {
    if ((revents = pollfds[i].revents) == 0 || pollfds[i].fd == -1)
      continue;
    num--;

    F = lookup_fd(pollfd_list.pollfds[ci].fd);
    if (F == NULL || !F->flags.open)
      continue;

    if (revents & (POLLRDNORM | POLLIN | POLLHUP | POLLERR))
      if ((hdl = F->read_handler) != NULL)
      {
        F->read_handler = NULL;
        hdl(F, F->read_data);
	if (!F->flags.open)
	  continue;
      }

    if (revents & (POLLWRNORM | POLLOUT | POLLHUP | POLLERR))
      if ((hdl = F->write_handler) != NULL)
      {
        F->write_handler = NULL;
        hdl(F, F->write_data);
	if (!F->flags.open)
	  continue;
      }

    comm_setselect(F, 0, NULL, NULL, 0);
  }

  mask_our_signal(SIGIO_SIGNAL);
}
