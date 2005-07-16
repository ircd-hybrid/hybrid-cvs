/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  channel.h: The ircd channel header.
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
 *  $Id: channel.h,v 7.161 2005/07/16 12:19:41 michael Exp $
 */

#ifndef INCLUDED_channel_h
#define INCLUDED_channel_h

#include "ircd_defs.h"        /* KEYLEN, CHANNELLEN */
#include "tools.h"

struct Client;

/* mode structure for channels */
struct Mode
{
  unsigned int mode;
  unsigned int limit;
  char key[KEYLEN];
};

/* channel structure */
struct Channel
{
  dlink_node node;

  struct Channel *hnextch;

  struct Mode mode;
  char *topic;
  char *topic_info;
  time_t topic_time;
  unsigned long lazyLinkChannelExists;
  time_t last_knock; /* don't allow knock to flood */

  dlink_list members;
  dlink_list locmembers;  /* local members are here too */
  dlink_list invites;
  dlink_list banlist;
  dlink_list exceptlist;
  dlink_list invexlist;

  time_t first_received_message_time; /* channel flood control */
  int received_number_of_privmsgs;
  char flood_noticed;

  time_t channelts;
  char chname[CHANNELLEN + 1];
};

struct Membership
{
  dlink_node channode;    /* link to chptr->members    */
  dlink_node locchannode; /* link to chptr->locmembers */
  dlink_node usernode;    /* link to source_p->channel */
  struct Channel *chptr;
  struct Client *client_p;
  unsigned int flags;
};

struct Ban          /* also used for exceptions -orabidoo */
{
  dlink_node node;
  size_t len;
  char *name;
  char *username;
  char *host;
  char *who;
  time_t when;
};

extern dlink_list global_channel_list;

extern int check_channel_name(const char *);
extern int can_send (struct Channel *, struct Client *);
extern int can_send_part(struct Membership *, struct Channel *, struct Client *);
extern int is_banned (struct Channel *, struct Client *);
extern int can_join(struct Client *, struct Channel *, const char *);
extern int has_member_flags(struct Membership *, unsigned int);

extern void init_channels(void);
extern void add_user_to_channel(struct Channel *, struct Client *, unsigned int);
extern void remove_user_from_channel(struct Membership *);
extern void channel_member_names(struct Client *, struct Channel *, int);
extern void add_invite(struct Channel *, struct Client *);
extern void del_invite(struct Channel *, struct Client *);
extern void send_channel_modes (struct Client *, struct Channel *);
extern void channel_modes(struct Channel *, struct Client *, char *, char *);
extern void check_spambot_warning(struct Client *, const char *);
extern void check_splitmode(void *);
extern void free_channel_list(dlink_list *);
extern void free_topic(struct Channel *);
extern void destroy_channel(struct Channel *);
extern void set_channel_topic(struct Channel *, const char *,
                              const char *, time_t);

extern const char *get_member_status(struct Membership *, int);

extern struct Channel *get_or_create_channel(struct Client *, const char *, int *);
extern struct Membership *find_channel_link(struct Client *, struct Channel *);

/* channel visible */
#define ShowChannel(v,c)        (PubChannel(c) || IsMember((v),(c)))

#define IsMember(who, chan) ((find_channel_link(who, chan)) ? 1 : 0)
#define AddMemberFlag(x, y) ((x)->flags |=  (y))
#define DelMemberFlag(x, y) ((x)->flags &= ~(y))
#endif  /* INCLUDED_channel_h */
