/************************************************************************
 *   IRC - Internet Relay Chat, doc/example_module.c
 *   Copyright (C) 2002 Hybrid Development Team
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 1, or (at your option)
 *   any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *   $Id: m_operspy.c,v 1.1 2002/09/03 05:43:37 bill Exp $
 */

/* List of ircd includes from ../include/ */
#include "stdinc.h"
#include "handlers.h"
#include "channel_mode.h"
#include "client.h"
#include "common.h"     /* FALSE bleah */
#include "ircd.h"
#include "irc_string.h"
#include "numeric.h"
#include "fdlist.h"
#include "s_bsd.h"
#include "s_conf.h"
#include "s_log.h"
#include "s_serv.h"
#include "send.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"

/* enable OPERSPY version of LIST */
#define OPERSPY_LIST

/* enable OPERSPY version of MODE */
#define OPERSPY_MODE

/* enable OPERSPY version of NAMES */
#define OPERSPY_NAMES

/* enable OPERSPY version of WHO */
#define OPERSPY_WHO

/* enable OPERSPY version of WHOIS */
#define OPERSPY_WHOIS

#define IsOperspy(x) (IsOper(x) && MyClient(x))

/*
 * The commands we will add
 */
static void m_operspy(struct Client *client_p, struct Client *source_p,
                       int parc, char *parv[]);
static void mo_operspy(struct Client *client_p, struct Client *source_p,
                       int parc, char *parv[]);
static void do_who_list(struct Client *source_p, struct Channel *chptr,
                        dlink_list *peons_list, dlink_list *chanops_list,
#ifdef REQUIRE_OANDV
                        dlink_list *chanops_voiced_list,
#endif
#ifdef HALFOPS
                        dlink_list *halfops_list,
#endif
                        dlink_list *voiced_list,
                        char *chanop_flag,
                        char *halfop_flag,
                        char *voiced_flag,
                        char *chname, int member);

static void do_who(struct Client *source_p,
                   struct Client *target_p,
                   char *chname,
                   char *op_flags);

struct Message operspy_msgtab = {
  "OPERSPY", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_ignore, m_operspy, m_operspy, mo_operspy}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&operspy_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&operspy_msgtab);
}
const char *_version = "$Revision: 1.1 $";
#endif

/*
 * m_operspy
 *      parv[1] = operspy command
 *      parv[2] = command parameter
 */
static void m_operspy(struct Client *client_p, struct Client *source_p,
                      int parc, char *parv[])
{
  sendto_one(client_p, ":%s %d %s %s :Unknown command",
             me.name, ERR_UNKNOWNCOMMAND, client_p->name, parv[0]);
}

/*
 * mo_operspy
 *	parv[1] = operspy command
 *	parv[2] = command parameter
 */
static void mo_operspy(struct Client *client_p, struct Client *source_p,
                       int parc, char *parv[])
{
#ifdef OPERSPY_LIST
  struct Channel	*chptr_list = NULL;
#endif

#ifdef OPERSPY_MODE
  /* needed to preserve actual client status */
  int			c_status = 0;

  static char		modebuf[MODEBUFLEN];
  static char		parabuf[MODEBUFLEN];
  struct Channel	*chptr_mode = NULL;
#endif

#ifdef OPERSPY_NAMES
  /* as with mode, must preserve channel modes */
  int                   c_modes = 0;
  struct Channel        *chptr_names = NULL;
#endif

#ifdef OPERSPY_WHO
  char			flags[NUMLISTS][2];
  struct Channel	*chptr_who = NULL;
#endif

#ifdef OPERSPY_WHOIS
  dlink_node		*lp;
  struct Channel	*chptr_whois = NULL;
  struct Client		*a2client_p;
  struct Client		*target_p = NULL;
  char			buf[BUFSIZE];
  char			*t;
  int			mlen, tlen;
  int			cur_len = 0;
  int			reply_to_send = NO;
#endif

  if (!IsOperspy(client_p))
  {
    sendto_one(client_p, ":%s %d %s %s :Unknown command",
               me.name, ERR_UNKNOWNCOMMAND, client_p->name, parv[0]);
    return;
  }

#ifdef OPERSPY_LIST
  if (strcasecmp(parv[1], "LIST") == 0)
  {
    sendto_one(client_p, form_str(RPL_LISTSTART), me.name, client_p->name);

    for (chptr_list = GlobalChannelList; chptr_list; chptr_list = chptr_list->nextch)
    {
      if (match(parv[2], chptr_list->chname))
      {
        sendto_one(client_p, form_str(RPL_LIST), me.name, client_p->name,
                   chptr_list->chname, chptr_list->users, chptr_list->topic == NULL ? "" : chptr_list->topic);
      }
    }

    sendto_one(client_p, form_str(RPL_LISTEND), me.name, client_p->name);
    return;
  }
#endif

#ifdef OPERSPY_MODE
  if (strcasecmp(parv[1], "MODE") == 0)
  {
    if (!IsChanPrefix(parv[2][0]) || !check_channel_name(parv[2]))
    {
      sendto_one(client_p, form_str(ERR_BADCHANNAME),
                 me.name, parv[0], (unsigned char *)parv[2]);
      return;
    }

    if ((chptr_mode = hash_find_channel(parv[2])) == NULL)
    {
      /*
       * according to m_mode.c, the channel *could* exist on the uplink still,
       * but I don't see how.  Even if it does, we won't be able to spy without
       * info.
       */ 
      sendto_one(client_p, form_str(ERR_NOSUCHCHANNEL),
                 me.name, parv[0], parv[2]);
      return;
    }

    /* this is a dirty nasty kludge to trick channel_modes() into giving us the key */
    c_status = client_p->status;
    client_p->status = STAT_SERVER;

    channel_modes(chptr_mode, client_p, modebuf, parabuf);
    client_p->status = c_status;

    sendto_one(client_p, form_str(RPL_CHANNELMODEIS),
               me.name, parv[0], parv[2], modebuf, parabuf);
    sendto_one(client_p, form_str(RPL_CREATIONTIME),
               me.name, parv[0], parv[2], chptr_mode->channelts);
    return;
  }
#endif

#ifdef OPERSPY_NAMES
  if (strcasecmp(parv[1], "NAMES") == 0)
  {
    if (!IsChanPrefix(parv[2][0]) || !check_channel_name(parv[2]))
    {
      sendto_one(client_p, form_str(ERR_BADCHANNAME),
                 me.name, parv[0], (unsigned char *)parv[2]);
      return;
    }

    if ((chptr_names = hash_find_channel(parv[2])) == NULL)
    {
      sendto_one(client_p, form_str(ERR_NOSUCHCHANNEL),
                 me.name, parv[0], parv[2]);
      return;
    }

    /* 
     * the way to go with this, rather than temporarily setting -sp,
     * is to temporarily add our client to the member list.  then
     * we can also list +i users.  an unfortunate side-effect of this
     * is that your nickname shows up in the list.  for now, there is
     * no easy way around it.
     */ 

    add_user_to_channel(chptr_names, client_p, MODE_CHANOP);
    channel_member_names(client_p, chptr_names, parv[2], 1);
    remove_user_from_channel(chptr_names, client_p);
    return;
  }
#endif

#ifdef OPERSPY_WHO
  if (strcasecmp(parv[1], "WHO") == 0)
  {
    if (!IsChanPrefix(parv[2][0]) || !check_channel_name(parv[2]))
    {
      sendto_one(client_p, form_str(ERR_BADCHANNAME),
                 me.name, parv[0], (unsigned char *)parv[2]);
      return;
    }

    if ((chptr_who = hash_find_channel(parv[2])) == NULL)
    {
      sendto_one(client_p, form_str(ERR_NOSUCHCHANNEL),
                 me.name, parv[0], parv[2]);
      return;
    }

    /*
     * same as above, the proper way to do this is to add the user
     * temporarily to the member list, and then remove immediately
     * afterwards.
     */

    add_user_to_channel(chptr_who, client_p, MODE_CHANOP);
    set_channel_mode_flags(flags, chptr_who, client_p);
    do_who_list(client_p, chptr_who,
                &chptr_who->peons,
                &chptr_who->chanops, 
#ifdef REQUIRE_OANDV
                &chptr_who->chanops_voiced,
#endif
#ifdef HALFOPS
                &chptr_who->halfops,
#endif
                &chptr_who->voiced,
                flags[0], flags[1], flags[2], parv[2], 1);
    remove_user_from_channel(chptr_who, client_p);
    return;
  }
#endif

#ifdef OPERSPY_WHOIS
  if (strcasecmp(parv[1], "WHOIS") == 0)
  {
    if (strchr(parv[2], '?') || strchr(parv[2], '*'))
    {
      sendto_one(client_p, ":%s NOTICE %s :Do not use wildcards with this.", me.name, parv[0]);
      return;
    }

    if ((target_p = find_client(parv[2])) == NULL)
    {
      sendto_one(client_p, form_str(ERR_NOSUCHNICK), me.name, parv[0], parv[2]);
      return;
    }

    a2client_p = find_server(target_p->user->server);

    sendto_one(client_p, form_str(RPL_WHOISUSER), me.name,
               client_p->name, target_p->name, target_p->username,
               target_p->host, target_p->info);
    ircsprintf(buf, form_str(RPL_WHOISCHANNELS), me.name,
               client_p->name, target_p->name, "");

    mlen = strlen(buf);
    cur_len = mlen;
    t = buf + mlen;

    for (lp = target_p->user->channel.head; lp; lp = lp->next)
    {
      chptr_whois = lp->data;
      if ((cur_len + strlen(chptr_whois->chname) + 2) > (BUFSIZE - 4))
      {
        sendto_one(client_p, "%s", buf);
        cur_len = mlen;
        t = buf + mlen;
      }

      ircsprintf(t, "%s%s ", channel_chanop_or_voice(chptr_whois, target_p),
                 chptr_whois->chname);
      tlen = strlen(t);
      t += tlen;
      cur_len += tlen;
      reply_to_send = YES;
    }

    if (reply_to_send == YES)
      sendto_one(client_p, "%s", buf);

    sendto_one(client_p, form_str(RPL_WHOISSERVER), me.name,
               client_p->name, target_p->name, target_p->user->server,
               a2client_p ? a2client_p->info : "*Not On This Net*");

    if (IsOper(target_p))
    {
      sendto_one(client_p, form_str(RPL_WHOISOPERATOR), me.name,
                 client_p->name, target_p->name);
      if (IsAdmin(target_p))
        sendto_one(client_p, form_str(RPL_WHOISADMIN), me.name,
                   client_p->name, target_p->name);
    }

    if (MyConnect(target_p))
      sendto_one(client_p, form_str(RPL_WHOISIDLE), me.name,
                 client_p->name, target_p->name, CurrentTime - target_p->user->last,
                 target_p->firsttime);
    return;
  }
#endif

  sendto_one(client_p, ":%s NOTICE %s :%s is not a valid option.  Choose from LIST, MODE, NAMES, WHO, WHOIS",
             me.name, parv[0], parv[1]);
}

static void do_who_list(struct Client *source_p, struct Channel *chptr,
                        dlink_list *peons_list,
                        dlink_list *chanops_list,
#ifdef REQUIRE_OANDV
                        dlink_list *chanops_voiced_list,
#endif
#ifdef HALFOPS
                        dlink_list *halfops_list,
#endif
                        dlink_list *voiced_list,
                        char *chanop_flag,
                        char *halfop_flag,
                        char *voiced_flag,
                        char *chname, int member)
{
  struct Client *target_p;

#ifdef ANONOPS
  dlink_node *chanops_ptr;
  dlink_node *peons_ptr;
  dlink_node *voiced_ptr;
#ifdef REQUIRE_OANDV
  dlink_node *chanops_voiced_ptr;
#endif
#ifdef HALFOPS
  dlink_node *halfops_ptr;
#endif
  int done=0;

  peons_ptr   = peons_list->head;
  chanops_ptr = chanops_list->head;
  voiced_ptr  = voiced_list->head;
#ifdef HALFOPS
  halfops_ptr = halfops_list->head;
#endif
#ifdef REQUIRE_OANDV
  chanops_voiced_ptr = chanops_voiced_list->head;
#endif

  while (done != NUMLISTS)
    {
      done = 0;

      if(peons_ptr != NULL)
        {
          target_p = peons_ptr->data;

          if(member || !IsInvisible(target_p))
            do_who(source_p, target_p, chname, "");
          peons_ptr = peons_ptr->next;
        }
      else
        done++;

      if(chanops_ptr != NULL)
        {
          target_p = chanops_ptr->data;

          if(member || !IsInvisible(target_p))
            do_who(source_p, target_p, chname, chanop_flag);
          chanops_ptr = chanops_ptr->next;
        }
      else
        done++;

#ifdef HALFOPS
      if(halfops_ptr != NULL)
        {
          target_p = halfops_ptr->data;

          if(member || !IsInvisible(target_p))
            do_who(source_p, target_p, chname, halfop_flag);
          halfops_ptr = halfops_ptr->next;
        }
      else
        done++;
#else
      done++;
#endif

      if(voiced_ptr != NULL)
        {
          target_p = voiced_ptr->data;

          if(member || !IsInvisible(target_p))
          {
            if(target_p == source_p && is_voiced(chptr, source_p) &&
               chptr->mode.mode & MODE_HIDEOPS)
               do_who(source_p, target_p, chname, "+");
            else
              do_who(source_p, target_p, chname, voiced_flag);
          }
          voiced_ptr = voiced_ptr->next;
        }
      else
        done++;

#ifdef REQUIRE_OANDV
      if(chanops_voiced_ptr != NULL)
        {
          target_p = chanops_voiced_ptr->data;

          if(member || !IsInvisible(target_p))
            do_who(source_p, target_p, chname, chanop_flag);
          chanops_voiced_ptr = chanops_voiced_ptr->next;
        }
      else
        done++;
#endif
    }
#else /* ANONOPS */
    dlink_node *ptr;

    for(ptr = peons_list->head; ptr; ptr = ptr->next)
    {
      target_p = ptr->data;

      if(member || !IsInvisible(target_p))
        do_who(source_p, target_p, chname, "");
    }

    for(ptr = voiced_list->head; ptr; ptr = ptr->next)
    {
      target_p = ptr->data;
     
      if(member || !IsInvisible(target_p))
        do_who(source_p, target_p, chname, voiced_flag);
    }

#ifdef REQUIRE_OANDV
    for(ptr = chanops_voiced_list->head; ptr; ptr = ptr->next)
    {
      target_p = ptr->data;

      if(member || !IsInvisible(target_p))
        do_who(source_p, target_p, chname, chanop_flag);
    }
#endif

    for(ptr = chanops_list->head; ptr; ptr = ptr->next)
    {
      target_p = ptr->data;

      if(member || !IsInvisible(target_p))
        do_who(source_p, target_p, chname, chanop_flag);
    }
#endif
}

static void do_who(struct Client *source_p,
                   struct Client *target_p,
                   char *chname,
                   char *op_flags)
{
  char  status[5];

  /* slight kludge to avoid listing self */
  if (target_p == source_p)
    return;

  ircsprintf(status,"%c%s%s",
             target_p->user->away ? 'G' : 'H',
             IsOper(target_p) ? "*" : "", op_flags );

#ifdef ANONOPS
  if(ConfigServerHide.hide_servers)
    {
      sendto_one(source_p, form_str(RPL_WHOREPLY), me.name, source_p->name,
                 (chname) ? (chname) : "*",
                 target_p->username,
                 target_p->host, IsOper(source_p) ? target_p->user->server : "*",
                 target_p->name,
                 status, 0, target_p->info);
    }
  else
#endif
    {
      sendto_one(source_p, form_str(RPL_WHOREPLY), me.name, source_p->name,
                 (chname) ? (chname) : "*",
                 target_p->username,
                 target_p->host,  target_p->user->server, target_p->name,
                 status, target_p->hopcount, target_p->info);
    }
}
