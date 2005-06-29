/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_info.c: Sends information about the server.
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
 *  $Id: m_info.c,v 1.93 2005/06/29 23:42:34 metalrock Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "m_info.h"
#include "channel.h"
#include "client.h"
#include "common.h"
#include "irc_string.h"
#include "ircd.h"
#include "hook.h"
#include "numeric.h"
#include "s_log.h"
#include "s_serv.h"
#include "s_user.h"
#include "send.h"
#include "s_conf.h"
#include "handlers.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"

static void send_conf_options(struct Client *);
static void send_birthdate_online_time(struct Client *);
static void send_info_text(struct Client *);
static void info_spy(struct Client *);

static void m_info(struct Client *, struct Client *, int, char **);
static void ms_info(struct Client *, struct Client *, int, char **);
static void mo_info(struct Client *, struct Client *, int, char **);

struct Message info_msgtab = {
  "INFO", 0, 0, 0, 0, MFLG_SLOW, 0,
  { m_unregistered, m_info, ms_info, m_ignore, mo_info, m_ignore }
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  hook_add_event("doing_info");
  mod_add_cmd(&info_msgtab);
}

void
_moddeinit(void)
{
  hook_del_event("doing_info");
  mod_del_cmd(&info_msgtab);
}

const char *_version = "$Revision: 1.93 $";
#endif

/*
 * jdc -- Structure for our configuration value table
 */
struct InfoStruct
{
  const char *name;         /* Displayed variable name           */
  unsigned int output_type; /* See below #defines                */
  void *option;             /* Pointer reference to the value    */
  const char *desc;         /* ASCII description of the variable */
};

/* Types for output_type in InfoStruct */
#define OUTPUT_STRING     0x0001 /* Output option as %s w/ dereference  */
#define OUTPUT_STRING_PTR 0x0002 /* Output option as %s w/out deference */
#define OUTPUT_DECIMAL    0x0004 /* Output option as decimal (%d)       */
#define OUTPUT_BOOLEAN    0x0008 /* Output option as "ON" or "OFF"      */
#define OUTPUT_BOOLEAN_YN 0x0010 /* Output option as "YES" or "NO"      */
#define OUTPUT_BOOLEAN2   0x0020 /* Output option as "YES/NO/MASKED"    */

static struct InfoStruct info_table[] =
{
  /* --[  START OF TABLE  ]-------------------------------------------- */
  {
    "anti_nick_flood",
    OUTPUT_BOOLEAN,
    &ConfigFileEntry.anti_nick_flood,
    "NICK flood protection"
  },
  {
    "anti_spam_exit_message_time",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.anti_spam_exit_message_time,
    "Duration a client must be connected for to have an exit message"
  },
  {
    "caller_id_wait",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.caller_id_wait,
    "Minimum delay between notifying UMODE +g users of messages"
  },
  {
    "client_flood",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.client_flood,
    "Maximum amount of data in a client's queue before they are disconnected",
  },
  {
    "default_floodcount",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.default_floodcount,
    "Startup value of FLOODCOUNT",
  },
  {
    "dot_in_ip6_addr",
    OUTPUT_BOOLEAN,
    &ConfigFileEntry.dot_in_ip6_addr,
    "Suffix a . to ip6 addresses",
  },
  {
    "dots_in_ident",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.dots_in_ident,
    "Number of permissable dots in an ident"
  },
  {
    "failed_oper_notice",
    OUTPUT_BOOLEAN,
    &ConfigFileEntry.failed_oper_notice,
    "Inform opers if someone /oper's with the wrong password"
  },
  {
    "glines",
    OUTPUT_BOOLEAN,
    &ConfigFileEntry.glines,
    "G-line (network-wide K-line) support"
  },
  {
    "gline_time",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.gline_time,
    "Expiry time for G-lines"
  },
  {
    "hide_spoof_ips",
    OUTPUT_BOOLEAN_YN,
    &ConfigFileEntry.hide_spoof_ips,
    "Hide spoofed IP's"
  },
  {
    "hub",
    OUTPUT_BOOLEAN_YN,
    &ServerInfo.hub,
    "Server is a hub"
  },
  {
    "idletime",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.idletime,
    "Number of seconds before a client is considered idle"
  },
  {
    "invite_ops_only",
    OUTPUT_BOOLEAN_YN,
    &ConfigChannel.invite_ops_only,
    "Restrict invite to ops only",
  },
  {
    "kill_chase_time_limit",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.kill_chase_time_limit,
    "Nick Change Tracker for KILL"
  },
  {
    "kline_reason",
    OUTPUT_STRING,
    &ConfigFileEntry.kline_reason,
    "Reason given to K-lined clients on sign off"
  },
  {
    "kline_with_reason",
    OUTPUT_BOOLEAN_YN,
    &ConfigFileEntry.kline_with_reason,
    "Display K-line reason to client on disconnect"
  },
  {
    "max_accept",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.max_accept,
    "Maximum nicknames on accept list",
  },
  {
    "max_nick_changes",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.max_nick_changes,
    "NICK change threshhold setting"
  },
  {
    "max_nick_time",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.max_nick_time,
    "NICK flood protection time interval"
  },
  {
    "max_targets",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.max_targets,
    "The maximum number of PRIVMSG/NOTICE targets"
  },
  {
    "maximum_links",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.maximum_links,
    "Class default maximum links count",
  },
  {
    "min_nonwildcard",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.min_nonwildcard,
    "Minimum non-wildcard chars in K/G lines",
  },
  {
    "network_name",
    OUTPUT_STRING,
    &ServerInfo.network_name,
    "Network name"
  },
  {
    "network_desc",
    OUTPUT_STRING,
    &ServerInfo.network_desc,
    "Network description"
  },
  {
    "no_oper_flood",
    OUTPUT_BOOLEAN,
    &ConfigFileEntry.no_oper_flood,
    "Reduce flood control for operators",
  },
  {
    "true_no_oper_flood",
    OUTPUT_BOOLEAN,
    &ConfigFileEntry.true_no_oper_flood,
    "Completely disable flood control for operators",
  },
  {
    "pace_wait",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.pace_wait,
    "Minimum delay between uses of certain commands"
  },
  {
    "pace_wait_simple",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.pace_wait_simple,
    "Minimum delay between less intensive commands"
  },
  {
    "ping_cookie",
    OUTPUT_BOOLEAN,
    &ConfigFileEntry.ping_cookie,
    "Require ping cookies to connect",
  },
  {
    "short_motd",
    OUTPUT_BOOLEAN_YN,
    &ConfigFileEntry.short_motd,
    "Do not show MOTD; only tell clients they should read it"
  },
  {
    "stats_i_oper_only",
    OUTPUT_BOOLEAN2,
    &ConfigFileEntry.stats_i_oper_only,
    "STATS I output is only shown to operators",
  },
  {
    "stats_k_oper_only",
    OUTPUT_BOOLEAN2,
    &ConfigFileEntry.stats_k_oper_only,
    "STATS K output is only shown to operators",
  },
  {
    "stats_o_oper_only",
    OUTPUT_BOOLEAN_YN,
    &ConfigFileEntry.stats_o_oper_only,
    "STATS O output is only shown to operators",
  },
  {
    "stats_P_oper_only",
    OUTPUT_BOOLEAN_YN,
    &ConfigFileEntry.stats_P_oper_only,
    "STATS P is only shown to operators",
  },
  {
    "throttle_time",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.throttle_time,
    "Minimum time between client reconnects",
  },
  {
    "ts_max_delta",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.ts_max_delta,
    "Maximum permitted TS delta from another server"
  },
  {
    "ts_warn_delta",
    OUTPUT_DECIMAL,
    &ConfigFileEntry.ts_warn_delta,
    "Maximum permitted TS delta before displaying a warning"
  },
  {
    "warn_no_nline",
    OUTPUT_BOOLEAN,
    &ConfigFileEntry.warn_no_nline,
    "Display warning if connecting server lacks N-line"
  },
  {
    "default_split_server_count",
    OUTPUT_DECIMAL,
    &ConfigChannel.default_split_server_count,
    "Startup value of SPLITNUM",
  },
  {
    "default_split_user_count",
    OUTPUT_DECIMAL,
    &ConfigChannel.default_split_user_count,
    "Startup value of SPLITUSERS",
  },
  {
    "knock_delay",
    OUTPUT_DECIMAL,
    &ConfigChannel.knock_delay,
    "Delay between a users KNOCK attempts"
  },
  {
    "knock_delay_channel",
    OUTPUT_DECIMAL,
    &ConfigChannel.knock_delay_channel,
    "Delay between KNOCK attempts to a channel",
  },
  {
    "max_bans",
    OUTPUT_DECIMAL,
    &ConfigChannel.max_bans,
    "Total +b/e/I modes allowed in a channel",
  },
  {
    "max_chans_per_user",
    OUTPUT_DECIMAL,
    &ConfigChannel.max_chans_per_user,
    "Maximum number of channels a user can join",
  },
  {
    "no_create_on_split",
    OUTPUT_BOOLEAN_YN,
    &ConfigChannel.no_create_on_split,
    "Disallow creation of channels when split",
  },
  {
    "no_join_on_split",
    OUTPUT_BOOLEAN_YN,
    &ConfigChannel.no_join_on_split,
    "Disallow joining channels when split",
  },
  {
    "oper_pass_resv",
    OUTPUT_BOOLEAN_YN,
    &ConfigFileEntry.oper_pass_resv,
    "Opers can over-ride RESVs",
  },
  {
    "quiet_on_ban",
    OUTPUT_BOOLEAN_YN,
    &ConfigChannel.quiet_on_ban,
    "Banned users may not send text to a channel"
  },
  {
    "use_except",
    OUTPUT_BOOLEAN_YN,
    &ConfigChannel.use_except,
    "Enable chanmode +e (ban exceptions)",
  },
  {
    "use_invex",
    OUTPUT_BOOLEAN_YN,
    &ConfigChannel.use_invex,
    "Enable chanmode +I (invite exceptions)",
  },
  {
    "use_knock",
    OUTPUT_BOOLEAN_YN,
    &ConfigChannel.use_knock,
    "Enable /KNOCK",
  },
  {
    "use_logging",
    OUTPUT_BOOLEAN_YN,
    &ConfigLoggingEntry.use_logging,
    "Enable logging"
  },
  {
    "fuserlog",
    OUTPUT_STRING_PTR,
    &ConfigLoggingEntry.userlog,
    "User log file"
  },
  {
    "foperlog",
    OUTPUT_STRING_PTR,
    &ConfigLoggingEntry.operlog,
    "Operator log file"
  },
  {
    "ffailed_operlog",
    OUTPUT_STRING_PTR,
    &ConfigLoggingEntry.failed_operlog,
    "Failed operator log file"
  },
  {
    "disable_hidden",
    OUTPUT_BOOLEAN_YN,
    &ConfigServerHide.disable_hidden,
    "Prevent servers from hiding themselves from a flattened /links",
  },
  {
    "disable_local_channels",
    OUTPUT_BOOLEAN_YN,
    &ConfigChannel.disable_local_channels,
    "Prevent users joining &channels",
  },
  {
    "disable_remote_commands",
    OUTPUT_BOOLEAN_YN,
    &ConfigFileEntry.disable_remote,
    "Prevent users issuing commands on remote servers",
  },
  {
    "flatten_links",
    OUTPUT_BOOLEAN_YN,
    &ConfigServerHide.flatten_links,
    "Flatten /links list",
  },
  {
    "hidden",
    OUTPUT_BOOLEAN_YN,
    &ConfigServerHide.hidden,
    "Hide this server from a flattened /links on remote servers",
  },
  {
    "hide_servers",
    OUTPUT_BOOLEAN_YN,
    &ConfigServerHide.hide_servers,
    "Hide servernames from users",
  },
  {
    "links_delay",
    OUTPUT_DECIMAL,
    &ConfigServerHide.links_delay,
    "Links rehash delay"
  },
  /* --[  END OF TABLE  ]---------------------------------------------- */
  {
    NULL,
    0,
    NULL,
    0
  }
};

/*
** m_info()
**  parv[0] = sender prefix
**  parv[1] = servername
*/
static void
m_info(struct Client *client_p, struct Client *source_p,
       int parc, char *parv[])
{
  static time_t last_used = 0;

  if ((last_used + ConfigFileEntry.pace_wait) > CurrentTime)
  {
    /* safe enough to give this on a local connect only */
    sendto_one(source_p, form_str(RPL_LOAD2HI),
               me.name, source_p->name);
    return;
  }
  else
    last_used = CurrentTime;

  if (!ConfigFileEntry.disable_remote)
  {
    if (hunt_server(client_p,source_p, ":%s INFO :%s",
                    1, parc, parv) != HUNTED_ISME)
    {
      return;
    }
  }

  info_spy(source_p);

  send_info_text(source_p);
  send_birthdate_online_time(source_p);

  sendto_one(source_p, form_str(RPL_ENDOFINFO),
             me.name, source_p->name);
}

/*
** mo_info()
**  parv[0] = sender prefix
**  parv[1] = servername
*/
static void
mo_info(struct Client *client_p, struct Client *source_p,
        int parc, char *parv[])
{
  if (hunt_server(client_p, source_p, ":%s INFO :%s", 1,
                  parc, parv) != HUNTED_ISME)
    return;

  info_spy(source_p);
  
  send_info_text(source_p);
  send_conf_options(source_p);
  send_birthdate_online_time(source_p);

  sendto_one(source_p, form_str(RPL_ENDOFINFO),
             me.name, source_p->name);
}

/*
** ms_info()
**  parv[0] = sender prefix
**  parv[1] = servername
*/
static void
ms_info(struct Client *client_p, struct Client *source_p,
        int parc, char *parv[])
{
  if (!IsClient(source_p))
      return;

  if (hunt_server(client_p, source_p, ":%s INFO :%s",
                  1, parc, parv) != HUNTED_ISME)
    return;

  info_spy(source_p);
  send_info_text(source_p); 

  if (IsOper(source_p))
    send_conf_options(source_p);
      
  send_birthdate_online_time(source_p);
  sendto_one(source_p, form_str(RPL_ENDOFINFO),
             ID_or_name(&me, client_p), ID_or_name(source_p, client_p));
}

/* send_info_text()
 *
 * inputs	- client pointer to send info text to
 * output	- NONE
 * side effects	- info text is sent to client
 */
static void
send_info_text(struct Client *source_p)
{
  const char **text = infotext;
  char *source, *target;
  
  if (!MyClient(source_p) && IsCapable(source_p->from, CAP_TS6) &&
      HasID(source_p))
    source = me.id, target = source_p->id;
  else
    source = me.name, target = source_p->name;

  while (*text)
  {
    const char *line = *text++;

    if (*line == '\0')
      line = " ";

    sendto_one(source_p, form_str(RPL_INFO),
               source, target, line);
  }
}

/* send_birthdate_online_time()
 *
 * inputs	- client pointer to send to
 * output	- NONE
 * side effects	- birthdate and online time are sent
 */
static void
send_birthdate_online_time(struct Client *source_p)
{
  if (!MyClient(source_p) && IsCapable(source_p->from, CAP_TS6) && HasID(source_p))
  {
    sendto_one(source_p, ":%s %d %s :Birth Date: %s, compile # %s",
               me.id, RPL_INFO, source_p->id,
               creation, generation);
             
    sendto_one(source_p, ":%s %d %s :On-line since %s",
               me.id, RPL_INFO, source_p->id,
               myctime(me.firsttime));
  }
  else
  {
    sendto_one(source_p, ":%s %d %s :Birth Date: %s, compile # %s",
               me.name, RPL_INFO, source_p->name,
               creation, generation);

    sendto_one(source_p, ":%s %d %s :On-line since %s",
               me.name, RPL_INFO, source_p->name,
               myctime(me.firsttime));
  }
}

/* send_conf_options()
 *
 * inputs	- client pointer to send to
 * output	- NONE
 * side effects	- send config options to client
 */
static void
send_conf_options(struct Client *source_p)
{
  Info *infoptr;
  int i = 0;
  const char *from, *to;

  

  /* Now send them a list of all our configuration options
   * (mostly from defaults.h and setup.h)
   */
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

  for (infoptr = MyInformation; infoptr->name; infoptr++)
  {
    if (infoptr->intvalue)
    {
      sendto_one(source_p, ":%s %d %s :%-30s %-5d [%-30s]",
                 from, RPL_INFO, to, infoptr->name,
                 infoptr->intvalue, infoptr->desc);
    }
    else
    {
      sendto_one(source_p, ":%s %d %s :%-30s %-5s [%-30s]",
                 from, RPL_INFO, to, infoptr->name,
                 infoptr->strvalue, infoptr->desc);
    }
  }

  /*
   * Parse the info_table[] and do the magic.
   */
  for (i = 0; info_table[i].name; i++)
  {
    switch (info_table[i].output_type)
    {
      /* For "char *" references */
      case OUTPUT_STRING:
      {
        char *option = *((char **)info_table[i].option);

        sendto_one(source_p, ":%s %d %s :%-30s %-5s [%-30s]",
                   from, RPL_INFO, to,
                   info_table[i].name, option ? option : "NONE",
                   info_table[i].desc ? info_table[i].desc : "<none>");
        break;
      }

      /* For "char foo[]" references */
      case OUTPUT_STRING_PTR:
      {
        const char *option = info_table[i].option;

        sendto_one(source_p, ":%s %d %s :%-30s %-5s [%-30s]",
                   from, RPL_INFO, to,
                   info_table[i].name, option ? option : "NONE",
                   info_table[i].desc ? info_table[i].desc : "<none>");
        break;
      }

      /* Output info_table[i].option as a decimal value. */
      case OUTPUT_DECIMAL:
      {
        int option = *((int *)info_table[i].option);

        sendto_one(source_p, ":%s %d %s :%-30s %-5d [%-30s]",
                   from, RPL_INFO, to, info_table[i].name,
                   option, info_table[i].desc ? info_table[i].desc : "<none>");
        break;
      }

      /* Output info_table[i].option as "ON" or "OFF" */
      case OUTPUT_BOOLEAN:
      {
        int option = *((int *)info_table[i].option);

        sendto_one(source_p, ":%s %d %s :%-30s %-5s [%-30s]",
                   from, RPL_INFO, to,
                   info_table[i].name, option ? "ON" : "OFF",
                   info_table[i].desc ? info_table[i].desc : "<none>");

        break;
      }

      /* Output info_table[i].option as "YES" or "NO" */
      case OUTPUT_BOOLEAN_YN:
      {
        int option = *((int *)info_table[i].option);

        sendto_one(source_p, ":%s %d %s :%-30s %-5s [%-30s]",
                   from, RPL_INFO, to,
                   info_table[i].name, option ? "YES" : "NO",
                   info_table[i].desc ? info_table[i].desc : "<none>");
        break;
      }
    }
  }

  /* Don't send oper_only_umodes...it's a bit mask, we will have to decode it
   * in order for it to show up properly to opers who issue INFO
   */
#ifndef EFNET
  /* jdc -- Only send compile information to admins. */
  if (IsAdmin(source_p))
  {
    sendto_one(source_p, ":%s %d %s :Compiled on [%s]",
               from, RPL_INFO, to, platform); 
  }
#endif
  sendto_one(source_p, form_str(RPL_INFO),
             from, to, "");
}

/* info_spy()
 * 
 * input        - pointer to client
 * output       - NONE
 * side effects - hook doing_info is called
 */
static void
info_spy(struct Client *source_p)
{
  struct hook_spy_data data;

  data.source_p = source_p;

  hook_call_event("doing_info", &data);
}
