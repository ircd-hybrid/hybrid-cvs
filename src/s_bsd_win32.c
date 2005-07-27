/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  s_bsd_win32.c: Winsock WSAAsyncSelect() compatible network routines.
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
 *  $Id: s_bsd_win32.c,v 7.8 2005/07/27 16:56:30 adx Exp $
 */

#include "stdinc.h"
#include "fdlist.h"
#include "ircd.h"
#include "s_bsd.h"
#include "common.h"
#include "client.h"

HWND wndhandle;
static dlink_list dns_queries = {NULL, NULL, 0};

extern int main(int, char *[]);

/*
 * Initial entry point for Win32 GUI applications, called by the C runtime.
 *
 * It should be only a wrapper for main(), since when compiled as a console
 * application, main() is called instead.
 */
int WINAPI
WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
        LPSTR lpCmdLine, int nCmdShow)
{
  /* Do we really need these pidfile, logfile etc arguments?
   * And we are not on a console, so -help or -foreground is meaningless. */

  char *argv[2] = {"ircd", NULL};

  return main(1, argv);
}

/*
 * Updates monitored network events on a given fde_t.
 */
static void
update_winsock_events(fde_t *F)
{
  int events = 0;

  if (F->read_handler != NULL)
    events |= FD_ACCEPT | FD_CLOSE | FD_READ;

  if (F->write_handler != NULL)
    events |= FD_CONNECT | FD_WRITE;

  WSAAsyncSelect(F->fd, wndhandle, WM_SOCKET, events);
}

/*
 * Handler for Win32 messages.
 */
static LRESULT CALLBACK
hybrid_wndproc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
  switch (uMsg)
  {
    case WM_SOCKET:
    {
      fde_t *F = lookup_fd((int) wParam);
      PF *hdl;

      if (F != NULL)
        switch (WSAGETSELECTEVENT(lParam))
	{
	  case FD_ACCEPT:
	  case FD_CLOSE:
	  case FD_READ:
	    hdl = F->read_handler;
	    F->read_handler = NULL;

	    if (hdl != NULL)
              hdl(F, F->read_data);

            if (hdl == NULL)
	      update_winsock_events(F);
	    break;

          case FD_CONNECT:
          case FD_WRITE:
	    hdl = F->write_handler;
	    F->write_handler = NULL;

            if (hdl != NULL)
	      hdl(F, F->write_handler);

            if (hdl == NULL)
	      update_winsock_events(F);
        }

      return 0;
    }

    case WM_DNS:
    {
      dlink_node *ptr;

      DLINK_FOREACH(ptr, dns_queries.head)
        if (((struct DNSQuery *) ptr->data)->handle == wParam)
	{
	  struct DNSQuery *query = ptr->data;
	  struct DNSReply *reply = NULL;

          dlinkDelete(&query->node, &dns_queries);

          if (WSAGETASYNCERROR(lParam) == 0)
	  {
	    struct hostent *h = (struct hostent *) &query->reply;
	    static struct DNSReply _reply;
	    reply = &_reply;

            reply->h_name = h->h_name;
	    reply->addr.ss.ss_family = h->h_addrtype;

	    switch (h->h_addrtype)
	    {
	      case AF_INET:
	        memcpy(&((struct sockaddr_in *) &reply->addr)->sin_addr,
		       h->h_addr_list[0], h->h_length);
		break;

#ifdef IPV6
              case AF_INET6:
	        memcpy(&((struct sockaddr_in6 *) &reply->addr)->sin6_addr,
		       h->h_addr_list[0], h->h_length);
		break;
#endif

              default:  /* shouldn't happen */
	        reply = NULL;
	    }
	  }

          query->callback(query->ptr, reply);
	  return 0;
	}

      return 0;
    }

    case WM_REHASH:
      dorehash = 1;
      return 0;

    case WM_REMOTD:
      doremotd = 1;
      return 0;

    case WM_DESTROY:
      PostQuitMessage(0);
      return 0;

    default:
      return DefWindowProc(hwnd, uMsg, wParam, lParam);
  }
}

/*
 * Initialize Winsock, create a window handle.
 */
void
init_netio(void)
{
  WNDCLASS wndclass;
  WSADATA wsa;

  /* Initialize Winsock networking */

  if (WSAStartup(0x101, &wsa) != 0)
  {
    MessageBox(NULL, "Cannot initialize Winsock -- terminating ircd",
      NULL, MB_OK | MB_ICONERROR);
    exit(1);
  }

  /* First, we need a class for our window that has message handler
   * set to hybrid_wndproc() */

  memset(&wndclass, 0, sizeof(wndclass));

  wndclass.lpfnWndProc = hybrid_wndproc;
  wndclass.hInstance = GetModuleHandle(NULL);
  wndclass.lpszClassName = PACKAGE_NAME;

  RegisterClass(&wndclass);

  /* Now, initialize the window */

  wndhandle = CreateWindow(PACKAGE_NAME, NULL, 0,
    CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
    NULL, NULL, wndclass.hInstance, NULL);

  if (!wndhandle)
  {
    MessageBox(NULL, "Cannot allocate window handle -- terminating ircd",
      NULL, MB_OK | MB_ICONERROR);
    exit(1);
  }

  /* Set up a timer which will periodically post a message to our queue.
   * This way, ircd won't wait infinitely for a network event */

  SetTimer(wndhandle, 0, SELECT_DELAY, NULL);
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
  int do_update = NO;

  switch (type)
  {
    case COMM_SELECT_READ:
      if (!F->read_handler != !handler)
        do_update = YES;

      F->read_handler = handler;
      F->read_data = client_data;
      break;

    case COMM_SELECT_WRITE:
      if (!F->write_handler != !handler)
        do_update = YES;

      F->write_handler = handler;
      F->write_data = client_data;
  }

  if (do_update)
    update_winsock_events(F);
}

/*
 * Waits until a message is posted in our window queue and deals with it.
 */
void
comm_select(void)
{
  MSG msg;

  if (!GetMessage(&msg, NULL, 0, 0))
    exit(1);

  set_time();

  DispatchMessage(&msg);
}

/* This is our win32 super-light resolver ;) */

void
delete_resolver_queries(const struct DNSQuery *query)
{
  WSACancelAsyncRequest(query->handle);
  dlinkDelete(&query->node, &dns_queries);
}

void
gethost_byname_type(const char *name, struct DNSQuery *query, int type)
{
  gethost_byname(name, query);
}

void
gethost_byname(const char *name, struct DNSQuery *query)
{
  query->handle = WSAAsyncGetHostByName(wndhandle, WM_DNS, name, query->reply,
    sizeof(query->reply));

  if (!query->handle)
    query->callback(query->ptr, NULL);
  else
    dlink_add(query, &query->node, &dns_queries);
}

void
gethost_byaddr(const struct irc_ssaddr *addr, struct DNSQuery *query)
{
  query->handle = WSAAsyncGetHostByAddr(
    wndhandle, WM_DNS,
#ifdef IPV6
    addr.ss.ss_family == AF_INET6 ? &((struct sockaddr_in6*)addr)->sin6_addr) :
#endif
    &((struct sockaddr_in *) addr)->sin_addr,
#ifdef IPV6
    addr.ss.ss_family == AF_INET6 ? sizeof(struct in6_addr) :
#endif
    sizeof(struct in_addr),
    addr->ss.ss_family, query->reply, sizeof(query->reply)
  );

  if (!query->handle)
    query->callback(query->ptr, NULL);
  else
    dlinkAdd(query, &query->node, &dns_queries);
}

void
report_dns_servers(struct Client *source_p)
{
  /* todo */
}
