/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  vchannel.c: Virtual channel functions
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
 *  $Id: vchannel.c,v 7.69 2003/04/14 08:41:15 michael Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "vchannel.h"
#include "channel.h"
#include "channel_mode.h"
#include "client.h"
#include "common.h"
#include "hash.h"
#include "irc_string.h"
#include "ircd.h"
#include "list.h"
#include "send.h"
#include "numeric.h"
#include "memory.h"
#include "s_conf.h"             /* ConfigFileEntry */


#ifdef VCHANS
static void vchan_show_ids(struct Client *source_p, struct Channel *chptr);

/* cjoin_channel()
 *
 * input	- root channel
 *		- client whos joining
 *		- channel name
 * output	- none
 * side effects - vchan is created or client is told otherwise
 */
struct Channel *
cjoin_channel(struct Channel *root, struct Client *source_p, char *name)
{
  char vchan_name[CHANNELLEN];
  struct Channel *vchan_chptr;
  int vchan_ts;

  /* don't cjoin a vchan, only the top is allowed */
  if (IsVchan(root))
  {
    /* could send a notice here, but on a vchan aware
     * server they shouldn't see the sub chans anyway
     */
    sendto_one(source_p, form_str(ERR_NOSUCHCHANNEL),
               me.name, source_p->name, name);
    return(NULL);
  }

  if (on_sub_vchan(root, source_p))
  {
    sendto_one(source_p, form_str(ERR_ALREADYONVCHAN),
               me.name, source_p->name, name);
    return(NULL);
  }

  /* "root" channel name exists, now create a new copy of it */
  if (strlen(name) > CHANNELLEN - 15)
  {
    sendto_one(source_p, form_str(ERR_BADCHANNAME),
               me.name, source_p->name, name);
    return(NULL);
  }

  if ((source_p->user->joined >= ConfigChannel.max_chans_per_user) &&
      (!IsOper(source_p) || (source_p->user->joined >=
                             ConfigChannel.max_chans_per_user * 3)))
    {
      sendto_one(source_p, form_str(ERR_TOOMANYCHANNELS),
                 me.name, source_p->name, name);
      return(NULL);
    }

  /* Find an unused vchan name (##<chan>_<ts> format) */
  vchan_ts = CurrentTime - 1;

  do
    {
      vchan_ts++;

      /* 
       * We have to give up eventually, so only allow the TS
       * to be up to MAX_TS_DELTA seconds out.
       */
      if (vchan_ts > (CurrentTime + ConfigFileEntry.ts_max_delta))
        {
          sendto_one(source_p, form_str(ERR_UNAVAILRESOURCE),
                     me.name, source_p->name, name);
          return(NULL);
        }

      ircsprintf(vchan_name, "##%s_%u", name + 1, vchan_ts);
      vchan_chptr = hash_find_channel(vchan_name);
  } while (vchan_chptr);

  vchan_chptr = get_or_create_channel(source_p, vchan_name, NULL);

  if (vchan_chptr == NULL)
  {
      sendto_one(source_p, form_str(ERR_BADCHANNAME),
                 me.name, source_p->name, name);
      return(NULL);
  }

  dlinkAdd(vchan_chptr, make_dlink_node(), &root->vchan_list);
  vchan_chptr->root_chptr = root;

  add_vchan_to_client_cache(source_p, root, vchan_chptr);

  vchan_chptr->channelts = vchan_ts;

  del_invite(vchan_chptr, source_p);
  return(vchan_chptr);
}

/* select_vchan()
 * 
 * inputs	- pointer to root channel
 *		- pointer to client
 *		- vchan key
 *		- channel name
 * outputs 	- none
 * side effects	- user is shown vchans, vchan picked, or root returned
 */
struct Channel *
select_vchan(struct Channel *root, struct Client *source_p,
             char *vkey, char *name)
{
  struct Channel *chptr;

  if (IsVchanTop(root))
    {
      if (on_sub_vchan(root, source_p))
        return(NULL);
      if (vkey && vkey[0] == '!')
        {
          /* user joined with key "!".  force listing.
             (this prevents join-invited-chan voodoo) */
          if (!vkey[1])
            {
              show_vchans(source_p, root, "join");
              return(NULL);
            }

          /* found a matching vchan? let them join it */
          if ((chptr = find_vchan(root, vkey)))
            return(chptr);
          else
            {
              sendto_one(source_p, form_str(ERR_NOSUCHCHANNEL),
                         me.name, source_p->name, name);
              return(NULL);
            }
        }
      else
        {
          /* voodoo to auto-join channel invited to */
          if ((chptr = vchan_invites(root, source_p)))
            return(chptr);
          /* otherwise, they get a list of channels */
          else
            {
              show_vchans(source_p, root, "join");
              return(NULL);
            }
        }
    }
  /* trying to join a sub chans 'real' name
   * don't allow that
   */
  else if (IsVchan(root))
    {
      sendto_one(source_p, form_str(ERR_BADCHANNAME),
                 me.name, source_p->name, name);
      return(NULL);
    }
  return(root);
}

/* add_vchan_to_client_cache()
 *
 * input	- pointer to client
 *		- pointer to root channel
 *		- vchan
 * output	- none
 * side effects - add vchan pointer to clients cache
 */
void
add_vchan_to_client_cache(struct Client *source_p,
                          struct Channel *root_chan,
                          struct Channel *vchan)
{
  struct Vchan_map *vchan_info;

  assert(source_p != NULL);

  if (source_p == NULL)
    return;

  /* oops its the top channel of the subchans */
  if (root_chan == vchan)
    return;

  vchan_info = (struct Vchan_map *)MyMalloc(sizeof(struct Vchan_map));
  vchan_info->base_chan = root_chan;
  vchan_info->vchan = vchan;

  dlinkAdd(vchan_info, make_dlink_node(), &source_p->vchan_map);
}

/* del_vchan_from_client_cache()
 *
 * inputs	- pointer to client
 * 		- pointer to vchan
 * output	- none
 * side effects - remove vchan pointer from clients cache
 */
void
del_vchan_from_client_cache(struct Client *source_p, struct Channel *vchan)
{
  dlink_node *vchanmap_node;
  struct Vchan_map *vchan_info;

  assert(source_p != NULL);

  if (source_p == NULL)
    return;

  DLINK_FOREACH(vchanmap_node, source_p->vchan_map.head)
  {
    vchan_info = vchanmap_node->data;

    if (vchan_info->vchan == vchan)
    {
      MyFree(vchan_info);
      dlinkDelete(vchanmap_node, &source_p->vchan_map);
      free_dlink_node(vchanmap_node);
      return;
    }
  }
}

/* on_sub_vchan()
 * 
 * input	- pointer to channel
 *		- pointer to client
 * output	- none
 * side effects	- return YES if client is on a vchan, else NO
 */
int
on_sub_vchan(struct Channel *chptr, struct Client *source_p)
{
  dlink_node *vchanmap_node;
  struct Vchan_map *vchan_info;

  assert(source_p != NULL);

  if (source_p == NULL)
    return(NO);

  /* they are in the root chan */
  if (IsMember(source_p, chptr))
    return(YES);

  /* check to see if this chptr maps to a sub vchan */
  DLINK_FOREACH(vchanmap_node, source_p->vchan_map.head)
  {
    vchan_info = vchanmap_node->data;

    if (vchan_info->base_chan == chptr)
      return(YES);
  }

  return(NO);
}

/* map_vchan()
 *
 * input	- pointer to channel
 *		- pointer to client
 * output	- none
 * side effects - return matching vchan given base chan and source
 */
struct Channel *
map_vchan(struct Channel *chptr, struct Client *source_p)
{
  dlink_node *vchanmap_node;
  struct Vchan_map *vchan_info;

  assert(source_p != NULL);

  if (source_p == NULL)
    return(NULL);

  /* they're in the root chan */
  if (IsMember(source_p, chptr))
    return(chptr);

  /* check to see if this chptr maps to a sub vchan */
  DLINK_FOREACH(vchanmap_node, source_p->vchan_map.head)
  {
    vchan_info = vchanmap_node->data;

    if (vchan_info->base_chan == chptr)
      return(vchan_info->vchan);
  }

  return(NULL);
}

/* find_bchan()
 *
 * input	- pointer to channel
 * output	- none
 * side effects - root channel is returned
 */
struct Channel *
find_bchan(struct Channel *chptr)
{
  return(chptr->root_chptr);
}

/* show_vchans()
 *
 * input	- pointer to client
 *		- pointer to channel
 *		- command given (ie: knock/join)
 * output	- none
 * side effects - client is shown list of vchans
 */
void
show_vchans(struct Client *source_p, struct Channel *chptr, char *command)
{
  int no_of_vchans = 0;

  /* include the root itself in the count */
  no_of_vchans = dlink_list_length(&chptr->vchan_list) + 1;

  sendto_one(source_p, form_str(RPL_VCHANEXIST),
             me.name, source_p->name, chptr->chname, no_of_vchans);

  vchan_show_ids(source_p, chptr);

  sendto_one(source_p, form_str(RPL_VCHANHELP),
             me.name, source_p->name, command, chptr->chname);
}

/* vchan_show_ids()
 *
 * inputs	- pointer to client to report to
 *		- pointer to channel
 * output	- none
 * side effects - client is sent list of ids for channel
 */
static void
vchan_show_ids(struct Client *source_p, struct Channel *chptr)
{
  char buf[BUFSIZE];
  char *t;
  int mlen;
  int cur_len;
  int tlen;
  int done_secret = 0;
  dlink_node *ptr;
  struct Channel *chtmp;

  ircsprintf(buf, form_str(RPL_VCHANLIST), me.name,
             source_p->name, chptr->chname);

  mlen = strlen(buf);
  cur_len = mlen;
  t = buf + mlen;

  if (!SecretChannel(chptr))
  {
      ircsprintf(t, "!%s ", pick_vchan_id(chptr));
      tlen = strlen(t);
      cur_len += tlen;
      t += tlen;
  }
  else
  {
      strcpy(t, "<secret> ");
      tlen = 9;
      cur_len += tlen;
      t += tlen;
      done_secret = 1;
  }

  DLINK_FOREACH(ptr, chptr->vchan_list.head)
  {
      chtmp = ptr->data;

      if (cur_len > (BUFSIZE - (NICKLEN * 2 + 5)))
        {
          sendto_one(source_p, "%s", buf);
          cur_len = mlen;
          t = buf + mlen;
        }

      /* Obey the rules of /list */
      if (SecretChannel(chtmp))
        {
          if (!done_secret)
            {
              strcpy(t, "<secret> ");
              tlen = 9;
              cur_len += tlen;
              t += tlen;
              done_secret = 1;
            }
        }
      else
        {
          ircsprintf(t, "!%s ", pick_vchan_id(chtmp));
          tlen = strlen(t);
          cur_len += tlen;
          t += tlen;
        }
  }

  sendto_one(source_p, "%s", buf);
}

/* pick_vchan_id()
 *
 * inputs	- pointer to vchan
 * output	- pointer to static string
 * side effects - pick a name from the channel.
 *                use who's been there longest according 
 *                to the server.
 */
char *
pick_vchan_id(struct Channel *chptr)
{
  dlink_node *lp;
  struct Client *target_p;

  DLINK_FOREACH(lp, chptr->chanops.head)
  {
    if (!lp->next)
    {
      target_p = lp->data;
      return(target_p->name);
    }
  }
#ifdef REQUIRE_OANDV
  DLINK_FOREACH(lp, chptr->chanops_voiced.head)
  {
    if (!lp->next)
    {
      target_p = lp->data;
      return(target_p->name);
    }
  }
#endif
#ifdef HALFOPS
  DLINK_FOREACH(lp, chptr->halfops.head)
  {
    if (!lp->next)
    {
      target_p = lp->data;
      return(target_p->name);
    }
  }
#endif
  DLINK_FOREACH(lp, chptr->voiced.head)
  {
    if (!lp->next)
    {
      target_p = lp->data;
      return(target_p->name);
    }
  }

  DLINK_FOREACH(lp, chptr->peons.head)
  {
    if (!lp->next)
    {
      target_p = lp->data;
      return(target_p->name);
    }
  }

  return(chptr->vchan_id);
}

/* find_vchan()
 *
 * input	- pointer to channel
 * 		- vchan key
 * output	- none
 * side effects - matching vchan is returned, else NULL
 */
struct Channel *
find_vchan(struct Channel *chptr, char *key)
{
  dlink_node *ptr;
  struct Channel *chtmp;
  struct Client *target_p;

  key++; /* go past the '!' */

  if ((target_p = find_client(key)) != NULL)
    if ((chtmp = map_vchan(chptr, target_p)) != NULL)
      return(chtmp);

  /* try and match vchan_id */
  if (*key == '!')
  {
      /* first the root */
      if (chptr->vchan_id && (irccmp(chptr->vchan_id, key) == 0))
        return(chptr);

      /* then it's vchans */
      DLINK_FOREACH(ptr, chptr->vchan_list.head)
        {
          chtmp = ptr->data;
          if (chtmp->vchan_id && (irccmp(chtmp->vchan_id, key) == 0))
            return(chtmp);
        }
  }

  return(NULL);
}

/* vchan_invites()
 *
 * input	- pointer to channel
 * 		- pointer to client
 * output	- none
 * side effects - return matching invite for vchans, else NULL
 */
struct Channel *
vchan_invites(struct Channel *chptr, struct Client *source_p)
{
  dlink_node *lp;
  dlink_node *vptr;
  struct Channel *cp;

  /* loop is nested this way to prevent preferencing
   * channels higher in the vchan list
   */
  DLINK_FOREACH(lp, source_p->user->invited.head)
  {
      /* check root first */
      if (lp->data == chptr)
        return(chptr);

      /* then vchan list */
      DLINK_FOREACH(vptr, chptr->vchan_list.head)
      {
          cp = vptr->data;

          if (lp->data == cp)
            return(cp);
      }
  }

  return(NULL);
}
#endif
