/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  s_conf.c: Configuration file functions.
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
 *  $Id: s_conf.c,v 7.428 2003/06/14 03:39:25 db Exp $
 */

#include "stdinc.h"
#include "ircd_defs.h"
#include "tools.h"
#include "s_conf.h"
#include "s_serv.h"
#include "resv.h"
#include "s_stats.h"
#include "channel.h"
#include "class.h"
#include "client.h"
#include "cluster.h"
#include "common.h"
#include "event.h"
#include "hash.h"
#include "irc_string.h"
#include "sprintf_irc.h"
#include "s_bsd.h"
#include "irc_getnameinfo.h"
#include "irc_getaddrinfo.h"
#include "ircd.h"
#include "list.h"
#include "listener.h"
#include "hostmask.h"
#include "modules.h"
#include "numeric.h"
#include "fdlist.h"
#include "s_log.h"
#include "send.h"
#include "s_gline.h"
#include "fileio.h"
#include "memory.h"
#include "irc_res.h"
#include "userhost.h"

struct config_server_hide ConfigServerHide;

/* general conf items link list root, other than k lines etc. */
dlink_list all_conf_items = { NULL, NULL, 0 };
dlink_list ConfigItemList = { NULL, NULL, 0 };
dlink_list temporary_klines = { NULL, NULL, 0 };
dlink_list temporary_dlines = { NULL, NULL, 0 };
dlink_list temporary_ip_klines = { NULL, NULL, 0 };


extern int yyparse(); /* defined in y.tab.c */
extern int lineno;
extern char linebuf[];
extern char conffilebuf[IRCD_BUFSIZE];
int scount = 0; /* used by yyparse(), etc */
int ypass  = 1; /* used by yyparse()      */

/* internally defined functions */
static void lookup_confhost(struct AccessItem *aconf);
static void set_default_conf(void);
static void validate_conf(void);
static void read_conf(FBFILE *);
static void clear_out_old_conf(void);
static void flush_deleted_I_P(void);
static void expire_tklines(dlink_list *);
static void garbage_collect_ip_entries(void);
static int hash_ip(struct irc_ssaddr *);
static int is_attached(struct Client *client_p, struct AccessItem *aconf);
static int verify_access(struct Client *client_p, const char *username);
static int attach_iline(struct Client *, struct AccessItem *);
static struct ip_entry *find_or_add_ip(struct irc_ssaddr *);
static void parse_conf_file(int type, int cold);

FBFILE *conf_fbfile_in;
extern char yytext[];

/* address of class 0 conf */
static struct Class *class0;

/* usually, with hash tables, you use a prime number...
 * but in this case I am dealing with ip addresses,
 * not ascii strings.
 */
#define IP_HASH_SIZE 0x1000

struct ip_entry
{
  struct irc_ssaddr ip;
  int count;
  time_t last_attempt;
  struct ip_entry *next;
};

static struct ip_entry *ip_hash_table[IP_HASH_SIZE];
static BlockHeap *ip_entry_heap = NULL;
static int ip_entries_count = 0;


/* conf_dns_callback()
 *
 * inputs	- pointer to struct AccessItem
 *		- pointer to DNSReply reply
 * output	- none
 * side effects	- called when resolver query finishes
 * if the query resulted in a successful search, hp will contain
 * a non-null pointer, otherwise hp will be null.
 * if successful save hp in the conf item it was called with
 */
static void
conf_dns_callback(void *vptr, struct DNSReply *reply)
{
  struct AccessItem *aconf = (struct AccessItem *)vptr;

  if (reply != NULL)
    memcpy(&aconf->ipnum, &reply->addr, sizeof(reply->addr));

  aconf->dns_query = NULL;
}

/* conf_dns_lookup()
 *
 * do a nameserver lookup of the conf host
 * if the conf entry is currently doing a ns lookup do nothing, otherwise
 * allocate a dns_query and start ns lookup.
 */
static void
conf_dns_lookup(struct AccessItem *aconf)
{
  if (aconf->dns_query == NULL)
  {
    aconf->dns_query = MyMalloc(sizeof(struct DNSQuery));
    aconf->dns_query->ptr = aconf;
    aconf->dns_query->callback = conf_dns_callback;
    gethost_byname(aconf->host, aconf->dns_query);
  }
}

/* This should be inlined, its going to be used a lot */
void *
map_to_conf(struct ConfItem *aconf)
{
  void *conf;
  conf = (void *)((unsigned long)aconf +
		  (unsigned long)sizeof(struct ConfItem));
  return(conf);
}

/* make_conf_item()
 *
 * inputs	- type of item
 * output	- pointer to new conf entry
 * side effects	- none
 */
struct ConfItem *
make_conf_item(ConfType type)
{
  struct ConfItem *conf;
  struct AccessItem *aconf;
  int status=0;

  switch(type)
  {
  case DLINE_TYPE:
  case EXEMPTDLINE_TYPE:
  case GLINE_TYPE:
  case KLINE_TYPE:
  case CLIENT_TYPE:
  case LEAF_TYPE:
  case HUB_TYPE:
  case OPER_TYPE:
  case SERVER_TYPE:

    conf = (struct ConfItem *)MyMalloc(sizeof(struct ConfItem) +
					 sizeof(struct AccessItem));
    aconf = (struct AccessItem *)map_to_conf(conf);
    aconf->aftype = AF_INET;

    /* Yes, sigh. switch on type again */
    switch(type)
    {
    case EXEMPTDLINE_TYPE:
    case DLINE_TYPE:
      status = CONF_DLINE;
      break;

    case GLINE_TYPE:
    case KLINE_TYPE:
      status = CONF_KILL;
      break;

    case CLIENT_TYPE:
      status = CONF_CLIENT;
      break;

    case LEAF_TYPE:
      status = CONF_LEAF;
      break;

    case OPER_TYPE:
      status = CONF_OPERATOR;
      break;

    case SERVER_TYPE:
      status = CONF_SERVER;
      break;
    default:
      break;
    }
    aconf->status = status;
    break;

  case ULINE_TYPE:
  case XLINE_TYPE:
    conf = (struct ConfItem *)MyMalloc(sizeof(struct ConfItem) +
					 sizeof(struct MatchItem));
    break;

  default:
    conf = NULL;
    break;
  }

  /* XXX Yes, this will core if default is hit. I want it to for now - db */
  conf->type = type;
  dlinkAdd(conf, &conf->node, &all_conf_items);
  return(conf);
}

/* free_conf_item()
 *
 * inputs	- type of item
 * output	- pointer to new conf entry
 * side effects	- none
 */
void
free_conf_item(struct ConfItem *conf, ConfType type)
{
  switch(type)
  {
  case DLINE_TYPE:
  case KLINE_TYPE:
  case CLIENT_TYPE:
  case HUB_TYPE:
  case LEAF_TYPE:
  case OPER_TYPE:
    break;

  case ULINE_TYPE:
  case XLINE_TYPE:
    dlinkDelete(&conf->node, &all_conf_items);
    MyFree(conf);
    break;

  default:
    break;
  }
}

/* free_access_item()
 *
 * inputs	- pointer to conf to free
 * output	- none
 * side effects	- crucial password fields are zeroed, conf is freed
 */
void
free_access_item(struct AccessItem *aconf)
{
  struct ConfItem *confitem;

  if (aconf == NULL)
    return;

  if (aconf->dns_query != NULL)
    delete_resolver_queries(aconf->dns_query);
  if (aconf->passwd != NULL)
    memset(aconf->passwd, 0, strlen(aconf->passwd));
  if (aconf->spasswd != NULL)
    memset(aconf->spasswd, 0, strlen(aconf->spasswd));

  MyFree(aconf->passwd);
  MyFree(aconf->spasswd);
  MyFree(aconf->reason);
  MyFree(aconf->oper_reason);
  MyFree(aconf->name);
  MyFree(aconf->user);
  MyFree(aconf->host);
  MyFree(aconf->class_name);
  MyFree(aconf->fakename);
#ifdef HAVE_LIBCRYPTO
  if (aconf->rsa_public_key)
    RSA_free(aconf->rsa_public_key);
  MyFree(aconf->rsa_public_key_file);
#endif

  /* XXX Isn't this just horrible? 
   * Lets use address arithemetic !
   */
  confitem = (struct ConfItem *)((unsigned long)aconf -
				 (unsigned long)sizeof(struct ConfItem));
  dlinkDelete(&confitem->node, &all_conf_items);
  MyFree(confitem);
}

/* det_confs_butmask()
 *
 * remove all conf entries from the client except
 * those which match the status field mask.
 */
void
det_confs_butmask(struct Client *client_p, unsigned int mask)
{
  dlink_node *ptr;
  dlink_node *next_ptr;
  struct AccessItem *aconf;

  DLINK_FOREACH_SAFE(ptr, next_ptr, client_p->localClient->confs.head)
  {
    aconf = ptr->data;

    if ((aconf->status & mask) == 0)
    {
      detach_conf(client_p, aconf);
    }
  }
}

/*
 * report_confitem_types
 *
 * inputs	- pointer to client requesting confitem report
 *		- ConfType to report
 * output	- none
 * side effects	-
 */
void
report_confitem_types(struct Client *source_p, ConfType type)
{
  dlink_node *ptr;
  struct ConfItem *conf;
  struct MatchItem *matchitem;

  DLINK_FOREACH(ptr, all_conf_items.head)
  {
    conf = ptr->data;
    switch (conf->type)
    {
    case XLINE_TYPE:
      matchitem = (struct MatchItem *)map_to_conf(conf);
      sendto_one(source_p, form_str(RPL_STATSXLINE),
		 me.name, source_p->name, matchitem->action,
		 matchitem->name, matchitem->reason);
      break;

    case ULINE_TYPE:
      matchitem = (struct MatchItem *)map_to_conf(conf);
      sendto_one(source_p, form_str(RPL_STATSULINE),
		 me.name, source_p->name,
		 matchitem->name, matchitem->reason);
    default:
      break;
    }
  }
}

static struct LinkReport {
  unsigned int conf_type;
  unsigned int rpl_stats;
  unsigned int conf_char;
} report_array[] = {
  { CONF_SERVER,   RPL_STATSCLINE, 'C'},
  { CONF_LEAF,     RPL_STATSLLINE, 'L'},
  { CONF_OPERATOR, RPL_STATSOLINE, 'O'},
  { CONF_HUB,      RPL_STATSHLINE, 'H'},
  { 0, 0, '\0' }
};

/* report_configured_links()
 *
 * inputs	- pointer to client to report to
 *		- type of line to report
 * output	- NONE
 * side effects	-
 */
void
report_configured_links(struct Client *source_p, unsigned int mask)
{
  dlink_node *ptr;
  struct AccessItem *aconf;
  struct LinkReport *p;
  char *host;
  char *reason;
  char *user;
  char *name;
  char *classname;
  int port;

  DLINK_FOREACH(ptr, ConfigItemList.head)
  {
    aconf = ptr->data;

    if (aconf->status & mask)
    {
      for (p = &report_array[0]; p->conf_type; p++)
        if (p->conf_type == aconf->status)
          break;

      if (p->conf_type == 0)
        return;

      get_printable_conf(aconf, &name, &host, &reason, &user, &port, &classname);

      if (mask & CONF_SERVER)
      {
        char c;
        char buf[20];
        char *s = buf;

        buf[0] = '\0';
        c = p->conf_char;

        if (IsConfAllowAutoConn(aconf))
          *s++ = 'A';
        if (IsConfCryptLink(aconf))
          *s++ = 'C';
        if (IsConfLazyLink(aconf))
          *s++ = 'L';
        if (IsConfCompressed(aconf))
          *s++ = 'Z';
        if (aconf->fakename)
          *s++ = 'M';
        if (buf[0] == '\0')
          *s++ = '*';

        *s++ = '\0';

	/* Allow admins to see actual ips */
	/* except if HIDE_SERVERS_IPS is defined */
#ifndef HIDE_SERVERS_IPS
        if (IsAdmin(source_p))
          sendto_one(source_p, form_str(p->rpl_stats),
                     me.name, source_p->name, c, host,
                     buf, name, port, classname);
        else
#endif
          sendto_one(source_p, form_str(p->rpl_stats),
                     me.name, source_p->name, c,
		     "*@127.0.0.1", buf, name, port, classname);
      }
      else if (mask & CONF_OPERATOR)
      {
        /* Don't allow non opers to see oper privs */
        if (IsOper(source_p))
          sendto_one(source_p, form_str(p->rpl_stats),
                     me.name, source_p->name, p->conf_char, user, host,
                     name, oper_privs_as_string(NULL, port), classname);
        else
          sendto_one(source_p, form_str(p->rpl_stats),
                     me.name, source_p->name, p->conf_char, user, host,
                     name, "0", classname);
      }
      else
        sendto_one(source_p, form_str(p->rpl_stats),
                   me.name, source_p->name, p->conf_char,
                   host, name, port, classname);
    }
  }
}

/* check_client()
 *
 * inputs	- pointer to client
 * output	- 0 = Success
 * 		  NOT_AUTHORIZED    (-1) = Access denied (no I line match)
 * 		  IRCD_SOCKET_ERROR (-2) = Bad socket.
 * 		  I_LINE_FULL       (-3) = I-line is full
 *		  TOO_MANY          (-4) = Too many connections from hostname
 * 		  BANNED_CLIENT     (-5) = K-lined
 * side effects - Ordinary client access check.
 *		  Look for conf lines which have the same
 * 		  status as the flags passed.
 */
int
check_client(struct Client *client_p, struct Client *source_p, const char *username)
{
  int i;
 
  ClearAccess(source_p);

  /* I'm already in big trouble if source_p->localClient is NULL -db */
  if ((i = verify_access(source_p, username)))
  {
    ilog(L_INFO, "Access denied: %s[%s]", 
         source_p->name, source_p->localClient->sockhost);
  }

  switch (i)
  {
    case IRCD_SOCKET_ERROR:
      exit_client(client_p, source_p, &me, "Socket Error");
      break;

    case TOO_MANY:
      sendto_realops_flags(UMODE_FULL, L_ALL,
                           "Too many on IP for %s (%s).",
			   get_client_name(source_p, SHOW_IP),
			   source_p->localClient->sockhost);
      ilog(L_INFO,"Too many connections on IP from %s.",
	   get_client_name(source_p, SHOW_IP));
      ServerStats->is_ref++;
      exit_client(client_p, source_p, &me, 
			"No more connections allowed on that IP");
      break;

    case I_LINE_FULL:
      sendto_realops_flags(UMODE_FULL, L_ALL,
                           "I-line is full for %s (%s).",
			   get_client_name(source_p, SHOW_IP),
			   source_p->localClient->sockhost);
      ilog(L_INFO,"Too many connections from %s.",
	   get_client_name(source_p, SHOW_IP));
       ServerStats->is_ref++;
      exit_client(client_p, source_p, &me, 
		"No more connections allowed in your connection class");
      break;

    case NOT_AUTHORIZED:
    {
      static char ipaddr[HOSTIPLEN];
      ServerStats->is_ref++;
      /* jdc - lists server name & port connections are on */
      /*       a purely cosmetical change */
      irc_getnameinfo((struct sockaddr*)&source_p->localClient->ip,
            source_p->localClient->ip.ss_len, ipaddr, HOSTIPLEN, NULL, 0,
            NI_NUMERICHOST);
      sendto_realops_flags(UMODE_UNAUTH, L_ALL,
			   "Unauthorized client connection from %s [%s] on [%s/%u].",
			   get_client_name(source_p, SHOW_IP),
			   ipaddr,
			   source_p->localClient->listener->name,
			   source_p->localClient->listener->port);
      ilog(L_INFO,
	  "Unauthorized client connection from %s on [%s/%u].",
	  get_client_name(source_p, SHOW_IP),
	  source_p->localClient->listener->name,
	  source_p->localClient->listener->port);
      exit_client(client_p, source_p, &me,
		  "You are not authorized to use this server");
      break;
    }
 
   case BANNED_CLIENT:
      exit_client(client_p,client_p, &me, "*** Banned ");
      ServerStats->is_ref++;
      break;

   case 0:
   default:
     break;
  }

  return(i);
}

/* verify_access()
 *
 * inputs	- pointer to client to verify
 *		- pointer to proposed username
 * output	- 0 if success -'ve if not
 * side effect	- find the first (best) I line to attach.
 */
static int
verify_access(struct Client* client_p, const char *username)
{
  struct AccessItem *aconf;
  struct AccessItem *gkill_conf;
  char non_ident[USERLEN + 1];

  if (IsGotId(client_p))
  {
    aconf = find_address_conf(client_p->host,client_p->username,
                              &client_p->localClient->ip,
                              client_p->localClient->aftype);
  }
  else
  {
    strlcpy(non_ident, "~", sizeof(non_ident));
    strlcat(non_ident, username, sizeof(non_ident));
    aconf = find_address_conf(client_p->host,non_ident,
                              &client_p->localClient->ip,
                              client_p->localClient->aftype);
  }

  if (aconf != NULL)
  {
    if (IsConfClient(aconf))
    {
      if (IsConfRedir(aconf))
      {
        sendto_one(client_p, form_str(RPL_REDIR),
                   me.name, client_p->name,
                   aconf->name ? aconf->name : "",
                   aconf->port);
        return(NOT_AUTHORIZED);
      }

      if (ConfigFileEntry.glines)
      {
	if (!IsConfExemptKline(aconf) && !IsConfExemptGline(aconf))
	{
	  if (IsGotId(client_p))
	    gkill_conf = find_gkill(client_p, client_p->username);
	  else
	    gkill_conf = find_gkill(client_p, non_ident);
	  
	  if (gkill_conf != NULL)
	  {
	    sendto_one(client_p, ":%s NOTICE %s :*** G-lined", me.name,
		       client_p->name);
	    sendto_one(client_p, ":%s NOTICE %s :*** Banned %s",
		       me.name, client_p->name, 
		       gkill_conf->passwd);
	    return(BANNED_CLIENT);
	  }
	}
      }

      if (IsConfDoIdentd(aconf))
	SetNeedId(client_p);
      if (IsConfRestricted(aconf))
	SetRestricted(client_p);

      /* Thanks for spoof idea amm */
      if (IsConfDoSpoofIp(aconf))
      {
#ifndef HIDE_SPOOF_IPS
        if (IsConfSpoofNotice(aconf))
          sendto_realops_flags(UMODE_ALL, L_ADMIN, "%s spoofing: %s as %s",
                               client_p->name, client_p->host, aconf->name);
#endif
        strlcpy(client_p->host, aconf->name, sizeof(client_p->host));
        SetIPSpoof(client_p);
      }

      return(attach_iline(client_p, aconf));
    }
    else if (IsConfKill(aconf))
    {
      if (ConfigFileEntry.kline_with_reason)
        sendto_one(client_p, ":%s NOTICE %s :*** Banned %s",
                   me.name, client_p->name, aconf->reason);
      return(BANNED_CLIENT);
    }
  }

  return(NOT_AUTHORIZED);
}

/* attach_iline()
 *
 * inputs	- client pointer
 *		- conf pointer
 * output	-
 * side effects	- do actual attach
 */
static int
attach_iline(struct Client *client_p, struct AccessItem *aconf)
{
  struct ip_entry *ip_found;
  int a_limit_reached = 0;
  int max_limit_reached = 0;
  int local;
  int global;
  int ident;

  ip_found = find_or_add_ip(&client_p->localClient->ip);

  SetIpHash(client_p);
  ip_found->count++;

  /* only check it if its non zero */
  if (aconf->c_class != NULL)
  {
    count_user_host(client_p->username, client_p->host,
		    &global, &local, &ident);

    /* XXX blah. go down checking the various silly limits
     * setting a_limit_reached if any limit is reached.
     * - Dianora
     */
    if ((ConfMaxTotal(aconf) != 0) &&
	(ConfCurrUserCount(aconf) > ConfMaxTotal(aconf)))
      {
	max_limit_reached = 1;
	a_limit_reached = 1;
      }
    if ((ConfMaxPerIp(aconf) != 0) && (ip_found->count > ConfMaxPerIp(aconf)))
      a_limit_reached = 1;
    else if ((ConfMaxLocal(aconf) != 0) && (local > ConfMaxLocal(aconf)))
      a_limit_reached = 1;
    else if ((ConfMaxGlobal(aconf) != 0) && (global > ConfMaxGlobal(aconf)))
      a_limit_reached = 1;

    /* XXX I am not sure of the logic here. This allows a client onto a server
     * if it is idented, but has not exceed the max ident limit for 
     * this class. But deny if it has exceed the max possible limit
     * for this class. Is this what is wanted? *sigh*
     * - Dianora
     */

    if ((ConfMaxIdent(aconf) != 0) && ((*client_p->username != '~') &&
				       ident < ConfMaxIdent(aconf)) &&
	!max_limit_reached)
      a_limit_reached = 0;

    if (a_limit_reached)
    {
      if (!IsConfExemptLimits(aconf))
	return(TOO_MANY); /* Already at maximum allowed */
      else
      {
	sendto_one(client_p,
		   ":%s NOTICE %s :*** Your connection class is full, "
		   "but you have exceed_limit=yes;", me.name, client_p->name);
      }
    }
  }
  else
    return(NOT_AUTHORIZED);	/* If class is missing, this is best */

  return(attach_conf(client_p, aconf));
}

/* init_ip_hash_table()
 *
 * inputs               - NONE
 * output               - NONE
 * side effects         - allocate memory for ip_entry(s)
 *			- clear the ip hash table
 */
void
init_ip_hash_table(void)
{
  ip_entry_heap = BlockHeapCreate(sizeof(struct ip_entry), 2*MAXCONNECTIONS);
  memset((void *)ip_hash_table, 0, sizeof(ip_hash_table));
}

/* find_or_add_ip()
 *
 * inputs       - client_p
 *              - name
 * output       - pointer to a struct ip_entry
 * side effects -
 *
 * If the ip # was not found, a new struct ip_entry is created, and the ip
 * count set to 0.
 */
static struct ip_entry *
find_or_add_ip(struct irc_ssaddr *ip_in)
{
  struct ip_entry *ptr, *newptr;
  int hash_index = hash_ip(ip_in), res;
  struct sockaddr_in *v4 = (struct sockaddr_in *)ip_in, *ptr_v4;
#ifdef IPV6
  struct sockaddr_in6 *v6 = (struct sockaddr_in6 *)ip_in, *ptr_v6;
#endif

  for (ptr = ip_hash_table[hash_index]; ptr; ptr = ptr->next)
  {
#ifdef IPV6
    if (ptr->ip.ss.ss_family != ip_in->ss.ss_family)
      continue;
    if (ip_in->ss.ss_family == AF_INET6)
    {
      ptr_v6 = (struct sockaddr_in6 *)&ptr->ip;
      res = memcmp(&v6->sin6_addr, &ptr_v6->sin6_addr, sizeof(struct in6_addr));
    }
    else
#endif
    {
      ptr_v4 = (struct sockaddr_in *)&ptr->ip;
      res = memcmp(&v4->sin_addr, &ptr_v4->sin_addr, sizeof(struct in_addr));
    }
    if (res == 0)
    {
      /* Found entry already in hash, return it. */
      return(ptr);
    }
  }

  if (ip_entries_count >= (2*MAXCONNECTIONS))
    garbage_collect_ip_entries();

  newptr = BlockHeapAlloc(ip_entry_heap);
  ip_entries_count++;
  memcpy(&newptr->ip, ip_in, sizeof(struct irc_ssaddr));
  newptr->count = 0;
  newptr->last_attempt = 0;

  if ((ptr = ip_hash_table[hash_index]) != NULL)
    newptr->next = ptr;
  else
    newptr->next = NULL;

  ip_hash_table[hash_index] = newptr;
  return(newptr);
}

/* remove_one_ip()
 *
 * inputs        - unsigned long IP address value
 * output        - NONE
 * side effects  - The ip address given, is looked up in ip hash table
 *                 and number of ip#'s for that ip decremented.
 *                 If ip # count reaches 0 and has expired,
 *		   the struct ip_entry is returned to the ip_entry_heap
 */
void
remove_one_ip(struct irc_ssaddr *ip_in)
{
  struct ip_entry *ptr;
  struct ip_entry *last_ptr = NULL;
  int hash_index = hash_ip(ip_in), res;
  struct sockaddr_in *v4 = (struct sockaddr_in *)ip_in, *ptr_v4;
#ifdef IPV6
  struct sockaddr_in6 *v6 = (struct sockaddr_in6 *)ip_in, *ptr_v6;
#endif

  for(ptr = ip_hash_table[hash_index]; ptr; ptr = ptr->next)
  {
#ifdef IPV6
    if (ptr->ip.ss.ss_family != ip_in->ss.ss_family)
      continue;
    if (ip_in->ss.ss_family == AF_INET6)
    {
      ptr_v6 = (struct sockaddr_in6 *)&ptr->ip;
      res = memcmp(&v6->sin6_addr, &ptr_v6->sin6_addr, sizeof(struct in6_addr));
    }
    else
#endif
    {
      ptr_v4 = (struct sockaddr_in *)&ptr->ip;
      res = memcmp(&v4->sin_addr, &ptr_v4->sin_addr, sizeof(struct in_addr));
    }
    if (res)
      continue;
    if (ptr->count > 0)
      ptr->count--;
    if (ptr->count == 0 &&
	(CurrentTime-ptr->last_attempt) >= ConfigFileEntry.throttle_time)
    {
      if (last_ptr != NULL)
	last_ptr->next = ptr->next;
      else
	ip_hash_table[hash_index] = ptr->next;

      BlockHeapFree(ip_entry_heap, ptr);
      ip_entries_count--;
      return;
    }
    last_ptr = ptr;
  }
}

/* hash_ip()
 *
 * input        - pointer to an irc_inaddr
 * output       - integer value used as index into hash table
 * side effects - hopefully, none
 */
static int
hash_ip(struct irc_ssaddr *addr)
{
  if (addr->ss.ss_family == AF_INET)
  {
    struct sockaddr_in *v4 = (struct sockaddr_in *)addr;
    int hash;
    u_int32_t ip;

    ip   = ntohl(v4->sin_addr.s_addr);
    hash = ((ip >> 12) + ip) & (IP_HASH_SIZE-1);
    return(hash);
  }
#ifdef IPV6
  else
  {
    int hash;
    struct sockaddr_in6 *v6 = (struct sockaddr_in6 *)addr;
    u_int32_t *ip = (u_int32_t *)&v6->sin6_addr.s6_addr;

    hash  = ip[0] ^ ip[3];
    hash ^= hash >> 16;  
    hash ^= hash >> 8;   
    hash  = hash & (IP_HASH_SIZE - 1);
    return(hash);
  }
#endif
  return(0);
}

/* count_ip_hash()
 *
 * inputs        - pointer to counter of number of ips hashed 
 *               - pointer to memory used for ip hash
 * output        - returned via pointers input
 * side effects  - NONE
 *
 * number of hashed ip #'s is counted up, plus the amount of memory
 * used in the hash.
 */
void
count_ip_hash(int *number_ips_stored, unsigned long *mem_ips_stored)
{
  struct ip_entry *ptr;
  int i;

  *number_ips_stored = 0;
  *mem_ips_stored    = 0;

  for (i = 0; i < IP_HASH_SIZE; i++)
  {
    for (ptr = ip_hash_table[i]; ptr; ptr = ptr->next)
    {
      *number_ips_stored += 1;
      *mem_ips_stored += sizeof(struct ip_entry);
    }
  }
}

/* garbage_collect_ip_entries()
 *
 * input	- NONE
 * output	- NONE
 * side effects	- free up all ip entries with no connections
 */
static void
garbage_collect_ip_entries(void)
{
  struct ip_entry *ptr;
  struct ip_entry *last_ptr;
  struct ip_entry *next_ptr;
  int i;

  for (i = 0; i < IP_HASH_SIZE; i++)
  {
    last_ptr = NULL;

    for (ptr = ip_hash_table[i]; ptr; ptr = next_ptr)
    {
      next_ptr = ptr->next;

      if (ptr->count == 0)
      {
	if (last_ptr != NULL)
	  last_ptr->next = ptr->next;
	else
	  ip_hash_table[i] = ptr->next;
	BlockHeapFree(ip_entry_heap, ptr);
	ip_entries_count--;
      }
      else
	last_ptr = ptr;
    }
  }
}

#if 0
/*
 * iphash_stats()
 *
 * input	- 
 * output	-
 * side effects	-
 */
void 
iphash_stats(struct Client *client_p, struct Client *source_p,
             int parc, char *parv[], FBFILE *out)
{
  struct ip_entry *ptr;
  int i;
  int collision_count;
  char result_buf[256];

  if (out == NULL)
    sendto_one(source_p,":%s NOTICE %s :*** hash stats for iphash",
               me.name,client_p->name);
  else
  {
    (void)sprintf(result_buf,"*** hash stats for iphash\n");
    (void)fbputs(result_buf,out);
  }

  for(i = 0; i < IP_HASH_SIZE ;i++)
  {
    collision_count = 0;
    for (ptr = ip_hash_table[i]; ptr; ptr = ptr->next)
      collision_count++;

    if (collision_count != 0)
    {
      if (out == NULL)
      {
	sendto_one(source_p,":%s NOTICE %s :Entry %d (0x%X) Collisions %d",
		   me.name,client_p->name,i,i,collision_count);
      }
      else
      {
	(void)sprintf(result_buf,"Entry %d (0x%X) Collisions %d\n",
		      i,i,collision_count);
	(void)fbputs(result_buf,out);
      }
    }
  }
}
#endif

/* detach_conf()
 *
 * inputs	- pointer to client to detach
 * 		- pointer to conf item to detach
 * output	- 0 for success, -1 for failure
 * side effects	- Disassociate configuration from the client.
 *		  Also removes a class from the list if marked for deleting.
 */
int
detach_conf(struct Client *client_p, struct AccessItem *aconf)
{
  dlink_node *ptr;
  struct Class *aclass;

  if (aconf == NULL)
    return(-1);

  DLINK_FOREACH(ptr, client_p->localClient->confs.head)
  {
    if (ptr->data == aconf)
    {
      if ((aclass = ClassPtr(aconf)) != NULL)
      {
	if (CurrUserCount(aclass) > 0)
	  aclass->curr_user_count--;

	if (MaxTotal(aclass) < 0 && CurrUserCount(aclass) <= 0)
	{
	  dlinkDelete(&aclass->class_node, &ClassList);
	  free_class(ClassPtr(aconf));
	  ClassPtr(aconf) = NULL;
	}
      }

      /* Please, no ioccc entries - Dianora */
      if (aconf->clients > 0)
	--aconf->clients;
      if (aconf->clients == 0 && IsConfIllegal(aconf))
	free_access_item(aconf);

      dlinkDelete(ptr, &client_p->localClient->confs);
      free_dlink_node(ptr);
      return(0);
    }
  }

  return(-1);
}

/* is_attached()
 *
 * inputs	- pointer to client to check
 * 		- pointer to conf item to check
 * output	- 1 if attached, 0 if not
 * side effects	- 
 */
static int
is_attached(struct Client *client_p, struct AccessItem *aconf)
{
  dlink_node *ptr;

  DLINK_FOREACH(ptr, client_p->localClient->confs.head)
  {
    if (ptr->data == aconf)
      break;
  }

  return((ptr != NULL) ? 1 : 0);
}

/* attach_conf()
 *
 * inputs	- client pointer
 * 		- conf pointer
 * output	-
 * side effects - Associate a specific configuration entry to a *local*
 *                client (this is the one which used in accepting the
 *                connection). Note, that this automatically changes the
 *                attachment if there was an old one...
 */
int
attach_conf(struct Client *client_p, struct AccessItem *aconf)
{
  if (is_attached(client_p, aconf))
    return(1);

  if (IsConfIllegal(aconf))
    return(NOT_AUTHORIZED);

  if (!IsConfOperator(aconf))
  {
    if (IsConfClient(aconf) &&
	ConfCurrUserCount(aconf) >= ConfMaxTotal(aconf) &&
        ConfMaxTotal(aconf) > 0)
    {
      if (!IsConfExemptLimits(aconf))
        return(I_LINE_FULL); 
      else
      {
        sendto_one(client_p, ":%s NOTICE %s :*** Your connection class is "
              "full, but you have exceed_limit=yes;", me.name, client_p->name);
        SetExemptLimits(client_p);
      }
    }
  }

#if 0
  if (IsConfRestricted(aconf))
    SetRestricted(client_p);
#endif

  dlinkAdd(aconf, make_dlink_node(), &client_p->localClient->confs);

  aconf->clients++;

  if (IsConfTypeOfClient(aconf))
    ConfCurrUserCount(aconf)++;
  return(0);
}

/* attach_confs()
 *
 * Attach all possible CONF lines to a client
 * if the name passed matches that for the conf file (for non-C/N lines) 
 * or is an exact match (C/N lines only).  The difference in behaviour 
 * is to stop C:*::* and N:*::*.
 * returns count of conf entries attached if successful, 0 if none are found
 *
 * NOTE: this will allow C:::* and N:::* because the match mask is the
 * conf line and not the name
 */
int
attach_confs(struct Client *client_p, const char *name, unsigned int statmask)
{
  dlink_node *ptr;
  struct AccessItem *aconf;
  int conf_counter = 0;

  DLINK_FOREACH(ptr, ConfigItemList.head)
  {
    aconf = ptr->data;

    if ((aconf->status & statmask) && !IsConfIllegal(aconf) &&
        aconf->name && match(aconf->name, name))
    {
      if (attach_conf(client_p, aconf) > 0)
        ++conf_counter;
    }
    else if ((aconf->status & statmask) && !IsConfIllegal(aconf) &&
             aconf->name && irccmp(aconf->name, name) == 0)
    {
      if (attach_conf(client_p, aconf) > 0)
        ++conf_counter;
    }
  }

  return(conf_counter);
}

/* attach_connect_block()
 *
 * inputs	- pointer to server to attach
 * 		- name of server
 *		- hostname of server
 * output	- true (1) if both are found, otherwise return false (0)
 * side effects - find connect block and attach them to connecting client
 */
int
attach_connect_block(struct Client *client_p, const char *name,
                     const char *host)
{
  dlink_node *ptr;
  struct AccessItem *aconf;

  assert(client_p != NULL);
  assert(host != NULL);

  if (client_p == NULL || host == NULL)
    return(0);

  DLINK_FOREACH(ptr, ConfigItemList.head)
  {
    aconf = ptr->data;

    if (IsConfIllegal(aconf))
      continue;
    if (!IsConfServer(aconf))
      continue;
    if ((match(aconf->name, name) == 0) ||
        (match(aconf->host, host) == 0))
      continue;

    attach_conf(client_p, aconf);
    return(-1);
  }

  return(0);
}

/* find_conf_exact
 *
 * inputs	- pointer to name to find
 *		- pointer to username to find
 *		- pointer to host to find
 *		- int mask of type of conf to find
 * output	- NULL or pointer to conf found
 * side effects	- find a conf entry which matches the hostname
 *		  and has the same name.
 */
struct AccessItem *
find_conf_exact(const char *name, const char *user,
                const char *host, unsigned int statmask)
{
  dlink_node *ptr;
  struct AccessItem *aconf;

  DLINK_FOREACH(ptr, ConfigItemList.head)
  {
    aconf = ptr->data;

    if (!(aconf->status & statmask) || !aconf->name || !aconf->host ||
        irccmp(aconf->name, name))
      continue;

    /* Accept if the *real* hostname (usually sockethost)
     * socket host) matches *either* host or name field
     * of the configuration.
     */
    if (!match(aconf->host, host) || !match(aconf->user, user) ||
        irccmp(aconf->name, name))
      continue;

    if (IsConfOperator(aconf))
    {
      if (aconf->clients < ConfMaxTotal(aconf))
        return(aconf);
      else
        continue;
    }
    else
      return(aconf);
  }

  return(NULL);
}

/* find_conf_name()
 *
 * inputs	- pointer to conf link list to search
 *		- pointer to name to find
 *		- int mask of type of conf to find
 * output	- NULL or pointer to conf found
 * side effects	- find a conf entry which matches the name
 *		  and has the given mask.
 */
struct AccessItem *
find_conf_name(dlink_list *list, const char *name, unsigned int statmask)
{
  dlink_node *ptr;
  struct AccessItem* aconf;

  DLINK_FOREACH(ptr, list->head)
  {
    aconf = ptr->data;

    if ((aconf->status & statmask) && aconf->name && 
        (irccmp(aconf->name, name) == 0 || match(aconf->name, name)))
      return(aconf);
  }

  return(NULL);
}

/* find_conf_by_name()
 *
 * inputs	- pointer to name to match on
 *		- int mask of type of conf to find
 * output	- NULL or pointer to conf found
 * side effects	- find a conf entry which matches the name
 *		  and has the given mask.
 *
 */
struct AccessItem *
find_conf_by_name(const char *name, unsigned int status)
{
  dlink_node *ptr;
  struct AccessItem *conf;

  assert(name != NULL);

  if (name == NULL)
    return(NULL);

  DLINK_FOREACH(ptr, ConfigItemList.head)
  {
    conf = ptr->data;

    if (conf->status == status && conf->name &&
        match(name, conf->name))
      return(conf);
  }

  return(NULL);
}

/* find_conf_by_host()
 *
 * inputs	- pointer to hostname to match on
 *		- int mask of type of conf to find
 * output	- NULL or pointer to conf found
 * side effects	- find a conf entry which matches the host
 *		  and has the given mask.
 *
 */
struct AccessItem *
find_conf_by_host(const char *host, unsigned int status)
{
  dlink_node *ptr;
  struct AccessItem *conf;

  assert(host != NULL);

  if (host == NULL)
    return(NULL);

  DLINK_FOREACH(ptr, ConfigItemList.head)
  {
    conf = ptr->data;

    if (conf->status == status && conf->host &&
        match(host, conf->host))
      return(conf);
  }

  return(NULL);
}

/* find_x_conf()
 *
 * inputs       - pointer to char string to find
 * output       - NULL or pointer to found struct MatchItem
 * side effects - looks for a match on name field
 */
struct MatchItem *
find_x_conf(const char *to_find)
{
  dlink_node *ptr;
  struct ConfItem *aconf;
  struct MatchItem *match_item;

  DLINK_FOREACH(ptr, all_conf_items.head)
  {
    aconf = ptr->data;

    if (aconf->type != XLINE_TYPE)
      continue;

    match_item = (struct MatchItem *)((unsigned long)aconf + 
				      (unsigned long)(sizeof(struct ConfItem)));
    if (EmptyString(match_item->name))
      continue;

    if (match_esc(match_item->name, to_find))
      return(match_item);
  }

  return(NULL);
}

/* find_u_conf()
 *
 * inputs       - pointer to servername
 *		- pointer to user of oper
 *		- pointer to host of oper
 *		- type of sharing
 * output       - 1 or 0
 * side effects - looks for a matches on all fields
 */
int 
find_u_conf(const char *server, const char *user, const char *host, int type)
{
  dlink_node *ptr;
  struct ConfItem *conf;
  struct MatchItem *match_item;

  DLINK_FOREACH(ptr, all_conf_items.head)
  {
    conf = ptr->data;

    if (conf->type != ULINE_TYPE)
      continue;

    match_item = (struct MatchItem *)map_to_conf(conf);
    if (EmptyString(match_item->name))
      continue;
    if (match(match_item->name, server))
    {
      if (EmptyString(match_item->user) || EmptyString(match_item->host))
	return (1);
      if (match(match_item->user, user) && match(match_item->host, host))
	return (1);
    }
  }

  return(0);
}

/* rehash()
 *
 * Actual REHASH service routine. Called with sig == 0 if it has been called
 * as a result of an operator issuing this command, else assume it has been
 * called as a result of the server receiving a HUP signal.
 */
int
rehash(int sig)
{
  if (sig != 0)
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "Got signal SIGHUP, reloading ircd conf. file");
  
  /* Purge the list of pending modules to be loaded */
  clear_pending();

  restart_resolver();
  /* don't close listeners until we know we can go ahead with the rehash */

  /* Check to see if we magically got(or lost) IPv6 support */
  check_can_use_v6();

  read_conf_files(0);

  load_pending ();

  if (ServerInfo.description != NULL)
    strlcpy(me.info, ServerInfo.description, sizeof(me.info));

  flush_deleted_I_P();
  check_klines();

  if (ConfigFileEntry.use_logging)
    reopen_log(logFileName);

  return(0);
}

/* set_default_conf()
 *
 * inputs	- NONE
 * output	- NONE
 * side effects	- Set default values here.
 *		  This is called **PRIOR** to parsing the
 *		  configuration file.  If you want to do some validation
 *		  of values later, put them in validate_conf().
 */
static void
set_default_conf(void)
{
  class0 = find_class("default");       /* which one is the default class ? */

#ifdef HAVE_LIBCRYPTO
  ServerInfo.rsa_private_key = NULL;
  ServerInfo.rsa_private_key_file = NULL;
#endif

  /* ServerInfo.name is not rehashable */
  /* ServerInfo.name = ServerInfo.name; */
  ServerInfo.description = NULL;
  DupString(ServerInfo.network_name, NETWORK_NAME_DEFAULT);
  DupString(ServerInfo.network_desc, NETWORK_DESC_DEFAULT);

  memset(&ServerInfo.ip, 0, sizeof(ServerInfo.ip));
  ServerInfo.specific_ipv4_vhost = 0;
  memset(&ServerInfo.ip6, 0, sizeof(ServerInfo.ip6));
  ServerInfo.specific_ipv6_vhost = 0;

  ServerInfo.max_clients = MAX_CLIENTS;  /* XXX - these don't seem to */
  ServerInfo.max_buffer = MAX_BUFFER;    /*       actually do anything! */
  /* Don't reset hub, as that will break lazylinks */
  /* ServerInfo.hub = NO; */
  ServerInfo.dns_host.sin_addr.s_addr = 0;
  ServerInfo.dns_host.sin_port = 0;
  AdminInfo.name = NULL;
  AdminInfo.email = NULL;
  AdminInfo.description = NULL;

  set_log_level(L_NOTICE);
  
  ConfigFileEntry.ignore_bogus_ts = NO;
  ConfigFileEntry.failed_oper_notice = YES;
  ConfigFileEntry.anti_nick_flood = NO;
  ConfigFileEntry.max_nick_time = 20;
  ConfigFileEntry.max_nick_changes = 5;
  ConfigFileEntry.max_accept = 20;
  ConfigFileEntry.anti_spam_exit_message_time = 0;
  ConfigFileEntry.ts_warn_delta = TS_WARN_DELTA_DEFAULT;
  ConfigFileEntry.ts_max_delta = TS_MAX_DELTA_DEFAULT;
  ConfigFileEntry.kline_with_reason = YES;
  ConfigFileEntry.client_exit = YES;
  ConfigFileEntry.kline_with_connection_closed = NO;
  ConfigFileEntry.warn_no_nline = YES;
  ConfigFileEntry.non_redundant_klines = YES;
  ConfigFileEntry.stats_o_oper_only = NO;
  ConfigFileEntry.stats_k_oper_only = 1; /* masked */
  ConfigFileEntry.stats_i_oper_only = 1; /* masked */
  ConfigFileEntry.stats_P_oper_only = NO;
  ConfigFileEntry.pace_wait = 10;
  ConfigFileEntry.caller_id_wait = 60;
  ConfigFileEntry.pace_wait_simple = 1;
  ConfigFileEntry.short_motd = NO;
  ConfigFileEntry.no_oper_flood = NO;
  ConfigFileEntry.true_no_oper_flood = NO;
  ConfigFileEntry.use_logging = YES;
  ConfigFileEntry.fname_userlog[0] = '\0';
  ConfigFileEntry.fname_foperlog[0] = '\0';
  ConfigFileEntry.fname_operlog[0] = '\0';
  ConfigFileEntry.glines = NO;
  ConfigFileEntry.use_egd = NO;
  ConfigFileEntry.gline_time = 12 * 3600;
  ConfigFileEntry.idletime = 0;
  ConfigFileEntry.dots_in_ident = 0;
  ConfigFileEntry.maximum_links = MAXIMUM_LINKS_DEFAULT;
  ConfigFileEntry.max_targets = MAX_TARGETS_DEFAULT;
  DupString(ConfigFileEntry.servlink_path, SLPATH);
  ConfigFileEntry.egdpool_path = NULL;
#ifdef HAVE_LIBCRYPTO
  /* jdc -- This is our default value for a cipher.  According to the
   *        CRYPTLINK document (doc/cryptlink.txt), BF/128 must be supported
   *        under all circumstances if cryptlinks are enabled.  So,
   *        this will be our default.
   *
   *        NOTE: I apologise for the hard-coded value of "1" (BF/128).
   *              This should be moved into a find_cipher() routine.
   */
  ConfigFileEntry.default_cipher_preference = &CipherTable[1];
#endif
#ifdef HAVE_LIBZ
  ConfigFileEntry.compression_level = 0;
#endif

  ConfigFileEntry.oper_umodes = UMODE_LOCOPS | UMODE_SERVNOTICE |
    UMODE_OPERWALL | UMODE_WALLOP;
  ConfigFileEntry.oper_only_umodes = UMODE_DEBUG;
  ConfigFileEntry.crypt_oper_password = YES;
  ConfigFileEntry.throttle_time = 10;

  ConfigChannel.use_except  = YES;
  ConfigChannel.use_invex   = YES;
  ConfigChannel.use_knock   = YES;
  ConfigChannel.knock_delay = 300;
  ConfigChannel.knock_delay_channel = 60;
  ConfigChannel.max_chans_per_user = 15;
  ConfigChannel.max_bans = 25;

  ConfigChannel.default_split_user_count = 0;
  ConfigChannel.default_split_server_count = 0;
  ConfigChannel.no_join_on_split = NO;
  ConfigChannel.no_create_on_split = NO;
  ConfigChannel.oper_pass_resv = YES;

  ConfigServerHide.flatten_links = 0;
  ConfigServerHide.hide_servers = 0;
  ConfigServerHide.disable_remote = 0;
  ConfigServerHide.links_delay = 300;
  ConfigServerHide.hidden = 0;
  ConfigServerHide.disable_hidden = 0;

  ConfigFileEntry.min_nonwildcard = 4;
  ConfigFileEntry.min_nonwildcard_simple = 3;
  ConfigFileEntry.default_floodcount = 8;
  ConfigFileEntry.client_flood = CLIENT_FLOOD_DEFAULT;

  ConfigFileEntry.fallback_to_ip6_int = 1;
}

/* read_conf() 
 *
 * inputs       - file descriptor pointing to config file to use
 * output       - None
 * side effects	- Read configuration file.
 */
static void
read_conf(FBFILE *file)
{
  scount = lineno = 0;

  set_default_conf(); /* Set default values prior to conf parsing */
  ypass = 1;
  yyparse();	      /* pick up the classes first */
  (void)fbrewind(file);
  ypass = 2;
  yyparse();          /* Load the values from the conf */
  validate_conf();    /* Check to make sure some values are still okay. */
                      /* Some global values are also loaded here. */
  check_class();      /* Make sure classes are valid */
}

static void
validate_conf(void)
{
  if (ConfigFileEntry.ts_warn_delta < TS_WARN_DELTA_MIN)
    ConfigFileEntry.ts_warn_delta = TS_WARN_DELTA_DEFAULT;

  if (ConfigFileEntry.ts_max_delta < TS_MAX_DELTA_MIN)
    ConfigFileEntry.ts_max_delta = TS_MAX_DELTA_DEFAULT;

  if (ConfigFileEntry.servlink_path == NULL)
    DupString(ConfigFileEntry.servlink_path, SLPATH);

  if (ServerInfo.network_name == NULL)
    DupString(ServerInfo.network_name,NETWORK_NAME_DEFAULT);

  if (ServerInfo.network_desc == NULL)
    DupString(ServerInfo.network_desc,NETWORK_DESC_DEFAULT);

  if ((ConfigFileEntry.client_flood < CLIENT_FLOOD_MIN) ||
      (ConfigFileEntry.client_flood > CLIENT_FLOOD_MAX))
     ConfigFileEntry.client_flood = CLIENT_FLOOD_MAX;

  GlobalSetOptions.idletime = (ConfigFileEntry.idletime * 60);
}

/* conf_add_conf()
 *
 * Inputs	- AccessItem
 * Output	- NONE
 * Side effects	- add given conf to link list
 */
void
conf_add_conf(struct AccessItem *aconf)
{
  collapse(aconf->host);
  collapse(aconf->user);
  dlinkAdd(aconf, &aconf->node, &ConfigItemList);
}

/* split_user_host()
 *
 * inputs	- pointer to original string of form "user@host"
 *		- pointer to new user part
 *		- pointer to new host part
 * output	- NONE
 * side effects - splits user@host found in a name field of conf given
 *		  stuff the user into ->user and the host into ->host
 */
void
split_user_host(char *user_host, char **user_p, char **host_p)
{
  char *p;
  char *new_user;
  char *new_host;

  if ((p = strchr(user_host, '@')) != NULL)
  {
    *p = '\0';
    DupString(new_user, user_host);
    p++;
    DupString(new_host, p);
    MyFree(user_host);
    *user_p = new_user;
    *host_p = new_host;
  }
  else
  {
    DupString(*user_p, "*");
  }
}

/* lookup_confhost()
 *
 * start DNS lookups of all hostnames in the conf
 * line and convert an IP addresses in a.b.c.d number for to IP#s.
 */
static void
lookup_confhost(struct AccessItem* aconf)
{
  struct addrinfo hints, *res;
  int ret;

  if (EmptyString(aconf->host) ||
      EmptyString(aconf->name))
  {
    ilog(L_ERROR, "Host/server name error: (%s) (%s)",
         aconf->host, aconf->name);
    return;
  }

  if (strchr(aconf->host, '*') ||
      strchr(aconf->host, '?'))
    return;

  /* Do name lookup now on hostnames given and store the
   * ip numbers in conf structure.
   */
  memset(&hints, 0, sizeof(hints));

  hints.ai_family   = AF_UNSPEC;
  hints.ai_socktype = SOCK_STREAM;

  /* Get us ready for a bind() and don't bother doing dns lookup */
  hints.ai_flags = AI_PASSIVE | AI_NUMERICHOST;

  if ((ret = irc_getaddrinfo(aconf->host, NULL, &hints, &res)))
  {
    conf_dns_lookup(aconf);
    return;
  }

  assert(res != NULL);

  memcpy(&aconf->ipnum, res->ai_addr, res->ai_addrlen);
  aconf->ipnum.ss_len = res->ai_addrlen;
  aconf->ipnum.ss.ss_family = res->ai_family;
  irc_freeaddrinfo(res);
}

/* conf_connect_allowed()
 *
 * inputs	- pointer to inaddr
 *		- int type ipv4 or ipv6
 * output	- BANNED or accepted
 * side effects	- none
 */
int
conf_connect_allowed(struct irc_ssaddr *addr, int aftype)
{
  struct ip_entry *ip_found;
  struct AccessItem *aconf = find_dline_conf(addr, aftype);

  /* DLINE exempt also gets you out of static limits/pacing... */
  if (aconf && (aconf->status & CONF_EXEMPTDLINE))
    return(0);

  if (aconf != NULL)
    return(BANNED_CLIENT);

  ip_found = find_or_add_ip(addr);

  if ((CurrentTime - ip_found->last_attempt) <
      ConfigFileEntry.throttle_time)
  {
    ip_found->last_attempt = CurrentTime;
    return(TOO_FAST);
  }

  ip_found->last_attempt = CurrentTime;
  return(0);
}

/* find_kill()
 *
 * inputs	- pointer to client structure
 * output	- pointer to struct AccessItem if found
 * side effects	- See if this user is klined already,
 *		  and if so, return struct AccessItem pointer
 */
struct AccessItem *
find_kill(struct Client *client_p)
{
  struct AccessItem *aconf;

  assert(client_p != NULL);

  if (client_p == NULL)
    return(NULL);

  aconf = find_kline_conf(client_p->host, client_p->username,
			  &client_p->localClient->ip,
			  client_p->localClient->aftype);
  if (aconf == NULL)
    return(NULL);
  if (aconf->status & CONF_KILL)
    return(aconf);

  return(NULL);
}

/* add_temp_kline()
 *
 * inputs        - pointer to struct AccessItem
 * output        - none
 * Side effects  - links in given struct AccessItem into 
 *                 temporary kline link list
 */
void
add_temp_kline(struct AccessItem *aconf)
{
  dlinkAdd(aconf, make_dlink_node(), &temporary_klines);
  SetConfTemporary(aconf);
  add_conf_by_address(aconf->host, CONF_KILL, aconf->user, aconf);
}

/* add_temp_dline()
 *
 * inputs        - pointer to struct AccessItem
 * output        - none
 * Side effects  - links in given struct AccessItem into 
 *                 temporary kline link list
 */
void
add_temp_dline(struct AccessItem *aconf)
{
  dlinkAdd(aconf, make_dlink_node(), &temporary_dlines);
  SetConfTemporary(aconf);
  add_conf_by_address(aconf->host, CONF_DLINE, NULL, aconf);
}

/* cleanup_tklines()
 *
 * inputs       - NONE
 * output       - NONE
 * side effects - call function to expire tklines
 *                This is an event started off in ircd.c
 */
void
cleanup_tklines(void *notused)
{
  expire_tklines(&temporary_klines);
  expire_tklines(&temporary_dlines);
}

/* expire_tklines()
 *
 * inputs       - tkline list pointer
 * output       - NONE
 * side effects - expire tklines
 */
static void
expire_tklines(dlink_list *tklist)
{
  dlink_node *kill_node;
  dlink_node *next_node;
  struct AccessItem *kill_ptr;

  DLINK_FOREACH_SAFE(kill_node, next_node, tklist->head)
  {
    kill_ptr = kill_node->data;

    if (kill_ptr->hold <= CurrentTime)
    {
      /* Alert opers that a TKline expired - Hwy */
      if (kill_ptr->status & CONF_KILL)
      {
	sendto_realops_flags(UMODE_ALL, L_ALL,
			     "Temporary K-line for [%s@%s] expired",
			     (kill_ptr->user) ? kill_ptr->user : "*",
			     (kill_ptr->host) ? kill_ptr->host : "*");
      }
      else
      {
	sendto_realops_flags(UMODE_ALL, L_ALL,
			     "Temporary D-line for [%s] expired",
			     (kill_ptr->host) ? kill_ptr->host : "*");
      }

      delete_one_address_conf(kill_ptr->host, kill_ptr);
      dlinkDelete(kill_node, tklist);
      free_dlink_node(kill_node);
    }
  }
}

/* oper_privs_as_string()
 *
 * inputs        - pointer to client_p or NULL
 * output        - pointer to static string showing oper privs
 * side effects  - return as string, the oper privs as derived from port
 * 		   also set the oper privs if given source_p non NULL
 */
static const struct oper_privs
{
  unsigned int oprivs;
  unsigned int hidden;
  unsigned char c;
} flag_list[] = {
  { OPER_FLAG_ADMIN,       OPER_FLAG_HIDDEN_ADMIN,  'A' },
  { OPER_FLAG_DIE,         0,                       'D' },
  { OPER_FLAG_GLINE,       0,                       'G' },
  { OPER_FLAG_REHASH,      0,                       'H' },
  { OPER_FLAG_K,           0,                       'K' },
  { OPER_FLAG_N,           0,                       'N' },
  { OPER_FLAG_GLOBAL_KILL, 0,                       'O' },
  { OPER_FLAG_REMOTE,      0,                       'R' },
  { OPER_FLAG_UNKLINE,     0,                       'U' },
  { OPER_FLAG_X,           0,                       'X' },
  { 0, 0, '\0' }
};

char *
oper_privs_as_string(struct Client *source_p, unsigned int port)
{
  static char privs_out[20];
  char *privs_ptr;
  unsigned int i;

  privs_ptr = privs_out;
  *privs_ptr = '\0';

  if (source_p != NULL)
    SetOFlag(source_p, port);

  for (i = 0; flag_list[i].oprivs; i++)
  {
    if ((port & flag_list[i].oprivs) &&
        (port & flag_list[i].hidden) == 0)
      *privs_ptr++ = flag_list[i].c;
    else
      *privs_ptr++ = ToLowerTab[(unsigned char)flag_list[i].c];
  }

  *privs_ptr = '\0';
  return(privs_out);
}


/* const char* get_oper_name(struct Client *client_p)
 * Input: A client to find the active oper{} name for.
 * Output: The nick!user@host{oper} of the oper.
 *         "oper" is server name for remote opers
 * Side effects: None.
 */
char *
get_oper_name(struct Client *client_p)
{
  dlink_node *cnode;

  /* +5 for !,@,{,} and null */
  static char buffer[NICKLEN+USERLEN+HOSTLEN+HOSTLEN+5];

  if (MyConnect(client_p))
  {
    DLINK_FOREACH(cnode, client_p->localClient->confs.head)
    {
      if (IsConfOperator((struct AccessItem *)cnode->data))
      {
	ircsprintf(buffer, "%s!%s@%s{%s}", client_p->name,
		   client_p->username, client_p->host,
		   ((struct AccessItem *)cnode->data)->name);
	return(buffer);
      }
    }

    /* Probably should assert here for now. If there is an oper out there 
     * with no oper{} conf attached, it would be good for us to know...
     */
    assert(0); /* Oper without oper conf! */
  }
  ircsprintf(buffer, "%s!%s@%s{%s}", client_p->name,
	     client_p->username, client_p->host, client_p->servptr->name);
  return(buffer);
}

/* get_printable_conf()
 *
 * inputs        - struct AccessItem
 *
 * output         - name 
 *                - host
 *                - reason
 *                - user
 *                - port
 *
 * side effects        -
 * Examine the struct AccessItem *aconf, setting the values
 * of name, host, pass, user to values either
 * in aconf, or "<NULL>" port is set to aconf->port in all cases.
 */
void
get_printable_conf(struct AccessItem *aconf, char **name, char **host,
		   char **reason, char **user, int *port, char **classname)
{
  static char null[] = "<NULL>";
  static char zero[] = "default";

  *name = EmptyString(aconf->name) ? null : aconf->name;
  *host = EmptyString(aconf->host) ? null : aconf->host;
  *reason = EmptyString(aconf->reason) ? null : aconf->reason;
  *user = EmptyString(aconf->user) ? null : aconf->user;
  *classname = EmptyString(aconf->class_name) ? zero : aconf->class_name;
  *port = (int)aconf->port;
}

/* read_conf_files()
 *
 * inputs       - cold start YES or NO
 * output       - none
 * side effects - read all conf files needed, ircd.conf kline.conf etc.
 */
void
read_conf_files(int cold)
{
  const char *filename;

  conf_fbfile_in = NULL;

  filename = get_conf_name(CONF_TYPE);

  /* We need to know the initial filename for the yyerror() to report
     FIXME: The full path is in conffilenamebuf first time since we
             dont know anything else

     - Gozem 2002-07-21 
  */
  strlcpy(conffilebuf, filename, sizeof(conffilebuf));

  if ((conf_fbfile_in = fbopen(filename, "r")) == NULL)
  {
    if (cold)
    {
      ilog(L_CRIT, "Failed in reading configuration file %s", filename);
      exit(-1);
    }
    else
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
			   "Can't open file '%s' - aborting rehash!",
			   filename );
      return;
    }
  }

  if (!cold)
    clear_out_old_conf();

  read_conf(conf_fbfile_in);
  fbclose(conf_fbfile_in);

  parse_conf_file(KLINE_TYPE, cold);
  parse_conf_file(DLINE_TYPE, cold);
  parse_conf_file(XLINE_TYPE, cold);
  parse_conf_file(NRESV_TYPE, cold);
  parse_conf_file(CRESV_TYPE, cold);
}

/*
 * parse_conf_file()
 *
 * inputs	- type of conf file to parse 
 * output	- none
 * side effects	- conf file for givenconf type is opened and read then parsed
 */
static void
parse_conf_file(int type, int cold)
{
  const char *filename;
  FBFILE *file;

  filename = get_conf_name(type);

  if ((file = fbopen(filename, "r")) == NULL)
  {
    if (cold)
      ilog(L_ERROR, "Failed reading file %s", filename);
    else
      sendto_realops_flags(UMODE_ALL, L_ALL, "Can't open %s file ", filename);
  }
  else
  {
    parse_csv_file(file, type);
    fbclose(file);
  }
}

/* clear_out_old_conf()
 *
 * inputs       - none
 * output       - none
 * side effects - Clear out the old configuration
 */
static void
clear_out_old_conf(void)
{
  dlink_node *ptr;
  dlink_node *next_ptr;
  struct AccessItem *aconf;
  struct Class *cltmp;

  /* We only need to free anything allocated by yyparse() here.
   * Resetting structs, etc, is taken care of by set_default_conf().
   */
  DLINK_FOREACH_SAFE(ptr, next_ptr, ConfigItemList.head)
  {
    aconf = ptr->data;

    if (aconf->clients != 0)
    {
      /* Configuration entry is still in use by some
       * local clients, cannot delete it--mark it so
       * that it will be deleted when the last client
       * exits...
       */
      if ((aconf->status & (CONF_CLIENT_MASK|CONF_HUB|CONF_LEAF)) == 0)
      {
        dlinkDelete(&aconf->node, &ConfigItemList);
        free_access_item(aconf);
      }
      else
        SetConfIllegal(aconf);
    }
    else
    {
      dlinkDelete(&aconf->node, &ConfigItemList);
      free_access_item(aconf);
    }
  }

  /* don't delete the class table, rather mark all entries
   * for deletion. The table is cleaned up by check_class. - avalon
   */
  DLINK_FOREACH(ptr, ClassList.head)
  {
    cltmp = ptr->data;
    CurrUserCount(cltmp) = -1;
  }

  clear_out_address_conf();

  /* clean out module paths */
#ifndef STATIC_MODULES
  mod_clear_paths();
#endif

  /* clean out ServerInfo */
  MyFree(ServerInfo.description);
  ServerInfo.description = NULL;
  MyFree(ServerInfo.network_name);
  ServerInfo.network_name = NULL;
  MyFree(ServerInfo.network_desc);
  ServerInfo.network_desc = NULL;
  MyFree(ConfigFileEntry.egdpool_path);
  ConfigFileEntry.egdpool_path = NULL;
#ifdef HAVE_LIBCRYPTO
  if (ServerInfo.rsa_private_key != NULL)
  {
    RSA_free(ServerInfo.rsa_private_key);
    ServerInfo.rsa_private_key = NULL;
  }

  MyFree(ServerInfo.rsa_private_key_file);
  ServerInfo.rsa_private_key_file = NULL;
#endif

  clear_clusters();
  /* clean out old resvs from the conf */
  clear_conf_resv();

  /* clean out AdminInfo */
  MyFree(AdminInfo.name);
  AdminInfo.name = NULL;
  MyFree(AdminInfo.email);
  AdminInfo.email = NULL;
  MyFree(AdminInfo.description);
  AdminInfo.description = NULL;

  /* operator{} and class{} blocks are freed above */
  /* clean out listeners */
  close_listeners();

  /* auth{}, quarantine{}, shared{}, connect{}, kill{}, deny{},
   * exempt{} and gecos{} blocks are freed above too
   */

  /* clean out general */
  MyFree(ConfigFileEntry.servlink_path);
  ConfigFileEntry.servlink_path = NULL;
#ifdef HAVE_LIBCRYPTO
  ConfigFileEntry.default_cipher_preference = NULL;
#endif /* HAVE_LIBCRYPTO */
}

/* flush_deleted_I_P()
 *
 * inputs       - none
 * output       - none
 * side effects - This function removes I/P conf items
 */
static void
flush_deleted_I_P(void)
{
  dlink_node *ptr;
  dlink_node *next_ptr;
  struct AccessItem *aconf;

  /* flush out deleted I and P lines
   * although still in use.
   */
  DLINK_FOREACH_SAFE(ptr, next_ptr, ConfigItemList.head)
  {
    aconf = ptr->data;

    if (IsConfIllegal(aconf))
    {
      dlinkDelete(ptr, &ConfigItemList);

      if (aconf->clients == 0)
	free_access_item(aconf);
    }
  }
}


/* get_conf_name()
 *
 * inputs       - type of conf file to return name of file for
 * output       - pointer to filename for type of conf
 * side effects - none
 */
const char *
get_conf_name(ConfType type)
{
  switch (type)
  {
    case CONF_TYPE:
      return(ConfigFileEntry.configfile);
      break;
    case KLINE_TYPE:
      return(ConfigFileEntry.klinefile);
      break;
    case DLINE_TYPE:
      return(ConfigFileEntry.dlinefile);
      break;
    case XLINE_TYPE:
      return(ConfigFileEntry.xlinefile);
      break;
    case CRESV_TYPE:
      return(ConfigFileEntry.cresvfile);
      break;
    case NRESV_TYPE:
      return(ConfigFileEntry.nresvfile);
      break;
    case GLINE_TYPE:
      return(ConfigFileEntry.glinefile);
      break;

    default:
      return(NULL); /* This should NEVER HAPPEN since we call this function
                       only with the above values, this will cause us to core
                       at some point if this happens so we know where it was */
      break;
  }
}

/* conf_add_class_to_conf()
 *
 * inputs       - pointer to config item
 * output       - NONE
 * side effects - Add a class pointer to a conf 
 */
void
conf_add_class_to_conf(struct AccessItem *aconf)
{
  if (aconf->class_name == NULL)
  {
    DupString(aconf->class_name, "default");
    ClassPtr(aconf) = class0;
    return;
  }

  ClassPtr(aconf) = find_class(aconf->class_name);

  if (ClassPtr(aconf) == class0)
  {
    sendto_realops_flags(UMODE_ALL, L_ALL,
	   "Warning *** Defaulting to default "
           "class for missing class \"%s\"",
                         aconf->class_name);
    MyFree(aconf->class_name);
    DupString(aconf->class_name, "default");
    return;
  }

  if (ConfMaxTotal(aconf) < 0)
  {
    ClassPtr(aconf) = find_class(0);
    MyFree(aconf->class_name);
    DupString(aconf->class_name, "default");
    return;
  }
}

#define MAXCONFLINKS 150

/* conf_add_server()
 *
 * inputs       - pointer to config item
 *		- pointer to link count already on this conf
 * output       - NONE
 * side effects - Add a connect block
 */
int
conf_add_server(struct AccessItem *aconf, unsigned int lcount)
{
  conf_add_class_to_conf(aconf);

  if (lcount > MAXCONFLINKS || !aconf->host || !aconf->name)
  {
    sendto_realops_flags(UMODE_ALL, L_ALL, "Bad connect block");
    ilog(L_WARN, "Bad connect block");
    return(-1);
  }

  if (EmptyString(aconf->passwd) && !IsConfCryptLink(aconf))
  {
    sendto_realops_flags(UMODE_ALL, L_ALL, "Bad connect block, name %s",
                         aconf->name);
    ilog(L_WARN, "Bad connect block, host %s",aconf->name);
    return(-1);
  }

  split_user_host(aconf->host, &aconf->user, &aconf->host);
  lookup_confhost(aconf);

  return(0);
}

/* conf_add_d_conf()
 *
 * inputs       - pointer to config item
 * output       - NONE
 * side effects - Add a d/D line
 */
void
conf_add_d_conf(struct AccessItem *aconf)
{
  if (aconf->host == NULL)
    return;

  aconf->user = NULL;

  /* XXX - Should 'd' ever be in the old conf? For new conf we don't
   *       need this anyway, so I will disable it for now... -A1kmm
   */
  if (parse_netmask(aconf->host, NULL, NULL) == HM_HOST)
  {
    ilog(L_WARN, "Invalid Dline %s ignored", aconf->host);
    free_access_item(aconf);
  }
  else
  {
    add_conf_by_address(aconf->host, CONF_DLINE, NULL, aconf);
  }
}

/* yyerror()
 *
 * inputs	- message from parser
 * output	- NONE
 * side effects	- message to opers and log file entry is made
 */
void
yyerror(const char *msg)
{
  char newlinebuf[BUFSIZE];

  if (ypass != 1)
    return;

  strip_tabs(newlinebuf, (const unsigned char *)linebuf, strlen(linebuf));
  sendto_realops_flags(UMODE_ALL, L_ALL,"\"%s\", line %d: %s: %s",
                       conffilebuf, lineno + 1, msg, newlinebuf);
  ilog(L_WARN, "\"%s\", line %d: %s: %s",
       conffilebuf, lineno + 1, msg, newlinebuf);
}

int
conf_fbgets(char *lbuf, int max_size, FBFILE *fb)
{
  char *buff;

  if ((buff = fbgets(lbuf, max_size, fb)) == NULL)
    return(0);

  return(strlen(lbuf));
}

int
conf_yy_fatal_error(const char *msg)
{
  return(0);
}
