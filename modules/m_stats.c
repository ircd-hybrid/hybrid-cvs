/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_stats.c: Sends the user statistics or config information.
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
 *  $Id: m_stats.c,v 1.163 2005/05/30 13:19:11 michael Exp $
 */

#include "stdinc.h"
#include "tools.h"	 /* dlink_node/dlink_list */
#include "handlers.h"    /* m_pass prototype */
#include "client.h"      /* Client */
#include "common.h"      /* TRUE/FALSE */
#include "irc_string.h"  
#include "ircd.h"        /* me */
#include "listener.h"    /* show_ports */
#include "s_gline.h"
#include "ircd_handler.h"
#include "msg.h"         /* Message */
#include "hostmask.h"
#include "numeric.h"     /* ERR_xxx */
#include "send.h"        /* sendto_one */
#include "fdlist.h"      /* PF and friends */
#include "s_bsd.h"       /* highest_fd */
#include "s_conf.h"      /* AccessItem, report_configured_links */
#include "s_debug.h"     /* send_usage */
#include "s_misc.h"      /* serv_info */
#include "s_serv.h"      /* hunt_server */
#include "s_stats.h"     /* tstats */
#include "s_user.h"      /* show_opers */
#include "event.h"	 /* events */
#include "dbuf.h"
#include "parse.h"
#include "modules.h"
#include "hook.h"
#include "resv.h"  /* report_resv */


static void m_stats(struct Client *, struct Client *, int, char **);
static void mo_stats(struct Client *, struct Client *, int, char **);
static void ms_stats(struct Client *, struct Client *, int, char **);

struct Message stats_msgtab = {
  "STATS", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_stats, ms_stats, m_ignore, mo_stats, m_ignore}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  hook_add_event("doing_stats");
  hook_add_event("doing_stats_p");
  mod_add_cmd(&stats_msgtab);
}

void
_moddeinit(void)
{
  hook_del_event("doing_stats_p");
  hook_del_event("doing_stats");
  mod_del_cmd(&stats_msgtab);
}

const char *_version = "$Revision: 1.163 $";
#endif

static char *parse_stats_args(int, char **, int *, int *);
static void stats_L(struct Client *, char *, int, int, char);
static void stats_L_list(struct Client *s, char *, int, int, dlink_list *, char);
static void stats_spy(struct Client *, char);
static void stats_p_spy(struct Client *);
static void stats_L_spy(struct Client *, char, char *);

static void stats_dns_servers(struct Client *);
static void stats_connect(struct Client *);
static void stats_deny(struct Client *);
static void stats_tdeny(struct Client *);
static void stats_exempt(struct Client *);
static void stats_events(struct Client *);
static void stats_pending_glines(struct Client *);
static void stats_glines(struct Client *);
static void stats_gdeny(struct Client *);
static void stats_hubleaf(struct Client *);
static void stats_auth(struct Client *);
static void stats_tklines(struct Client *);
static void stats_klines(struct Client *);
static void stats_messages(struct Client *);
static void stats_oper(struct Client *);
static void stats_operedup(struct Client *);
static void stats_ports(struct Client *);
static void stats_resv(struct Client *);
static void stats_usage(struct Client *);
static void stats_tstats(struct Client *);
static void stats_uptime(struct Client *);
static void stats_shared(struct Client *);
static void stats_servers(struct Client *);
static void stats_gecos(struct Client *);
static void stats_class(struct Client *);
static void stats_memory(struct Client *);
static void stats_servlinks(struct Client *);
static void stats_ltrace(struct Client *, int, char**);
static void stats_ziplinks(struct Client *);

/* This table contains the possible stats items, in order:
 * /stats name,  function to call, operonly? adminonly? /stats letter
 * case only matters in the stats letter column.. -- fl_ */
static const struct StatsStruct
{
  const unsigned char letter;
  void (*handler)();
  const unsigned int need_oper;
  const unsigned int need_admin;
} stats_cmd_table[] = {
  /* letter     function            need_oper need_admin */
  { 'a',	stats_dns_servers,	1,	1,	},
  { 'A',	stats_dns_servers,	1,	1,	},
  { 'c',	stats_connect,		1,	0,	},
  { 'C',	stats_connect,		1,	0,	},
  { 'd',	stats_tdeny,		1,	0,	},
  { 'D',	stats_deny,		1,	0,	},
  { 'e', 	stats_exempt,		1,	0,	},
  { 'E',	stats_events,		1,	1,	},
  { 'f',	fd_dump,		1,	1,	},
  { 'F',	fd_dump,		1,	1,	},
  { 'g',	stats_pending_glines,	1,	0,	},
  { 'G',	stats_glines,		1,	0,	},
  { 'h',	stats_hubleaf,		1,	0,	},
  { 'H',	stats_hubleaf,		1,	0,	},
  { 'i',	stats_auth,		0,	0,	},
  { 'I',	stats_auth,		0,	0,	},
  { 'k',	stats_tklines,		0,	0,	},
  { 'K',	stats_klines,		0,	0,	},
  { 'l',	stats_ltrace,		1,	0,	},
  { 'L',	stats_ltrace,		1,	0,	},
  { 'm',	stats_messages,		0,	0,	},
  { 'M',	stats_messages,		0,	0,	},
  { 'o',	stats_oper,		0,	0,	},
  { 'O',	stats_oper,		0,	0,	},
  { 'p',	stats_operedup,		0,	0,	},
  { 'P',	stats_ports,		0,	0,	},
  { 'q',	stats_resv,		1,	0,	},
  { 'Q',	stats_resv,		1,	0,	},
  { 'r',	stats_usage,		1,	0,	},
  { 'R',	stats_usage,		1,	0,	},
  { 't',	stats_tstats,		1,	0,	},
  { 'T',	stats_tstats,		1,	0,	},
  { 'u',	stats_uptime,		0,	0,	},
  { 'U',	stats_shared,		1,	0,	},
  { 'v',	stats_servers,		1,	0,	},
  { 'V',	stats_gdeny,		1,	0,	},
  { 'x',	stats_gecos,		1,	0,	},
  { 'X',	stats_gecos,		1,	0,	},
  { 'y',	stats_class,		1,	0,	},
  { 'Y',	stats_class,		1,	0,	},
  { 'z',	stats_memory,		1,	0,	},
  { 'Z',	stats_ziplinks,		1,	0,	},
  { '?',	stats_servlinks,	0,	0,	},
  { '\0',       (void(*)())0,           0,	0,	}
};

const char *from, *to;

/*
 * m_stats by fl_
 *      parv[0] = sender prefix
 *      parv[1] = stat letter/command
 *      parv[2] = (if present) server/mask in stats L
 * 
 * This will search the tables for the appropriate stats letter/command,
 * if found execute it.  
 */
static void
m_stats(struct Client *client_p, struct Client *source_p,
        int parc, char *parv[])
{
  int i;
  char statchar;
  static time_t last_used = 0;

  if (!MyClient(source_p) && IsCapable(source_p->from, CAP_TS6) && HasID(source_p))
  {
    from = me.id;
    to = source_p->id;
  }
  else
  {
    from = me.name;
    to = source_p->name;
  }

  /* Check the user is actually allowed to do /stats, and isnt flooding */
  if ((last_used + ConfigFileEntry.pace_wait) > CurrentTime)
  {
    sendto_one(source_p,form_str(RPL_LOAD2HI),
               from, to);
    return;
  }
  else
    last_used = CurrentTime;

  /* Is the stats meant for us? */
  if (!ConfigFileEntry.disable_remote)
    if (hunt_server(client_p,source_p,":%s STATS %s :%s",2,parc,parv) != HUNTED_ISME)
      return;

  statchar = parv[1][0];

  if (statchar == '\0')
  {
    sendto_one(source_p, form_str(RPL_ENDOFSTATS),
               from, to, '*');
    return;
  }

  for (i = 0; stats_cmd_table[i].handler; i++)
  {
    if (stats_cmd_table[i].letter == statchar)
    {
      /* The stats table says what privs are needed, so check --fl_ */
      if (stats_cmd_table[i].need_oper || stats_cmd_table[i].need_admin)
      {
        sendto_one(source_p, form_str(ERR_NOPRIVILEGES),
                   from, to);
        break;
      }

      /* Blah, stats L needs the parameters, none of the others do.. */
      if (statchar == 'L' || statchar == 'l')
        stats_cmd_table[i].handler(source_p, parc, parv);
      else
        stats_cmd_table[i].handler(source_p);

      break;
    }
  }

  /* Send the end of stats notice, and the stats_spy */
  sendto_one(source_p, form_str(RPL_ENDOFSTATS),
             from, to, statchar);

  if ((statchar != 'L') && (statchar != 'l'))
    stats_spy(source_p, statchar);
}

/*
 * mo_stats by fl_
 *      parv[0] = sender prefix
 *      parv[1] = stat letter/command
 *      parv[2] = (if present) server/mask in stats L, or target
 *
 * This will search the tables for the appropriate stats letter,
 * if found execute it.  
 */
static void
mo_stats(struct Client *client_p, struct Client *source_p,
         int parc, char *parv[])
{
  int i;
  char statchar;

  if (hunt_server(client_p,source_p,":%s STATS %s :%s",2,parc,parv) != HUNTED_ISME)
     return;

  if (!MyClient(source_p) && IsCapable(source_p->from, CAP_TS6) && HasID(source_p))
  {
    from = me.id;
    to = source_p->id;
  }
  else
  {
    from = me.name;
    to = source_p->name;
  }

  statchar = parv[1][0];

  if (statchar == '\0')
  {
    sendto_one(source_p, form_str(RPL_ENDOFSTATS),
               from, to, '*');
    return;
  }

  for (i = 0; stats_cmd_table[i].handler; i++)
  {
    if (stats_cmd_table[i].letter == statchar)
    {
      /* The stats table says what privs are needed, so check --fl_ */
      /* Called for remote clients and for local opers, so check need_admin
       * and need_oper
       */
      if ((stats_cmd_table[i].need_admin && !IsAdmin(source_p)) ||
          (stats_cmd_table[i].need_oper && !IsOper(source_p)))
      {
        sendto_one(source_p, form_str(ERR_NOPRIVILEGES),
                   from, to);
        break;
      }

      /* Blah, stats L needs the parameters, none of the others do.. */
      if (statchar == 'L' || statchar == 'l')
        stats_cmd_table[i].handler(source_p, parc, parv, statchar);
      else
        stats_cmd_table[i].handler(source_p);

      break;
    }
  }

  /* Send the end of stats notice, and the stats_spy */
  sendto_one(source_p, form_str(RPL_ENDOFSTATS),
             from, to, statchar);

  if ((statchar != 'L') && (statchar != 'l'))
    stats_spy(source_p, statchar);
}

static void
stats_dns_servers(struct Client *source_p)
{
  report_dns_servers(source_p);
}

static void
stats_connect(struct Client *source_p)
{
  report_confitem_types(source_p, SERVER_TYPE);
}

/* stats_deny()
 *
 * input	- client to report to
 * output	- none
 * side effects - client is given dline list.
 */
static void
stats_deny(struct Client *source_p)
{
  char *host, *pass, *user, *classname, *oreason;
  struct AddressRec *arec;
  struct ConfItem *conf;
  struct AccessItem *aconf;
  int i, port;

  for (i = 0; i < ATABLE_SIZE; i++)
  {
    for (arec = atable[i]; arec; arec=arec->next)
    {
      if (arec->type == CONF_DLINE)
      {
        aconf = arec->aconf;

        /* dont report a tdline as a dline */
        if (aconf->flags & CONF_FLAGS_TEMPORARY)
          continue;

	conf = unmap_conf_item(aconf);

        get_printable_conf(conf, &host, &pass, &user, &port, &classname, &oreason);
        sendto_one(source_p, form_str(RPL_STATSDLINE),
                   from, to, 'D', host, pass, oreason);
      }
    }
  }
}

/* stats_tdeny()
 *
 * input        - client to report to
 * output       - none
 * side effects - client is given dline list.
 */
static void
stats_tdeny(struct Client *source_p)
{
  char *host, *pass, *user, *classname, *oreason;
  struct AddressRec *arec;
  struct ConfItem *conf;
  struct AccessItem *aconf;
  int i, port;

  for (i = 0; i < ATABLE_SIZE; i++)
  {
    for (arec = atable[i]; arec; arec=arec->next)
    {
      if (arec->type == CONF_DLINE)
      {
        aconf = arec->aconf;

        /* dont report a permanent dline as a tdline */
        if (!(aconf->flags & CONF_FLAGS_TEMPORARY))
          continue;

        conf = unmap_conf_item(aconf);
        get_printable_conf(conf, &host, &pass, &user, &port, &classname, &oreason);
        sendto_one(source_p, form_str(RPL_STATSDLINE),
                   from, to, 'd', host, pass, oreason);
      }
    }
  }
}

/* stats_exempt()
 *
 * input        - client to report to
 * output       - none
 * side effects - client is given list of exempt blocks
 */
static void
stats_exempt(struct Client *source_p)
{
  char *host, *pass, *user, *classname, *oreason;
  struct AddressRec *arec;
  struct ConfItem *conf;
  struct AccessItem *aconf;
  int i, port;

  for (i = 0; i < ATABLE_SIZE; i++)
  {
    for (arec = atable[i]; arec; arec=arec->next)
    {
      if (arec->type == CONF_EXEMPTDLINE)
      {
        aconf = arec->aconf;

        conf = unmap_conf_item(aconf);
        get_printable_conf(conf, &host, &pass, &user, &port, &classname, &oreason);
        sendto_one(source_p, form_str(RPL_STATSDLINE),
                   from, to, 'e', host, pass, oreason);
      }
    }
  }
}

static void
stats_events(struct Client *source_p)
{
  show_events(source_p);
}

/* stats_pending_glines()
 *
 * input        - client pointer
 * output       - none
 * side effects - client is shown list of pending glines
 */
static void
stats_pending_glines(struct Client *source_p)
{
  dlink_node *pending_node;
  struct gline_pending *glp_ptr;
  char timebuffer[MAX_DATE_STRING];
  struct tm *tmptr;

  if (!ConfigFileEntry.glines)
  {
    sendto_one(source_p, ":%s NOTICE %s :This server does not support G-Lines",
               from, to); 
    return;
  }

  if (dlink_list_length(&pending_glines) > 0)
    sendto_one(source_p, ":%s NOTICE %s :Pending G-lines",
               from, to);

  DLINK_FOREACH(pending_node, pending_glines.head)
  {
    glp_ptr = pending_node->data;
    tmptr   = localtime(&glp_ptr->time_request1);
    strftime(timebuffer, MAX_DATE_STRING, "%Y/%m/%d %H:%M:%S", tmptr);

    sendto_one(source_p,
               ":%s NOTICE %s :1) %s!%s@%s on %s requested gline at %s for %s@%s [%s]",
               from, to, glp_ptr->oper_nick1,
               glp_ptr->oper_user1, glp_ptr->oper_host1,
               glp_ptr->oper_server1, timebuffer,
               glp_ptr->user, glp_ptr->host, glp_ptr->reason1);

    if (glp_ptr->oper_nick2[0] != '\0')
    {
      tmptr = localtime(&glp_ptr->time_request2);
      strftime(timebuffer, MAX_DATE_STRING, "%Y/%m/%d %H:%M:%S", tmptr);
      sendto_one(source_p,
      ":%s NOTICE %s :2) %s!%s@%s on %s requested gline at %s for %s@%s [%s]",
                 from, to, glp_ptr->oper_nick2,
                 glp_ptr->oper_user2, glp_ptr->oper_host2,
                 glp_ptr->oper_server2, timebuffer,
                 glp_ptr->user, glp_ptr->host, glp_ptr->reason2);
    }
  }

  sendto_one(source_p, ":%s NOTICE %s :End of Pending G-lines",
             from, to);
}

/* stats_glines()
 *
 * input        - client pointer
 * output       - none
 * side effects - client is shown list of glines
 */
static void
stats_glines(struct Client *source_p)
{
  dlink_node *ptr;
  struct AccessItem *kill_ptr;

  if (!ConfigFileEntry.glines)
  {
    sendto_one(source_p, ":%s NOTICE %s :This server does not support G-Lines",
               from, to); 
    return;
  }

  DLINK_FOREACH(ptr, gline_items.head)
  {
    kill_ptr = map_to_conf(ptr->data);

    sendto_one(source_p, form_str(RPL_STATSKLINE),
               from, to, 'G',
               kill_ptr->host ? kill_ptr->host : "*",
               kill_ptr->user ? kill_ptr->user : "*",
               kill_ptr->reason ? kill_ptr->reason : "No reason specified", "" );
  }
}

/* stats_gdeny()
 *
 * input        - client pointer
 * outputs      - none
 * side effects - client is shown gline ACL
 */
static void
stats_gdeny(struct Client *source_p)
{
  if (!ConfigFileEntry.glines)
  {
    sendto_one(source_p, ":%s NOTICE %s :This server does not support G-Lines",
               from, to);
    return;
  }

  report_confitem_types(source_p, GDENY_TYPE);
}

static void
stats_hubleaf(struct Client *source_p)
{
  report_confitem_types(source_p, HUB_TYPE);
  report_confitem_types(source_p, LEAF_TYPE);
}

static void
stats_auth(struct Client *source_p)
{
  /* Oper only, if unopered, return ERR_NOPRIVS */
  if ((ConfigFileEntry.stats_i_oper_only == 2) && !IsOper(source_p))
    sendto_one(source_p, form_str(ERR_NOPRIVILEGES),
               from, to);

  /* If unopered, Only return matching auth blocks */
  else if ((ConfigFileEntry.stats_i_oper_only == 1) && !IsOper(source_p))
  {
    struct ConfItem *conf;
    struct AccessItem *aconf;
    char *host, *pass, *user, *classname, *oreason;
    int port;

    if(MyConnect(source_p))
      aconf = find_conf_by_address(source_p->host,
                                   &source_p->localClient->ip,
				   CONF_CLIENT,
				   source_p->localClient->aftype,
				   source_p->username,
                                   source_p->localClient->passwd);
    else
      aconf = find_conf_by_address(source_p->host, NULL, CONF_CLIENT,
                                   0, source_p->username, NULL);

    if (aconf == NULL)
      return;

    conf = unmap_conf_item(aconf);
    get_printable_conf(conf, &host, &pass, &user, &port, &classname, &oreason);
    sendto_one(source_p, form_str(RPL_STATSILINE), from,
               to, 'I',
	       "*", show_iline_prefix(source_p, aconf, user), host,
	       port, classname);
  }
  /* They are opered, or allowed to see all auth blocks */
  else
    report_auth(source_p);
}

static void
stats_tklines(struct Client *source_p)
{
  struct ConfItem *conf;
  /* Oper only, if unopered, return ERR_NOPRIVS */
  if ((ConfigFileEntry.stats_k_oper_only == 2) && !IsOper(source_p))
    sendto_one(source_p, form_str(ERR_NOPRIVILEGES),
               from, to);

  /* If unopered, Only return matching klines */
  else if((ConfigFileEntry.stats_k_oper_only == 1) && !IsOper(source_p))
  {
    struct AccessItem *aconf;
    char *host, *pass, *user, *classname, *oreason;
    int port;

    if(MyConnect(source_p))
      aconf = find_conf_by_address(source_p->host,
                                   &source_p->localClient->ip,
				   CONF_KILL,
				   source_p->localClient->aftype,
				   source_p->username, NULL);
    else
      aconf = find_conf_by_address(source_p->host, NULL, CONF_KILL,
                                   0, source_p->username, NULL);

    if(aconf == NULL)
      return;

    /* dont report a permanent kline as a tkline */
    if (!(aconf->flags & CONF_FLAGS_TEMPORARY))
      return;

    conf = unmap_conf_item(aconf);

    get_printable_conf(conf, &host, &pass, &user, &port, &classname, &oreason);

    sendto_one(source_p, form_str(RPL_STATSKLINE), from,
               to, 'k', host, user, pass, "");
  }
  /* Theyre opered, or allowed to see all klines */
  else
    report_Klines(source_p, 1);
}

static void
stats_klines(struct Client *source_p)
{
  struct ConfItem *conf=NULL;	/* XXX */

  /* Oper only, if unopered, return ERR_NOPRIVS */
  if((ConfigFileEntry.stats_k_oper_only == 2) && !IsOper(source_p))
    sendto_one(source_p, form_str(ERR_NOPRIVILEGES),
               from, to);

  /* If unopered, Only return matching klines */
  else if((ConfigFileEntry.stats_k_oper_only == 1) && !IsOper(source_p))
  {
    struct AccessItem *aconf;
    char *host, *pass, *user, *classname, *oreason;
    int port;

    /* search for a kline */
    if(MyConnect(source_p))
      aconf = find_conf_by_address(source_p->host,
                                   &source_p->localClient->ip,
				   CONF_KILL,
				   source_p->localClient->aftype,
				   source_p->username, NULL);
    else
      aconf = find_conf_by_address(source_p->host, NULL, CONF_KILL,
                                   0, source_p->username, NULL);

    if(aconf == NULL)
      return;

    /* dont report a tkline as a kline */
    if(aconf->flags & CONF_FLAGS_TEMPORARY)
      return;
      
    get_printable_conf(conf, &host, &pass, &user, &port, &classname, &oreason);

    sendto_one(source_p, form_str(RPL_STATSKLINE), from,
               to, 'K', host, user, pass, oreason);
  }
  /* Theyre opered, or allowed to see all klines */
  else
    report_Klines(source_p, 0);
}

static void
stats_messages(struct Client *source_p)
{
  report_messages(source_p);
}

static void
stats_oper(struct Client *source_p)
{
  if (!IsOper(source_p) && ConfigFileEntry.stats_o_oper_only)
    sendto_one(source_p, form_str(ERR_NOPRIVILEGES),
               from, to);
  else
    report_confitem_types(source_p, OPER_TYPE);
}

/* stats_operedup()
 *
 * input	- client pointer
 * output	- none
 * side effects - client is shown a list of active opers
 */
static void
stats_operedup(struct Client *source_p)
{
  dlink_node *ptr;

  DLINK_FOREACH(ptr, oper_list.head)
  {
    const struct Client *target_p = ptr->data;

    if (IsOperHidden(target_p) && !IsOper(source_p))
      continue;

    if (MyClient(source_p) && IsOper(source_p))
      sendto_one(source_p, ":%s %d %s p :[%c][%s] %s (%s@%s) Idle: %d",
                 from, RPL_STATSDEBUG, to,
                 IsAdmin(target_p) ?
		 (IsOperHiddenAdmin(target_p) ? 'O' : 'A') : 'O',
		 oper_privs_as_string(target_p->localClient->operflags),
		 target_p->name, target_p->username, target_p->host,
		 (int)(CurrentTime - target_p->user->last));
    else
      sendto_one(source_p, ":%s %d %s p :[%c] %s (%s@%s) Idle: %d",
                 from, RPL_STATSDEBUG, to,
                 IsAdmin(target_p) ?
		 (IsOperHiddenAdmin(target_p) ? 'O' : 'A') : 'O',
		 target_p->name, target_p->username, target_p->host,
		 (int)(CurrentTime - target_p->user->last));
  }

  sendto_one(source_p, ":%s %d %s p :%lu OPER(s)",
             from, RPL_STATSDEBUG, to, dlink_list_length(&oper_list));
  stats_p_spy(source_p);
}

static void
stats_ports(struct Client *source_p)
{
  if (!IsOper(source_p) && ConfigFileEntry.stats_P_oper_only)
    sendto_one(source_p, form_str(ERR_NOPRIVILEGES),
               from, to);
  else
    show_ports(source_p);
}

static void
stats_resv(struct Client *source_p)
{
  report_resv(source_p);
}

static void
stats_usage(struct Client *source_p)
{
  send_usage(source_p);
}

static void
stats_tstats(struct Client *source_p)
{
  tstats(source_p);
}

static void
stats_uptime(struct Client *source_p)
{
  time_t now = CurrentTime - me.since;
  sendto_one(source_p, form_str(RPL_STATSUPTIME), from, to,
             now/86400, (now/3600)%24, (now/60)%60, now%60);
  if (!ConfigFileEntry.disable_remote || IsOper(source_p))
     sendto_one(source_p, form_str(RPL_STATSCONN), from, to,
                MaxConnectionCount, MaxClientCount, Count.totalrestartcount);
}

static void
stats_shared(struct Client *source_p)
{
  report_confitem_types(source_p, ULINE_TYPE);
}

/* stats_servers()
 *
 * input	- client pointer
 * output	- none
 * side effects - client is shown lists of who connected servers
 */
static void
stats_servers(struct Client *source_p)
{
  struct Client *target_p;
  dlink_node *ptr;
  int j = 0;

  DLINK_FOREACH(ptr, serv_list.head)
  {
    target_p = ptr->data;

    j++;

    sendto_one(source_p, ":%s %d %s v :%s (%s!%s@%s) Idle: %d",
               from, RPL_STATSDEBUG, to,
	       target_p->name,
	       (target_p->serv->by[0] ? target_p->serv->by : "Remote."),
	       "*", "*", (int)(CurrentTime - target_p->lasttime));
  }

  sendto_one(source_p, ":%s %d %s v :%d Server(s)",
             from, RPL_STATSDEBUG, to, j);
}

static void
stats_gecos(struct Client *source_p)
{
  report_confitem_types(source_p, XLINE_TYPE);
}

static void
stats_class(struct Client *source_p)
{
  report_confitem_types(source_p, CLASS_TYPE);
}

static void
stats_memory(struct Client *source_p)
{
  count_memory(source_p);
}

static void
stats_ziplinks(struct Client *source_p)
{
  dlink_node *ptr;
  struct Client *target_p;
  int sent_data = 0;

  DLINK_FOREACH(ptr, serv_list.head)
  {
    target_p = ptr->data;

    if (IsCapable(target_p, CAP_ZIP))
    {
      /* we use memcpy(3) and a local copy of the structure to
       * work around a register use bug on GCC on the SPARC.
       * -jmallett, 04/27/2002
       */
      struct ZipStats zipstats;
      memcpy(&zipstats, &target_p->localClient->zipstats, sizeof (struct ZipStats));
      sendto_one(source_p, ":%s %d %s Z :ZipLinks stats for %s send[%.2f%% compression (%lu bytes data/%lu bytes wire)] recv[%.2f%% compression (%lu bytes data/%lu bytes wire)]",
                 from, RPL_STATSDEBUG, to, target_p->name,
		 zipstats.out_ratio, zipstats.out, zipstats.out_wire,
		 zipstats.in_ratio,  zipstats.in,  zipstats.in_wire);
      sent_data++;
    }
  }
  sendto_one(source_p, ":%s %d %s Z :%u ziplink(s)",
             from, RPL_STATSDEBUG, to, sent_data);
}

static void
stats_servlinks(struct Client *source_p)
{
  uint64_t sendB = 0, recvB = 0;
  time_t uptime = 0;
  int j = 0;
  struct Client *target_p = NULL;
  dlink_node *ptr;

  if (ConfigServerHide.flatten_links && !IsOper(source_p))
  {
    sendto_one(source_p, form_str(ERR_NOPRIVILEGES),
               from, to);
    return;
  }

  DLINK_FOREACH(ptr, serv_list.head)
  {
    target_p = ptr->data;

    ++j;
    sendB += target_p->localClient->send.bytes;
    recvB += target_p->localClient->recv.bytes;

    /* ":%s 211 %s %s %u %u %llu %u %llu :%u %u %s" */
    sendto_one(source_p, form_str(RPL_STATSLINKINFO),
               from, to,
               IsAdmin(source_p) ? get_client_name(target_p, SHOW_IP)
	       : get_client_name(target_p, MASK_IP),
               dbuf_length(&target_p->localClient->buf_sendq),
               target_p->localClient->send.messages,
               target_p->localClient->send.bytes>>10,
               target_p->localClient->recv.messages,
               target_p->localClient->recv.bytes>>10,
               (unsigned)(CurrentTime - target_p->firsttime),
               (CurrentTime > target_p->since) ? (unsigned)(CurrentTime - target_p->since): 0,
               IsOper(source_p) ? show_capabilities(target_p) : "TS");
  }

  sendto_one(source_p, ":%s %d %s ? :%u total server(s)",
             from, RPL_STATSDEBUG, to, j);
  sendto_one(source_p, ":%s %d %s ? :Sent total : %7.2f %s",
             from, RPL_STATSDEBUG, to,
	     _GMKv(sendB), _GMKs(sendB));
  sendto_one(source_p, ":%s %d %s ? :Recv total : %7.2f %s",
             from, RPL_STATSDEBUG, to,
	     _GMKv(recvB), _GMKs(recvB));

  uptime = (CurrentTime - me.since);

  sendto_one(source_p, ":%s %d %s ? :Server send: %7.2f %s (%4.1f K/s)",
             from, RPL_STATSDEBUG, to,
	     _GMKv(me.localClient->send.bytes),
             _GMKs(me.localClient->send.bytes),
	     (float)((float)me.localClient->send.bytes / (float)uptime));
  sendto_one(source_p, ":%s %d %s ? :Server recv: %7.2f %s (%4.1f K/s)",
             from, RPL_STATSDEBUG, to,
	     _GMKv(me.localClient->recv.bytes),
	     _GMKs(me.localClient->recv.bytes),
	     (float)((float)me.localClient->recv.bytes / (float)uptime));
}

static void
stats_ltrace(struct Client *source_p, int parc, char *parv[])
{
  int doall = 0;
  int wilds = 0;
  char *name = NULL;
  char statchar;

  if ((name = parse_stats_args(parc, parv, &doall, &wilds)) != NULL)
  {
    statchar = parv[1][0];

    stats_L(source_p, name, doall, wilds, statchar);
    stats_L_spy(source_p, statchar, name);
  }
  else
    sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
               from, to, "STATS");
}

/*
 * ms_stats - STATS message handler
 *      parv[0] = sender prefix
 *      parv[1] = statistics selector (defaults to Message frequency)
 *      parv[2] = server name (current server defaulted, if omitted)
 */
static void
ms_stats(struct Client *client_p, struct Client *source_p,
         int parc, char *parv[])
{
  if (hunt_server(client_p,source_p,":%s STATS %s :%s",2,parc,parv)!=HUNTED_ISME)
    return;

  if (IsClient(source_p))
    mo_stats(client_p, source_p, parc, parv);
}

/*
 * stats_L
 *
 * inputs	- pointer to client to report to
 *		- doall flag
 *		- wild card or not
 * output	- NONE
 * side effects	-
 */
static void
stats_L(struct Client *source_p,char *name,int doall,
        int wilds,char statchar)
{
  stats_L_list(source_p, name, doall, wilds, &unknown_list, statchar);
  stats_L_list(source_p, name, doall, wilds, &local_client_list, statchar);
  stats_L_list(source_p, name, doall, wilds, &serv_list, statchar);
}

static void
stats_L_list(struct Client *source_p,char *name, int doall, int wilds,
             dlink_list *list,char statchar)
{
  dlink_node *ptr;
  struct Client *target_p;

  /*
   * send info about connections which match, or all if the
   * mask matches from.  Only restrictions are on those who
   * are invisible not being visible to 'foreigners' who use
   * a wild card based search to list it.
   */
  DLINK_FOREACH(ptr, list->head)
  {
    target_p = ptr->data;

    if (IsInvisible(target_p) && (doall || wilds) &&
	!(MyConnect(source_p) && IsOper(source_p)) &&
	!IsOper(target_p) && (target_p != source_p))
      continue;
    if (!doall && wilds && !match(name, target_p->name))
      continue;
    if (!(doall || wilds) && irccmp(name, target_p->name))
      continue;

    /* This basically shows ips for our opers if its not a server/admin, or
     * its one of our admins.  */
    if(MyClient(source_p) && IsOper(source_p) && 
       (IsAdmin(source_p) || 
       (!IsServer(target_p) && !IsAdmin(target_p) && 
       !IsHandshake(target_p) && !IsConnecting(target_p))))
    {
      sendto_one(source_p, form_str(RPL_STATSLINKINFO),
		 from, to, 
                 (IsUpper(statchar)) ?
                 get_client_name(target_p, SHOW_IP) :
                 get_client_name(target_p, HIDE_IP),
                 dbuf_length(&target_p->localClient->buf_sendq),
                 target_p->localClient->send.messages,
                 target_p->localClient->send.bytes>>10,
                 target_p->localClient->recv.messages,
                 target_p->localClient->recv.bytes>>10,
                 (unsigned)(CurrentTime - target_p->firsttime),
                 (CurrentTime > target_p->since) ? (unsigned)(CurrentTime - target_p->since):0,
                 IsServer(target_p) ? show_capabilities(target_p) : "-");
    }
    else
    {
      /* If its a hidden ip, an admin, or a server, mask the real IP */
      if(IsIPSpoof(target_p) || IsServer(target_p) || IsAdmin(target_p)
         || IsHandshake(target_p) || IsConnecting(target_p))
        sendto_one(source_p, form_str(RPL_STATSLINKINFO),
                   from, to,
		   get_client_name(target_p, MASK_IP),
		   dbuf_length(&target_p->localClient->buf_sendq),
		   target_p->localClient->send.messages,
		   target_p->localClient->send.bytes>>10,
		   target_p->localClient->recv.messages,
		   target_p->localClient->recv.bytes>>10,
		   (unsigned)(CurrentTime - target_p->firsttime),
		   (CurrentTime > target_p->since) ? (unsigned)(CurrentTime - target_p->since):0,
		   IsServer(target_p) ? show_capabilities(target_p) : "-");
      else /* show the real IP */
        sendto_one(source_p, form_str(RPL_STATSLINKINFO),
                   from, to,
	           (IsUpper(statchar)) ?
		   get_client_name(target_p, SHOW_IP) :
		   get_client_name(target_p, HIDE_IP),
		   dbuf_length(&target_p->localClient->buf_sendq),
		   target_p->localClient->send.messages,
		   target_p->localClient->send.bytes>>10,
		   target_p->localClient->recv.messages,
		   target_p->localClient->recv.bytes>>10,
		   (unsigned)(CurrentTime - target_p->firsttime),
		   (CurrentTime > target_p->since) ? (unsigned)(CurrentTime - target_p->since):0,
		   IsServer(target_p) ? show_capabilities(target_p) : "-");
    }
  }
}

/* stats_spy()
 *
 * inputs	- pointer to client doing the /stats
 *		- char letter they are doing /stats on
 * output	- none
 * side effects -
 * This little helper function reports to opers if configured.
 * personally, I don't see why opers need to see stats requests
 * at all. They are just "noise" to an oper, and users can't do
 * any damage with stats requests now anyway. So, why show them?
 * -Dianora
 */
static void
stats_spy(struct Client *source_p, char statchar)
{
  struct hook_stats_data data;

  data.source_p = source_p;
  data.statchar = statchar;
  data.name     = NULL;

  hook_call_event("doing_stats", &data);
}

/* stats_p_spy()
 *
 * input	- pointer to client doing stats
 * output	-
 * side effects - call hook doing_stats_p
 */
static void
stats_p_spy(struct Client *source_p)
{
  struct hook_stats_data data;

  data.source_p = source_p;
  data.name     = NULL;
  data.statchar = 'p';

  hook_call_event("doing_stats_p", &data);
}

/* stats_L_spy()
 * 
 * inputs	- pointer to source_p, client doing stats L
 *		- stat that they are doing 'L' 'l'
 * 		- any name argument they have given
 * output	- NONE
 * side effects	- a notice is sent to opers, IF spy mode is configured
 * 		  in the conf file.
 */
static void
stats_L_spy(struct Client *source_p, char statchar, char *name)
{
  struct hook_stats_data data;

  data.source_p = source_p;
  data.statchar = statchar;
  data.name     = name;

  hook_call_event("doing_stats", &data);
}

/* parse_stats_args()
 *
 * inputs	- arg count
 *		- args
 *		- doall flag
 *		- wild card or not
 * output	- pointer to name to use
 * side effects	-
 * common parse routine for m_stats args
 * 
 */
static char *
parse_stats_args(int parc, char *parv[], int *doall, int *wilds)
{
  char *name;

  if (parc > 2)
  {
    name = parv[2];

    if (irccmp(name, from) == 0)
      *doall = 2;
    else if (match(name, from))
      *doall = 1;

    if (strchr(name, '*') ||
        strchr(name, '?'))
      *wilds = 1;

    return(name);
  }
  else
    return(NULL);
}
