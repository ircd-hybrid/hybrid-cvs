/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  hash.c: Maintains hashtables.
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
 *  $Id: hash.c,v 7.63 2003/05/22 17:09:08 michael Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "s_conf.h"
#include "channel.h"
#include "client.h"
#include "common.h"
#include "list.h"
#include "hash.h"
#include "resv.h"
#include "irc_string.h"
#include "ircd.h"
#include "numeric.h"
#include "send.h"
#include "s_debug.h"
#include "memory.h"
#include "dbuf.h"

/* XXX ZZZ for "safe_list" *ugh* */
#include "channel.h"
#include "channel_mode.h"

/* New hash code */
/*
 * Contributed by James L. Davis
 */

static unsigned int hash_channel_name(const char *name);

static struct HashEntry clientTable[U_MAX];
static struct HashEntry channelTable[CH_MAX];
static struct HashEntry idTable[U_MAX];
static struct HashEntry resvTable[R_MAX];

/* XXX move channel hash into channel.c or hash channel stuff in channel.c
 * into here eventually -db
 */
extern BlockHeap *channel_heap;

size_t
hash_get_channel_table_size(void)
{
  return(sizeof(struct HashEntry) * CH_MAX);
}

size_t
hash_get_client_table_size(void)
{
  return(sizeof(struct HashEntry) * U_MAX);
}

size_t
hash_get_resv_table_size(void)
{
  return(sizeof(struct HashEntry) * R_MAX);
}

size_t
hash_get_id_table_size(void)
{
  return(sizeof(struct HashEntry) * U_MAX);
}

/*
 * look in whowas.c for the missing ...[WW_MAX]; entry
 */

/*
 * Hashing.
 *
 *   The server uses a chained hash table to provide quick and efficient
 * hash table maintenance (providing the hash function works evenly over
 * the input range).  The hash table is thus not susceptible to problems
 * of filling all the buckets or the need to rehash.
 *    It is expected that the hash table would look something like this
 * during use:
 *                   +-----+    +-----+    +-----+   +-----+
 *                ---| 224 |----| 225 |----| 226 |---| 227 |---
 *                   +-----+    +-----+    +-----+   +-----+
 *                      |          |          |
 *                   +-----+    +-----+    +-----+
 *                   |  A  |    |  C  |    |  D  |
 *                   +-----+    +-----+    +-----+
 *                      |
 *                   +-----+
 *                   |  B  |
 *                   +-----+
 *
 * A - GOPbot, B - chang, C - hanuaway, D - *.mu.OZ.AU
 *
 * The order shown above is just one instant of the server. 
 */

static unsigned int
hash_nick_name(const char *name)
{
  unsigned int h = 0;

  while (*name)
  {
    h = (h << 4) - (h + (unsigned char)ToLower(*name++));
  }

  return(h & (U_MAX - 1));
}

/* hash_id()
 *
 * IDs are a easy to hash -- they're already evenly distributed,
 * and they are always case sensitive.   -orabidoo
 */
static unsigned int 
hash_id(const char *nname)
{
  unsigned int h = 0;

  while (*nname)
  {
    h = (h << 4) - (h + (unsigned char)*nname++);
  }

  return(h & (U_MAX - 1));
}

/* hash_channel_name()
 *
 * calculate a hash value on at most the first 30 characters of the channel
 * name. Most names are short than this or dissimilar in this range. There
 * is little or no point hashing on a full channel name which maybe 255 chars
 * long.
 */
static unsigned int
hash_channel_name(const char *name)
{
  int i = 30;
  unsigned int h = 0;

  while (*name && --i)
  {
    h = (h << 4) - (h + (unsigned char)ToLower(*name++));
  }

  return(h & (CH_MAX - 1));
}

/* hash_resv_channel()
 *
 * calculate a hash value on at most the first 30 characters and add
 * it to the resv hash
 */
static unsigned int
hash_resv_channel(const char *name)
{
  int i = 30;
  unsigned int h = 0;

  while (*name && --i)
  {
    h = (h << 4) - (h + (unsigned char)ToLower(*name++));
  }

  return(h & (R_MAX -1));
}

void
init_hash_tables(void)
{
  memset(channelTable, 0, sizeof(struct HashEntry) * CH_MAX);
  memset(clientTable, 0, sizeof(struct HashEntry) * U_MAX);
  memset(resvTable, 0, sizeof(struct HashEntry) * R_MAX);
  memset(idTable, 0, sizeof(struct HashEntry) * U_MAX);
}

/* add_to_id_hash_table()
 */
void
add_to_id_hash_table(const char *name, struct Client *client_p)
{
  unsigned int hashv;

  if (name == NULL || client_p == NULL)
    return;

  hashv = hash_id(name);
  client_p->idhnext = (struct Client *)idTable[hashv].list;
  idTable[hashv].list = (void *)client_p;
  idTable[hashv].links++;
  idTable[hashv].hits++;
}

/* add_to_client_hash_table()
 */
void 
add_to_client_hash_table(const char *name, struct Client *client_p)
{
  unsigned int hashv;

  if (name == NULL || client_p == NULL)
    return;

  hashv = hash_nick_name(name);
  client_p->hnext = (struct Client *)clientTable[hashv].list;
  clientTable[hashv].list = (void *)client_p;
  ++clientTable[hashv].links;
  ++clientTable[hashv].hits;
}

/* add_to_resv_hash_table()
 */
void
add_to_resv_hash_table(const char *name, struct ResvChannel *resv_p)
{
  unsigned int hashv;

  if (name == NULL || resv_p == NULL)
    return;

  hashv = hash_resv_channel(name);
  resv_p->hnext = (struct ResvChannel *)resvTable[hashv].list;
  resvTable[hashv].list = (void *)resv_p;
  ++resvTable[hashv].links;
  ++resvTable[hashv].hits;
}

/*
 * del_from_id_hash_table - remove a client/server from the id
 * hash table
 */
void
del_from_id_hash_table(const char *id, struct Client *client_p)
{
  struct Client *found_client;
  struct Client *prev = NULL;
  unsigned int hashv;

  assert(id != NULL);
  assert(client_p != NULL);

  if (id == NULL || client_p == NULL)
    return;

  hashv        = hash_id(id);
  found_client = (struct Client *)idTable[hashv].list;

  for (; found_client; found_client = found_client->idhnext)
  {
    if (found_client == client_p)
    {
      if (prev)
        prev->idhnext = found_client->idhnext;
      else
        idTable[hashv].list = (void *)found_client->idhnext;
      found_client->idhnext = NULL;

      assert(idTable[hashv].links > 0);
      if (idTable[hashv].links > 0)
        --idTable[hashv].links;
      return;
     }
     prev = found_client;
  }
}

/*
 * del_from_client_hash_table - remove a client/server from the client
 * hash table
 */
void
del_from_client_hash_table(const char *name, struct Client *client_p)
{
  struct Client *found_client;
  struct Client *prev = NULL;
  unsigned int hashv;

  assert(name != NULL);
  assert(client_p != NULL);

  if (name == NULL || client_p == NULL)
    return;

  hashv        = hash_nick_name(name);
  found_client = (struct Client *)clientTable[hashv].list;

  for (; found_client; found_client = found_client->hnext)
  {
    if (found_client == client_p)
    {
      if (prev)
        prev->hnext = found_client->hnext;
      else
        clientTable[hashv].list = (void *)found_client->hnext;
      found_client->hnext = NULL;

      assert(clientTable[hashv].links > 0);
      if (clientTable[hashv].links > 0)
        --clientTable[hashv].links;
      return;
     }
     prev = found_client;
  }
}

/* del_from_channel_hash_table()
 */
void
del_from_channel_hash_table(const char *name, struct Channel *chptr)
{
  struct Channel *found_chptr;
  struct Channel *prev = NULL;
  unsigned int hashv;

  assert(name != NULL);
  assert(chptr != NULL);

  if (name == NULL || chptr == NULL)
    return;

  hashv       = hash_channel_name(name);
  found_chptr = (struct Channel *)channelTable[hashv].list;

  for (; found_chptr; found_chptr = found_chptr->hnextch)
  {
    if (found_chptr == chptr)
    {
      if (prev)
        prev->hnextch = found_chptr->hnextch;
      else
        channelTable[hashv].list = (void *)found_chptr->hnextch;
      found_chptr->hnextch = NULL;

      assert(channelTable[hashv].links > 0);
      if (channelTable[hashv].links > 0)
        --channelTable[hashv].links;
      return;
    }
    prev = found_chptr;
  }
}

/* del_from_resv_hash_table()
 */
void 
del_from_resv_hash_table(const char *name, struct ResvChannel *rptr)
{
  struct ResvChannel *found_chptr;
  struct ResvChannel *prev = NULL;
  unsigned int hashv;

  assert(name != NULL);
  assert(rptr != NULL);

  if (name == NULL || rptr == NULL)
    return;

  hashv       = hash_resv_channel(name);
  found_chptr = (struct ResvChannel *)resvTable[hashv].list;

  for (; found_chptr; found_chptr = found_chptr->hnext)
  {
    if (found_chptr == rptr)
    {
      if (prev)
        prev->hnext = found_chptr->hnext;
      else
        resvTable[hashv].list = (void *)found_chptr->hnext;
      found_chptr->hnext=NULL;

      assert(resvTable[hashv].links > 0);
      --resvTable[hashv].links;
      return;
    }
  }
}

/* find_id()
 */
struct Client *
find_id(const char *name)
{
  struct Client *found_client;
  unsigned int hashv;

  assert(name != NULL);

  if (name == NULL)
    return(NULL);

  hashv        = hash_id(name);
  found_client = (struct Client *)idTable[hashv].list;

  /* Got the bucket, now search the chain. */
  for (; found_client; found_client = found_client->idhnext)
    if (found_client->user && strcmp(name, found_client->user->id) == 0)
      return(found_client);

  return(NULL);
}

/* find_client()
 *
 * inputs	- name of either server or client
 * output	- pointer to client pointer
 * side effects	- none
 */
struct Client *
find_client(const char *name)
{
  struct Client *found_client;
  unsigned int hashv;

  assert(name != NULL);

  if (name == NULL)
    return(NULL);

  if (*name == '.') /* it's an ID .. */
    return(find_id(name));

  hashv        = hash_nick_name(name);
  found_client = (struct Client *)clientTable[hashv].list;

  for (; found_client; found_client = found_client->hnext)
    if (irccmp(name, found_client->name) == 0)
      return(found_client);

  return(NULL);
}

/*
 * Whats happening in this next loop ? Well, it takes a name like
 * foo.bar.edu and proceeds to earch for *.edu and then *.bar.edu.
 * This is for checking full server names against masks although
 * it isnt often done this way in lieu of using matches().
 *
 * Rewrote to do *.bar.edu first, which is the most likely case,
 * also made const correct
 * --Bleep
 */
static struct Client *
hash_find_masked_server(const char *name)
{
  char buf[HOSTLEN + 1];
  char *p = buf;
  char *s;
  struct Client* server;

  if ('*' == *name || '.' == *name)
    return(NULL);

  /*
   * copy the damn thing and be done with it
   */
  strlcpy(buf, name, sizeof(buf));

  while ((s = strchr(p, '.')) != 0)
  {
    *--s = '*';

    /* Dont need to check IsServer() here since nicknames cant
     * have *'s in them anyway.
     */
    if ((server = find_client(s)))
      return(server);
    p = s + 2;
  }

  return(NULL);
}

/* find_server()
 *
 * inputs	- pointer to server name
 * output	- NULL if given name is NULL or
 *		  given server not found
 * side effects	-
 */
struct Client *
find_server(const char *name)
{
  struct Client *found_server;
  unsigned int hashv;

  assert(name != NULL);

  if (name == NULL)
    return(NULL);

  hashv        = hash_nick_name(name);
  found_server = (struct Client *)clientTable[hashv].list;

  for (; found_server; found_server = found_server->hnext)
  {
    if (!IsServer(found_server) && !IsMe(found_server))
      continue;
    if (irccmp(name, found_server->name) == 0)
      return(found_server);
  }

  return(hash_find_masked_server(name));
}

/* hash_find_channel()
 *
 * inputs	- pointer to name
 * output	- 
 * side effects	-
 */
struct Channel *
hash_find_channel(const char *name)
{
  struct Channel *found_chptr;
  unsigned int hashv;

  assert(name != NULL);

  if (name == NULL)
    return(NULL);

  hashv       = hash_channel_name(name);
  found_chptr = (struct Channel *)channelTable[hashv].list;

  for (; found_chptr; found_chptr = found_chptr->hnextch)
    if (irccmp(name, found_chptr->chname) == 0)
      return(found_chptr);

  return(NULL);
}

/* get_or_create_channel()
 *
 * inputs       - client pointer
 *              - channel name
 *              - pointer to int flag whether channel was newly created or not
 * output       - returns channel block or NULL if illegal name
 *		- also modifies *isnew
 *
 *  Get Channel block for chname (and allocate a new channel
 *  block, if it didn't exist before).
 */
struct Channel *
get_or_create_channel(struct Client *client_p, char *chname, int *isnew)
{
  struct Channel *chptr;
  struct Channel *found_chptr;
  unsigned int hashv;
  int len;

  if (EmptyString(chname))
    return(NULL);

  len = strlen(chname);

  if (len > CHANNELLEN)
  {
    if (IsServer(client_p))
    {
      sendto_realops_flags(UMODE_DEBUG, L_ALL, "*** Long channel name from %s (%d > %d): %s",
                           client_p->name, len, CHANNELLEN, chname);
    }

    len = CHANNELLEN;
    *(chname + CHANNELLEN) = '\0';
  }

  hashv = hash_channel_name(chname);

  for (found_chptr = (struct Channel *)channelTable[hashv].list;
       found_chptr; found_chptr = found_chptr->hnextch)
  {
    if (irccmp(chname, found_chptr->chname) == 0)
    {
      if (isnew != NULL)
        *isnew = 0;
      return(found_chptr);
    }
  }

  if (isnew != NULL)
    *isnew = 1;

  chptr = BlockHeapAlloc(channel_heap);
  memset(chptr, 0, sizeof(struct Channel));
  strlcpy(chptr->chname, chname, sizeof(chptr->chname));
  dlinkAdd(chptr, &chptr->node, &global_channel_list);
  chptr->channelts = CurrentTime; /* doesn't hurt to set it here */

  chptr->hnextch = (struct Channel *)channelTable[hashv].list;
  channelTable[hashv].list = (void *)chptr;
  ++channelTable[hashv].links;
  ++channelTable[hashv].hits;

  return(chptr);
}

/* hash_find_resv()
 */
struct ResvChannel *
hash_find_resv(const char *name)
{
  struct ResvChannel *found_chptr;
  unsigned int hashv;

  assert(name != NULL);

  if (name == NULL)
    return(NULL);

  hashv       = hash_resv_channel(name);
  found_chptr = (struct ResvChannel *)resvTable[hashv].list;

  for (; found_chptr; found_chptr = found_chptr->hnext)
    if(irccmp(name, found_chptr->name) == 0)
      return(found_chptr);
  return(NULL);
}

/*
 * Safe list code.
 *
 * The idea is really quite simple. As the link lists pointed to in
 * each "bucket" of the channel hash table are traversed atomically
 * there is no locking needed. Overall, yes, inconsistent reported
 * state can still happen, but normally this isn't a big deal.
 * I don't like sticking the code into hash.c but oh well. Moreover,
 * if a hash isn't used in future, oops.
 *
 * - Dianora
 */

/* exceeding_sendq()
 *
 * inputs       - pointer to client to check
 * ouput	- 1 if client is in danger of blowing its sendq
 *		  0 if it is not.
 * side effects -
 *
 * Sendq limit is fairly conservative at 1/2 (In original anyway)
 */
static int
exceeding_sendq(struct Client *to)
{
  if (dbuf_length(&to->localClient->buf_sendq) > (get_sendq(to) / 2))
    return(1);
  else
    return(0);
}

void free_list_task(struct ListTask *lt, struct Client *source_p)
{
  dlink_node *dl, *dln;

  DLINK_FOREACH_SAFE(dl, dln, lt->show_mask.head)
  {
    MyFree(dl->data);
    free_dlink_node(dl);
  }
  DLINK_FOREACH_SAFE(dl, dln, lt->hide_mask.head)
  {
    MyFree(dl->data);
    free_dlink_node(dl);
  }

  MyFree(lt);

  if (MyConnect(source_p))
    source_p->localClient->list_task = NULL;
}

/* list_allow_channel()
 *
 * inputs       - channel name
 *              - pointer to a list task
 * output       - 1 if the channel is to be displayed
 *                0 otherwise
 * side effects -
 */
static int list_allow_channel(char *chname, struct ListTask *lt)
{
  dlink_node *dl;

  DLINK_FOREACH(dl, lt->show_mask.head)
    if (!match((char *)dl->data, chname))
      return(0);
  DLINK_FOREACH(dl, lt->hide_mask.head)
    if (match((char *)dl->data, chname))
      return(0);
  return(1);
}

/* list_one_channel()
 *
 * inputs       - client pointer to return result to
 *              - pointer to channel to list
 *              - pointer to ListTask structure
 * ouput	- none
 * side effects -
 */
static void
list_one_channel(struct Client *source_p, struct Channel *chptr,
                 struct ListTask *list_task, int remote_request)
{
  if ((remote_request && chptr->chname[0] == '&') ||
      (SecretChannel(chptr) && !IsMember(source_p, chptr)))
    return;
  if ((unsigned int) chptr->users < list_task->users_min ||
      (unsigned int) chptr->users > list_task->users_max ||
      (chptr->channelts != 0 &&
       ((unsigned int) chptr->channelts < list_task->created_min ||
        (unsigned int) chptr->channelts > list_task->created_max)) ||
      (unsigned int) chptr->topic_time < list_task->topicts_min ||
      (chptr->topic_time ? (unsigned int) chptr->topic_time : UINT_MAX) >
      list_task->topicts_max)
    return;

  if (!list_allow_channel(chptr->chname, list_task))
    return;
  sendto_one(source_p, form_str(RPL_LIST), me.name, source_p->name,
             chptr->chname, chptr->users,
             chptr->topic == NULL ? "" : chptr->topic );
}

/* safe_list_channels()
 *
 * inputs	- pointer to client requesting list
 * output	- 0/1
 * side effects	- safely list all channels to source_p
 *
 * Walk the channel buckets, ensure all pointers in a bucket are
 * traversed before blocking on a sendq. This means, no locking is needed.
 *
 * N.B. This code is "remote" safe, but is not currently used for
 * remote clients.
 *
 * - Dianora
 */
void
safe_list_channels(struct Client *source_p, struct ListTask *list_task,
                   int only_unmasked_channels, int remote_request)
{
  struct Channel *chptr;

  if (!only_unmasked_channels)
  {
    int i;

    for (i = list_task->hash_index; i < CH_MAX; i++)
    {
      for (chptr = channelTable[i].list; chptr; chptr = chptr->hnextch)
        list_one_channel(source_p, chptr, list_task, remote_request);

      if (MyConnect(source_p))
      {
        if (exceeding_sendq(source_p))
        {
          list_task->hash_index = i;
          return; /* still more to do */
        }
      }
    }
  }
  else
  {
    dlink_node *dl;

    DLINK_FOREACH(dl, list_task->show_mask.head)
      if ((chptr = hash_find_channel((const char *)dl->data)) != NULL)
        list_one_channel(source_p, chptr, list_task, remote_request);
  }

  free_list_task(list_task, source_p);
  sendto_one(source_p, form_str(RPL_LISTEND), me.name, source_p->name);
}
