/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  config.h: The ircd compile-time-configurable header.
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
 *  $Id: config.h,v 7.139 2002/06/27 15:16:36 leeh Exp $
 */

#ifndef INCLUDED_config_h
#define INCLUDED_config_h

#include "setup.h"


/*
 * IRCD-HYBRID-7 COMPILE TIME CONFIGURATION OPTIONS
 *
 * Most of the items which used to be configurable in here have
 * been moved into the new improved ircd.conf file.
 * If you can't find something, look in doc/example.conf
 *
 * -davidt
 */

/*
 * File Descriptor limit
 *
 * These limits are ultra-low to guarantee the server will work properly
 * in as many environments as possible.  They can probably be increased
 * significantly, if you know what you are doing.
 *
 * Note that HARD_FDLIMIT_ is modified with the maxclients setting in
 * configure.  You should only touch this if you know what you are doing!!!
 *
 * If you are using select for the IO loop, you may also need to increase
 * the value of FD_SETSIZE by editting the Makefile.  However, using
 * --enable-kqueue, --enable-devpoll, or --enable-poll if at all possible,
 * is highly recommended.
 *
 * VMS should be able to use any suitable value here, other operating
 * systems may require kernel patches, configuration tweaks, or ulimit
 * adjustments in order to exceed certain limits (e.g. 1024, 4096 fds).
 */
#define HARD_FDLIMIT_    MAX_CLIENTS + 60 + 20

/* XXX - MAX_BUFFER is mostly ignored. */
/*
 * Maximum number of connections to allow.
 *
 * MAX_BUFFER  is the number of fds to reserve, e.g. for clients
 *             exempt from limit.
 *
 * 10 file descriptors are reserved for logging, DNS lookups, etc.,
 * so MAX_CLIENTS + MAX_BUFFER + 10 must not exceed HARD_FDLIMIT.
 * NOTE: MAX_CLIENTS is set with configure now
 */
#define MAX_BUFFER      60

#ifdef VMS
/* *PATH - directory locations and filenames for VMS.
 *
 * Non VMS systems see below.
 *
 * IRCD_PREFIX = prefix for all directories,
 * DPATH       = root directory of installation,
 * BINPATH     = directory for binary files,
 * ETCPATH     = directory for configuration files,
 * LOGPATH     = directory for logfiles,
 * MODPATH     = directory for autoloaded modules (disabled in VMS),
 * MSGPATH     = directory for gettext message files (disabled in VMS).
 */

/* IRCD_PREFIX not needed in VMS -larne */
/*#define IRCD_PREFIX     "IRCD$BASEDIR:"*/
#define DPATH           "IRCD$BASEDIR:"
#define BINPATH         "IRCD$BINDIR:"
#define ETCPATH         "IRCD$CONFDIR:"
#define LOGPATH         "IRCD$LOGDIR:"

#undef  MODPATH
#undef  AUTOMODPATH
#undef  MSGPATH

#define SPATH   BINPATH "IRCD.EXE"              /* server executable */
#define SLPATH  BINPATH "SERVLINK.EXE"          /* servlink executable */
#define CPATH   ETCPATH "IRCD.CONF"             /* config file */
#define KPATH   ETCPATH "KLINE.CONF"            /* kline file */
#define DLPATH  ETCPATH "DLINE.CONF"            /* dline file */
#define GPATH   LOGPATH "GLINE.LOG"             /* gline logfile */
#define RPATH   ETCPATH "IRCD.RSA"              /* RSA private key file */
#define MPATH   ETCPATH "IRCD.MOTD"             /* MOTD filename */
#define LPATH   LOGPATH "IRCD.LOG"              /* logfile */
#define PPATH   ETCPATH "IRCD.PID"              /* pid file */
#define HPATH   ETCPATH "OPERS.TXT"             /* oper help file */
#define UHPATH  ETCPATH "USERS.TXT"             /* user help file */
#define OPATH   ETCPATH "OPERS.MOTD"            /* oper MOTD file */
#define LIPATH  ETCPATH "LINKS.TXT"             /* cached LINKS file */
#else /* VMS */
/* 
 * Directory paths and filenames for UNIX systems.
 * IRCD_PREFIX is set using ./configure --prefix, see INSTALL.
 * The other defaults should be fine.
 *
 * NOTE: CHANGING THESE WILL NOT ALTER THE DIRECTORY THAT FILES WILL
 *       BE INSTALLED TO.  IF YOU CHANGE THESE, DO NOT USE MAKE INSTALL,
 *       BUT COPY THE FILES MANUALLY TO WHERE YOU WANT THEM.
 *
 * IRCD_PREFIX = prefix for all directories,
 * DPATH       = root directory of installation,
 * BINPATH     = directory for binary files,
 * ETCPATH     = directory for configuration files,
 * LOGPATH     = directory for logfiles,
 * MODPATH     = directory for modules,
 * AUTOMODPATH = directory for autoloaded modules
 * MSGPATH     = directory for gettext message files.
 */

/* dirs */
#define DPATH   IRCD_PREFIX                                                     
#define BINPATH IRCD_PREFIX "/bin/"
#define MODPATH IRCD_PREFIX "/modules/"
#define AUTOMODPATH IRCD_PREFIX "/modules/autoload/"
#define MSGPATH IRCD_PREFIX "/messages/"
#define ETCPATH IRCD_PREFIX "/etc"
#define LOGPATH IRCD_PREFIX "/logs"
#define UHPATH   IRCD_PREFIX "/help/users"
#define HPATH  IRCD_PREFIX "/help/opers"

/* files */
#define SPATH   BINPATH "/ircd"                 /* ircd executable */
#define SLPATH  BINPATH "/servlink"             /* servlink executable */
#define CPATH   ETCPATH "/ircd.conf"            /* ircd.conf file */
#define KPATH   ETCPATH "/kline.conf"           /* kline file */
#define DLPATH  ETCPATH "/dline.conf"           /* dline file */
#define GPATH   LOGPATH "/gline.log"            /* gline logfile */
#define RPATH   ETCPATH "/ircd.rsa"             /* ircd rsa private keyfile */
#define MPATH   ETCPATH "/ircd.motd"            /* MOTD file */
#define LPATH   LOGPATH "/ircd.log"             /* ircd logfile */
#define PPATH   ETCPATH "/ircd.pid"             /* pid file */
#define OPATH   ETCPATH "/opers.motd"           /* oper MOTD file */
#define LIPATH  ETCPATH "/links.txt"            /* cached links file */
#endif /* !VMS */

/* WANT_GETTEXT - toggle gettext support.
 * NOTE: if configure doesn't detect gettext, this won't do anything.
 */
#define WANT_GETTEXT
 
/* Ignore bogus timestamps from other servers. Yes this will desync
 * the network, but it will allow chanops to resync with a valid non TS 0
 *
 * This should be enabled network wide, or not at all.
 */
#undef  IGNORE_BOGUS_TS

/* HIDE_SERVERS_IPS
 *
 * If this is undefined, opers will be unable to see servers ips and will be
 * shown a masked ip, admins will be shown the real ip.
 *
 * If this is defined, nobody can see a servers ip.  *This is a kludge*, it
 * has the side effect of hiding the ips everywhere, including logfiles.
 *
 * We recommend you leave this undefined, and just take care with who you
 * give admin=yes; to.
 */
#undef  HIDE_SERVERS_IPS

/* HIDE_SPOOF_IPS
 *
 * If this is undefined, opers will be allowed to see the real IP of spoofed
 * users in /trace etc.  If this is defined they will be shown a masked IP.
 */
#undef HIDE_SPOOF_IPS

/* USE_LOGFILE - log errors and such to LPATH
 * If you wish to have the server send 'vital' messages about server
 * to a logfile, define USE_LOGFILE.
 */
#define USE_LOGFILE

/* USE_SYSLOG - log errors and such to syslog()
 * If you wish to have the server send 'vital' messages about server
 * through syslog, define USE_SYSLOG. Only system errors and events critical
 * to the server are logged although if this is defined with FNAME_USERLOG,
 * syslog() is used instead of the above file. It is not recommended that
 * this option is used unless you tell the system administrator beforehand
 * and obtain their permission to send messages to the system log files.
 */
#undef  USE_SYSLOG

#ifdef  USE_SYSLOG
/* SYSLOG_KILL SYSLOG_SQUIT SYSLOG_CONNECT SYSLOG_USERS SYSLOG_OPER
 * If you use syslog above, you may want to turn some (none) of the
 * spurious log messages for KILL,SQUIT,etc off.
 */
#undef  SYSLOG_KILL     /* log all operator kills to syslog */
#undef  SYSLOG_SQUIT    /* log all remote squits for all servers to syslog */
#undef  SYSLOG_CONNECT  /* log remote connect messages for other all servs */
#undef  SYSLOG_USERS    /* send userlog stuff to syslog */
#undef  SYSLOG_OPER     /* log all users who successfully become an Op */

/* LOG_FACILITY - facility to use for syslog()
 * Define the facility you want to use for syslog().  Ask your
 * sysadmin which one you should use.
 */
#define LOG_FACILITY LOG_LOCAL4

#endif /* USE_SYSLOG */

/* CRYPT_OPER_PASSWORD - use crypted oper passwords in the ircd.conf
 * define this if you want to use crypted passwords for operators in your
 * ircd.conf file.
 */
#define CRYPT_OPER_PASSWORD

/* CLIENT_FLOOD - client excess flood threshold(in messages)
 * The number of messages that we can receive before we disconnect the
 * remote client...
 */
#define CLIENT_FLOOD 20

/* NICKNAMEHISTORYLENGTH - size of WHOWAS array
 * this defines the length of the nickname history.  each time a user changes
 * nickname or signs off, their old nickname is added to the top of the list.
 * NOTE: this is directly related to the amount of memory ircd will use whilst
 *       resident and running - it hardly ever gets swapped to disk!  Memory
 *       will be preallocated for the entire whowas array when ircd is started.
 */
#ifndef SMALL_NET
#define NICKNAMEHISTORYLENGTH 15000
#else
#define NICKNAMEHISTORYLENGTH 1500
#endif
/* HANGONGOODLINK and HANGONGOODLINK
 * Often net breaks for a short time and it's useful to try to
 * establishing the same connection again faster than CONNECTFREQUENCY
 * would allow. But, to keep trying on bad connection, we require
 * that connection has been open for certain minimum time
 * (HANGONGOODLINK) and we give the net few seconds to steady
 * (HANGONRETRYDELAY). This latter has to be long enough that the
 * other end of the connection has time to notice it broke too.
 * 1997/09/18 recommended values by ThemBones for modern EFnet
 */

#define HANGONRETRYDELAY 60     /* Recommended value: 30-60 seconds */
#define HANGONGOODLINK 3600     /* Recommended value: 30-60 minutes */

/* CONNECTTIMEOUT -
 * Number of seconds to wait for a connect(2) call to complete.
 * NOTE: this must be at *LEAST* 10.  When a client connects, it has
 * CONNECTTIMEOUT - 10 seconds for its host to respond to an ident lookup
 * query and for a DNS answer to be retrieved.
 */
#define CONNECTTIMEOUT  30      /* Recommended value: 30 */

/* KILLCHASETIMELIMIT -
 * Max time from the nickname change that still causes KILL
 * automatically to switch for the current nick of that user. (seconds)
 */
#define KILLCHASETIMELIMIT 90   /* Recommended value: 90 */

/*
 * If the OS has SOMAXCONN use that value, otherwise
 * Use the value in HYBRID_SOMAXCONN for the listen(); backlog
 * try 5 or 25. 5 for AIX and SUNOS, 25 should work better for other OS's
*/
#define HYBRID_SOMAXCONN 25

/* CODE DISABLE SECTION
 *
 * If you have enabled efnet specific code these will be disabled automatically
 * else they are here for anyone else.
 */
#define VCHANS
#define ANONOPS
#define HALFOPS

/* END OF CONFIGURABLE OPTIONS */

/* disable them for efnet */
#ifdef EFNET
#undef VCHANS
#undef ANONOPS
#undef HALFOPS
#ifndef HIDE_SERVERS_IPS
#define HIDE_SERVERS_IPS
#endif
#ifndef HIDE_SPOOF_IPS
#define HIDE_SPOOF_IPS
#endif
#endif

/* 
 * Default pre-allocations for various things...
 */  
#ifndef SMALL_NET  /* Normal net */
#define CHANNEL_HEAP_SIZE	1024
#define BAN_HEAP_SIZE		1024
#define CLIENT_HEAP_SIZE	1024
#define LCLIENT_HEAP_SIZE	512
#define LINEBUF_HEAP_SIZE	1024
#define	USER_HEAP_SIZE		1024
#define	DNODE_HEAP_SIZE		2048
#define TOPIC_HEAP_SIZE		1024
#else  /* Small Net */
#define CHANNEL_HEAP_SIZE	256
#define BAN_HEAP_SIZE		128
#define CLIENT_HEAP_SIZE	256
#define LCLIENT_HEAP_SIZE	128
#define LINEBUF_HEAP_SIZE	128
#define	USER_HEAP_SIZE		128
#define	DNODE_HEAP_SIZE		256
#define TOPIC_HEAP_SIZE		256
#endif

/* DEBUGMODE is used mostly for internal development, it is likely
 * to make your client server very sluggish.
 * You usually shouldn't need this. -Dianora
*/
#undef  DEBUGMODE               /* define DEBUGMODE to enable debugging mode.*/

/*
 * this checks for various things that should never happen, but
 * might do due to bugs.  ircd might be slightly more efficient with 
 * these disabled, who knows. keep this enabled during development.
 */
#define INVARIANTS

#define CONFIG_H_LEVEL_7

#include "defaults.h"
#endif /* INCLUDED_config_h */
