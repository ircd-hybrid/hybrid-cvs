/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_services.c: SVS commands and Services support
 *
 *  Copyright (C) 2005 by the past and present ircd coders, and others.
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
 *  $Id: m_services.c,v 1.5 2005/08/17 03:05:34 metalrock Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "handlers.h"
#include "client.h"
#include "common.h"     /* FALSE bleah */
#include "hash.h"
#include "hostmask.h"
#include "ircd.h"
#include "irc_string.h"
#include "sprintf_irc.h"
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

#define MAXLINE 512   /* Please DO NOT change this! -- knight- */

/* Services' function macro generation -- knight- */
#define SERV_FUNC(a,b,c) static void a (struct Client *, struct Client *, int, char *[]) \
{ return deliver_services_msg (b, c, client_p, source_p, parc, parv); }

static void mo_svsmode(struct Client *, struct Client *, int, char *[]);
static void mo_svsnick(struct Client *, struct Client *, int, char *[]);

static void m_chanserv(struct Client *, struct Client *, int, char *[]);
static void m_global(struct Client *, struct Client *, int, char *[]);
static void m_helpserv(struct Client *, struct Client *, int, char *[]);
static void m_identify(struct Client *, struct Client *, int, char *[]);
static void m_memoserv(struct Client *, struct Client *, int, char *[]);
static void m_nickserv(struct Client *, struct Client *, int, char *[]);
static void m_operserv(struct Client *, struct Client *, int, char *[]);
static void m_seenserv(struct Client *, struct Client *, int, char *[]);
static void m_statserv(struct Client *, struct Client *, int, char *[]);

char *GetString(int, char *[]);
static int clean_nick_name(char *);
static void deliver_services_msg(char *, char *, struct Client *, struct Client *, int, char *[]);

/* SVS commands */
struct Message svsmode_msgtab = {
  "SVSMODE", 0, 0, 3, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, m_ignore, mo_svsmode, mo_svsmode, m_ignore}
};

struct Message svsnick_msgtab = {
  "SVSNICK", 0, 0, 3, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, m_ignore, mo_svsnick, mo_svsnick, m_ignore}
};

/* Services */
struct Message chanserv_msgtab = {
  "CHANSERV", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_chanserv, m_ignore, m_ignore, m_chanserv, m_ignore}
};

struct Message global_msgtab = {
  "GLOBAL", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_global, m_ignore, m_ignore, m_global, m_ignore}
};

struct Message helpserv_msgtab = {
  "HELPSERV", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_helpserv, m_ignore, m_ignore, m_helpserv, m_ignore}
};

struct Message identify_msgtab = {
  "IDENTIFY", 0, 0, 0, 2, MFLG_SLOW, 0,
  {m_unregistered, m_helpserv, m_ignore, m_ignore, m_helpserv, m_ignore}
};

struct Message memoserv_msgtab = {
  "MEMOSERV", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_memoserv, m_ignore, m_ignore, m_memoserv, m_ignore}
};

struct Message nickserv_msgtab = {
  "NICKSERV", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_nickserv, m_ignore, m_ignore, m_nickserv, m_ignore}
};

struct Message operserv_msgtab = {
  "OPERSERV", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_operserv, m_ignore, m_ignore, m_operserv, m_ignore}
};

struct Message seenserv_msgtab = {
  "SEENSERV", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_seenserv, m_ignore, m_ignore, m_seenserv, m_ignore}
};

struct Message statserv_msgtab = {
  "STATSERV", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_statserv, m_ignore, m_ignore, m_statserv, m_ignore}
};

/* Short-hand aliases for NickServ, ChanServ, MemoServ and OperServ */
struct Message ns_msgtab = {
  "NS", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_nickserv, m_ignore, m_ignore, m_nickserv, m_ignore}
};

struct Message cs_msgtab = {
  "CS", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_chanserv, m_ignore, m_ignore, m_chanserv, m_ignore}
};

struct Message ms_msgtab = {
  "MS", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_memoserv, m_ignore, m_ignore, m_memoserv, m_ignore}
};

struct Message os_msgtab = {
  "OS", 0, 0, 1, 0, MFLG_SLOW, 0,
  {m_unregistered, m_operserv, m_ignore, m_ignore, m_operserv, m_ignore}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&svsnick_msgtab);
  mod_add_cmd(&svsmode_msgtab);
  mod_add_cmd(&chanserv_msgtab); 
  mod_add_cmd(&global_msgtab);
  mod_add_cmd(&helpserv_msgtab);
  mod_add_cmd(&identify_msgtab);
  mod_add_cmd(&memoserv_msgtab);
  mod_add_cmd(&nickserv_msgtab);
  mod_add_cmd(&operserv_msgtab);
  mod_add_cmd(&seenserv_msgtab);
  mod_add_cmd(&statserv_msgtab);
  mod_add_cmd(&ns_msgtab);
  mod_add_cmd(&cs_msgtab);
  mod_add_cmd(&ms_msgtab);
  mod_add_cmd(&os_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&svsnick_msgtab);
  mod_del_cmd(&svsmode_msgtab);
  mod_del_cmd(&chanserv_msgtab); 
  mod_del_cmd(&global_msgtab);
  mod_del_cmd(&helpserv_msgtab);
  mod_del_cmd(&identify_msgtab);
  mod_del_cmd(&memoserv_msgtab);
  mod_del_cmd(&nickserv_msgtab);
  mod_del_cmd(&operserv_msgtab);
  mod_del_cmd(&seenserv_msgtab);
  mod_del_cmd(&statserv_msgtab);
  mod_del_cmd(&ns_msgtab);
  mod_del_cmd(&cs_msgtab);
  mod_del_cmd(&ms_msgtab);
  mod_del_cmd(&os_msgtab);
}

const char *_version = "$Revision: 1.5 $";
#endif

/*
 * mo_svsmode()
 *
 * Sets or changes modes for a particular user
 *
 * parv[0] = sender prefix
 * parv[1] = target
 * parv[2] = modes
 */
static void mo_svsmode(struct Client *client_p, struct Client *source_p,
                       int parc, char *parv[])
{
  struct Client *target_p;

  if (MyConnect(source_p) && !IsOperAdmin(source_p))
  {
      sendto_one(source_p, ":%s NOTICE %s :You have no admin flag",
                 me.name, parv[0]);
  }

  if (*parv[1] == '\0')
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, parv[0], "SVSMODE");
    return;
  }

  target_p = find_person(parv[1]);

  if (target_p == NULL)
    return;

  user_mode(client_p, source_p, parc, parv);
}

/*
 * mo_svsnick()
 *
 * parv[0] = sender prefix
 * parv[1] = user to force
 * parv[2] = nick to force them to
 */
static void mo_svsnick(struct Client *client_p, struct Client *source_p,
                       int parc, char *parv[])
{
  struct Client *target_p;

  if (MyConnect(source_p) && !IsOperAdmin(source_p))
  {
    sendto_one(source_p, ":%s NOTICE %s :You have no admin flag",
               me.name, parv[0]);
  }

  if (*parv[1] == '\0')
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, parv[0], "SVSNICK");
    return;
  }

  if (!clean_nick_name(parv[2]))
  {
    sendto_one(source_p, ":%s NOTICE %s :*** Notice -- Invalid new nickname %s",
               me.name, source_p->name, parv[2]);
    return;
  }

  if (strlen(parv[2]) > NICKLEN - 1)
    parv[2][NICKLEN - 1] = '\0';

  if ((target_p = find_client(parv[1])) == NULL)
  {
    sendto_one(source_p, ":%s NOTICE %s :*** Notice -- No such nickname %s",
               me.name, source_p->name, parv[1]);
    return;
  }

  if ((hunt_server(client_p, source_p, ":%s SVSNICK %s %s", 1, parc,
        parv)) != HUNTED_ISME)
    return;

  if (!IsClient(target_p))
    return;

  if (find_client(parv[2]) != NULL)
  {
    sendto_one(source_p, ":%s NOTICE %s :*** Notice -- Nickname %s is in use",
               me.name, source_p->name, parv[2]);
    return;
  }

  change_local_nick(target_p, target_p, parv[2]);
}

  
/*
 * SERV_FUNC()
 *
 * These generate the services functions through
 * a macro.
 */
SERV_FUNC(m_chanserv, "ChanServ", "CHANSERV")
SERV_FUNC(m_global,   "Global",   "GLOBAL"  )
SERV_FUNC(m_helpserv, "HelpServ", "HELPSERV")
SERV_FUNC(m_memoserv, "MemoServ", "MEMOSERV")
SERV_FUNC(m_nickserv, "NickServ", "NICKSERV")
SERV_FUNC(m_operserv, "OperServ", "OPERSERV")
SERV_FUNC(m_seenserv, "SeenServ", "SEENSERV")
SERV_FUNC(m_statserv, "StatServ", "STATSERV")


/*
 * GetString()
 *
 * Reverse the array parv back into a normal string assuming
 * there are "parc" indicies in the array. Space is allocated
 * for a new string.
 *
 * Thanks to kre.
 */
char *GetString(int parc, char *parv[])
{
  char *final;
  char temp[MAXLINE];
  int ii = 0;
  
  final = MyMalloc(sizeof(char));
  *final = '\0';
  
  while (ii < parc)
  {
    ircsprintf(tmp, "%s%s", parv[ii], ((ii + 1) >= parc) ? "" : " ");
    final = MyRealloc(final, strlen(final) + strlen(temp) + sizeof(char));
    strlcat(final, temp, sizeof(final)); /* this should be strlcat() not strcat()! -- knight- */
    ++ii;
  }
  
  return (final);
}


/*
 * clean_nick_name()
 *
 * input        - nickname
 * output       - none
 * side effects - walks through the nickname, returning 0 if erroneous
 */
static int clean_nick_name(char *nick)
{
  assert(nick);
  if (nick == NULL)
    return (0);

  /* nicks can't start with a digit or - or be 0 length */
  /* This closer duplicates behaviour of hybrid-6 */

  if (*nick == '-' || IsDigit(*nick) || *nick == '\0')
    return (0);

  for (; *nick; nick++)
  {
    if (!IsNickChar(*nick))
      return (0);
  }

  return (1);
}

/*
 * m_identify()
 * 
 */
static void m_identify(struct Client *client_p, struct Client *source_p,
                       int parc, char *parv[])
{
  struct Client *acptr;

  if (parc == 3)
  {
      acptr = find_person(client_p, "ChanServ");
      if (!acptr || IsServer(acptr))
      {
        sendto_one(source_p, ":%s NOTICE %s :*** Notice -- Services are currently unavailable.",
                   me.name, parv[0]);
        return;
      }
      else
      {
        sendto_one(acptr, ":%s PRIVMSG ChanServ :IDENTIFY %s %s",
                   parv[0], parv[1], parv[2]);
      }
  }
  else if (parc == 2)
  {
    acptr = find_person(client_p, "NickServ");
    if (!acptr || IsServer(acptr))
    {
      sendto_one(source_p, ":%s NOTICE %s :*** Notice -- Services are currently unavailable.",
                 me.name, parv[0]);
      return;
    }
    else
    {
      sendto_one(acptr, ":%s PRIVMSG NickServ :IDENTIFY %s",
                 parv[0], parv[1]);
    }
  }
  else
  {
    sendto_one(source_p, ":%s NOTICE %s :Syntax: IDENTIFY <password> - for nickname",
               me.name, parv[0]);
    sendto_one(source_p, ":%s NOTICE %s :Syntax: IDENTIFY <channel> <password> - for channel",
               me.name, parv[0]);
  }
}

/*
 * deliver_services_msg()
 *
 * parv[0] = sender prefix
 * servmsg = message for services (utilising GetString())
 *
 * Borrowed from HybServ -- knight-
 */
static void deliver_services_msg(char *service, char *command,
                                 struct Client *client_p, struct Client *source_p,
                                 int parc, char *parv[])
{
  struct Client *acptr;
  char *servmsg;

  /*
   * Check to make sure the nick is existant.
   */
  acptr = find_client(service);

  if (!acptr || IsServer(acptr))
  {
    sendto_one(source_p, ":%s NOTICE %s :*** Notice -- Services are currently unavailable.",
               me.name, parv[0]);
  }
  else
  {
    if (parc == 1 || parv[1] == '\0')
    {
      sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
                 me.name, parv[0], command);
      return;
    }

    servmsg = GetString(parc - 1, parv + 1);

    sendto_one(acptr, ":%s PRIVMSG %s :%s",
               parv[0], acptr->name, servmsg);
  }
}
