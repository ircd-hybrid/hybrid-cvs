/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_mode.c: Sets a user or channel mode.
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
 *  $Id: m_mode.c,v 1.67 2003/10/07 22:37:17 bill Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "handlers.h"
#include "channel.h"
#include "channel_mode.h"
#include "client.h"
#include "hash.h"
#include "irc_string.h"
#include "sprintf_irc.h"
#include "ircd.h"
#include "numeric.h"
#include "s_user.h"
#include "s_conf.h"
#include "s_serv.h"
#include "send.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"
#include "packet.h"

static void m_mode(struct Client *, struct Client *, int, char **);
static void ms_tmode(struct Client *, struct Client *, int, char **);
static void ms_bmask(struct Client *, struct Client *, int, char **);

struct Message mode_msgtab = {
  "MODE", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_mode, m_mode, m_mode, m_ignore}
};
struct Message tmode_msgtab = { 
  "TMODE", 0, 0, 4, 0, MFLG_SLOW, 0,
  {m_ignore, m_ignore, m_ignore, ms_tmode, m_ignore}
};
struct Message bmask_msgtab = {
  "BMASK", 0, 0, 5, 0, MFLG_SLOW, 0,
  {m_ignore, m_ignore, m_ignore, ms_bmask, m_ignore}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&mode_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&mode_msgtab);
}

const char *_version = "$Revision: 1.67 $";
#endif

/*
 * m_mode - MODE command handler
 * parv[0] - sender
 * parv[1] - channel
 */
static void
m_mode(struct Client *client_p, struct Client *source_p,
       int parc, char *parv[])
{
  struct Channel *chptr = NULL;
  struct Membership *member;
  static char modebuf[MODEBUFLEN];
  static char parabuf[MODEBUFLEN];

  if (parv[1][0] == '\0')
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, source_p->name, "MODE");
    return;
  }

  /* Now, try to find the channel in question */
  if (!IsChanPrefix(parv[1][0]))
  {
    /* if here, it has to be a non-channel name */
    set_user_mode(client_p, source_p, parc, parv);
    return;
  }

  if (!check_channel_name(parv[1]))
  { 
    sendto_one(source_p, form_str(ERR_BADCHANNAME),
               me.name, source_p->name, parv[1]);
    return;
  }

  chptr = hash_find_channel(parv[1]);

  if (chptr == NULL)
  {
      /* if chptr isn't found locally, it =could= exist
       * on the uplink. So ask.
       */
      
      /* LazyLinks */
      /* only send a mode upstream if a local client sent this request
       * -davidt
       */
      if (MyClient(source_p) && !ServerInfo.hub && uplink &&
	   IsCapable(uplink, CAP_LL))
	{
#if 0
	  /* cache the channel if it exists on uplink */
	  /* Lets not for now -db */

	  sendto_one(uplink, ":%s CBURST %s",
                     me.name, parv[1]);
#endif
	  sendto_one(uplink, ":%s MODE %s %s",
		     source_p->name, parv[1], (parv[2] ? parv[2] : ""));
	  return;
	}
      else
	{
	  sendto_one(source_p, form_str(ERR_NOSUCHCHANNEL),
		     me.name, parv[0], parv[1]);
	  return;
	}
    }

  /* Now known the channel exists */
  if (parc < 3)
  {
    channel_modes(chptr, source_p, modebuf, parabuf);
    sendto_one(source_p, form_str(RPL_CHANNELMODEIS),
               me.name, parv[0], parv[1], modebuf, parabuf);
    sendto_one(source_p, form_str(RPL_CREATIONTIME),
               me.name, parv[0], parv[1], chptr->channelts);
  }
  /* bounce all modes from people we deop on sjoin
   * servers have always gotten away with murder,
   * including telnet servers *g* - Dianora
   *
   * XXX Is it worth the bother to make an ms_mode() ? - Dianora
   */
  else if (IsServer(source_p))
  {
    set_channel_mode(client_p, source_p, chptr, NULL, parc - 2, parv + 2,
                     chptr->chname);
  }
  else
  {
    member = find_channel_link(source_p, chptr);

    if (!has_member_flags(member, CHFL_DEOPPED))
    {
      /* Finish the flood grace period... */
      if (MyClient(source_p) && !IsFloodDone(source_p))
      {
        if (!((parc == 3) && (parv[2][0] == 'b') && (parv[2][1] == '\0')))
          flood_endgrace(source_p);
      }

      set_channel_mode(client_p, source_p, chptr, member, parc - 2, parv + 2,
                       chptr->chname);
    }
  }
}

/*
 * ms_tmode()
 *
 * inputs	- parv[0] = UID
 *		  parv[1] = TS
 *		  parv[2] = channel name
 *		  parv[3] = modestring
 */
static void
ms_tmode(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
  struct Channel *chptr = NULL;
  struct Membership *member;

  if (!IsChanPrefix(parv[2][0]) || !check_channel_name(parv[2]))
  {
    sendto_one(source_p, form_str(ERR_BADCHANNAME),
               me.name, source_p->name, parv[2]);
    return;
  }

  if ((chptr = hash_find_channel(parv[2])) == NULL)
  {
    sendto_one(source_p, form_str(ERR_NOSUCHCHANNEL),
               me.name, source_p->name, parv[2]);
    return;
  }

  if (atol(parv[1]) > chptr->channelts)
    return;

  if (IsServer(source_p))
    set_channel_mode(client_p, source_p, chptr, NULL, parc - 2, parv + 2, chptr->chname);
  else
  {
    member = find_channel_link(source_p, chptr);

    /* XXX are we sure we just want to bail here? */
    if (has_member_flags(member, CHFL_DEOPPED))
      return;

    set_channel_mode(client_p, source_p, chptr, member, parc - 2, parv + 2, chptr->chname);
  }
}

/*
 * ms_bmask()
 *
 * inputs	- parv[0] = SID
 *		  parv[1] = TS
 *		  parv[2] = channel name
 *		  parv[3] = type of ban to add ('b' 'I' or 'e')
 *		  parv[4] = space delimited list of masks to add
 * outputs	- none
 * side effects	- propgates unchanged bmask line to CAP_TS6 servers,
 *		  sends plain modes to the others.  nothing is sent
 *		  to the server the issuing server is connected through
 */
static void
ms_bmask(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
  static char modebuf[BUFSIZE];
  static char parabuf[BUFSIZE];
  struct Channel *chptr;
  char *s, *t, *mbuf, *pbuf;
  long mode_type;
  int mlen;
  int plen = 0;
  int tlen;
  int modecount = 0;
  int needcap = NOCAPS;

  if(!IsChanPrefix(parv[2][0]) || !check_channel_name(parv[2]))
    return;

  if((chptr = hash_find_channel(parv[2])) == NULL)
    return;

  /* TS is higher, drop it. */
  if(atol(parv[1]) > chptr->channelts)
    return;

  switch(parv[3][0])
  {
    case 'b':
      mode_type = CHFL_BAN;
      break;

    case 'e':
      mode_type = CHFL_EXCEPTION;
      needcap = CAP_EX;
      break;

    case 'I':
      mode_type = CHFL_INVEX;
      needcap = CAP_IE;
      break;

    /* maybe we should just blindly propagate this? */
    default:
      return; 
  }

  parabuf[0] = '\0';
  s = MyMalloc(BUFSIZE);

  mlen = ircsprintf(modebuf, ":%s MODE %s +",
        source_p->name, chptr->chname);
  mbuf = modebuf + mlen;
  pbuf = parabuf;

  if((t = strchr(s, ' ')) != NULL)
    *t++ = '\0';

  while(s != NULL)
  {
    tlen = strlen(s);

    /* I dont even want to begin parsing this.. */
    if(tlen > MODEBUFLEN)
      break;

    if(add_id(source_p, chptr, s, mode_type))
    {
      /* this new one wont fit.. */
      if(mlen + MAXMODEPARAMS + plen + tlen > BUFSIZE - 4 ||
         modecount >= MAXMODEPARAMS)
      {
        *mbuf = '\0';
        *(pbuf - 1) = '\0';
        sendto_channel_local(ALL_MEMBERS, chptr, "%s %s", modebuf, parabuf);
        sendto_server(client_p, NULL, chptr, needcap, CAP_TS6, NOFLAGS,
                      "%s %s", modebuf, parabuf);

        mbuf = modebuf + mlen;
        pbuf = parabuf;
        plen = modecount = 0;
      }

      *mbuf++ = parv[3][0];
      plen = ircsprintf(pbuf, "%s ", s);
      pbuf += plen;
      modecount++;
    }

    s = t;

    if(s != NULL)
    {
      /* trailing space marking the end. */
      if(*s == '\0')
        break;

      if((t = strchr(s, ' ')) != NULL)
        *t++ = '\0';
    }
  }

  if(modecount)
  {
    *mbuf = *(pbuf - 1) = '\0';
    sendto_channel_local(ALL_MEMBERS, chptr, "%s %s", modebuf, parabuf);
    sendto_server(client_p, NULL, chptr, needcap, CAP_TS6, NOFLAGS,
                  "%s %s", modebuf, parabuf);
  }

  sendto_server(client_p, NULL, chptr, CAP_TS6|needcap, NOCAPS, NOFLAGS,
                ":%s BMASK %lu %s %s :%s",
                 source_p->id, chptr->channelts, chptr->chname,
                 parv[3], parv[4]);
}
