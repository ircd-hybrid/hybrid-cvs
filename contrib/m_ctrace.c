/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_ctrace.c: Traces a given class
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
 *  $Id: m_ctrace.c,v 1.1.2.1 2003/05/21 23:33:41 db Exp $
 */

#include "stdinc.h"
#include "handlers.h"
#include "class.h"
#include "hook.h"
#include "client.h"
#include "hash.h"
#include "common.h"
#include "hash.h"
#include "irc_string.h"
#include "ircd.h"
#include "numeric.h"
#include "fdlist.h"
#include "s_bsd.h"
#include "s_serv.h"
#include "send.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"


static void mo_ctrace(struct Client*, struct Client*, int, char**);

static void ctrace_spy(struct Client *);

struct Message ctrace_msgtab = {
  "CTRACE", 0, 0, 0, 0, MFLG_SLOW, 0,
  {m_unregistered, m_not_oper, m_ignore, mo_ctrace}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  hook_add_event("doing_ctrace");
  mod_add_cmd(&ctrace_msgtab);
}

void
_moddeinit(void)
{
  hook_del_event("doing_ctrace");
  mod_del_cmd(&ctrace_msgtab);
}
const char *_version = "$Revision: 1.1.2.1 $";
#endif
static int report_this_status(struct Client *source_p, struct Client *target_p);


/*
** mo_ctrace
**      parv[0] = sender prefix
**      parv[1] = classname
*/
static void
mo_ctrace(struct Client *client_p, struct Client *source_p,
	 int parc, char *parv[])
{
  struct Client       *target_p = NULL;
  struct Class        *cltmp;
  dlink_node *ptr;
  char *class_looking_for;
  const char* class_name;
  int cnt;

  if(!IsClient(source_p))
    return;


  if ((parc < 1) || (*parv[1] == '\0'))
  {
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               me.name, parv[0], "CTRACE");
    return;
  }

  class_looking_for = parv[1];
  ctrace_spy(source_p);

  set_time();

  /* report all direct connections */

  DLINK_FOREACH(ptr, lclient_list.head)
  {

    target_p = ptr->data;

    class_name = get_client_class(target_p);
    if ((class_name != NULL) && (irccmp(class_name, class_looking_for) == 0))
      cnt = report_this_status(source_p,target_p);
  }

  sendto_one(source_p, form_str(RPL_ENDOFTRACE),me.name,
	     parv[0], class_looking_for);
}


/*
 * report_this_status
 *
 * inputs	- pointer to client to report to
 * 		- pointer to client to report about
 * output	- counter of number of hits
 * side effects - NONE
 */
static int
report_this_status(struct Client *source_p, struct Client *target_p)
{
  const char* name;
  const char* class_name;
  char  ip[HOSTIPLEN];
  int cnt=0;

  inetntop(target_p->localClient->aftype, &IN_ADDR(target_p->localClient->ip), ip, HOSTIPLEN);
  name = get_client_name(target_p, HIDE_IP);
  class_name = get_client_class(target_p);

  set_time();

  switch(target_p->status)
    {
    case STAT_CLIENT:

      if ((IsOper(source_p) &&
	   (MyClient(source_p) || !IsInvisible(target_p)))
	  || IsOper(target_p))
	{
#ifndef HIDE_SPOOF_IPS
          if (IsAdmin(target_p))
	    sendto_one(source_p, form_str(RPL_TRACEOPERATOR),
                       me.name, source_p->name, class_name, name,
                       IsOperAdmin(source_p) ? ip : "255.255.255.255",
                       CurrentTime - target_p->lasttime,
                       (target_p->user) ? (CurrentTime - target_p->user->last) : 0);
		       
	  else 
#endif
          if (IsOper(target_p))
	    sendto_one(source_p, form_str(RPL_TRACEOPERATOR),
		       me.name, source_p->name, class_name, name, 
#ifdef HIDE_SPOOF_IPS
		       IsIPSpoof(target_p) ? "255.255.255.255" : ip,
#else
                       MyOper(source_p) ? ip :
		       (IsIPSpoof(target_p) ? "255.255.255.255" : ip),
#endif
		       CurrentTime - target_p->lasttime,
		       (target_p->user)?(CurrentTime - target_p->user->last):0);
		       
	  else
	    sendto_one(source_p, form_str(RPL_TRACEUSER),
		       me.name, source_p->name, class_name, name,
#ifdef HIDE_SPOOF_IPS
                       IsIPSpoof(target_p) ? "255.255.255.255" : ip,
#else
		       MyOper(source_p) ? ip : 
		       (IsIPSpoof(target_p) ? "255.255.255.255" : ip),
#endif
		       CurrentTime - target_p->lasttime,
		       (target_p->user)?(CurrentTime - target_p->user->last):0);
	  cnt++;
	}
      break;
    case STAT_SERVER:
      if(!IsOperAdmin(source_p))
        name = get_client_name(target_p, MASK_IP);

      sendto_one(source_p, form_str(RPL_TRACESERVER),
		 me.name, source_p->name, class_name, 0,
		 0, name, *(target_p->serv->by) ?
		 target_p->serv->by : "*", "*",
		 me.name, CurrentTime - target_p->lasttime);
      cnt++;
      break;
      
    default: /* ...we actually shouldn't come here... --msa */
      sendto_one(source_p, form_str(RPL_TRACENEWTYPE), me.name,
		 source_p->name, name);
      cnt++;
      break;
    }

  return(cnt);
}

/* ctrace_spy()
 *
 * input        - pointer to client
 * output       - none
 * side effects - hook event doing_trace is called
 */
static void
ctrace_spy(struct Client *source_p)
{
  struct hook_spy_data data;

  data.source_p = source_p;

  hook_call_event("doing_ctrace", &data);
}



