/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  defaults.h: The ircd defaults header for values and paths.
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
 *  $Id: defaults.h,v 7.14 2003/06/18 06:26:29 metalrock Exp $
 */

#ifndef INCLUDED_defaults_h
#define INCLUDED_defaults_h

/* Here are some default paths. Most except DPATH are
 * configurable at runtime. */

#ifdef __vms
/* *PATH - directory locations and filenames for VMS.
 *
 * Non VMS systems see below.
 *
 * IRCD_PREFIX = prefix for all directories,
 * DPATH       = root directory of installation,
 * BINPATH     = directory for binary files,
 * ETCPATH     = directory for configuration files,
 * LOGPATH     = directory for logfiles,
 * MSGPATH     = directory for language files.
 */

#define DPATH           "IRCD$BASEDIR:"
#define BINPATH         "IRCD$BINDIR:"
#define ETCPATH         "IRCD$CONFDIR:"
#define LOGPATH         "IRCD$LOGDIR:"
#define MSGPATH		"IRCD$MSGDIR:"

#define SPATH   BINPATH "IRCD.EXE"              /* server executable */
#define SLPATH  BINPATH "SERVLINK.EXE"          /* servlink executable */
#define CPATH   ETCPATH "IRCD.CONF"             /* config file */
#define KPATH   ETCPATH "KLINE.CONF"            /* kline file */
#define XPATH   ETCPATH "XLINE.CONF"            /* xline file */
#define CRESVPATH   ETCPATH "CRESV.CONF"        /* channel resvs file */
#define NRESVPATH   ETCPATH "NRESV.CONF"        /* channel resvs file */
#define DLPATH  ETCPATH "DLINE.CONF"            /* dline file */
#define GPATH   ETCPATH "GLINE.CONF"             /* gline logfile */
#define MPATH   ETCPATH "IRCD.MOTD"             /* MOTD filename */
#define LPATH   LOGPATH "IRCD.LOG"              /* logfile */
#define PPATH   ETCPATH "IRCD.PID"              /* pid file */
#define OPATH   ETCPATH "OPERS.MOTD"            /* oper MOTD file */
#define LIPATH  ETCPATH "LINKS.TXT"             /* cached LINKS file */
#else /* __vms */
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
 * MSGPATH     = directory for language files.
 */

/* dirs */
#define DPATH   IRCD_PREFIX                                                     
#define BINPATH IRCD_PREFIX "/bin/"
#define MSGPATH IRCD_PREFIX "/messages/"
#define ETCPATH IRCD_PREFIX "/etc"
#define LOGPATH IRCD_PREFIX "/logs"

/* files */
#define SPATH   BINPATH "/ircd"                 /* ircd executable */
#define SLPATH  BINPATH "/servlink"             /* servlink executable */
#define CPATH   ETCPATH "/ircd.conf"            /* ircd.conf file */
#define KPATH   ETCPATH "/kline.conf"           /* kline file */
#define CRESVPATH   ETCPATH "/cresv.conf"       /* channel resvs file */
#define NRESVPATH   ETCPATH "/nresv.conf"       /* nick resvs file */
#define DLPATH  ETCPATH "/dline.conf"           /* dline file */
#define GPATH   ETCPATH "/gline.conf"           /* gline conffile */
#define XPATH   ETCPATH "/xline.conf"           /* xline file */
#define MPATH   ETCPATH "/ircd.motd"            /* MOTD file */
#define LPATH   LOGPATH "/ircd.log"             /* ircd logfile */
#define PPATH   ETCPATH "/ircd.pid"             /* pid file */
#define OPATH   ETCPATH "/opers.motd"           /* oper MOTD file */
#define LIPATH  ETCPATH "/links.txt"            /* cached links file */
#endif /* !__vms */

/* this file is included to supply default
 * values for things which are now configurable at runtime.
 */

#define HANGONRETRYDELAY 60     /* Recommended value: 30-60 seconds */
#define HYBRID_SOMAXCONN 25
#define MAX_TDKLINE_TIME	(24*60*10)
#define HANGONGOODLINK 3600     /* Recommended value: 30-60 minutes */

/* 10 FDs reserved for logging and name resolution */
#define HARD_FDLIMIT    MAXCONN + MAX_BUFFER + 10

#define KILLCHASETIMELIMIT 90   /* Recommended value: 90 */
#define MASTER_MAX      (HARD_FDLIMIT - MAX_BUFFER)

/* class {} default values */
#define DEFAULT_SENDQ 9000000           /* default max SendQ */
#define PORTNUM 6667                    /* default outgoing portnum */
#define DEFAULT_PINGFREQUENCY    120    /* Default ping frequency */
#define DEFAULT_CONNECTFREQUENCY 600    /* Default connect frequency */

#define TS_MAX_DELTA_MIN      10        /* min value for ts_max_delta */
#define TS_MAX_DELTA_DEFAULT  600       /* default for ts_max_delta */
#define TS_WARN_DELTA_MIN     10        /* min value for ts_warn_delta */
#define TS_WARN_DELTA_DEFAULT 30        /* default for ts_warn_delta */

/* ServerInfo default values */
#define NETWORK_NAME_DEFAULT "EFnet"             /* default for network_name */
#define NETWORK_DESC_DEFAULT "Eris Free Network" /* default for network_desc */

/* General defaults */
#define MAXIMUM_LINKS_DEFAULT 1         /* default for maximum_links */
#define MAX_BUFFER 60


#define CLIENT_FLOOD_DEFAULT 2560       /* default for client_flood */
#define CLIENT_FLOOD_MAX     8000
#define CLIENT_FLOOD_MIN     512

#define LINKS_DELAY_DEFAULT  300

#define MAX_TARGETS_DEFAULT 4           /* default for max_targets */

#define INIT_LOG_LEVEL L_NOTICE         /* default for log_level */

#define CONNECTTIMEOUT  30      /* Recommended value: 30 */
#define IDENT_TIMEOUT 10

#define MIN_JOIN_LEAVE_TIME  60
#define MAX_JOIN_LEAVE_COUNT  25
#define OPER_SPAM_COUNTDOWN   5 
#define JOIN_LEAVE_COUNT_EXPIRE_TIME 120

#define MIN_SPAM_NUM 5
#define MIN_SPAM_TIME 60

#endif /* INCLUDED_defaults_h */
