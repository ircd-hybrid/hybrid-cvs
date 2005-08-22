/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_ctrace.c: Shows totals of classes 
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
 *  $Id: m_classlist.c,v 1.10.2.1 2005/08/22 13:47:37 michael Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "handlers.h"
#include "channel.h"
#include "channel_mode.h"
#include "client.h"
#include "common.h"   /* bleah */
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


static void mo_classlist(struct Client*, struct Client*, int, char**);

struct Message classlist_msgtab = {
  "CLASSLIST", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, m_ignore, m_ignore, mo_classlist, m_ignore}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&classlist_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&classlist_msgtab);
}

const char *_version = "$Revision: 1.10.2.1 $";
#endif

/* mo_classlist()
 *
 *      parv[0] = sender prefix
 *      parv[1] = classname
 */
static void
mo_classlist(struct Client *client_p, struct Client *source_p,
             int parc, char *parv[])
{ 
  struct ClassItem *aclass;
  struct ConfItem *conf;
  char *classname;
  dlink_node *ptr;
  int found = 0;

  if (EmptyString(parv[1]))
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, source_p->name, "CLASSLIST");
    return;
  }

  classname = parv[1];

  DLINK_FOREACH(ptr, class_items.head)
  {
    conf = ptr->data;

    if (match(classname, conf->name))
    {
      aclass = (struct ClassItem *)map_to_conf(conf);
      sendto_one(source_p, ":%s NOTICE %s :%s %d",
		 me.name, source_p->name, conf->name,
		 CurrUserCount(aclass));
      found = 1;
    }
  }

  if (!found)
    sendto_one(source_p, ":%s NOTICE %s :Class %s not found",
               me.name, source_p->name, classname);
}
