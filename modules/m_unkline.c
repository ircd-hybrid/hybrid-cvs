/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_unkline.c: Unklines a user.
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
 *  $Id: m_unkline.c,v 1.74 2003/06/12 22:05:55 db Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "handlers.h"
#include "channel.h"
#include "client.h"
#include "common.h"
#include "fileio.h"
#include "irc_string.h"
#include "sprintf_irc.h"
#include "ircd.h"
#include "list.h"
#include "hostmask.h"
#include "numeric.h"
#include "s_conf.h"
#include "s_log.h"
#include "s_misc.h"
#include "send.h"
#include "msg.h"
#include "s_gline.h"
#include "parse.h"
#include "modules.h"
#include "cluster.h"
#include "s_serv.h"

static void mo_unkline(struct Client *, struct Client *, int, char **);
static void ms_unkline(struct Client *, struct Client *, int, char **);
static void mo_undline(struct Client *, struct Client *, int, char **);
static void mo_ungline(struct Client *, struct Client *, int, char **);

static int remove_tkline_match(const char *, const char *);
static int remove_tdline_match(const char *);

struct Message msgtabs[] = {
  {"UNKLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
   {m_unregistered, m_not_oper, ms_unkline, mo_unkline, m_ignore}},
  {"UNDLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
   {m_unregistered, m_not_oper, m_error, mo_undline, m_ignore}}, 
  {"UNGLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
   {m_unregistered, m_not_oper, m_error, mo_ungline, m_ignore}}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&msgtabs[0]);
  mod_add_cmd(&msgtabs[1]);
  mod_add_cmd(&msgtabs[2]);
  add_capability("UNKLN", CAP_UNKLN, 1);
}

void
_moddeinit(void)
{
  mod_del_cmd(&msgtabs[0]);
  mod_del_cmd(&msgtabs[1]);
  mod_del_cmd(&msgtabs[2]);
  delete_capability("UNKLN");
}

const char *_version = "$Revision: 1.74 $";
#endif

/*
** mo_unkline
** Added Aug 31, 1997 
** common (Keith Fralick) fralick@gate.net
**
**      parv[0] = sender
**      parv[1] = address to remove
*
*
*/
static void
mo_unkline(struct Client *client_p,struct Client *source_p,
           int parc, char *parv[])
{
  char star[] = "*";
  char *user, *host;

  if (!IsOperUnkline(source_p))
  {
    sendto_one(source_p, form_str(ERR_NOPRIVILEGES),
               me.name, source_p->name);
    return;
  }

  if (parc < 2)
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, source_p->name, "UNKLINE");
    return;
  }

  if ((host = strchr(parv[1], '@')) || *parv[1] == '*')
  {
    /* Explicit user@host mask given */
    if (host)                  /* Found user@host */
    {
          user = parv[1];       /* here is user part */
          *(host++) = '\0';     /* and now here is host */
    }
    else
    {
      user = star;           /* no @ found, assume its *@somehost */
      host = parv[1];
    }
  }
  else
  {
    sendto_one(source_p, ":%s NOTICE %s :Invalid parameters",
               me.name, source_p->name);
    return;
  }

  /* UNKLINE bill@mu.org ON irc.mu.org */
  if ((parc > 3) && (irccmp(parv[2], "ON") == 0))
  {
    sendto_match_servs(source_p, parv[3], CAP_UNKLN,
                       "UNKLINE %s %s %s",
                       parv[3], user, host);

    if (!match(parv[3], me.name))
      return;
  }
  else if (cluster_servers())
    cluster_unkline(source_p, user, host);

  if (remove_tkline_match(host, user))
  {
    sendto_one(source_p,
               ":%s NOTICE %s :Un-klined [%s@%s] from temporary K-Lines",
               me.name, source_p->name, user, host);
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "%s has removed the temporary K-Line for: [%s@%s]",
                         get_oper_name(source_p), user, host);
    ilog(L_NOTICE, "%s removed temporary K-Line for [%s@%s]",
         source_p->name, user, host);
    return;
  }

  if (remove_conf_line(KLINE_TYPE, source_p, user, host) > 0)
  {
    sendto_one(source_p, ":%s NOTICE %s :K-Line for [%s@%s] is removed", 
	       me.name, source_p->name, user,host);
    sendto_realops_flags(UMODE_ALL, L_ALL,
			 "%s has removed the K-Line for: [%s@%s]",
			 get_oper_name(source_p), user, host);
    ilog(L_NOTICE, "%s removed K-Line for [%s@%s]",
	 source_p->name, user, host);
  }
  else
    sendto_one(source_p, ":%s NOTICE %s :No K-Line for [%s@%s] found", 
	       me.name, source_p->name, user, host);
}

/* ms_unkline()
 *
 * inputs	- server
 *		- client
 *		- parc
 *		- parv
 * outputs	- none
 * side effects	- if server is authorized, kline is removed
 */
static void
ms_unkline(struct Client *client_p, struct Client *source_p,
           int parc, char *parv[])
{
  const char *kuser, *khost;

  if (parc != 4)
    return;

  sendto_match_servs(source_p, parv[1], CAP_UNKLN,
                     "UNKLINE %s %s %s",
                     parv[1], parv[2], parv[3]);

  kuser = parv[2];
  khost = parv[3];

  if (!match(parv[1], me.name))
    return;

  if (!IsPerson(source_p))
    return;

  if (find_cluster(source_p->user->server->name, CLUSTER_UNKLINE))
  {
    if (remove_tkline_match(khost, kuser))
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "%s has removed the temporary K-Line for: [%s@%s]",
                           get_oper_name(source_p), kuser, khost);
      ilog(L_NOTICE, "%s removed temporary K-Line for [%s@%s]",
           source_p->name, kuser, khost);
      return;
    }

    if (remove_conf_line(KLINE_TYPE, source_p, kuser, khost))
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "%s has removed the K-Line for: [%s@%s]",
                           get_oper_name(source_p), kuser, khost);

      ilog(L_NOTICE, "%s removed K-Line for [%s@%s]",
           source_p->name, kuser, khost);
    }
  }
  else if (find_u_conf(source_p->user->server->name,
                       source_p->username, source_p->host,
                       SHARED_UNKLINE))
  {
    if (remove_tkline_match(khost, kuser))
    {
      sendto_one(source_p,
                 ":%s NOTICE %s :Un-klined [%s@%s] from temporary K-Lines",
                 me.name, source_p->name, kuser, khost);
      sendto_realops_flags(UMODE_ALL, L_ALL,  
                           "%s has removed the temporary K-Line for: [%s@%s]",
                           get_oper_name(source_p), kuser, khost);
      ilog(L_NOTICE, "%s removed temporary K-Line for [%s@%s]",
           source_p->name, kuser, khost);
      return;
    }

    if (remove_conf_line(KLINE_TYPE, source_p, kuser, khost) > 0)
    {
      sendto_one(source_p, ":%s NOTICE %s :K-Line for [%s@%s] is removed",
                 me.name, source_p->name, kuser, khost);
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "%s has removed the K-Line for: [%s@%s]",
                         get_oper_name(source_p), kuser, khost);

      ilog(L_NOTICE, "%s removed K-Line for [%s@%s]",
           source_p->name, kuser, khost);
    }
    else
      sendto_one(source_p, ":%s NOTICE %s :No K-Line for [%s@%s] found",
                 me.name, source_p->name, kuser, khost);
  }
}

/* static int remove_tkline_match(const char *host, const char *user)
 * Input: A hostname, a username to unkline.
 * Output: returns YES on success, NO if no tkline removed.
 * Side effects: Any matching tklines are removed.
 */
static int
remove_tkline_match(const char *host, const char *user)
{
  struct AccessItem *tk_c;
  dlink_node *tk_n;
  struct irc_ssaddr addr, caddr;
  int nm_t, cnm_t, bits, cbits;
  nm_t = parse_netmask(host, &addr, &bits);

  for (tk_n=temporary_klines.head; tk_n; tk_n=tk_n->next)
    {
      tk_c = (struct AccessItem*)tk_n->data;
      cnm_t = parse_netmask(tk_c->host, &caddr, &cbits);
      if (cnm_t != nm_t || irccmp(user, tk_c->user))
	continue;
      if ((nm_t==HM_HOST && !irccmp(tk_c->host, host)) ||
	  (nm_t==HM_IPV4 && bits==cbits && match_ipv4(&addr, &caddr, bits))
#ifdef IPV6
	  || (nm_t==HM_IPV6 && bits==cbits && match_ipv6(&addr, &caddr, bits))
#endif
	  )
	{
	  dlinkDelete(tk_n, &temporary_klines);
	  free_dlink_node(tk_n);
	  delete_one_address_conf(tk_c->host, tk_c);
	  return(YES);
	}
  }

  return(NO);
}

/* static int remove_tdline_match(const char *host, const char *user)
 * Input: An ip to undline.
 * Output: returns YES on success, NO if no tdline removed.
 * Side effects: Any matching tdlines are removed.
 */
static int remove_tdline_match(const char *cidr)
{
  struct AccessItem *td_conf;
  dlink_node *td_node;
  struct irc_ssaddr addr, caddr;
  int nm_t, cnm_t, bits, cbits;
  nm_t = parse_netmask(cidr, &addr, &bits);

  for (td_node = temporary_dlines.head; td_node; td_node = td_node->next)
  {
    td_conf = (struct AccessItem *)td_node->data;
    cnm_t   = parse_netmask(td_conf->host, &caddr, &cbits);

    if (cnm_t != nm_t)
      continue;

    if((nm_t==HM_HOST && !irccmp(td_conf->host, cidr)) ||
       (nm_t==HM_IPV4 && bits==cbits && match_ipv4(&addr, &caddr, bits))
#ifdef IPV6
       || (nm_t==HM_IPV6 && bits==cbits && match_ipv6(&addr, &caddr, bits))
#endif
      )
    {
      dlinkDelete(td_node, &temporary_dlines);
      free_dlink_node(td_node);
      delete_one_address_conf(td_conf->host, td_conf);
      return(YES);
    }
  }

  return(NO);
}

/*
** m_undline
** added May 28th 2000 by Toby Verrall <toot@melnet.co.uk>
** based totally on m_unkline
** added to hybrid-7 7/11/2000 --is
**
**      parv[0] = sender nick
**      parv[1] = dline to remove
*/
static void
mo_undline(struct Client *client_p, struct Client *source_p,
           int parc, char *parv[])
{
  const char  *cidr;

  if (!IsOperUnkline(source_p))
  {
    sendto_one(source_p, form_str(ERR_NOPRIVILEGES),
               me.name, source_p->name);
    return;
  }

  cidr = parv[1];

  if (remove_tdline_match(cidr))
  {
    sendto_one(source_p,
              ":%s NOTICE %s :Un-Dlined [%s] from temporary D-Lines",
              me.name, source_p->name, cidr);
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "%s has removed the temporary D-Line for: [%s]",
                         get_oper_name(source_p), cidr);
    ilog(L_NOTICE, "%s removed temporary D-Line for [%s]", source_p->name, cidr);
    return;
  }

  if (remove_conf_line(DLINE_TYPE, source_p, cidr, NULL) > 0)
  {
    sendto_one(source_p, ":%s NOTICE %s :D-Line for [%s] is removed",
               me.name, source_p->name, cidr);
    sendto_realops_flags(UMODE_ALL, L_ALL,
			 "%s has removed the D-Line for: [%s]",
			 get_oper_name(source_p), cidr);
    ilog(L_NOTICE, "%s removed D-Line for [%s]",
         get_oper_name(source_p), cidr);
  }
  else
    sendto_one(source_p, ":%s NOTICE %s :No D-Line for [%s] found",
               me.name, source_p->name, cidr);
}

/*
** m_ungline
** added May 29th 2000 by Toby Verrall <toot@melnet.co.uk>
** added to hybrid-7 7/11/2000 --is
**
**      parv[0] = sender nick
**      parv[1] = gline to remove
*/
static void
mo_ungline(struct Client *client_p, struct Client *source_p,
           int parc, char *parv[])
{
  char star[] = "*";
  char *user, *host;

  if (!ConfigFileEntry.glines)
  {
    sendto_one(source_p, ":%s NOTICE %s :UNGLINE disabled",
               me.name, source_p->name);
    return;
  }

  if (!IsOperUnkline(source_p) || !IsOperGline(source_p))
  {
    sendto_one(source_p, form_str(ERR_NOPRIVILEGES),
               me.name, source_p->name);
    return;
  }

  if ((host = strchr(parv[1], '@')) || *parv[1] == '*')
  {
    /* Explicit user@host mask given */
    if (host != NULL)   /* Found user@host */
    {
      user = parv[1];   /* here is user part */
      *(host++) = '\0'; /* and now here is host */
    }
    else
    {
      user = star;      /* no @ found, assume its *@somehost */
      host = parv[1];
    }
  }
  else
  {
    sendto_one(source_p, ":%s NOTICE %s :Invalid parameters",
               me.name, source_p->name);
    return;
  }

  if (remove_gline_match(user, host))
  {
    sendto_one(source_p, ":%s NOTICE %s :G-Line for [%s@%s] is removed",
               me.name, source_p->name, user, host);
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "%s has removed the G-Line for: [%s@%s]",
                         get_oper_name(source_p), user, host);
    ilog(L_NOTICE, "%s removed G-Line for [%s@%s]",
         get_oper_name(source_p), user, host);
    return;
  }
  else
  {
    sendto_one(source_p, ":%s NOTICE %s :No G-Line for %s@%s",
               me.name, source_p->name, user, host);
    return;
  }
}

