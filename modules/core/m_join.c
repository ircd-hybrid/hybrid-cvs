/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_join.c: Joins a channel.
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
 *  $Id: m_join.c,v 1.9 2003/09/21 07:09:32 metalrock Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "handlers.h"
#include "channel.h"
#include "channel_mode.h"
#include "client.h"
#include "common.h"   /* bleah */
#include "resv.h"
#include "hash.h"
#include "irc_string.h"
#include "ircd.h"
#include "list.h"
#include "numeric.h"
#include "send.h"
#include "s_serv.h"
#include "s_conf.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"


struct entity
{
  struct Channel *chptr;
  char *key;
  int flags;
};
static struct entity targets[512];
static int ntargets, join_0;

static int build_target_list(struct Client *, struct Client *, char *, char *);
static int is_target(struct Channel *);

static void m_join(struct Client *, struct Client *, int, char **);
static void ms_join(struct Client *, struct Client *, int, char **);
static void do_join_0(struct Client *client_p, struct Client *source_p);

struct Message join_msgtab = {
  "JOIN", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_join, ms_join, m_join, m_ignore}
};

#ifndef STATIC_MODULES

void
_modinit(void)
{
  mod_add_cmd(&join_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&join_msgtab);
}

const char *_version = "$Revision: 1.9 $";
#endif

/* m_join()
 *      parv[0] = sender prefix
 *      parv[1] = channel
 *      parv[2] = channel password (key)
 */
static void
m_join(struct Client *client_p, struct Client *source_p,
       int parc, char *parv[])
{
  struct Channel *chptr = NULL;
  char *key = NULL;
  int i, a, flags = 0;
  int successful_join_count = 0; /* Number of channels successfully joined */

  if (*parv[1] == '\0')
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, source_p->name, "JOIN");
    return;
  }

  build_target_list(client_p, source_p, parv[1], ((parc > 2) ? parv[2] : NULL));

  if ((a = (join_0 >= 0) ? join_0 : 0))
    do_join_0(client_p, source_p);

  for ( ;a<ntargets;++a)                       
  {
    chptr = targets[a].chptr;
    key = targets[a].key;
    flags = targets[a].flags;

    if (IsMember(source_p, chptr))
      continue;

    if (!IsOper(source_p))
      check_spambot_warning(source_p, chptr->chname);

    /*
     * can_join checks for +i key, bans.
     */
    if ((i = can_join(source_p, chptr, key)))
    {
      sendto_one(source_p, form_str(i), me.name, source_p->name, chptr->chname);
      continue;
    }

    ++successful_join_count;

    /* add the user to the channel */
    add_user_to_channel(chptr, source_p, flags);

    /*
    **  Set timestamp if appropriate, and propagate
    */
    if (flags & CHFL_CHANOP)
    {
      chptr->channelts = CurrentTime;
      chptr->mode.mode |= MODE_TOPICLIMIT;
      chptr->mode.mode |= MODE_NOPRIVMSGS;

      sendto_server(client_p, source_p, chptr, NOCAPS, NOCAPS, LL_ICLIENT,
                    ":%s SJOIN %lu %s +nt :@%s",
                    me.name, (unsigned long)chptr->channelts,
                    chptr->chname, parv[0]);
      /*
       * notify all other users on the new channel
       */
      /* XXX just exactly who is going to be =on= this new channel
       * other than just the creator at this time? ? ?
       */
      sendto_channel_local(ALL_MEMBERS, chptr, ":%s!%s@%s JOIN :%s",
                           source_p->name, source_p->username,
                           source_p->host, chptr->chname);

      sendto_channel_local(ALL_MEMBERS, chptr,
                           ":%s MODE %s +nt",
                           me.name, chptr->chname);
    }
    else
    {
      sendto_server(client_p, source_p, chptr, NOCAPS, NOCAPS, LL_ICLIENT,
                    ":%s SJOIN %lu %s + :%s",
                    me.name, (unsigned long)chptr->channelts,
                    chptr->chname, source_p->name);

      sendto_channel_local(ALL_MEMBERS, chptr, ":%s!%s@%s JOIN :%s",
                           source_p->name, source_p->username,
                           source_p->host, chptr->chname);
    }

    del_invite(chptr, source_p);

    if (chptr->topic != NULL)
    {
      sendto_one(source_p, form_str(RPL_TOPIC), me.name,
                 source_p->name, chptr->chname, chptr->topic);

      sendto_one(source_p, form_str(RPL_TOPICWHOTIME),
                 me.name, source_p->name, chptr->chname,
                 chptr->topic_info, chptr->topic_time);
    }

    channel_member_names(source_p, chptr, 1);

    if (successful_join_count != 0)
      source_p->localClient->last_join_time = CurrentTime;
  }
}

/* ms_join()
 *
 * inputs	-
 * output	- none
 * side effects	- handles remote JOIN's sent by servers. In TSora
 *		  remote clients are joined using SJOIN, hence a 
 *		  JOIN sent by a server on behalf of a client is an error.
 *		  here, the initial code is in to take an extra parameter
 *		  and use it for the TimeStamp on a new channel.
 */
static void 
ms_join(struct Client *client_p, struct Client *source_p,
        int parc, char *parv[])
{
  const char *name;
  int new_ts;

  if (source_p->user == NULL)
    return;
  
  name = parv[1];

  /* stupid legacy here. If remote server joins someone to "0"
   * thats a signal to remove this client from all channels.
   * note, the string "0" is simply '0' '\0' this following "if"
   * is faster than a strcmp.
   */
  if ((name[0] == '0') && (name[1] == '\0'))
    do_join_0(client_p, source_p);
  else
  {
    if (parc > 2)
      new_ts = atoi(parv[2]);
    else
      ts_warn("User on %s remotely JOINing new channel with no TS", 
              source_p->user->server->name);
  }
}

/* do_join_0()
 *
 * inputs	- pointer to client doing join 0
 * output	- NONE
 * side effects	- Use has decided to join 0. This is legacy
 *		  from the days when channels were numbers not names. *sigh*
 *		  There is a bunch of evilness necessary here due to
 * 		  anti spambot code.
 */
static void
do_join_0(struct Client *client_p, struct Client *source_p)
{
  struct Channel *chptr = NULL;
  dlink_node *ptr, *ptr_next;

  if (source_p->user->channel.head != NULL &&
      MyConnect(source_p) && !IsOper(source_p))
    check_spambot_warning(source_p, NULL);

  DLINK_FOREACH_SAFE(ptr, ptr_next, source_p->user->channel.head)
  {
    chptr = ((struct Membership *)ptr->data)->chptr;

    /* if the last occurance of this chan is before a 0, leave */
    if (is_target(chptr) < join_0)
    {
      sendto_server(client_p, NULL, chptr, CAP_SID, NOCAPS, NOFLAGS,
                    ":%s PART %s", ID(source_p), chptr->chname);
      sendto_server(client_p, NULL, chptr, NOCAPS, CAP_SID, NOFLAGS,
                    ":%s PART %s", source_p->name, chptr->chname);
      sendto_channel_local(ALL_MEMBERS, chptr, ":%s!%s@%s PART %s",
                           source_p->name, source_p->username,
                           source_p->host, chptr->chname);
      remove_user_from_channel(ptr->data);
    }
  }
}

/* build_target_list()
 *
 * inputs       - pointer to given client_p (server)
 *              - pointer to given source (oper/client etc.)
 *              - pointer to list of channels
 *		- pointer to list of keys
 * output       - number of valid entities
 * side effects - targets list is modified to contain a list of
 *                pointers to channels.  display whatever errors
 *		  that result from a join attempt to the user.
 *
 */
static int
build_target_list(struct Client *client_p, struct Client *source_p,
                  char *channels, char *keys)
{
  int error_reported, flags = 0;
  char *p, *p2, *chan, *key = keys;
  struct Channel *chptr = NULL;

  ntargets = error_reported = 0;
  join_0 = -1;

  for (chan = strtoken(&p, channels, ","); chan;
       key  = (key) ? strtoken(&p2, keys, ",") : NULL,
       chan = strtoken(&p, NULL, ","))
  {
    if (!check_channel_name(chan))
    {
      sendto_one(source_p, form_str(ERR_BADCHANNAME),
                 me.name, source_p->name, chan);
      continue;
    }

    if (*chan == '0' && !atoi(chan))
    {
      targets[ntargets].chptr = NULL;
      targets[ntargets].key = NULL;
      targets[ntargets++].flags = 0;

      join_0 = ntargets;
      continue;
    }
    else if (!IsChanPrefix(*chan))
    {
      sendto_one(source_p, form_str(ERR_NOSUCHCHANNEL),
                 me.name, source_p->name, chan);
      continue;
    }

    if (ConfigChannel.disable_local_channels && (*chan == '&'))
    {
      sendto_one(source_p, form_str(ERR_NOSUCHCHANNEL),
                 me.name, source_p->name, chan);
      continue;
    }

    if (strlen(chan) > CHANNELLEN)
    {
      sendto_one(source_p, form_str(ERR_BADCHANNAME),
                 me.name, source_p->name, chan);
      continue;
    }

    if (find_channel_resv(chan) &&
        (!IsOper(source_p) && ConfigFileEntry.oper_pass_resv))
    {
      sendto_one(source_p, form_str(ERR_UNAVAILRESOURCE),
                 me.name, source_p->name, chan);
      sendto_realops_flags(UMODE_SPY, L_ALL,
                           "User %s (%s@%s) is attempting to join locally juped channel %s",
                           source_p->name, source_p->username, source_p->host, chan);
      continue;
    }

    if ((dlink_list_length(&source_p->user->channel) >= ConfigChannel.max_chans_per_user) &&
        (!IsOper(source_p) || (dlink_list_length(&source_p->user->channel) >=
                               ConfigChannel.max_chans_per_user * 3)))
    {
      if (!error_reported++)
        sendto_one(source_p, form_str(ERR_TOOMANYCHANNELS),
                   me.name, source_p->name, chan);
      continue;
    }

    if ((chptr = hash_find_channel(chan)) != NULL)
    {
      if (splitmode && !IsOper(source_p) && (*chan != '&') &&
          ConfigChannel.no_join_on_split)
      {
        sendto_one(source_p, form_str(ERR_UNAVAILRESOURCE),
                   me.name, source_p->name, chan);
        continue;
      }

      /* XXX - When does this happen? */
      if (dlink_list_length(&chptr->members) == 0)
        flags = CHFL_CHANOP;
    }
    else
    {
      if (splitmode && !IsOper(source_p) && (*chan != '&') &&
          (ConfigChannel.no_create_on_split || ConfigChannel.no_join_on_split))
      {
        sendto_one(source_p, form_str(ERR_UNAVAILRESOURCE),
                   me.name, source_p->name, chan);
        continue;
      }

      flags = CHFL_CHANOP;
      if (!ServerInfo.hub)
      {
        if ((*chan != '&') && uplink && IsCapable(uplink, CAP_LL))
        {
          sendto_one(uplink, ":%s CBURST %s %s %s",
                     me.name, chan, source_p->name, key ? key : "");
          continue;
        }
      }

      if ((chptr = get_or_create_channel(source_p, chan, NULL)) == NULL)
      {
        sendto_one(source_p, form_str(ERR_UNAVAILRESOURCE),
                   me.name, source_p->name, chan);
        continue;
      }
    }

    if (is_target(chptr))
      continue;

    targets[ntargets].chptr = chptr;
    targets[ntargets].key = key;
    targets[ntargets++].flags = flags;
  }

  return ((ntargets) ? 1 : 0);
}

/* is_target()
 *
 * inputs	- channel to check
 * output       - YES if duplicate pointer in table, NO if not.
 *                note, this does the canonize using pointers
 * side effects - NONE
 */
static int
is_target(struct Channel *chptr)
{
  int i;

  /*
   * we step through this backwards for do_join_0()s sake.
   * if the returned value is > join_0 (the highest 0 in the targets)
   * we know they are supposed to stay in that channel.
   */
  for (i = ntargets-1; i >=0; i--)
  {
    if (targets[i].chptr == chptr)
      return i;
  }

  return 0;
}
