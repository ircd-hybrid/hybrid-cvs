/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  resv.h: A header for the RESV functions.
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
 *  $Id: resv.h,v 1.15 2003/05/24 16:15:11 bill Exp $
 */

#ifndef INCLUDED_resv_h
#define INCLUDED_resv_h

struct ResvChannel
{
  dlink_node node;
  struct ResvChannel *hnext;

  /* +1 for \0 */
  char name[CHANNELLEN + 1];
  char *reason;
  int	conf;		/* 1 if set from ircd.conf, 0 if from elsewhere */
};

struct ResvNick
{
  dlink_node node;
  /* *nicknick* etc */
  char name[NICKLEN * 2];
  char *reason;
  int	conf;		/* 1 if set from ircd.conf, 0 if from elsewhere */
};

extern dlink_list resv_channel_list;
extern dlink_list resv_nick_list;

extern struct ResvChannel *create_channel_resv(char *, char *, int);
extern struct ResvNick *create_nick_resv(char *, char *, int);
extern struct ResvNick *return_nick_resv(const char *);

extern int find_channel_resv(const char *);
extern int find_nick_resv(const char *);
extern int clean_resv_nick(char *);
extern int delete_channel_resv(struct ResvChannel *);
extern int delete_nick_resv(struct ResvNick *);

extern void clear_conf_resv(void);
extern void report_resv(struct Client *);

extern int valid_wild_card_simple(char *);
#endif  /* INCLUDED_resv_h */
