/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_resv.c: Reserves(jupes) a nickname or channel.
 *
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
 *  $Id: m_resv.c,v 1.23 2003/05/24 17:45:36 db Exp $
 */

#include "stdinc.h"
#include "handlers.h"
#include "client.h"
#include "channel.h"
#include "ircd.h"
#include "irc_string.h"
#include "numeric.h"
#include "s_serv.h"
#include "send.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"
#include "s_conf.h"
#include "resv.h"
#include "hash.h"
#include "cluster.h"

static void mo_resv(struct Client *, struct Client *, int, char **);
static void ms_resv(struct Client *, struct Client *, int, char **);
static void mo_unresv(struct Client *, struct Client *, int, char **);
static void ms_unresv(struct Client *, struct Client *, int, char **);

static void parse_resv(struct Client *, char *, char *, int);
static void remove_resv(struct Client *, char *, int);

struct Message resv_msgtab = {
  "RESV", 0, 0, 3, 0, MFLG_SLOW | MFLG_UNREG, 0,
  {m_ignore, m_not_oper, ms_resv, mo_resv, m_ignore}
};

struct Message unresv_msgtab = {
  "UNRESV", 0, 0, 2, 0, MFLG_SLOW | MFLG_UNREG, 0,
  {m_ignore, m_not_oper, ms_unresv, mo_unresv, m_ignore}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&resv_msgtab);
  mod_add_cmd(&unresv_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&resv_msgtab);
  mod_del_cmd(&unresv_msgtab);
}

const char *_version = "$Revision: 1.23 $";
#endif

/* mo_resv()
 *   parv[0] = sender prefix
 *   parv[1] = channel/nick to forbid
 */
static void mo_resv(struct Client *client_p, struct Client *source_p,
                    int parc, char *parv[])
{
  char *reason;

  /* RESV #channel ON irc.server.com :abuse */
  /* RESV kiddie ON irc.server.com :abuse */
  if (parc == 5)
    reason = parv[4];
  /* RESV #channel :abuse */
  /* RESV kiddie :abuse */
  else
    reason = parv[2];

  if (EmptyString(parv[1]) || EmptyString(reason))
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, source_p->name, "RESV");
    return;
  }

  /* RESV #channel ON irc.server.com :abuse */
  /* RESV kiddie ON irc.server.com :abuse */
  if ((parc == 5) && (irccmp(parv[2], "ON") == 0))
  {
    sendto_match_servs(source_p, parv[3], CAP_CLUSTER,
                       "RESV %s %s :%s",
                       parv[3], parv[1], reason);

    if (match(parv[3], me.name) == 0)
      return;
  }
  else if (cluster_servers())
    cluster_resv(source_p, parv[1], reason);

  parse_resv(source_p, parv[1], reason, 0);
}

/* ms_resv()
 *   parv[0] = sender prefix
 *   parv[1] = target server
 *   parv[2] = channel/nick to resv
 *   parv[3] = reason
 */
static void
ms_resv(struct Client *client_p, struct Client *source_p,
        int parc, char *parv[])
{
  if ((parc != 4) || EmptyString(parv[3]))
    return;

  sendto_match_servs(source_p, parv[1], CAP_CLUSTER,
                     "RESV %s %s :%s",
                     parv[1], parv[2], parv[3]);

  if (!match(parv[1], me.name))
    return;

  if (!IsPerson(source_p))
    return;

  if (find_cluster((char *)source_p->user->server, CLUSTER_RESV))
    parse_resv(source_p, parv[2], parv[3], 1);
  else if (find_u_conf((char *)source_p->user->server,
                       source_p->username, source_p->host,
                       SHARED_RESV))
    parse_resv(source_p, parv[2], parv[3], 0);
}

/* mo_unresv()
 *   parv[0] = sender prefix
 *   parv[1] = channel/nick to unforbid
 */
static void mo_unresv(struct Client *client_p, struct Client *source_p,
                      int parc, char *parv[])
{
  if (EmptyString(parv[1]))
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, source_p->name, "RESV");
    return;
  }

  /* UNRESV #channel ON irc.server.com */
  /* UNRESV kiddie ON irc.server.com */
  if ((parc == 4) && (irccmp(parv[2], "ON") == 0))
  {
    sendto_match_servs(source_p, parv[3], CAP_CLUSTER,
                       "UNRESV %s %s",
                       parv[3], parv[1]);

    if (!match(parv[3], me.name))
      return;
  }
  else if (cluster_servers())
    cluster_unresv(source_p, parv[1]);

  remove_resv(source_p, parv[1], 0);
}

/* ms_unresv()
 *     parv[0] = sender prefix
 *     parv[1] = target server
 *     parv[2] = resv to remove
 */
static void
ms_unresv(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
  if ((parc != 3) || EmptyString(parv[2]))
    return;

  sendto_match_servs(source_p, parv[1], CAP_CLUSTER,
                     "UNRESV %s %s",
                     parv[1], parv[2]);

  if (!match(me.name, parv[1]))
    return;

  if (!IsPerson(source_p))
    return;

  if (find_cluster((char *)source_p->user->server, CLUSTER_UNRESV))
    remove_resv(source_p, parv[2], 1);
  else if (find_u_conf((char *)source_p->user->server,
                       source_p->username, source_p->host,
                       SHARED_UNRESV))
    remove_resv(source_p, parv[2], 0);
}

/* parse_resv()
 *
 * inputs	- source_p, NULL supported
 *		- thing to resv
 *		- reason
 * outputs	- none
 * side effects	- parse resv, create if valid
 */
static void
parse_resv(struct Client *source_p, char *name,
           char *reason, int cluster)
{
  if (IsChannelName(name))
  {
    struct ResvChannel *resv_p;

    if ((resv_p = create_channel_resv(name, reason, 0)) == NULL)
    {
      if (!cluster)
        sendto_one(source_p, ":%s NOTICE %s :A RESV has already been placed on channel: %s",
                   me.name, source_p->name, name);
      return;
    }

    if (!cluster)
      sendto_one(source_p, ":%s NOTICE %s :A %s RESV has been placed on channel: %s",
                 me.name, source_p->name,
                 (MyClient(source_p) ? "local" : "remote"), name);
    sendto_realops_flags(UMODE_ALL, L_ALL, "%s has placed a %s RESV on channel: %s [%s]",
                         get_oper_name(source_p),
                         (MyClient(source_p) ? "local" : "remote"),
                         resv_p->name, resv_p->reason);
  }
  else if (clean_resv_nick(name))
  {
    struct ResvNick *resv_p;

    if ((strchr(name, '*') || strchr(name, '?')) && !IsAdmin(source_p))
    {
      if (!cluster)
        sendto_one(source_p, ":%s NOTICE %s :You must be an admin to perform a wildcard RESV",
                   me.name, source_p->name);
      return;
    }

    if ((resv_p = create_nick_resv(name, reason, 0)) == NULL)
    {
      if (!cluster)
        sendto_one(source_p, ":%s NOTICE %s :A RESV has already been placed on nick: %s",
                   me.name, source_p->name, name);
      return;
    }

    if (!cluster)
      sendto_one(source_p, ":%s NOTICE %s :A %s RESV has been placed on nick: %s [%s]",
                 me.name, source_p->name,
                 (MyClient(source_p) ? "local" : "remote"),
                 resv_p->name, resv_p->reason);
    sendto_realops_flags(UMODE_ALL, L_ALL, "%s has placed a %s RESV on nick: %s [%s]",
                         get_oper_name(source_p),
                         (MyClient(source_p) ? "local" : "remote"),
                         resv_p->name, resv_p->reason);
  }
  else if (!cluster)
    sendto_one(source_p, ":%s NOTICE %s :You have specified an invalid resv: [%s]",
               me.name, source_p->name, name);
}

static void
remove_resv(struct Client *source_p, char *name, int cluster)
{
  if (IsChannelName(name))
  {
    struct ResvChannel *resv_p;

    if (resv_channel_list.head == NULL ||
        !(resv_p = hash_find_resv(name)))
    {
      if (!cluster)
        sendto_one(source_p, ":%s NOTICE %s :A RESV does not exist for channel: %s",
                   me.name, source_p->name, name);
      return;
    }
    else if (resv_p->conf)
    {
      if (!cluster)
        sendto_one(source_p,
                   ":%s NOTICE %s :The RESV for channel: %s is in the config file and must be removed by hand.",
                   me.name, source_p->name, name);
      return;
    }
    else
    {
      delete_channel_resv(resv_p);
      if (!cluster)
        sendto_one(source_p, ":%s NOTICE %s :The local RESV has been removed on channel: %s",
                   me.name, source_p->name, name);
      sendto_realops_flags(UMODE_ALL, L_ALL, "%s has removed the local RESV for chanenl: %s",
                           get_oper_name(source_p), name);
    }
  }
  else if (clean_resv_nick(name))
  {
    struct ResvNick *resv_p;

    if (resv_nick_list.head == NULL ||
        !(resv_p = return_nick_resv(name)))
    {
      if (!cluster)
        sendto_one(source_p, ":%s NOTICE %s :A RESV does not exist for nick: %s",
                   me.name, source_p->name, name);
      return;
    }
    else if (resv_p->conf)
    {
      if (!cluster)
        sendto_one(source_p,
                   ":%s NOTICE %s :The RESV for nick: %s is in the config file and must be removed by hand.",
                   me.name, source_p->name, name);
      return;
    }
    else
    {
      delete_nick_resv(resv_p);

      if (!cluster)
        sendto_one(source_p, ":%s NOTICE %s :The local RESV has been removed on nick: %s",
                   me.name, source_p->name, name);
      sendto_realops_flags(UMODE_ALL, L_ALL, "%s has removed the local RESV for nick: %s",
                           get_oper_name(source_p), name);
    }
  }
}
