/************************************************************************
 *   IRC - Internet Relay Chat, modules/m_sjoin.c
 *   Copyright (C) 1990 Jarkko Oikarinen and
 *                      University of Oulu, Computing Center
 *
 *   See file AUTHORS in IRC package for additional names of
 *   the programmers. 
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
 *   $Id: m_sjoin.c,v 1.38 2000/12/22 16:12:44 db Exp $
 */
#include "tools.h"
#include "handlers.h"
#include "channel.h"
#include "vchannel.h"
#include "client.h"
#include "hash.h"
#include "irc_string.h"
#include "ircd.h"
#include "list.h"
#include "numeric.h"
#include "send.h"
#include "common.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"

#include <stdlib.h>
#include <string.h>
#include <assert.h>


struct Message sjoin_msgtab = {
  MSG_SJOIN, 0, 0, 0, MFLG_SLOW, 0,
  {m_unregistered, m_ignore, ms_sjoin, m_ignore}
};

void
_modinit(void)
{
  mod_add_cmd(&sjoin_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&sjoin_msgtab);
}

char *_version = "20001122";

/*
 * ms_sjoin
 * parv[0] - sender
 * parv[1] - TS
 * parv[2] - channel
 * parv[3] - modes + n arguments (key and/or limit)
 * parv[4+n] - flags+nick list (all in one parameter)
 * 
 * process a SJOIN, taking the TS's into account to either ignore the
 * incoming modes or undo the existing ones or merge them, and JOIN
 * all the specified users while sending JOIN/MODEs to local clients
 */

char    modebuf[MODEBUFLEN];
char    parabuf[MODEBUFLEN];
char    *para[MAXMODEPARAMS];
char    *mbuf;
int     pargs;

void set_final_mode(struct Mode *mode,struct Mode *oldmode);
void remove_our_modes(int type,
		      struct Channel *chptr, struct Channel *top_chptr,
		      struct Client *sptr);

void remove_a_mode(int hide_or_not,
		   struct Channel *chptr, struct Channel *top_chptr,
		   struct Client *sptr, dlink_list *list, char flag);


int     ms_sjoin(struct Client *cptr,
		 struct Client *sptr,
		 int parc,
		 char *parv[])
{
  struct Channel *chptr;
  struct Channel *top_chptr;	/* XXX vchans */
  struct Client       *acptr;
  time_t        newts;
  time_t        oldts;
  time_t        tstosend;
  static        struct Mode mode, *oldmode;
  int   args = 0, keep_our_modes = 1, keep_new_modes = 1;
  int   doesop = 0, fl, people = 0, isnew;
  register      char *s, *s0;
  static        char buf[BUFSIZE];
  static        char sjbuf[BUFSIZE];
  char          *nick_pointer;
  char    *p;
  int hide_or_not;
  dlink_node *m;

  if (IsClient(sptr) || parc < 5)
    return 0;
  if (!IsChannelName(parv[2]))
    return 0;

  if (!check_channel_name(parv[2]))
     { 
       return 0;
     }

  /* comstud server did this, SJOIN's for
   * local channels can't happen.
   */

  if(*parv[2] == '&')
    return 0;

  mbuf = modebuf;
  pargs = 0;
  newts = atol(parv[1]);
  memset(&mode, 0, sizeof(mode));

  s = parv[3];
  while (*s)
    switch(*(s++))
      {
      case 'i':
        mode.mode |= MODE_INVITEONLY;
        break;
      case 'n':
        mode.mode |= MODE_NOPRIVMSGS;
        break;
      case 'p':
        mode.mode |= MODE_PRIVATE;
        break;
      case 's':
        mode.mode |= MODE_SECRET;
        break;
      case 'm':
        mode.mode |= MODE_MODERATED;
        break;
      case 't':
        mode.mode |= MODE_TOPICLIMIT;
        break;
		  case 'z':
			  mode.mode |= MODE_HIDEOPS;
			  break;
			  
		  case 'k':
         strncpy_irc(mode.key, parv[4 + args], KEYLEN);
        args++;
        if (parc < 5+args) return 0;
        break;
      case 'l':
        mode.limit = atoi(parv[4+args]);
        args++;
        if (parc < 5+args) return 0;
        break;
      }

  *parabuf = '\0';

  if(mode.mode & MODE_HIDEOPS)
    hide_or_not = ONLY_CHANOPS;
  else
    hide_or_not = ALL_MEMBERS;

  isnew = ChannelExists(parv[2]) ? 0 : 1;
  chptr = get_channel(sptr, parv[2], CREATE);

  /* XXX vchan cruft */
  /* vchans are encoded as "##mainchanname_timestamp" */

  top_chptr = NULL;

  if(parv[2][1] == '#')
    {
      char *p;

      /* possible sub vchan being sent along ? */
      if((p = strchr(parv[2],'_')))
	{
	  /* quite possibly now. To confirm I could
	   * check the encoded timestamp to see if it matches
	   * the given timestamp for this channel. Maybe do 
	   * that later. - db
	   */

	  *p = '\0';	/* fugly hack for now ... */

	  /* + 1 skip the extra '#' in the name */
	  if((top_chptr = hash_find_channel((parv[2] + 1), NULL)))
	    {
	      /* If the vchan is already in the vchan_list for this
	       * root, don't re-add it.
	       */

	      if(dlinkFind(&top_chptr->vchan_list,chptr) == NULL)
		{
		  m = make_dlink_node();
		  dlinkAdd(chptr, m, &top_chptr->vchan_list);
		  chptr->root_chptr=top_chptr;
		}
	    }
	  else
	    {
	      top_chptr = get_channel(sptr, (parv[2] + 1), CREATE);
	      m = make_dlink_node();
	      dlinkAdd(chptr, m, &top_chptr->vchan_list);
	      chptr->root_chptr=top_chptr;
	    }

	  *p = '_';	/* fugly hack, restore '_' */
	}
    }

  oldts = chptr->channelts;

  doesop = (parv[4+args][0] == '@' || parv[4+args][1] == '@');

  oldmode = &chptr->mode;

  if (isnew)
    chptr->channelts = tstosend = newts;
  else if (newts == 0 || oldts == 0)
    chptr->channelts = tstosend = 0;
  else if (!newts)
    chptr->channelts = tstosend = oldts;
  else if (newts == oldts)
    tstosend = oldts;
  else if (newts < oldts)
    {
      if (doesop)
        keep_our_modes = NO;

      clear_bans_exceptions_denies(sptr,chptr);

      if (chptr->opcount && !doesop)
          tstosend = oldts;
      else
        chptr->channelts = tstosend = newts;
    }
  else
    {
      if (chptr->opcount)
        keep_new_modes = NO;
      if (doesop && !chptr->opcount)
        {
          chptr->channelts = tstosend = newts;
        }
      else
        tstosend = oldts;
    }

  if (!keep_new_modes)
    mode = *oldmode;
  else if (keep_our_modes)
    {
      mode.mode |= oldmode->mode;
      if (oldmode->limit > mode.limit)
        mode.limit = oldmode->limit;
      if (strcmp(mode.key, oldmode->key) < 0)
        strcpy(mode.key, oldmode->key);
    }

  set_final_mode(&mode,oldmode);
  chptr->mode = mode;

  /* Lost the TS, other side wins, so remove modes on this side */
  if (!keep_our_modes)
    {
      remove_our_modes(hide_or_not, chptr, top_chptr, sptr);
    }

  *modebuf = *parabuf = '\0';
  if (parv[3][0] != '0' && keep_new_modes)
    channel_modes(chptr, sptr, modebuf, parabuf);
  else
    {
      modebuf[0] = '0';
      modebuf[1] = '\0';
    }

  ircsprintf(buf, ":%s SJOIN %lu %s %s %s :", parv[0], tstosend, parv[2],
          modebuf, parabuf);

  mbuf = modebuf + strlen(modebuf);
  para[0] = para[1] = para[2] = para[3] = "";
  pargs = 0;
  nick_pointer = sjbuf;

  *mbuf++ = '+';

  for (s = s0 = strtoken(&p, parv[args+4], " "); s;
       				s = s0 = strtoken(&p, (char *)NULL, " "))
    {
      fl = 0;

      if (*s == '@')
	{
	  fl |= MODE_CHANOP;
	  s++;
	}
      else if (*s == '+')
	{
	  fl |= MODE_VOICE;
	  s++;
	}

      if (*s == '+')
	{
	  fl |= MODE_VOICE;
	  s++;
	}
      else if (*s == '@')
	{
	  fl |= MODE_CHANOP;
	  s++;
	}
      
      /* Lets think about this one for a bit... 
       * if seen it should be respected.. but not necessarily
       * ever sent!
       */
      if (*s == '%')
	{
	  fl |= MODE_HALFOP;
	  s++;
	}

      if (!keep_new_modes)
       {
        if (fl & MODE_CHANOP)
          {
            fl = MODE_DEOPPED;
          }
        else
          {
            fl = 0;
          }
       }

      if (!(acptr = find_chasing(sptr, s, NULL)))
        continue;
      if (acptr->from != cptr)
        continue;
      people++;
      if (!IsMember(acptr, chptr))
        {
          add_user_to_channel(chptr, acptr, fl);
	  /* XXX vchan stuff */

	  if( top_chptr )
	    {
	      add_vchan_to_client_cache(acptr,top_chptr, chptr);
	      sendto_channel_local(ALL_MEMBERS,chptr, ":%s!%s@%s JOIN :%s",
				   acptr->name,
				   acptr->username,
				   acptr->host,
				   top_chptr->chname);
	    }
	  else
	    {
	      sendto_channel_local(ALL_MEMBERS,chptr, ":%s!%s@%s JOIN :%s",
				   acptr->name,
				   acptr->username,
				   acptr->host,
				   parv[2]);
	    }
        }

      /* XXX if (server_nick_count >= MAXMODEPARAMS) ... 
       *  if this is ever a possibility...
       */
      if (keep_new_modes)
	ircsprintf(nick_pointer,"%s ", s0);
      else
	ircsprintf(nick_pointer,"%s ", s);

      nick_pointer += strlen(nick_pointer);

      if (fl & MODE_CHANOP)
        {
          *mbuf++ = 'o';
	  para[pargs++] = s;
          if (pargs >= MAXMODEPARAMS)
            {
              *mbuf = '\0';
	      if(IsVchan(chptr) && top_chptr)
		{
		  sendto_channel_local(hide_or_not, chptr,
				       ":%s MODE %s %s %s %s %s %s",
				       sptr->name,
				       top_chptr->chname,
				       modebuf,
				       para[0],para[1],para[2],para[3]);
		}
	      else
		{
		  sendto_channel_local(hide_or_not, chptr,
				       ":%s MODE %s %s %s %s %s %s",
				       sptr->name,
				       chptr->chname,
				       modebuf,
				       para[0],para[1],para[2],para[3]);
		}
              mbuf = modebuf;
              *mbuf++ = '+';
              para[0] = para[1] = para[2] = para[3] = "";
              pargs = 0;
            }
        }
      else if (fl & MODE_VOICE)
        {
          *mbuf++ = 'v';
	  para[pargs++] = s;
          if (pargs >= MAXMODEPARAMS)
            {
              *mbuf = '\0';
	      if(IsVchan(chptr) && top_chptr)
		{
		  sendto_channel_local(hide_or_not, chptr,
				       ":%s MODE %s %s %s %s %s %s",
				       sptr->name,
				       top_chptr->chname,
				       modebuf,
				       para[0],para[1],para[2],para[3]);
		}
	      else
		{
		  sendto_channel_local(hide_or_not, chptr,
				       ":%s MODE %s %s %s %s %s %s",
				       sptr->name,
				       chptr->chname,
				       modebuf,
				       para[0],para[1],para[2],para[3]);
		}
              mbuf = modebuf;
              *mbuf++ = '+';
              para[0] = para[1] = para[2] = para[3] = "";
              pargs = 0;
            }
        }
    }
  
  *mbuf = '\0';
  if (pargs)
    {
      if(IsVchan(chptr) && top_chptr)
	{
	  sendto_channel_local(hide_or_not, chptr,
			       ":%s MODE %s %s %s %s %s %s",
			       sptr->name,
			       top_chptr->chname,
			       modebuf,
			       para[0], para[1], para[2], para[3]);
	}
      else
	{
	  sendto_channel_local(hide_or_not, chptr,
			       ":%s MODE %s %s %s %s %s %s",
			       sptr->name,
			       chptr->chname,
			       modebuf,
			       para[0], para[1], para[2], para[3]);
	}
    }

  sendto_channel_remote(chptr, cptr, "%s %s", buf, sjbuf);

  return 0;
}

/*
 * set_final_mode
 *
 * inputs	- pointer to mode to setup
 *		- pointer to old mode
 * output	- NONE
 * side effects	- 
 */

void set_final_mode(struct Mode *mode,struct Mode *oldmode)
{
  int what = 0;
  char numeric[16];
  char *s;

  if ((MODE_HIDEOPS & mode->mode) && !(MODE_HIDEOPS & oldmode->mode))
  {
	  if (what != 1)
	  {
		  *mbuf++ = '+';
		  what = 1;
	  }
	  *mbuf++ = 'z';
  }
  
  if((MODE_PRIVATE    & mode->mode) && !(MODE_PRIVATE    & oldmode->mode))
    {
      if (what != 1)
        {
          *mbuf++ = '+';
          what = 1;
        }
      *mbuf++ = 'p';
    }
  if((MODE_SECRET     & mode->mode) && !(MODE_SECRET     & oldmode->mode))
    {
      if (what != 1)
        {
          *mbuf++ = '+';
          what = 1;
        }
      *mbuf++ = 's';
    }
  if((MODE_MODERATED  & mode->mode) && !(MODE_MODERATED  & oldmode->mode))
    {
      if (what != 1)
        {
          *mbuf++ = '+';
          what = 1;
        }
      *mbuf++ = 'm';
    }
  if((MODE_NOPRIVMSGS & mode->mode) && !(MODE_NOPRIVMSGS & oldmode->mode))
    {
      if (what != 1)
        {
          *mbuf++ = '+';
          what = 1;
        }
      *mbuf++ = 'n';
    }
  if((MODE_TOPICLIMIT & mode->mode) && !(MODE_TOPICLIMIT & oldmode->mode))
    {
      if (what != 1)
        {
          *mbuf++ = '+';
          what = 1;
        }
      *mbuf++ = 't';
    }
  if((MODE_INVITEONLY & mode->mode) && !(MODE_INVITEONLY & oldmode->mode))
    {
      if (what != 1)
        {
          *mbuf++ = '+';
          what = 1;             /* This one is actually redundant now */
        }
      *mbuf++ = 'i';
    }

  if((MODE_PRIVATE    & oldmode->mode) && !(MODE_PRIVATE    & mode->mode))
    {
      if (what != -1)
        {
          *mbuf++ = '-';
          what = -1;
        }
      *mbuf++ = 'p';
    }
  if((MODE_SECRET     & oldmode->mode) && !(MODE_SECRET     & mode->mode))
    {
      if (what != -1)
        {
          *mbuf++ = '-';
          what = -1;
        }
      *mbuf++ = 's';
    }
  if ((MODE_HIDEOPS & oldmode->mode) && !(MODE_HIDEOPS & mode->mode))
  {
	  if (what != -1)
	  {
		  *mbuf++ = '-';
		  what = -1;
	  }
	  *mbuf++ = 'z';
  }
  
  if((MODE_MODERATED  & oldmode->mode) && !(MODE_MODERATED  & mode->mode))
    {
      if (what != -1)
        {
          *mbuf++ = '-';
          what = -1;
        }
      *mbuf++ = 'm';
    }
  if((MODE_NOPRIVMSGS & oldmode->mode) && !(MODE_NOPRIVMSGS & mode->mode))
    {
      if (what != -1)
        {
          *mbuf++ = '-';
          what = -1;
        }
      *mbuf++ = 'n';
    }
  if((MODE_TOPICLIMIT & oldmode->mode) && !(MODE_TOPICLIMIT & mode->mode))
    {
      if (what != -1)
        {
          *mbuf++ = '-';
          what = -1;
        }
      *mbuf++ = 't';
    }
  if((MODE_INVITEONLY & oldmode->mode) && !(MODE_INVITEONLY & mode->mode))
    {
      if (what != -1)
        {
          *mbuf++ = '-';
          what = -1;
        }
      *mbuf++ = 'i';
    }

  if (oldmode->limit && !mode->limit)
    {
      if (what != -1)
        {
          *mbuf++ = '-';
          what = -1;
        }
      *mbuf++ = 'l';
    }
  if (oldmode->key[0] && !mode->key[0])
    {
      if (what != -1)
        {
          *mbuf++ = '-';
          what = -1;
        }
      *mbuf++ = 'k';
      strcat(parabuf, oldmode->key);
      strcat(parabuf, " ");
      pargs++;
    }
  if (mode->limit && oldmode->limit != mode->limit)
    {
      if (what != 1)
        {
          *mbuf++ = '+';
          what = 1;
        }
      *mbuf++ = 'l';
      ircsprintf(numeric, "%d", mode->limit);
      if ((s = strchr(numeric, ' ')))
        *s = '\0';
      strcat(parabuf, numeric);
      strcat(parabuf, " ");
      pargs++;
    }
  if (mode->key[0] && strcmp(oldmode->key, mode->key))
    {
      if (what != 1)
        {
          *mbuf++ = '+';
          what = 1;
        }
      *mbuf++ = 'k';
      strcat(parabuf, mode->key);
      strcat(parabuf, " ");
      pargs++;
    }
}

/*
 * remove_our_modes
 *
 * inputs	- hide from ops or not int flag
 *		- pointer to channel to remove modes from
 *		- if vchan basechannel pointer 
 *		- client pointer
 * output	- NONE
 * side effects	- Go through the local members, remove all their
 *		  chanop modes etc., this side lost the TS.
 */
void remove_our_modes( int hide_or_not,
		       struct Channel *chptr, struct Channel *top_chptr,
		       struct Client *sptr)
{
  remove_a_mode(hide_or_not, chptr, top_chptr, sptr, &chptr->chanops, 'o');
  remove_a_mode(hide_or_not, chptr, top_chptr, sptr, &chptr->halfops, 'h');
  remove_a_mode(hide_or_not, chptr, top_chptr, sptr, &chptr->voiced, 'v');

  /* Move all voice/ops etc. to non opped list */
  dlinkMoveList(&chptr->chanops, &chptr->peons);
  dlinkMoveList(&chptr->halfops, &chptr->peons);
  dlinkMoveList(&chptr->voiced, &chptr->peons);

  chptr->opcount = 0;
}


/*
 * remove_a_mode
 *
 * inputs	-
 * output	- NONE
 * side effects	- remove ONE mode from a channel
 */
void remove_a_mode( int hide_or_not,
		    struct Channel *chptr, struct Channel *top_chptr,
		    struct Client *sptr, dlink_list *list, char flag)
{
  dlink_node *ptr;
  struct Client *acptr;
  char buf[BUFSIZE];
  char modebuf[MODEBUFLEN];
  char *para[MAXMODEPARAMS];
  char *chname;
  int count = 0;

  mbuf = modebuf;
  *mbuf++ = '-';

  para[0] = para[1] = para[2] = para[3] = "";

  chname = chptr->chname;

  if(IsVchan(chptr) && top_chptr)
    chname = top_chptr->chname;

  ircsprintf(buf,":%s MODE %s ", sptr->name, chname);

  for (ptr = list->head; ptr && ptr->data; ptr = ptr->next)
    {
      acptr = ptr->data;
      para[count++] = acptr->name;

      *mbuf++ = flag;

      if (count >= MAXMODEPARAMS)
	{
	  *mbuf   = '\0';
	  sendto_channel_local(hide_or_not, chptr,
			       ":%s MODE %s %s %s %s %s %s",
			       sptr->name,
			       chname,
			       modebuf,
			       para[0], para[1], para[2], para[3] );

	  mbuf = modebuf;
	  *mbuf++ = '-';
	  count = 0;
	  para[0] = para[1] = para[2] = para[3] = "";
	}
    }

  if(count != 0)
    {
      *mbuf   = '\0';
      sendto_channel_local(hide_or_not, chptr,
			   ":%s MODE %s %s %s %s %s %s",
			   sptr->name,
			   chname,
			   modebuf,
			   para[0], para[1], para[2], para[3] );

    }
}
