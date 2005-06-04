/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  client.h: The ircd client header.
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
 *  $Id: client.h,v 7.229 2005/06/04 12:27:27 michael Exp $
 */

#ifndef INCLUDED_client_h
#define INCLUDED_client_h

#include "setup.h"
#include "ircd_defs.h"
#include "ircd_handler.h"
#include "dbuf.h"
#include "channel.h"
#include "irc_res.h"

#define HOSTIPLEN	53 /* sizeof("ffff:ffff:ffff:ffff:ffff:ffff:255.255.255.255.ipv6") */
#define PASSWDLEN       20
#define CIPHERKEYLEN    64 /* 512bit */
#define IDLEN           12 /* this is the maximum length, not the actual
                              generated length; DO NOT CHANGE! */

/*
 * pre declare structs
 */
struct AccessItem;
struct Whowas;
struct DNSReply;
struct Listener;
struct Client;
struct LocalUser;

/*
 * Client structures
 */
struct User
{
  dlink_list     channel;   /* chain of channel pointer blocks */
  dlink_list     invited;   /* chain of invite pointer blocks */
  char*          away;      /* pointer to away message */
  time_t         last_away; /* Away since... */
  time_t         last;
  struct Client *server;    /* pointer to server */
  char*          response;  /* expected response from client */
  char*          auth_oper; /* Operator to become if they supply the response.*/
};

struct Server
{
  char by[NICKLEN];       /* who activated this connection     */
  struct ConfItem *sconf; /* ConfItem connect{} pointer for this server */
  dlink_list servers;     /* Servers on this server            */
  dlink_list users;       /* Users on this server              */
};

struct SlinkRpl
{
  int command;
  int datalen;
  int gotdatalen;
  int readdata;
  unsigned char *data;
};

struct ZipStats
{
  unsigned long in;
  unsigned long in_wire;
  unsigned long out;
  unsigned long out_wire;
  double in_ratio;
  double out_ratio;
};

struct ListTask
{
  int hash_index;       /* the bucket we are currently in */
  dlink_list show_mask; /* show these channels..          */
  dlink_list hide_mask; /* ..and hide these ones          */
  unsigned int users_min, users_max;
  unsigned int created_min, created_max;
  unsigned int topicts_min, topicts_max;
};

struct Client
{
  dlink_node node;
  dlink_node lnode;      /* Used for Server->servers/users */

  struct Client *hnext;		/* For client hash table lookups by name */
  struct Client *idhnext;	/* For SID hash table lookups by sid */

  struct User*      user;       /* ...defined, if this is a User */
  struct Server*    serv;       /* ...defined, if this is a server */
  struct Client*    servptr;    /* Points to server this Client is on */
  struct Client*    from;       /* == self, if Local Client, *NEVER* NULL! */

  struct Whowas*    whowas;     /* Pointers to whowas structs */
  time_t            lasttime;   /* ...should be only LOCAL clients? --msa */
  time_t            firsttime;  /* time client was created */
  time_t            since;      /* last time we parsed something */
  time_t            tsinfo;     /* TS on the nick, SVINFO on server */
  unsigned int      umodes;     /* opers, normal users subset */
  unsigned int      flags;      /* client flags */

  unsigned short    hopcount;   /* number of servers to this 0 = local */
  unsigned short    status;     /* Client type */
  unsigned char     handler;    /* Handler index */
  unsigned long     serial;	/* used to enforce 1 send per nick */
  unsigned long     lazyLinkClientExists; /* This client exists on the
					   * bit mapped lazylink servers 
					   * mapped here
					   */
  /*
   * client->name is the unique name for a client nick or host
   */
  char name[HOSTLEN + 1]; 
  char id[IDLEN + 1];       /* client ID, unique ID per client */
  /*
   * client->llname is used to store the clients requested nick
   * temporarily for new connections.
   */
  char              llname[NICKLEN];
  /* 
   * client->username is the username from ident or the USER message, 
   * If the client is idented the USER message is ignored, otherwise 
   * the username part of the USER message is put here prefixed with a 
   * tilde depending on the I:line, Once a client has registered, this
   * field should be considered read-only.
   */ 
  char              username[USERLEN + 1]; /* client's username */
  /*
   * client->host contains the resolved name or ip address
   * as a string for the user, it may be fiddled with for oper spoofing etc.
   * once it's changed the *real* address goes away. This should be
   * considered a read-only field after the client has registered.
   */
  char              host[HOSTLEN + 1];     /* client's hostname */
  /*
   * client->info for unix clients will normally contain the info from the 
   * gcos field in /etc/passwd but anything can go here.
   */
  char              info[REALLEN + 1]; /* Free form additional client info */

  /* caller ID allow list */
  /* This has to be here, since a client on an on_allow_list could
   * be a remote client. simpler to keep both here.
   */
  dlink_list	allow_list;	/* clients I'll allow to talk to me */
  dlink_list	on_allow_list;	/* clients that have =me= on their allow list*/

  struct LocalUser *localClient;
};

struct LocalUser
{
  /* The following fields are allocated only for local clients
   * (directly connected to *this* server with a socket.
   */
  /* Anti flooding part, all because of lamers... */
  time_t            last_join_time;   /* when this client last 
                                         joined a channel */
  time_t            last_leave_time;  /* when this client last 
                                       * left a channel */
  int               join_leave_count; /* count of JOIN/LEAVE in less than 
                                         MIN_JOIN_LEAVE_TIME seconds */
  int               oper_warn_count_down; /* warn opers of this possible 
                                          spambot every time this gets to 0 */
  time_t            last_caller_id_time;
  time_t            first_received_message_time;
  int               received_number_of_privmsgs;
  int               flood_noticed;

  dlink_node        lclient_node;

  unsigned int      operflags; /* oper priv flags */

  struct ListTask   *list_task;
  /* Send and receive dbufs .. */
  struct dbuf_queue buf_sendq;
  struct dbuf_queue buf_recvq;

  /* we want to use unsigned int here so the sizes have a better chance of
   * staying the same on 64 bit machines. The current trend is to use
   * I32LP64, (32 bit ints, 64 bit longs and pointers) and since ircd
   * will NEVER run on an operating system where ints are less than 32 bits, 
   * it's a relatively safe bet to use ints. Since right shift operations are
   * performed on these, it's not safe to allow them to become negative, 
   * which is possible for long running server connections. Unsigned values 
   * generally overflow gracefully. --Bleep
   */

  struct {
    unsigned int messages;      /* Statistics: protocol messages sent/received */
    uint64_t bytes;             /* Statistics: total bytes sent/received */
  } recv, send;

  struct Listener *listener;   /* listener accepted from */
  dlink_list        confs;      /* Configuration record associated */

  struct irc_ssaddr ip;
  unsigned short    port;       /* and the remote port# too :-) */
  int 		    aftype;	/* Makes life easier for DNS res in IPV6 */
  struct DNSQuery   *dns_query;  /* result returned from resolver query */
  unsigned long     serverMask; /* Only used for Lazy Links */
  time_t            last_nick_change;
  int               number_of_nick_changes;

  /* client->sockhost contains the ip address gotten from the socket as a
   * string, this field should be considered read-only once the connection
   * has been made. (set in s_bsd.c only)
   */
  char              sockhost[HOSTIPLEN + 1]; /* This is the host name from the 
                                                socket ip address as string */
  char              *passwd;
  int               caps;       /* capabilities bit-field */
  int               enc_caps;   /* cipher capabilities bit-field */

#ifdef HAVE_LIBCRYPTO
  struct EncCapability *in_cipher;
  struct EncCapability *out_cipher;

  char              in_key[CIPHERKEYLEN];
  char              out_key[CIPHERKEYLEN];
#endif

  int               fd;         /* >= 0, for local clients */
#ifndef HAVE_SOCKETPAIR
  int               fd_r;       /* fd for reading */
#endif

  int               ctrlfd;     /* For servers: control fd used for sending commands
                                   to servlink */
#ifndef HAVE_SOCKETPAIR
  int              ctrlfd_r;    /* control fd for reading */
#endif

  struct SlinkRpl  slinkrpl;    /* slink reply being parsed */
  char    *slinkq;              /* sendq for control data */
  int              slinkq_ofs;  /* ofset into slinkq */
  int              slinkq_len;  /* length remaining after slinkq_ofs */

  struct ZipStats  zipstats;

  /* Anti-flood stuff. We track how many messages were parsed and how
   * many we were allowed in the current second, and apply a simple
   * decay to avoid flooding.
   *   -- adrian
   */
  int allow_read;	/* how many we're allowed to read in this second */
  int sent_parsed;      /* how many messages we've parsed in this second */
  time_t last_knock;    /* time of last knock */
  unsigned long random_ping;
};

/*
 * status macros.
 */
#define STAT_CONNECTING         0x01
#define STAT_HANDSHAKE          0x02
#define STAT_ME                 0x04
#define STAT_UNKNOWN            0x08
#define STAT_SERVER             0x10
#define STAT_CLIENT             0x20

#define HasID(x)		((x)->id[0] != '\0')
#define ID(x)			(HasID(x) ? (x)->id : (x)->name)
#define ID_or_name(x,client_p)	((IsCapable(client_p, CAP_TS6) && HasID(x)) ? (x)->id : (x)->name)

#define IsRegistered(x)         ((x)->status  > STAT_UNKNOWN)
#define IsConnecting(x)         ((x)->status == STAT_CONNECTING)
#define IsHandshake(x)          ((x)->status == STAT_HANDSHAKE)
#define IsMe(x)                 ((x)->status == STAT_ME)
#define IsUnknown(x)            ((x)->status == STAT_UNKNOWN)
#define IsServer(x)             ((x)->status == STAT_SERVER)
#define IsClient(x)             ((x)->status == STAT_CLIENT)

#define IsOper(x)		((x)->umodes & UMODE_OPER)
#define IsAdmin(x)		((x)->umodes & UMODE_ADMIN)

#define SetConnecting(x)        {(x)->status = STAT_CONNECTING; \
				 (x)->handler = UNREGISTERED_HANDLER; }

#define SetHandshake(x)         {(x)->status = STAT_HANDSHAKE; \
				 (x)->handler = UNREGISTERED_HANDLER; }

#define SetMe(x)                {(x)->status = STAT_ME; \
				 (x)->handler = UNREGISTERED_HANDLER; }

#define SetUnknown(x)           {(x)->status = STAT_UNKNOWN; \
				 (x)->handler = UNREGISTERED_HANDLER; }

#define SetServer(x)            {(x)->status = STAT_SERVER; \
				 (x)->handler = SERVER_HANDLER; }

#define SetClient(x)            {(x)->status = STAT_CLIENT; \
				 (x)->handler = IsOper((x)) ? \
					OPER_HANDLER : CLIENT_HANDLER; }

#define SetEob(x)		((x)->flags |= FLAGS_EOB)
#define HasSentEob(x)		((x)->flags & FLAGS_EOB)

/*
 * ts stuff
 */
#define TS_CURRENT      6       /* current TS protocol version */
#ifdef TS5_ONLY
#define TS_MIN          5
#else
#define TS_MIN          3       /* minimum supported TS protocol version */
#endif
#define TS_DOESTS       0x20000000
#define DoesTS(x)       ((x)->tsinfo == TS_DOESTS)


/* housekeeping flags */
#define FLAGS_PINGSENT    0x00000001 /* Unreplied ping sent                      */
#define FLAGS_DEADSOCKET  0x00000002 /* Local socket is dead--Exiting soon       */
#define FLAGS_KILLED      0x00000004 /* Prevents "QUIT" from being sent for this */
#define FLAGS_CLOSING     0x00000008 /* set when closing to suppress errors      */
#define FLAGS_GOTID       0x00000010 /* successful ident lookup achieved         */
#define FLAGS_NEEDID      0x00000020 /* I-lines say must use ident return        */
#define FLAGS_SENDQEX     0x00000040 /* Sendq exceeded                           */
#define FLAGS_IPHASH      0x00000080 /* iphashed this client                     */
#define FLAGS_CRYPTIN     0x00000100 /* incoming data must be decrypted          */
#define FLAGS_CRYPTOUT    0x00000200 /* outgoing data must be encrypted          */
#define FLAGS_WAITAUTH    0x00000400 /* waiting for CRYPTLINK AUTH command       */
#define FLAGS_SERVLINK    0x00000800 /* servlink has servlink process            */
#define FLAGS_MARK	  0x00001000 /* marked client                            */
#define FLAGS_CANFLOOD	  0x00002000 /* client has the ability to flood          */
#define FLAGS_EXEMPTGLINE 0x00004000 /* client can't be G-lined                  */
#define FLAGS_EXEMPTKLINE 0x00008000 /* client is exempt from kline              */
#define FLAGS_NOLIMIT     0x00010000 /* client is exempt from limits             */
#define FLAGS_RESTRICTED  0x00020000 /* client cannot op others                  */
#define FLAGS_PING_COOKIE 0x00040000 /* PING Cookie                              */
#define FLAGS_IDLE_LINED  0x00080000 /* client is exempt from idle-time limits   */
#define FLAGS_IP_SPOOFING 0x00100000 /* client IP is spoofed                     */
#define FLAGS_FLOODDONE   0x00200000 /* Flood grace period has been ended.       */
#define FLAGS_EOB         0x00400000 /* server has received EOB                  */
#define FLAGS_HIDDEN      0x00800000 /* a hidden server. not shown in /links     */
#define FLAGS_BLOCKED     0x01000000 /* must wait for COMM_SELECT_WRITE          */
#define FLAGS_SBLOCKED    0x02000000 /* slinkq is blocked                        */
#define FLAGS_USERHOST    0x04000000 /* client is in userhost hash               */
#define FLAGS_BURSTED     0x08000000 /* user was already bursted                 */
/*                        0x10000000  */
/*                        0x20000000  */
/*                        0x40000000  */
/*                        0x80000000  */


/* umodes, settable flags */
#define UMODE_SERVNOTICE   0x00001 /* server notices such as kill */
#define UMODE_CCONN        0x00002 /* Client Connections */
#define UMODE_REJ          0x00004 /* Bot Rejections */
#define UMODE_SKILL        0x00008 /* Server Killed */
#define UMODE_FULL         0x00010 /* Full messages */
#define UMODE_SPY          0x00020 /* see STATS / LINKS */
#define UMODE_DEBUG        0x00040 /* 'debugging' info */
#define UMODE_NCHANGE      0x00080 /* Nick change notice */
#define UMODE_WALLOP       0x00100 /* send wallops to them */
#define UMODE_OPERWALL     0x00200 /* Operwalls */
#define UMODE_INVISIBLE    0x00400 /* makes user invisible */
#define UMODE_BOTS         0x00800 /* shows bots */
#define UMODE_EXTERNAL     0x01000 /* show servers introduced and splitting */
#define UMODE_CALLERID     0x02000 /* block unless caller id's */
#define UMODE_UNAUTH       0x04000 /* show unauth connects here */
#define UMODE_LOCOPS       0x08000 /* show locops */

/* user information flags, only settable by remote mode or local oper */
#define UMODE_OPER         0x10000 /* Operator */
#define UMODE_ADMIN        0x20000 /* Admin on server */
#define UMODE_ALL	   UMODE_SERVNOTICE

#define SEND_UMODES  (UMODE_INVISIBLE | UMODE_OPER | UMODE_WALLOP | \
                      UMODE_ADMIN)
#define ALL_UMODES   (SEND_UMODES | UMODE_SERVNOTICE | UMODE_CCONN | \
                      UMODE_REJ | UMODE_SKILL | UMODE_FULL | UMODE_SPY | \
                      UMODE_NCHANGE | UMODE_OPERWALL | UMODE_DEBUG | \
                      UMODE_BOTS | UMODE_EXTERNAL | UMODE_LOCOPS | \
                      UMODE_ADMIN | UMODE_UNAUTH | UMODE_CALLERID)


/* oper priv flags */
#define OPER_FLAG_GLOBAL_KILL  0x00000001 /* oper can global kill        */
#define OPER_FLAG_REMOTE       0x00000002 /* oper can do squits/connects */
#define OPER_FLAG_UNKLINE      0x00000004 /* oper can use unkline        */
#define OPER_FLAG_GLINE        0x00000008 /* oper can use gline          */
#define OPER_FLAG_N            0x00000010 /* oper can umode n            */
#define OPER_FLAG_K            0x00000020 /* oper can kill/kline         */
#define OPER_FLAG_X            0x00000040 /* oper can xline              */
#define OPER_FLAG_DIE          0x00000080 /* oper can die                */
#define OPER_FLAG_REHASH       0x00000100 /* oper can rehash             */
#define OPER_FLAG_ADMIN        0x00000200 /* oper can set umode +a       */
#define OPER_FLAG_HIDDEN_ADMIN 0x00000400 /* admin is hidden             */
#define OPER_FLAG_OPERWALL     0x00000800 /* */
#define OPER_FLAG_OPER_SPY     0x00001000 /* */
#define OPER_FLAG_REMOTEBAN    0x00002000 /* */
#define OPER_FLAG_HIDDEN_OPER  0x00004000 /* */

#define SetOFlag(x, y) ((x)->localClient->operflags |= (y))


/* flags macros. */
#define IsPerson(x)             (IsClient(x) && (x)->user)
#define IsDead(x)               ((x)->flags & FLAGS_DEADSOCKET)
#define SetDead(x)              ((x)->flags |= FLAGS_DEADSOCKET)
#define IsClosing(x)		((x)->flags & FLAGS_CLOSING)
#define SetClosing(x)		((x)->flags |= FLAGS_CLOSING)
#define IsKilled(x)		((x)->flags & FLAGS_KILLED)
#define SetKilled(x)		((x)->flags |= FLAGS_KILLED)
#define IsCryptIn(x)            ((x)->flags &  FLAGS_CRYPTIN)
#define SetCryptIn(x)           ((x)->flags |= FLAGS_CRYPTIN)
#define IsCryptOut(x)           ((x)->flags &  FLAGS_CRYPTOUT)
#define SetCryptOut(x)          ((x)->flags |= FLAGS_CRYPTOUT)
#define IsWaitAuth(x)           ((x)->flags &  FLAGS_WAITAUTH)
#define SetWaitAuth(x)          ((x)->flags |= FLAGS_WAITAUTH)
#define ClearWaitAuth(x)        ((x)->flags &= ~FLAGS_WAITAUTH)
#define HasServlink(x)          ((x)->flags &  FLAGS_SERVLINK)
#define SetServlink(x)          ((x)->flags |= FLAGS_SERVLINK)
#define MyConnect(x)            ((x)->localClient != NULL)
#define MyClient(x)             (MyConnect(x) && IsClient(x))
#define SetMark(x)		((x)->flags |= FLAGS_MARK)
#define ClearMark(x)		((x)->flags &= ~FLAGS_MARK)
#define IsMarked(x)		((x)->flags & FLAGS_MARK)
#define SetCanFlood(x)		((x)->flags |= FLAGS_CANFLOOD)
#define IsCanFlood(x)		((x)->flags & FLAGS_CANFLOOD)
#define IsDefunct(x)            ((x)->flags & (FLAGS_DEADSOCKET|FLAGS_CLOSING| \
					       FLAGS_KILLED))

/* oper flags */
#define MyOper(x)               (MyConnect(x) && IsOper(x))

#define SetOper(x)              {(x)->umodes |= UMODE_OPER; \
				 if (!IsServer((x))) (x)->handler = OPER_HANDLER;}

#define ClearOper(x)            {(x)->umodes &= ~(UMODE_OPER|UMODE_ADMIN); \
				 if (!IsOper((x)) && !IsServer((x))) \
				  (x)->handler = CLIENT_HANDLER; }

#define IsPrivileged(x)         (IsOper(x) || IsServer(x))

/* umode flags */
#define IsInvisible(x)          ((x)->umodes & UMODE_INVISIBLE)
#define SendWallops(x)          ((x)->umodes & UMODE_WALLOP)
#define IsSetCallerId(x)	((x)->umodes & UMODE_CALLERID)

#define SetSendQExceeded(x)	((x)->flags |= FLAGS_SENDQEX)
#define IsSendQExceeded(x)	((x)->flags &  FLAGS_SENDQEX)

#define SetIpHash(x)            ((x)->flags |= FLAGS_IPHASH)
#define ClearIpHash(x)          ((x)->flags &= ~FLAGS_IPHASH)
#define IsIpHash(x)             ((x)->flags & FLAGS_IPHASH)

#define SetUserHost(x)          ((x)->flags |= FLAGS_USERHOST)
#define ClearUserHost(x)        ((x)->flags &= ~FLAGS_USERHOST)
#define IsUserHostIp(x)         ((x)->flags & FLAGS_USERHOST)

#define SetPingSent(x)		((x)->flags |= FLAGS_PINGSENT)
#define IsPingSent(x)		((x)->flags & FLAGS_PINGSENT)
#define ClearPingSent(x)	((x)->flags &= ~FLAGS_PINGSENT)

#define SetNeedId(x)            ((x)->flags |= FLAGS_NEEDID)
#define IsNeedId(x)             ((x)->flags & FLAGS_NEEDID)

#define SetGotId(x)             ((x)->flags |= FLAGS_GOTID)
#define IsGotId(x)              ((x)->flags & FLAGS_GOTID)

#define IsExemptKline(x)        ((x)->flags & FLAGS_EXEMPTKLINE)
#define SetExemptKline(x)       ((x)->flags |= FLAGS_EXEMPTKLINE)
#define IsExemptLimits(x)       ((x)->flags & FLAGS_NOLIMIT)
#define SetExemptLimits(x)      ((x)->flags |= FLAGS_NOLIMIT)
#define IsExemptGline(x)        ((x)->flags & FLAGS_EXEMPTGLINE)
#define SetExemptGline(x)       ((x)->flags |= FLAGS_EXEMPTGLINE)
#define SetIPSpoof(x)           ((x)->flags |= FLAGS_IP_SPOOFING)
#define IsIPSpoof(x)            ((x)->flags & FLAGS_IP_SPOOFING)

#define IsIdlelined(x)          ((x)->flags &  FLAGS_IDLE_LINED)
#define SetIdlelined(x)         ((x)->flags |= FLAGS_IDLE_LINED)
#define IsRestricted(x)         ((x)->flags &  FLAGS_RESTRICTED)
#define SetRestricted(x)        ((x)->flags |= FLAGS_RESTRICTED)

#define IsFloodDone(x)          ((x)->flags &  FLAGS_FLOODDONE)
#define SetFloodDone(x)         ((x)->flags |= FLAGS_FLOODDONE)
#define HasPingCookie(x)        ((x)->flags & FLAGS_PING_COOKIE)
#define SetPingCookie(x)        ((x)->flags |= FLAGS_PING_COOKIE)
#define IsHidden(x)             ((x)->flags &  FLAGS_HIDDEN)
#define SetHidden(x)            ((x)->flags |= FLAGS_HIDDEN)

#define IsSendqBlocked(x)       ((x)->flags &  FLAGS_BLOCKED)
#define SetSendqBlocked(x)      ((x)->flags |= FLAGS_BLOCKED)
#define ClearSendqBlocked(x)    ((x)->flags &= ~FLAGS_BLOCKED)
#define IsSlinkqBlocked(x)      ((x)->flags &  FLAGS_SBLOCKED)
#define SetSlinkqBlocked(x)     ((x)->flags |= FLAGS_SBLOCKED)
#define ClearSlinkqBlocked(x)   ((x)->flags &= ~FLAGS_SBLOCKED)

#define IsBursted(x)            ((x)->flags &  FLAGS_BURSTED)
#define SetBursted(x)           ((x)->flags |= FLAGS_BURSTED)
#define ClearBursted(x)         ((x)->flags &= ~FLAGS_BURSTED)

/* operflags macros */
#define ClearOperFlags(x)	((x)->localClient->operflags = 0)
#define IsOperGlobalKill(x)     (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_GLOBAL_KILL : 0)
#define IsOperRemote(x)         (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_REMOTE : 0)
#define IsOperUnkline(x)        (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_UNKLINE : 0)
#define IsOperGline(x)          (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_GLINE : 0)
#define IsOperN(x)              (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_N : 0)
#define IsOperK(x)              (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_K : 0)
#define IsOperDie(x)            (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_DIE : 0)
#define IsOperRehash(x)         (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_REHASH : 0)
#define IsOperAdmin(x)          (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_ADMIN : 0)
#define IsOperHiddenAdmin(x)	(MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_HIDDEN_ADMIN : 0)
#define IsOperX(x)              (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_X : 0)
#define IsOperWall(x)           (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_OPERWALL : 0)
#define IsOperRemoteBan(x)      (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_REMOTEBAN : 0)
#define IsOperHidden(x)         (MyConnect(x) ? (x)->localClient->operflags & OPER_FLAG_HIDDEN_OPER : 0)

/*
 * definitions for get_client_name
 * TBD - make this an enum
 */
#define HIDE_IP 0
#define SHOW_IP 1
#define MASK_IP 2

extern struct Client me;
extern dlink_list global_client_list;

extern int accept_message(struct Client *, struct Client *);
extern int set_initial_nick(struct Client *, struct Client *, const char *);
extern int exit_client(struct Client *, struct Client *, struct Client *, const char *);
extern void check_conf_klines(void);
extern void init_client(void);
extern void free_client(struct Client *);
extern void del_from_accept(struct Client *, struct Client *);
extern void del_all_accepts(struct Client *);
extern void change_local_nick(struct Client *, struct Client *, const char *);
extern void dead_link_on_write(struct Client *, int);
extern void dead_link_on_read(struct Client *, int);
extern void exit_aborted_clients(void);
extern void free_exited_clients(void);
extern struct Client *make_client(struct Client *);
extern struct Client *find_chasing(struct Client *, struct Client *, const char *, int *);
extern struct Client *find_person(const struct Client *const, const char *);
extern const char *get_client_name(struct Client *, int);
#endif /* INCLUDED_client_h */
