/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  ircd_parser.y: Parses the ircd configuration file.
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
 *  $Id: ircd_parser.y,v 1.320 2003/06/21 01:28:29 michael Exp $
 */

%{

/* XXX */
#define WE_ARE_MEMORY_C

#define YY_NO_UNPUT
#include "stdinc.h"
#include "dalloca.h"
#include "ircd.h"
#include "tools.h"
#include "list.h"
#include "s_conf.h"
#include "event.h"
#include "s_log.h"
#include "client.h"	/* for UMODE_ALL only */
#include "irc_string.h"
#include "irc_getaddrinfo.h"
#include "ircdauth.h"
#include "memory.h"
#include "modules.h"
#include "s_serv.h" /* for CAP_LL / IsCapable */
#include "hostmask.h"
#include "send.h"
#include "listener.h"
#include "resv.h"
#include "numeric.h"
#include "cluster.h"

#ifdef HAVE_LIBCRYPTO
#include <openssl/rsa.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#endif

static struct ConfItem *yy_conf = NULL;
static struct AccessItem *yy_aconf = NULL;
static struct MatchItem *yy_match_item = NULL;
static struct cluster *cptr = NULL;
static struct Class *yy_class = NULL;

static dlink_list aconf_list       = { NULL, NULL, 0 };
static dlink_list hub_aconfs_list  = { NULL, NULL, 0 };
static dlink_list leaf_aconfs_list = { NULL, NULL, 0 };

static char *resv_reason;
static char *listener_address;

static void
init_parser_confs(void)
{
  struct AccessItem *yy_tmp;
  dlink_node *ptr;
  dlink_node *next_ptr;

  DLINK_FOREACH_SAFE(ptr, next_ptr, aconf_list.head)
  {
    yy_tmp = ptr->data;
    dlinkDelete(ptr, &aconf_list);
    free_access_item(yy_tmp);
  }
}

%}

%union {
  int number;
  char *string;
  struct ip_value ip_entry;
}

%token  ACCEPT_PASSWORD
%token  ACTION
%token  ADMIN
%token  AFTYPE
%token  ANTI_NICK_FLOOD
%token  ANTI_SPAM_EXIT_MESSAGE_TIME
%token  IRCD_AUTH
%token  AUTOCONN
%token  BASE_PATH
%token  BYTES KBYTES MBYTES GBYTES TBYTES
%token  CALLER_ID_WAIT
%token  CAN_FLOOD
%token  CHANNEL
%token  CIPHER_PREFERENCE
%token  CLASS
%token  CLIENT_EXIT
%token  COMPRESSED
%token  COMPRESSION_LEVEL
%token  CONNECT
%token  CONNECTFREQ
%token  CRYPTLINK
%token  DEFAULT_CIPHER_PREFERENCE
%token  DEFAULT_FLOODCOUNT
%token  DEFAULT_SPLIT_SERVER_COUNT
%token  DEFAULT_SPLIT_USER_COUNT
%token  DENY
%token  DESCRIPTION
%token  DIE
%token  DISABLE_AUTH
%token  DISABLE_HIDDEN
%token  DISABLE_LOCAL_CHANNELS
%token  DISABLE_REMOTE_COMMANDS
%token  DOT_IN_IP6_ADDR
%token  DOTS_IN_IDENT
%token  EGDPOOL_PATH
%token  EMAIL
%token  ENCRYPTED
%token  EXCEED_LIMIT
%token  EXEMPT
%token  FAILED_OPER_NOTICE
%token  FAKENAME
%token  FALLBACK_IP6_INT
%token  FLATTEN_LINKS
%token  FNAME_FOPERLOG
%token  FNAME_OPERLOG
%token  FNAME_USERLOG
%token  GECOS
%token  GENERAL
%token  GLINE
%token  GLINES
%token  GLINE_EXEMPT
%token  GLINE_LOG
%token  GLINE_TIME
%token  GLOBAL_KILL
%token  HAVE_IDENT
%token	HAVENT_READ_CONF
%token  HIDDEN
%token  HIDDEN_ADMIN
%token	HIDE_SERVER_IPS
%token  HIDE_SERVERS
%token  HOST
%token  HUB
%token  HUB_MASK
%token  IAUTH_PORT
%token  IAUTH_SERVER
%token  IDLETIME
%token  IGNORE_BOGUS_TS
%token  IP
%token  KILL
%token  KLINE
%token  KLINE_EXEMPT
%token  KLINE_WITH_CONNECTION_CLOSED
%token  KLINE_WITH_REASON
%token  KNOCK_DELAY
%token  KNOCK_DELAY_CHANNEL
%token  LAZYLINK
%token  LEAF_MASK
%token  LINKS_DELAY
%token  LISTEN
%token  LOGGING
%token  LOG_LEVEL
%token  MAXIMUM_LINKS
%token  MAX_ACCEPT
%token  MAX_BANS
%token  MAX_CHANS_PER_USER
%token  MAX_GLOBAL
%token  MAX_IDENT
%token  MAX_LOCAL
%token  MAX_NICK_CHANGES
%token  MAX_NICK_TIME
%token  MAX_NUMBER
%token  MAX_TARGETS
%token  MESSAGE_LOCALE
%token  MIN_NONWILDCARD
%token	MIN_NONWILDCARD_SIMPLE
%token  MODULE
%token  MODULES
%token  NAME
%token  NETWORK_DESC
%token  NETWORK_NAME
%token	NICK
%token  NICK_CHANGES
%token  NON_REDUNDANT_KLINES
%token  NO_CREATE_ON_SPLIT
%token  NO_JOIN_ON_SPLIT
%token  NO_OPER_FLOOD
%token  NO_TILDE
%token  NUMBER
%token  NUMBER_PER_IDENT
%token  NUMBER_PER_IP
%token  NUMBER_PER_IP_GLOBAL
%token  OPERATOR
%token  OPER_LOG
%token  OPER_ONLY_UMODES
%token	OPER_PASS_RESV
%token  OPER_UMODES
%token  CRYPT_OPER_PASSWORD
%token  PACE_WAIT
%token	PACE_WAIT_SIMPLE
%token  PASSWORD
%token  PATH
%token  PING_COOKIE
%token  PING_TIME
%token  PORT
%token  QSTRING
%token  QUIET_ON_BAN
%token  REASON
%token  REDIRPORT
%token  REDIRSERV
%token  REHASH
%token  REMOTE
%token  RESTRICTED
%token  RSA_PRIVATE_KEY_FILE
%token  RSA_PUBLIC_KEY_FILE
%token	RESV
%token  SECONDS MINUTES HOURS DAYS WEEKS
%token  SENDQ
%token  SEND_PASSWORD
%token  SERVERHIDE
%token  SERVERINFO
%token  SERVLINK_PATH
%token  SID
%token  T_SHARED
%token	T_CLUSTER
%token	TYPE
%token  SHORT_MOTD
%token  SILENT
%token  SPOOF
%token  SPOOF_NOTICE
%token  STATS_I_OPER_ONLY
%token  STATS_K_OPER_ONLY
%token  STATS_O_OPER_ONLY
%token  STATS_P_OPER_ONLY
%token  TBOOL
%token  TMASKED
%token  TREJECT
%token  TS_MAX_DELTA
%token  TS_WARN_DELTA
%token  TWODOTS
%token	T_ALL
%token  T_BOTS
%token  T_CALLERID
%token  T_CCONN
%token  T_CLIENT_FLOOD
%token  T_DEBUG
%token  T_DRONE
%token  T_EXTERNAL
%token  T_FULL
%token  T_INVISIBLE
%token  T_IPV4
%token  T_IPV6
%token  T_LOCOPS
%token  T_LOGPATH
%token  T_L_CRIT
%token  T_L_DEBUG
%token  T_L_ERROR
%token  T_L_INFO
%token  T_L_NOTICE
%token  T_L_TRACE
%token  T_L_WARN
%token  T_MAX_CLIENTS
%token  T_NCHANGE
%token  T_OPERWALL
%token  T_REJ
%token  T_SERVNOTICE
%token  T_SKILL
%token  T_SPY
%token  T_UNAUTH
%token	T_UNRESV
%token	T_UNXLINE
%token  T_WALLOP
%token  THROTTLE_TIME
%token  TRUE_NO_OPER_FLOOD
%token  UNKLINE
%token  USER
%token  USE_EGD
%token  USE_EXCEPT
%token  USE_INVEX
%token  USE_KNOCK
%token  USE_LOGGING
%token  VHOST
%token  VHOST6
%token  XLINE
%token  WARN
%token  WARN_NO_NLINE

%type <string> QSTRING
%type <number> NUMBER
%type <number> timespec
%type <number> timespec_
%type <number> sizespec
%type <number> sizespec_

%%
conf:   
        | conf conf_item
        ;

conf_item:        admin_entry
                | logging_entry
                | oper_entry
		| channel_entry
                | class_entry 
                | listen_entry
                | auth_entry
                | serverinfo_entry
		| serverhide_entry
                | resv_entry
                | shared_entry
		| cluster_entry
                | connect_entry
                | kill_entry
                | deny_entry
		| exempt_entry
		| general_entry
                | gecos_entry
                | modules_entry
                | error ';'
                | error '}'
        ;


timespec_: { $$ = 0; } | timespec;
timespec:	NUMBER timespec_
		{
			$$ = $1 + $2;
		}
		| NUMBER SECONDS timespec_
		{
			$$ = $1 + $3;
		}
		| NUMBER MINUTES timespec_
		{
			$$ = $1 * 60 + $3;
		}
		| NUMBER HOURS timespec_
		{
			$$ = $1 * 60 * 60 + $3;
		}
		| NUMBER DAYS timespec_
		{
			$$ = $1 * 60 * 60 * 24 + $3;
		}
		| NUMBER WEEKS timespec_
		{
			$$ = $1 * 60 * 60 * 24 * 7 + $3;
		}
		;

sizespec_:	{ $$ = 0; } | sizespec;
sizespec:	NUMBER sizespec_ { $$ = $1 + $2; }
		| NUMBER BYTES sizespec_ { $$ = $1 + $3; }
		| NUMBER KBYTES sizespec_ { $$ = $1 * 1024 + $3; }
		| NUMBER MBYTES sizespec_ { $$ = $1 * 1024 * 1024 + $3; }
		;


/***************************************************************************
 *  section modules
 ***************************************************************************/
modules_entry: MODULES
  '{' modules_items '}' ';';

modules_items:  modules_items modules_item | modules_item;
modules_item:   modules_module | modules_base_path | modules_path | error;

modules_module: MODULE '=' QSTRING ';'
{
#ifndef STATIC_MODULES /* NOOP in the static case */
  if (ypass == 2)
  {
    char *m_bn;

    m_bn = basename(yylval.string);

    /* I suppose we should just ignore it if it is already loaded(since
     * otherwise we would flood the opers on rehash) -A1kmm.
     */
    if (findmodule_byname(m_bn) == -1)
      /* XXX - should we unload this module on /rehash, if it isn't listed? */
      load_one_module(yylval.string, 0);
  }
#endif
};

modules_path: PATH '=' QSTRING ';'
{
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
};

modules_base_path: BASE_PATH '=' QSTRING ';'
{
#ifndef STATIC_MODULES
  if (ypass == 2)
     mod_set_base(yylval.string);
#endif
};

/***************************************************************************
 *  section serverinfo
 ***************************************************************************/
serverinfo_entry: SERVERINFO
  '{' serverinfo_items '}' ';';

serverinfo_items:       serverinfo_items serverinfo_item |
                        serverinfo_item ;
serverinfo_item:        serverinfo_name | serverinfo_vhost |
                        serverinfo_hub | serverinfo_description |
                        serverinfo_network_name | serverinfo_network_desc |
                        serverinfo_max_clients | 
                        serverinfo_rsa_private_key_file | serverinfo_vhost6 |
                        serverinfo_sid |
			error;

serverinfo_rsa_private_key_file: RSA_PRIVATE_KEY_FILE '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    BIO *file;

    if (ServerInfo.rsa_private_key)
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;
    }

    if (ServerInfo.rsa_private_key_file)
    {
      MyFree(ServerInfo.rsa_private_key_file);
      ServerInfo.rsa_private_key_file = NULL;
    }

    DupString(ServerInfo.rsa_private_key_file, yylval.string);

    if ((file = BIO_new_file(yylval.string, "r")) == NULL)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "Ignoring config file entry rsa_private_key -- file open failed"
                           " (%s)", yylval.string);
      break;
    }

    ServerInfo.rsa_private_key = (RSA *)PEM_read_bio_RSAPrivateKey(file, NULL, 0, NULL);

    if (ServerInfo.rsa_private_key == NULL)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "Ignoring config file entry rsa_private_key -- couldn't extract key");
      break;
    }

    if (!RSA_check_key(ServerInfo.rsa_private_key))
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "Ignoring config file entry rsa_private_key -- invalid key");
      break;
    }

    /* require 2048 bit (256 byte) key */
    if (RSA_size(ServerInfo.rsa_private_key) != 256)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "Ignoring config file entry rsa_private_key -- not 2048 bit");
      break;
    }

    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif
};

serverinfo_name: NAME '=' QSTRING ';' 
{
  /* this isn't rehashable */
  if (ypass == 2)
  {
    if (ServerInfo.name == NULL)
    {
      /* the ircd will exit() in main() if we dont set one */
      if (strlen(yylval.string) <= HOSTLEN)
        DupString(ServerInfo.name, yylval.string);
    }
  }
};

serverinfo_sid: SID '=' QSTRING ';' 
{
  /* this isn't rehashable */
  if (ypass == 2)
  {
    MyFree(ServerInfo.sid);
    DupString(ServerInfo.sid, yylval.string);
  }
};

serverinfo_description: DESCRIPTION '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
};

serverinfo_network_name: NETWORK_NAME '=' QSTRING ';'
{
  if (ypass == 2)
  {
    char *p;

    if ((p = strchr(yylval.string, ' ')) != NULL)
      p = '\0';

    MyFree(ServerInfo.network_name);
    DupString(ServerInfo.network_name, yylval.string);
  }
};

serverinfo_network_desc: NETWORK_DESC '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
};

serverinfo_vhost: VHOST '=' QSTRING ';'
{
  if (ypass == 2)
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (irc_getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(L_ERROR, "Invalid netmask for server vhost(%s)", yylval.string);
    else
    {
      ServerInfo.specific_ipv4_vhost = 1;

      assert(res != NULL);

      memcpy(&ServerInfo.ip, res->ai_addr, res->ai_addrlen);
      ServerInfo.ip.ss.ss_family = res->ai_family;
      ServerInfo.ip.ss_len = res->ai_addrlen;
      irc_freeaddrinfo(res);

      ServerInfo.specific_ipv4_vhost = 1;
    }
  }
};

serverinfo_vhost6: VHOST6 '=' QSTRING ';'
{
#ifdef IPV6
  if (ypass == 2)
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (irc_getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(L_ERROR, "Invalid netmask for server vhost6(%s)", yylval.string);
    else
    {
      assert(res != NULL);

      memcpy(&ServerInfo.ip6, res->ai_addr, res->ai_addrlen);
      ServerInfo.ip6.ss.ss_family = res->ai_family;
      ServerInfo.ip6.ss_len = res->ai_addrlen;
      irc_freeaddrinfo(res);

      ServerInfo.specific_ipv6_vhost = 1;
    }
  }
#endif
};

serverinfo_max_clients: T_MAX_CLIENTS '=' NUMBER ';'
{
  if (ypass == 2)
  {
    if (MAXCONN >= $3)
    {
      ServerInfo.max_clients = $3;
    }
    else
    {
      ilog(L_ERROR, "Setting serverinfo_max_clients to MAXCONN");
      ServerInfo.max_clients = MAXCONN;
    }
  }
};

serverinfo_hub: HUB '=' TBOOL ';' 
{
  if (ypass == 2)
  {
    if (yylval.number)
    {
      /* Don't become a hub if we have a lazylink active. */
      if (!ServerInfo.hub && uplink && IsCapable(uplink, CAP_LL))
      {
        sendto_realops_flags(UMODE_ALL, L_ALL,
                             "Ignoring config file line hub = yes; "
                             "due to active LazyLink (%s)", uplink->name);
      }
      else
      {
        ServerInfo.hub = 1;
        uplink = NULL;
        delete_capability("HUB");
        add_capability("HUB", CAP_HUB, 1);
      }
    }
    else if (ServerInfo.hub)
    {
      dlink_node *ptr;

      ServerInfo.hub = 0;
      delete_capability("HUB");

      /* Don't become a leaf if we have a lazylink active. */
      DLINK_FOREACH(ptr, serv_list.head)
      {
        if (MyConnect((struct Client *)ptr->data) &&
            IsCapable((struct Client *)ptr->data, CAP_LL))
        {
          sendto_realops_flags(UMODE_ALL, L_ALL,
                               "Ignoring config file line hub = no; "
                               "due to active LazyLink (%s)",
                               ((struct Client *)ptr->data)->name);
          add_capability("HUB", CAP_HUB, 1);
          ServerInfo.hub = 1;
          break;
        }
      }
    }
  }
};

/***************************************************************************
 * admin section
 ***************************************************************************/
admin_entry: ADMIN  '{' admin_items '}' ';' ;

admin_items: admin_items admin_item | admin_item;
admin_item:  admin_name | admin_description |
             admin_email | error;

admin_name: NAME '=' QSTRING ';' 
{
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
};

admin_email: EMAIL '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
};

admin_description: DESCRIPTION '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
};

/***************************************************************************
 *  section logging
 ***************************************************************************/
logging_entry:          LOGGING  '{' logging_items '}' ';' ;

logging_items:          logging_items logging_item |
                        logging_item ;

logging_item:           logging_path | logging_oper_log |
                        logging_gline_log | logging_log_level |
			logging_use_logging | error;

logging_path:           T_LOGPATH '=' QSTRING ';' 
                        {
                        };

logging_oper_log:	OPER_LOG '=' QSTRING ';'
                        {
                        };

logging_gline_log:	GLINE_LOG '=' QSTRING ';'
                        {
                        };

logging_log_level: LOG_LEVEL '=' T_L_CRIT ';'
{ 
  if (ypass == 2)
    set_log_level(L_CRIT);
} | LOG_LEVEL '=' T_L_ERROR ';'
{
  if (ypass == 2)
    set_log_level(L_ERROR);
} | LOG_LEVEL '=' T_L_WARN ';'
{
  if (ypass == 2)
    set_log_level(L_WARN);
} | LOG_LEVEL '=' T_L_NOTICE ';'
{
  if (ypass == 2)
    set_log_level(L_NOTICE);
} | LOG_LEVEL '=' T_L_TRACE ';'
{
  if (ypass == 2)
    set_log_level(L_TRACE);
} | LOG_LEVEL '=' T_L_INFO ';'
{
  if (ypass == 2)
    set_log_level(L_INFO);
} | LOG_LEVEL '=' T_L_DEBUG ';'
{
  if (ypass == 2)
    set_log_level(L_DEBUG);
};

logging_use_logging: USE_LOGGING '=' TBOOL ';'
{
  if (ypass == 2)
    use_logging = yylval.number;
};

/***************************************************************************
 * oper section
 ***************************************************************************/
oper_entry: OPERATOR 
{
  if (ypass == 2)
  {
    init_parser_confs();
    yy_conf = make_conf_item(OPER_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
} '{' oper_items '}' ';'
{
  if (ypass == 2)
  {
    struct AccessItem *yy_tmp;
    dlink_node *ptr;
    dlink_node *next_ptr;

    /* Fill in oper block */
    DLINK_FOREACH_SAFE(ptr, next_ptr, aconf_list.head)
    {
      yy_tmp = ptr->data;

      if (yy_aconf->class_name != NULL)
        DupString(yy_tmp->class_name, yy_aconf->class_name);
      if (yy_aconf->name != NULL)
        DupString(yy_tmp->name, yy_aconf->name);
      if (yy_aconf->passwd != NULL)
        DupString(yy_tmp->passwd, yy_aconf->passwd);

      yy_tmp->port = yy_aconf->port;
#ifdef HAVE_LIBCRYPTO
      if (yy_aconf->rsa_public_key_file != NULL)
        DupString(yy_tmp->rsa_public_key_file, yy_aconf->rsa_public_key_file);

      if (yy_aconf->rsa_public_key != NULL)
      {
        BIO *file;

        file = BIO_new_file(yy_aconf->rsa_public_key_file, "r");
        yy_tmp->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL);
        BIO_set_close(file, BIO_CLOSE);
        BIO_free(file);
      }
#endif
    }

    DLINK_FOREACH_SAFE(ptr, next_ptr, aconf_list.head)
    {
      yy_tmp = ptr->data;
#ifdef HAVE_LIBCRYPTO
      if (yy_tmp->name && (yy_tmp->passwd || yy_aconf->rsa_public_key) && yy_tmp->host)
#else
      if (yy_tmp->name && yy_tmp->passwd && yy_tmp->host)
#endif
      {
        conf_add_class_to_conf(yy_tmp);
        dlinkDelete(ptr, &aconf_list);
      }
      else
      {
        dlinkDelete(ptr, &aconf_list);
        free_access_item(yy_tmp);
      }
    }
    yy_aconf = NULL;
  }
}; 

oper_items:     oper_items oper_item | oper_item;
oper_item:      oper_name  | oper_user | oper_password | oper_hidden_admin |
                oper_class | oper_global_kill | oper_remote |
                oper_kline | oper_xline | oper_unkline |
		oper_gline | oper_nick_changes |
                oper_die | oper_rehash | oper_admin |
		oper_rsa_public_key_file | error;

oper_name: NAME '=' QSTRING ';'
{
  if (ypass == 2)
  {
    if (strlen(yylval.string) > OPERNICKLEN)
      yylval.string[OPERNICKLEN] = '\0';

    MyFree(yy_aconf->name);
    DupString(yy_aconf->name, yylval.string);
  }
};

oper_user: USER '=' QSTRING ';'
{
  if (ypass == 2)
  {
    struct AccessItem *yy_tmp;

    yy_conf = make_conf_item(OPER_TYPE);
    yy_tmp = (struct AccessItem *)map_to_conf(yy_conf);

    DupString(yy_tmp->host, yylval.string);
    split_user_host(yy_tmp->host, &yy_tmp->user, &yy_tmp->host);

    dlinkAdd(yy_tmp, make_dlink_node(), &aconf_list);
  }
};

oper_password: PASSWORD '=' QSTRING ';'
{
  if (ypass == 2)
  {
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
};

oper_hidden_admin: HIDDEN_ADMIN '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
    else
      yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
  }
};

oper_rsa_public_key_file: RSA_PUBLIC_KEY_FILE '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    BIO *file;

    if (yy_aconf->rsa_public_key != NULL)
    {
      RSA_free(yy_aconf->rsa_public_key);
      yy_aconf->rsa_public_key = NULL;
    }

    if (yy_aconf->rsa_public_key_file != NULL)
    {
      MyFree(yy_aconf->rsa_public_key_file);
      yy_aconf->rsa_public_key_file = NULL;
    }

    DupString(yy_aconf->rsa_public_key_file, yylval.string);
    file = BIO_new_file(yylval.string, "r");

    if (file == NULL)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL, "Ignoring rsa_public_key_file -- "
                           "does %s exist?", yylval.string);
      break;
    }

    yy_aconf->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL);

    if (yy_aconf->rsa_public_key == NULL)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "Ignoring rsa_public_key_file -- Key invalid; check key syntax.");
      break;
    }

    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif /* HAVE_LIBCRYPTO */
};

oper_class: CLASS '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(yy_aconf->class_name);
    DupString(yy_aconf->class_name, yylval.string);
  }
};

oper_global_kill: GLOBAL_KILL '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
    else
      yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
  }
};

oper_remote: REMOTE '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REMOTE;
    else
      yy_aconf->port &= ~OPER_FLAG_REMOTE; 
  }
};

oper_kline: KLINE '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_K;
    else
      yy_aconf->port &= ~OPER_FLAG_K;
  }
};

oper_xline: XLINE '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_X;
    else
      yy_aconf->port &= ~OPER_FLAG_X;
  }
};

oper_unkline: UNKLINE '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_UNKLINE;
    else
      yy_aconf->port &= ~OPER_FLAG_UNKLINE; 
  }
};

oper_gline: GLINE '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_GLINE;
    else
      yy_aconf->port &= ~OPER_FLAG_GLINE;
  }
};

oper_nick_changes: NICK_CHANGES '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_N;
    else
      yy_aconf->port &= ~OPER_FLAG_N;
  }
};

oper_die: DIE '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_DIE;
    else
      yy_aconf->port &= ~OPER_FLAG_DIE;
  }
};

oper_rehash: REHASH '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REHASH;
    else
      yy_aconf->port &= ~OPER_FLAG_REHASH;
  }
};

oper_admin: ADMIN '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_ADMIN;
    else
      yy_aconf->port &= ~OPER_FLAG_ADMIN;
  }
};

/***************************************************************************
 *  section class
 ***************************************************************************/
class_entry: CLASS
{
  if (ypass == 1)
  {
    yy_class = make_class(NULL);
  }
} '{' class_items '}' ';'
{
  if (ypass == 1)
  {
    if ((yy_class != NULL) && (yy_class->class_name != NULL))
    {
      add_class(yy_class);
      yy_class = NULL;
    }
  }
};

class_items:    class_items class_item | class_item;
class_item:     class_name |
                class_ping_time |
                class_number_per_ip |
                class_connectfreq |
                class_max_number |
		class_max_global |
		class_max_local |
		class_max_ident |
                class_sendq |
		error;

class_name: NAME '=' QSTRING ';' 
{
  if (ypass == 1)
  {
    DupString(ClassName(yy_class), yylval.string);
  }
};

class_ping_time: PING_TIME '=' timespec ';'
{
  if (ypass == 1)
    PingFreq(yy_class) = $3;
};

class_number_per_ip: NUMBER_PER_IP '=' NUMBER ';'
{
  if (ypass == 1)
    MaxPerIp(yy_class) = $3;
};

class_connectfreq: CONNECTFREQ '=' timespec ';'
{
  if (ypass == 1)
    ConFreq(yy_class) = $3;
};

class_max_number: MAX_NUMBER '=' NUMBER ';'
{
  if (ypass == 1)
    MaxTotal(yy_class) = $3;
};

class_max_global: MAX_GLOBAL '=' NUMBER ';'
{
  if (ypass == 1)
    MaxGlobal(yy_class) = $3;
};

class_max_local: MAX_LOCAL '=' NUMBER ';'
{
  if (ypass == 1)
    MaxLocal(yy_class) = $3;
};

class_max_ident: MAX_IDENT '=' NUMBER ';'
{
  if (ypass == 1)
    MaxIdent(yy_class) = $3;
};

class_sendq: SENDQ '=' sizespec ';'
{
  if (ypass == 1)
    MaxSendq(yy_class) = $3;
};

/***************************************************************************
 *  section listen
 ***************************************************************************/
listen_entry: LISTEN
{
  if (ypass == 2)
    listener_address = NULL;
} '{' listen_items '}' ';'
{
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
};

listen_items:   listen_items listen_item | listen_item;
listen_item:    listen_port | listen_address | listen_host | error;

listen_port: PORT '=' port_items ';' ;

port_items: port_items ',' port_item | port_item;

port_item: NUMBER
{
  if (ypass == 2)
    add_listener($1, listener_address);
} | NUMBER TWODOTS NUMBER
{
  if (ypass == 2)
  {
    int i;

    for (i = $1; i <= $3; i++)
    {
      add_listener(i, listener_address);
    }
  }
};

listen_address: IP '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
};

listen_host: HOST '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
};

/***************************************************************************
 *  section auth
 ***************************************************************************/
auth_entry: IRCD_AUTH
{
  if (ypass == 2)
  {
    init_parser_confs();
    yy_conf = make_conf_item(CLIENT_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
} '{' auth_items '}' ';' 
{
  if (ypass == 2)
  {
    dlink_node *ptr;
    dlink_node *next_ptr;
    struct AccessItem *yy_tmp;

    /* copy over settings from first struct */
    DLINK_FOREACH(ptr, aconf_list.head)
    {
      yy_tmp = ptr->data;

      if (yy_aconf->passwd != NULL)
        DupString(yy_tmp->passwd, yy_aconf->passwd);
      if (yy_aconf->name != NULL)
        DupString(yy_tmp->name, yy_aconf->name);
      if (yy_aconf->class_name != NULL)
        DupString(yy_tmp->class_name, yy_aconf->class_name);

      yy_tmp->flags = yy_aconf->flags;
      yy_tmp->port  = yy_aconf->port;
    }

    DLINK_FOREACH_SAFE(ptr, next_ptr, aconf_list.head)
    {
      yy_tmp = ptr->data;

      if (yy_tmp->name == NULL)
        DupString(yy_tmp->name, "NOMATCH");
      conf_add_class_to_conf(yy_tmp);

      if (yy_tmp->user == NULL)
        DupString(yy_tmp->user, "*");
      else
        collapse(yy_tmp->user);

      if (yy_tmp->host != NULL)
      {
        collapse(yy_tmp->host);
        add_conf_by_address(yy_tmp->host, CONF_CLIENT, yy_tmp->user, yy_tmp);
      }
      else
      {
        free_access_item(yy_tmp);
      }

      dlinkDelete(ptr, &aconf_list);
    }

    free_access_item(yy_aconf);
    yy_aconf = NULL;
  }
}; 

auth_items:     auth_items auth_item | auth_item;
auth_item:      auth_user | auth_passwd | auth_class |
                auth_kline_exempt | auth_have_ident | auth_is_restricted |
                auth_exceed_limit | auth_no_tilde | auth_gline_exempt |
                auth_spoof | auth_spoof_notice |
                auth_redir_serv | auth_redir_port | auth_can_flood |
                error;

auth_user: USER '=' QSTRING ';'
{
  if (ypass == 2)
  {
    struct AccessItem *yy_tmp=NULL;

    yy_conf = make_conf_item(CLIENT_TYPE);
    yy_tmp = (struct AccessItem *)map_to_conf(yy_conf);

    if (yylval.string != NULL)
    {
      DupString(yy_tmp->host, yylval.string);
      split_user_host(yy_tmp->host, &yy_tmp->user, &yy_tmp->host);
    }
    dlinkAdd(yy_tmp, make_dlink_node(), &aconf_list);
  }
};

/* XXX - IP/IPV6 tags don't exist anymore - put IP/IPV6 into user. */
auth_passwd: PASSWORD '=' QSTRING ';' 
{
  if (ypass == 2)
  {
    /* be paranoid */
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
};

/* TYES/TNO are flipped to change the default value to YES */
auth_spoof_notice: SPOOF_NOTICE '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else
      yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }
};

/* XXX - need check for illegal hostnames here */
auth_spoof: SPOOF '=' QSTRING ';' 
{
  if (ypass == 2)
  {
    MyFree(yy_aconf->name);

    if (strlen(yylval.string) < HOSTLEN)
    {    
      DupString(yy_aconf->name, yylval.string);
      yy_aconf->flags |= CONF_FLAGS_SPOOF_IP;
    }
    else
      ilog(L_ERROR, "Spoofs must be less than %d..ignoring it", HOSTLEN);
  }
};

auth_exceed_limit: EXCEED_LIMIT '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
  }
};

auth_is_restricted: RESTRICTED '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_RESTRICTED;
    else
      yy_aconf->flags &= ~CONF_FLAGS_RESTRICTED;
  }
};

auth_kline_exempt: KLINE_EXEMPT '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
  }
};

auth_have_ident: HAVE_IDENT '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
  }
};

auth_can_flood: CAN_FLOOD '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
  }
};

auth_no_tilde: NO_TILDE '=' TBOOL ';' 
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
  }
};

auth_gline_exempt: GLINE_EXEMPT '=' TBOOL ';' 
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
  }
};

auth_redir_serv: REDIRSERV '=' QSTRING ';'
{
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_aconf->name);
    DupString(yy_aconf->name, yylval.string);
  }
};

auth_redir_port: REDIRPORT '=' NUMBER ';'
{
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = $3;
  }
};

auth_class: CLASS '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(yy_aconf->class_name);
    DupString(yy_aconf->class_name, yylval.string);
  }
};

/***************************************************************************
 *  section resv
 ***************************************************************************/
resv_entry: RESV
{
  if (ypass == 2)
    resv_reason = NULL;
} '{' resv_items '}' ';'
{
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
};

resv_items:	resv_items resv_item | resv_item;
resv_item:	resv_creason | resv_channel | resv_nick | error;

resv_creason: REASON '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
};

resv_channel: CHANNEL '=' QSTRING ';'
{
  if (ypass == 2)
  {
    if (IsChannelName(yylval.string))
    {
      char def_reason[] = "No reason specified";

      create_channel_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }
  /* ignore it for now.. but we really should make a warning if
   * its an erroneous name --fl_ */
};

resv_nick: NICK '=' QSTRING ';'
{
  if (ypass == 2)
  {
    if (clean_resv_nick(yylval.string))
    {
      char def_reason[] = "No reason specified";

      create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }

  /* otherwise its erroneous, but ignore it for now */
};

/***************************************************************************
 *  section shared, for sharing remote klines etc.
 ***************************************************************************/
shared_entry: T_SHARED
{
  if (ypass == 2)
  {
    free_access_item(yy_aconf);
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
} '{' shared_items '}' ';'
{
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
};

shared_items: shared_items shared_item | shared_item;
shared_item:  shared_name | shared_user | shared_type | error;

shared_name: NAME '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(yy_match_item->name);
    DupString(yy_match_item->name, yylval.string);
  }
  else
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
  }
};

shared_user: USER '=' QSTRING ';'
{
  if (ypass == 2)
  {
    DupString(yy_match_item->user, yylval.string);
    /* XXX */
  }
};

shared_type: TYPE
{
  if (ypass == 2)
    yy_match_item->action = 0;


} '=' shared_types ';' ;

shared_types: shared_types ',' shared_type_item | shared_type_item;
shared_type_item: KLINE
{
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
} | UNKLINE
{
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
} | XLINE
{
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
} | T_UNXLINE
{
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
} | RESV
{
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
} | T_UNRESV
{
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
} | T_ALL
{
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
};

/***************************************************************************
 *  section cluster
 ***************************************************************************/
cluster_entry: T_CLUSTER
{
  if (ypass == 2)
  {
    cptr = make_cluster();
    /* defaults */
    cptr->type = CLUSTER_ALL;
    cptr->name[0] = '\0';
  }
} '{' cluster_items '}' ';'
{
  if (ypass == 2)
  {
    add_cluster(cptr);
    cptr = NULL;
  }
};

cluster_items:	cluster_items cluster_item | cluster_item;
cluster_item:	cluster_name | cluster_type | error;

cluster_name: NAME '=' QSTRING ';'
{
  if (ypass == 2)
    strlcpy((char *)&cptr->name, yylval.string, sizeof(cptr->name));
};

cluster_type: TYPE
{
  if (ypass == 2)
    cptr->type = 0;
} '=' cluster_types ';' ;

cluster_types:	cluster_types ',' cluster_type_item | cluster_type_item;
cluster_type_item: KLINE
{
  if (ypass == 2)
    cptr->type |= CLUSTER_KLINE;
} | UNKLINE
{
  if (ypass == 2)
    cptr->type |= CLUSTER_UNKLINE;
} | XLINE
{
  if (ypass == 2)
    cptr->type |= CLUSTER_XLINE;
} | T_UNXLINE
{
  if (ypass == 2)
    cptr->type |= CLUSTER_UNXLINE;
} | RESV
{
  if (ypass == 2)
    cptr->type |= CLUSTER_RESV;
} | T_UNRESV
{
  if (ypass == 2)
    cptr->type |= CLUSTER_UNRESV;
} | T_LOCOPS
{
  if (ypass == 2)
    cptr->type |= CLUSTER_LOCOPS;
} | T_ALL
{
  if (ypass == 2)
    cptr->type = CLUSTER_ALL;
};

/***************************************************************************
 *  section connect
 ***************************************************************************/
connect_entry: CONNECT   
{
  if (ypass == 2)
  {
    free_access_item(yy_aconf);
    yy_conf = make_conf_item(SERVER_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->passwd = NULL;
    /* defaults */
    yy_aconf->port = PORTNUM;
  }
} '{' connect_items '}' ';'
{
  if (ypass == 2)
  {
    struct AccessItem *yy_hconf;
    struct AccessItem *yy_lconf;
    dlink_node *ptr;
    dlink_node *next_ptr;
#ifdef HAVE_LIBCRYPTO
      if (yy_aconf->host &&
	 ((yy_aconf->passwd && yy_aconf->spasswd) ||
	  (yy_aconf->rsa_public_key && IsConfCryptLink(yy_aconf))))
#else /* !HAVE_LIBCRYPTO */
	if (yy_aconf->host && !IsConfCryptLink(yy_aconf) && 
	   yy_aconf->passwd && yy_aconf->spasswd)
#endif /* !HAVE_LIBCRYPTO */
	{
	  if (conf_add_server(yy_aconf, scount) >= 0)
	  {
	    conf_add_conf(yy_aconf);
	    ++scount;
	  }
	  else
	  {
	    free_access_item(yy_aconf);
	    yy_aconf = NULL;
	  }
	}
	else
	{
	  if (yy_aconf->name != NULL)
	  {
#ifndef HAVE_LIBCRYPTO
	    if (IsConfCryptLink(yy_aconf))
	      sendto_realops_flags(UMODE_ALL, L_ALL,
		       "Ignoring connect block for %s -- no OpenSSL support",
				   yy_aconf->name);
#else
	    if (IsConfCryptLink(yy_aconf) && !yy_aconf->rsa_public_key)
	      sendto_realops_flags(UMODE_ALL, L_ALL,
			   "Ignoring connect block for %s -- missing key",
				   yy_aconf->name);
#endif
	    if (yy_aconf->host == NULL)
	      sendto_realops_flags(UMODE_ALL, L_ALL,
			       "Ignoring connect block for %s -- missing host",
				   yy_aconf->name);
	    else if (!IsConfCryptLink(yy_aconf) && 
		    (!yy_aconf->passwd || !yy_aconf->spasswd))
	      sendto_realops_flags(UMODE_ALL, L_ALL,
		   "Ignoring connect block for %s -- missing password",
				   yy_aconf->name);
	  }

	  free_access_item(yy_aconf);
	  yy_aconf = NULL;
	}

      /*
       * yy_aconf is still pointing at the server that is having
       * a connect block built for it. This means, y_aconf->name 
       * points to the actual irc name this server will be known as.
       * Now this new server has a set or even just one hub_mask (or leaf_mask)
       * given in the link list at yy_hconf. Fill in the HUB confs
       * from this link list now.
       */        
      DLINK_FOREACH_SAFE(ptr, next_ptr, hub_aconfs_list.head)
      {
	yy_hconf = ptr->data;
	MyFree(yy_hconf->name);
	yy_hconf->name = NULL;

	/* yy_aconf == NULL is a fatal error for this connect block! */
	if (yy_aconf != NULL)
	{
	  if (yy_aconf->name != NULL)
	    DupString(yy_hconf->name, yy_aconf->name);
	  conf_add_conf(yy_hconf);
	}
	else
	  free_access_item(yy_hconf);
	dlinkDelete(ptr, &hub_aconfs_list);
      }

      /* Ditto for the LEAF confs */

      DLINK_FOREACH_SAFE(ptr, next_ptr, leaf_aconfs_list.head)
      {
	yy_lconf = ptr->data;
	if (yy_aconf != NULL)
	{
	  if (yy_aconf->name != NULL)
	    DupString(yy_lconf->name, yy_aconf->name);
	  conf_add_conf(yy_lconf);
	}
	else
	  free_access_item(yy_lconf);
	dlinkDelete(ptr, &leaf_aconfs_list);
      }

      yy_aconf = NULL;
  }
};

connect_items:  connect_items connect_item | connect_item;
connect_item:   connect_name | connect_host | connect_send_password |
                connect_accept_password | connect_port | connect_aftype | 
 		connect_fakename | connect_lazylink | connect_hub_mask | 
		connect_leaf_mask | connect_class | connect_auto | 
		connect_encrypted | connect_compressed | connect_cryptlink |
		connect_rsa_public_key_file | connect_cipher_preference |
                error;

connect_name: NAME '=' QSTRING ';'
{
  if (ypass == 2)
  {
    if (yy_aconf->name != NULL)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "*** Multiple connect name entry");
      ilog(L_WARN, "Multiple connect name entry %s", yy_aconf->name);
    }

    MyFree(yy_aconf->name);
    DupString(yy_aconf->name, yylval.string);
  }
};

connect_host: HOST '=' QSTRING ';' 
{
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
};
 
connect_send_password: SEND_PASSWORD '=' QSTRING ';'
{
  if (ypass == 2)
  {
    if (yy_aconf->spasswd != NULL)
      memset(yy_aconf->spasswd, 0, strlen(yy_aconf->spasswd));

    MyFree(yy_aconf->spasswd);
    DupString(yy_aconf->spasswd, yylval.string);
  }
};

connect_accept_password: ACCEPT_PASSWORD '=' QSTRING ';'
{
  if (ypass == 2)
  {
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
};

connect_port: PORT '=' NUMBER ';'
{
  if (ypass == 2)
    yy_aconf->port = $3;
};

connect_aftype: AFTYPE '=' T_IPV4 ';'
{
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
} | AFTYPE '=' T_IPV6 ';'
{
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
};

connect_fakename: FAKENAME '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
};

connect_lazylink: LAZYLINK '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_LAZY_LINK;
    else
      yy_aconf->flags &= ~CONF_FLAGS_LAZY_LINK;
  }
};

connect_encrypted: ENCRYPTED '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_ENCRYPTED;
    else
      yy_aconf->flags &= ~CONF_FLAGS_ENCRYPTED;
  }
};

connect_rsa_public_key_file: RSA_PUBLIC_KEY_FILE '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    BIO *file;

    if (yy_aconf->rsa_public_key != NULL)
    {
      RSA_free(yy_aconf->rsa_public_key);
      yy_aconf->rsa_public_key = NULL;
    }

    if (yy_aconf->rsa_public_key_file != NULL)
    {
      MyFree(yy_aconf->rsa_public_key_file);
      yy_aconf->rsa_public_key_file = NULL;
    }

    DupString(yy_aconf->rsa_public_key_file, yylval.string);

    if ((file = BIO_new_file(yylval.string, "r")) == NULL)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "Ignoring rsa_public_key_file -- does %s exist?",
                           yylval.string);
      break;
    }

    yy_aconf->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL);

    if (yy_aconf->rsa_public_key == NULL)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "Ignoring rsa_public_key_file -- Key invalid; check key syntax.");
      break;
    }
      
    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif /* HAVE_LIBCRYPTO */
};

connect_cryptlink: CRYPTLINK '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
    else
      yy_aconf->flags &= ~CONF_FLAGS_CRYPTLINK;
  }
};

connect_compressed: COMPRESSED '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
#ifndef HAVE_LIBZ
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "Ignoring compressed = yes; -- no zlib support");
#else
      yy_aconf->flags |= CONF_FLAGS_COMPRESSED;
#endif
    else
      yy_aconf->flags &= ~CONF_FLAGS_COMPRESSED;
  }
};

connect_auto: AUTOCONN '=' TBOOL ';'
{
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
    else
      yy_aconf->flags &= ~CONF_FLAGS_ALLOW_AUTO_CONN;
  }
};

connect_hub_mask: HUB_MASK '=' QSTRING ';' 
{
  if (ypass == 2)
  {
    struct ConfItem *hub_conf;
    struct AccessItem *hub_aconf;

    hub_conf = make_conf_item(HUB_TYPE);
    hub_aconf = (struct AccessItem *)map_to_conf(hub_conf);
    DupString(hub_aconf->host, yylval.string);
    DupString(hub_aconf->user, "*");
    dlinkAdd(hub_aconf, make_dlink_node(), &hub_aconfs_list);
  }
};

connect_leaf_mask: LEAF_MASK '=' QSTRING ';' 
{
  if (ypass == 2)
  {
    struct ConfItem *leaf_conf;
    struct AccessItem *leaf_aconf;

    leaf_conf = make_conf_item(LEAF_TYPE);
    leaf_aconf = (struct AccessItem *)map_to_conf(leaf_conf);
    DupString(leaf_aconf->host, yylval.string);
    DupString(leaf_aconf->user, "*");
    dlinkAdd(leaf_aconf, make_dlink_node(), &leaf_aconfs_list);
  }
};

connect_class: CLASS '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(yy_aconf->class_name);
    DupString(yy_aconf->class_name, yylval.string);
  }
};

connect_cipher_preference: CIPHER_PREFERENCE '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    struct EncCapability *ecap;
    const char *cipher_name;
    int found = 0;

    yy_aconf->cipher_preference = NULL;
    cipher_name = yylval.string;

    for (ecap = CipherTable; ecap->name; ecap++)
    {
      if ((irccmp(ecap->name, cipher_name) == 0) &&
          (ecap->cap & CAP_ENC_MASK))
      {
        yy_aconf->cipher_preference = ecap;
        found = 1;
        break;
      }
    }

    if (!found)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL, "Invalid cipher '%s' for %s",
                           cipher_name, yy_aconf->name);
      ilog(L_ERROR, "Invalid cipher '%s' for %s",
           cipher_name, yy_aconf->name);
    }
  }
#else
  if (ypass == 2)
  {
    sendto_realops_flags(UMODE_ALL, L_ALL, "Ignoring 'cipher_preference' line "
                         "for %s -- no OpenSSL support", yy_aconf->name);
    ilog(L_ERROR, "Ignoring 'cipher_preference' line for %s -- "
         "no OpenSSL support", yy_aconf->name);
  }
#endif
};

/***************************************************************************
 *  section kill
 ***************************************************************************/
kill_entry: KILL
{
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
} '{' kill_items '}' ';'
{
  if (ypass == 2)
  {
    if (yy_aconf->user && yy_aconf->reason && yy_aconf->host)
    {
      if (yy_aconf->host != NULL)
        add_conf_by_address(yy_aconf->host, CONF_KILL, yy_aconf->user, yy_aconf);
    }
    else
      free_access_item(yy_aconf);
    yy_aconf = NULL;
  }
}; 

kill_items:     kill_items kill_item | kill_item;
kill_item:      kill_user | kill_reason | error;

kill_user: USER '=' QSTRING ';'
{
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
};

kill_reason: REASON '=' QSTRING ';' 
{
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
};

/***************************************************************************
 *  section deny
 ***************************************************************************/
deny_entry: DENY 
{
  if (ypass == 2)
  {
    yy_conf = make_conf_item(DLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_aconf->reason, "NO REASON");
  }
} '{' deny_items '}' ';'
{
  if (ypass == 2)
  {
    if (yy_aconf->host && parse_netmask(yy_aconf->host, NULL, NULL) != HM_HOST)
      add_conf_by_address(yy_aconf->host, CONF_DLINE, NULL, yy_aconf);
    else
      free_access_item(yy_aconf);
    yy_aconf = NULL;
  }
}; 

deny_items:     deny_items deny_item | deny_item;
deny_item:      deny_ip | deny_reason | error;

deny_ip: IP '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
};

deny_reason: REASON '=' QSTRING ';' 
{
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
};

/***************************************************************************
 *  section exempt
 ***************************************************************************/
exempt_entry: EXEMPT
{
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
} '{' exempt_items '}' ';'
{
  if (ypass == 2)
  {
    if (yy_aconf->host && parse_netmask(yy_aconf->host, NULL, NULL) != HM_HOST)
      add_conf_by_address(yy_aconf->host, CONF_EXEMPTDLINE, NULL, yy_aconf);
    else
      free_access_item(yy_aconf);
    yy_aconf = NULL;
  }
};

exempt_items:     exempt_items exempt_item | exempt_item;
exempt_item:      exempt_ip | error;

exempt_ip: IP '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
};

/***************************************************************************
 *  section gecos
 ***************************************************************************/
gecos_entry: GECOS
{
  if (ypass == 2)
  {
    yy_conf = make_conf_item(XLINE_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_match_item->reason,"Something about your name");
  }
} '{' gecos_items '}' ';'
{
  if (ypass == 2)
  {
    if (yy_match_item->name == NULL)
      delete_conf_item(yy_conf);
    yy_match_item = NULL;
  }
}; 

gecos_items: gecos_items gecos_item | gecos_item;
gecos_item:  gecos_name | gecos_reason | gecos_action | error;

gecos_name: NAME '=' QSTRING ';' 
{
  if (ypass == 2)
  {
    DupString(yy_match_item->name, yylval.string);
    collapse(yy_match_item->name);
  }
};

gecos_reason: REASON '=' QSTRING ';' 
{
  if (ypass == 2)
  {
    MyFree(yy_match_item->reason);
    DupString(yy_match_item->reason, yylval.string);
  }
};

gecos_action: ACTION '=' WARN ';'
{
  if (ypass == 2)
    yy_match_item->action = 0;
} | ACTION '=' TREJECT ';'
{
  if (ypass == 2)
    yy_match_item->action = 1;
} | ACTION '=' SILENT ';'
{
  if (ypass == 2)
    yy_match_item->action = 2;
};

/***************************************************************************
 *  section general
 ***************************************************************************/
general_entry: GENERAL
  '{' general_items '}' ';';

general_items:      general_items general_item | general_item;
general_item:       general_ignore_bogus_ts | general_failed_oper_notice |
                    general_anti_nick_flood | general_max_nick_time |
                    general_max_nick_changes | general_max_accept |
                    general_anti_spam_exit_message_time |
                    general_ts_warn_delta | general_ts_max_delta |
                    general_kline_with_reason |
                    general_kline_with_connection_closed |
                    general_warn_no_nline |
                    general_non_redundant_klines | general_dots_in_ident |
                    general_stats_o_oper_only | general_stats_k_oper_only |
                    general_pace_wait | general_stats_i_oper_only |
                    general_pace_wait_simple | general_stats_P_oper_only |
                    general_short_motd | general_no_oper_flood |
                    general_true_no_oper_flood |
                    general_iauth_server |
                    general_iauth_port |
                    general_glines | general_gline_time |
                    general_idletime |
                    general_maximum_links |
                    general_message_locale | general_client_exit |
                    general_fname_userlog | general_fname_operlog |
                    general_fname_foperlog | general_oper_only_umodes |
                    general_max_targets |
                    general_use_egd | general_egdpool_path |
                    general_oper_umodes | general_crypt_oper_password |
                    general_caller_id_wait | general_default_floodcount |
                    general_min_nonwildcard | general_min_nonwildcard_simple |
                    general_servlink_path |
                    general_default_cipher_preference |
                    general_compression_level | general_client_flood |
                    general_throttle_time | general_havent_read_conf |
                    general_dot_in_ip6_addr | general_ping_cookie |
                    general_disable_auth | general_fallback_to_ip6_int | 
                    error;

general_ignore_bogus_ts: IGNORE_BOGUS_TS '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
};

general_failed_oper_notice: FAILED_OPER_NOTICE '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
};

general_anti_nick_flood: ANTI_NICK_FLOOD '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
};

general_max_nick_time: MAX_NICK_TIME '=' timespec ';'
{
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = $3; 
};

general_max_nick_changes: MAX_NICK_CHANGES '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = $3;
};

general_max_accept: MAX_ACCEPT '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigFileEntry.max_accept = $3;
};

general_anti_spam_exit_message_time: ANTI_SPAM_EXIT_MESSAGE_TIME '=' timespec ';'
{
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = $3;
};

general_ts_warn_delta: TS_WARN_DELTA '=' timespec ';'
{
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = $3;
};

general_ts_max_delta: TS_MAX_DELTA '=' timespec ';'
{
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = $3;
};

general_havent_read_conf: HAVENT_READ_CONF '=' NUMBER ';'
{
  if (($3 > 0) && ypass == 1)
  {
    ilog(L_CRIT, "You haven't read your config file properly.");
    ilog(L_CRIT, "There is a line in the example conf that will kill your server if not removed.");
    ilog(L_CRIT, "Consider actually reading/editing the conf file, and removing this line.");
    exit(0);
  }
};

general_kline_with_reason: KLINE_WITH_REASON '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
};

general_client_exit: CLIENT_EXIT '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.client_exit = yylval.number;
};

general_kline_with_connection_closed: KLINE_WITH_CONNECTION_CLOSED '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.kline_with_connection_closed = yylval.number;
};

general_warn_no_nline: WARN_NO_NLINE '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
};

general_non_redundant_klines: NON_REDUNDANT_KLINES '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.non_redundant_klines = yylval.number;
};

general_stats_o_oper_only: STATS_O_OPER_ONLY '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
};

general_stats_P_oper_only: STATS_P_OPER_ONLY '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
};

general_stats_k_oper_only: STATS_K_OPER_ONLY '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
} | STATS_K_OPER_ONLY '=' TMASKED ';'
{
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
};

general_stats_i_oper_only: STATS_I_OPER_ONLY '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
} | STATS_I_OPER_ONLY '=' TMASKED ';'
{
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
};

general_pace_wait: PACE_WAIT '=' timespec ';'
{
  if (ypass == 2)
    ConfigFileEntry.pace_wait = $3;
};

general_caller_id_wait: CALLER_ID_WAIT '=' timespec ';'
{
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = $3;
};

general_pace_wait_simple: PACE_WAIT_SIMPLE '=' timespec ';'
{
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = $3;
};

general_short_motd: SHORT_MOTD '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
};
  
general_no_oper_flood: NO_OPER_FLOOD '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
};

general_true_no_oper_flood: TRUE_NO_OPER_FLOOD '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
};

general_iauth_server: IAUTH_SERVER '=' QSTRING ';'
{
#if 0
  if (ypass == 2)
    strncpy(iAuth.hostname, yylval.string, HOSTLEN)[HOSTLEN] = 0;
#endif
};

general_iauth_port: IAUTH_PORT '=' NUMBER ';'
{
#if 0
  if (ypass == 2)
    iAuth.port = $3;
#endif
};

general_fname_userlog: FNAME_USERLOG '=' QSTRING ';'
{
  if (ypass == 2)
    strlcpy(ConfigFileEntry.fname_userlog, yylval.string,
            sizeof(ConfigFileEntry.fname_userlog));
};

general_fname_foperlog: FNAME_FOPERLOG '=' QSTRING ';'
{
  if (ypass == 2)
    strlcpy(ConfigFileEntry.fname_foperlog, yylval.string,
            sizeof(ConfigFileEntry.fname_foperlog));
};

general_fname_operlog: FNAME_OPERLOG '=' QSTRING ';'
{
  if (ypass == 2)
    strlcpy(ConfigFileEntry.fname_operlog, yylval.string,
            sizeof(ConfigFileEntry.fname_operlog));
};

general_glines: GLINES '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
};

general_message_locale: MESSAGE_LOCALE '=' QSTRING ';'
{
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
};

general_gline_time: GLINE_TIME '=' timespec ';'
{
  if (ypass == 2)
    ConfigFileEntry.gline_time = $3;
};

general_idletime: IDLETIME '=' timespec ';'
{
  if (ypass == 2)
    ConfigFileEntry.idletime = $3;
};

general_dots_in_ident: DOTS_IN_IDENT '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = $3;
};

general_maximum_links: MAXIMUM_LINKS '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigFileEntry.maximum_links = $3;
};

general_max_targets: MAX_TARGETS '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigFileEntry.max_targets = $3;
};

general_servlink_path: SERVLINK_PATH '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
};

general_default_cipher_preference: DEFAULT_CIPHER_PREFERENCE '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    struct EncCapability *ecap;
    const char *cipher_name;
    int found = 0;

    ConfigFileEntry.default_cipher_preference = NULL;
    cipher_name = yylval.string;

    for (ecap = CipherTable; ecap->name; ecap++)
    {
      if ((irccmp(ecap->name, cipher_name) == 0) &&
          (ecap->cap & CAP_ENC_MASK))
      {
        ConfigFileEntry.default_cipher_preference = ecap;
        found = 1;
        break;
      }
    }

    if (!found)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "Invalid cipher '%s'", cipher_name);
      ilog(L_ERROR, "Invalid cipher '%s'", cipher_name);
    }
  }
#else
  if (ypass == 2)
  {
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "Ignoring 'default_cipher_preference' "
                         "-- no OpenSSL support");
    ilog(L_ERROR, "Ignoring 'default_cipher_preference' "
         "-- no OpenSSL support");
  }
#endif
};

general_compression_level: COMPRESSION_LEVEL '=' NUMBER ';'
{
  if (ypass == 2)
  {
    ConfigFileEntry.compression_level = $3;
#ifndef HAVE_LIBZ
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "Ignoring compression_level = %d; -- no zlib support",
                         ConfigFileEntry.compression_level);
#else
    if ((ConfigFileEntry.compression_level < 1) ||
        (ConfigFileEntry.compression_level > 9))
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "Ignoring invalid compression level '%d', using default",
                           ConfigFileEntry.compression_level);
      ConfigFileEntry.compression_level = 0;
    }
#endif
  }
};

general_use_egd: USE_EGD '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
};

general_egdpool_path: EGDPOOL_PATH '=' QSTRING ';'
{
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
};

general_ping_cookie: PING_COOKIE '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
};

general_disable_auth: DISABLE_AUTH '=' TBOOL ';'
{
  ConfigFileEntry.disable_auth = yylval.number;
};

general_throttle_time: THROTTLE_TIME '=' timespec ';'
{
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
};

general_fallback_to_ip6_int: FALLBACK_IP6_INT '=' TBOOL ';'
{
  ConfigFileEntry.fallback_to_ip6_int = yylval.number;
};

general_oper_umodes: OPER_UMODES
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
} '='  umode_oitems ';' ;

umode_oitems:    umode_oitems ',' umode_oitem | umode_oitem;
umode_oitem:     T_BOTS
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
} | T_CCONN
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
} | T_DEBUG
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
} | T_FULL
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
} | T_SKILL
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
} | T_NCHANGE
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
} | T_REJ
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
} | T_UNAUTH
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
} | T_SPY
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
} | T_EXTERNAL
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
} | T_OPERWALL
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
} | T_SERVNOTICE
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
} | T_INVISIBLE
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
} | T_WALLOP
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
} | T_CALLERID
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
} | T_LOCOPS
{
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
};

general_oper_only_umodes: OPER_ONLY_UMODES 
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
} '='  umode_items ';' ;

umode_items:	umode_items ',' umode_item | umode_item;
umode_item:	T_BOTS 
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
} | T_CCONN
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
} | T_DEBUG
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
} | T_FULL
{ 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
} | T_SKILL
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
} | T_NCHANGE
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
} | T_REJ
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
} | T_UNAUTH
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
} | T_SPY
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
} | T_EXTERNAL
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
} | T_OPERWALL
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
} | T_SERVNOTICE
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
} | T_INVISIBLE
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
} | T_WALLOP
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
} | T_CALLERID
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
} | T_LOCOPS
{
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
};

general_crypt_oper_password: CRYPT_OPER_PASSWORD '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.crypt_oper_password = yylval.number;
};

general_min_nonwildcard: MIN_NONWILDCARD '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = $3;
};

general_min_nonwildcard_simple: MIN_NONWILDCARD_SIMPLE '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = $3;
};

general_default_floodcount: DEFAULT_FLOODCOUNT '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = $3;
};

general_client_flood: T_CLIENT_FLOOD '=' sizespec ';'
{
  if (ypass == 2)
    ConfigFileEntry.client_flood = $3;
};

general_dot_in_ip6_addr: DOT_IN_IP6_ADDR '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
};

/***************************************************************************
 *  section channel
 ***************************************************************************/
channel_entry: CHANNEL
  '{' channel_items '}' ';';

channel_items:      channel_items channel_item | channel_item;
channel_item:       channel_use_except |
                    channel_use_invex |
                    channel_use_knock |
                    channel_max_bans |
                    channel_knock_delay |
		    channel_knock_delay_channel |
                    channel_max_chans_per_user |
                    channel_quiet_on_ban |
		    channel_default_split_user_count | 
		    channel_default_split_server_count |
		    channel_no_create_on_split | 
		    channel_no_join_on_split |
		    channel_oper_pass_resv | error;

channel_use_except: USE_EXCEPT '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
};

channel_use_invex: USE_INVEX '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
};

channel_use_knock: USE_KNOCK '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
};

channel_knock_delay: KNOCK_DELAY '=' timespec ';'
{
  if (ypass == 2)
    ConfigChannel.knock_delay = $3;
};

channel_knock_delay_channel: KNOCK_DELAY_CHANNEL '=' timespec ';'
{
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = $3;
};

channel_max_chans_per_user: MAX_CHANS_PER_USER '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = $3;
};

channel_quiet_on_ban: QUIET_ON_BAN '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
};

channel_max_bans: MAX_BANS '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigChannel.max_bans = $3;
};

channel_default_split_user_count: DEFAULT_SPLIT_USER_COUNT '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigChannel.default_split_user_count = $3;
};

channel_default_split_server_count: DEFAULT_SPLIT_SERVER_COUNT '=' NUMBER ';'
{
  if (ypass == 2)
    ConfigChannel.default_split_server_count = $3;
};

channel_no_create_on_split: NO_CREATE_ON_SPLIT '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
};

channel_no_join_on_split: NO_JOIN_ON_SPLIT '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
};

channel_oper_pass_resv: OPER_PASS_RESV '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigChannel.oper_pass_resv = yylval.number;
};

/***************************************************************************
 *  section serverhide
 ***************************************************************************/
serverhide_entry: SERVERHIDE
  '{' serverhide_items '}' ';';

serverhide_items:   serverhide_items serverhide_item | serverhide_item;
serverhide_item:    serverhide_flatten_links | serverhide_hide_servers |
		    serverhide_disable_remote_commands |
		    serverhide_links_delay |
		    serverhide_disable_hidden |
		    serverhide_hidden |
		    serverhide_disable_local_channels | 
		    serverhide_hide_server_ips |
                    error;

serverhide_flatten_links: FLATTEN_LINKS '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
};

serverhide_hide_servers: HIDE_SERVERS '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
};

serverhide_disable_remote_commands: DISABLE_REMOTE_COMMANDS '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigServerHide.disable_remote = yylval.number;
};

serverhide_disable_local_channels: DISABLE_LOCAL_CHANNELS '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigServerHide.disable_local_channels = yylval.number;
};

serverhide_links_delay: LINKS_DELAY '=' timespec ';'
{
  if (ypass == 2)
  {
    if (($3 > 0) && ConfigServerHide.links_disabled == 1)
    {
      eventAddIsh("write_links_file", write_links_file, NULL, $3);
      ConfigServerHide.links_disabled = 0;
    }

    ConfigServerHide.links_delay = $3;
  }
};

serverhide_hidden: HIDDEN '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
};

serverhide_disable_hidden: DISABLE_HIDDEN '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
};

serverhide_hide_server_ips: HIDE_SERVER_IPS '=' TBOOL ';'
{
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
};

