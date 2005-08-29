/* A Bison parser, made from ircd_parser.y, by GNU bison 1.75.  */
/* $Id: y.tab.c,v 7.61 2005/08/29 09:10:24 adx Exp $ */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON	1

/* Pure parsers.  */
#define YYPURE	0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ACCEPT_PASSWORD = 258,
     ACTION = 259,
     ADMIN = 260,
     AFTYPE = 261,
     T_ALLOW = 262,
     ANTI_NICK_FLOOD = 263,
     ANTI_SPAM_EXIT_MESSAGE_TIME = 264,
     IRCD_AUTH = 265,
     AUTOCONN = 266,
     T_BLOCK = 267,
     BURST_AWAY = 268,
     BURST_TOPICWHO = 269,
     BYTES = 270,
     KBYTES = 271,
     MBYTES = 272,
     GBYTES = 273,
     TBYTES = 274,
     CALLER_ID_WAIT = 275,
     OPERS_BYPASS_CALLERID = 276,
     CAN_FLOOD = 277,
     CAN_IDLE = 278,
     CHANNEL = 279,
     CIPHER_PREFERENCE = 280,
     CLASS = 281,
     COMPRESSED = 282,
     COMPRESSION_LEVEL = 283,
     CONNECT = 284,
     CONNECTFREQ = 285,
     CRYPTLINK = 286,
     DEFAULT_CIPHER_PREFERENCE = 287,
     DEFAULT_FLOODCOUNT = 288,
     DEFAULT_SPLIT_SERVER_COUNT = 289,
     DEFAULT_SPLIT_USER_COUNT = 290,
     DENY = 291,
     DESCRIPTION = 292,
     DIE = 293,
     DISABLE_AUTH = 294,
     DISABLE_HIDDEN = 295,
     DISABLE_LOCAL_CHANNELS = 296,
     DISABLE_REMOTE_COMMANDS = 297,
     DOT_IN_IP6_ADDR = 298,
     DOTS_IN_IDENT = 299,
     DURATION = 300,
     EGDPOOL_PATH = 301,
     EMAIL = 302,
     ENABLE = 303,
     ENCRYPTED = 304,
     EXCEED_LIMIT = 305,
     EXEMPT = 306,
     FAILED_OPER_NOTICE = 307,
     FAKENAME = 308,
     IRCD_FLAGS = 309,
     FLATTEN_LINKS = 310,
     FFAILED_OPERLOG = 311,
     FOPERLOG = 312,
     FUSERLOG = 313,
     GECOS = 314,
     GENERAL = 315,
     GLINE = 316,
     GLINES = 317,
     GLINE_EXEMPT = 318,
     GLINE_LOG = 319,
     GLINE_TIME = 320,
     GLINE_MIN_CIDR = 321,
     GLINE_MIN_CIDR6 = 322,
     GLOBAL_KILL = 323,
     NEED_IDENT = 324,
     HAVENT_READ_CONF = 325,
     HIDDEN = 326,
     HIDDEN_ADMIN = 327,
     HIDDEN_OPER = 328,
     HIDE_SERVER_IPS = 329,
     HIDE_SERVERS = 330,
     HIDE_SPOOF_IPS = 331,
     HOST = 332,
     HUB = 333,
     HUB_MASK = 334,
     IDLETIME = 335,
     IGNORE_BOGUS_TS = 336,
     IP = 337,
     KILL = 338,
     KILL_CHASE_TIME_LIMIT = 339,
     KLINE = 340,
     KLINE_EXEMPT = 341,
     KLINE_REASON = 342,
     KLINE_WITH_REASON = 343,
     KNOCK_DELAY = 344,
     KNOCK_DELAY_CHANNEL = 345,
     LAZYLINK = 346,
     LEAF_MASK = 347,
     LINKS_DELAY = 348,
     LISTEN = 349,
     LOGGING = 350,
     LOG_LEVEL = 351,
     MAXIMUM_LINKS = 352,
     MAX_ACCEPT = 353,
     MAX_BANS = 354,
     MAX_CHANS_PER_USER = 355,
     MAX_GLOBAL = 356,
     MAX_IDENT = 357,
     MAX_LOCAL = 358,
     MAX_NICK_CHANGES = 359,
     MAX_NICK_TIME = 360,
     MAX_NUMBER = 361,
     MAX_TARGETS = 362,
     MESSAGE_LOCALE = 363,
     MIN_NONWILDCARD = 364,
     MIN_NONWILDCARD_SIMPLE = 365,
     MODULE = 366,
     MODULES = 367,
     NAME = 368,
     NEED_PASSWORD = 369,
     NETWORK_DESC = 370,
     NETWORK_NAME = 371,
     NICK = 372,
     NICK_CHANGES = 373,
     NO_CREATE_ON_SPLIT = 374,
     NO_JOIN_ON_SPLIT = 375,
     NO_OPER_FLOOD = 376,
     NO_TILDE = 377,
     NOT = 378,
     NUMBER = 379,
     NUMBER_PER_IDENT = 380,
     NUMBER_PER_IP = 381,
     NUMBER_PER_IP_GLOBAL = 382,
     OPERATOR = 383,
     OPER_LOG = 384,
     OPER_ONLY_UMODES = 385,
     OPER_PASS_RESV = 386,
     OPER_SPY_T = 387,
     OPER_UMODES = 388,
     INVITE_OPS_ONLY = 389,
     PACE_WAIT = 390,
     PACE_WAIT_SIMPLE = 391,
     PASSWORD = 392,
     PATH = 393,
     PING_COOKIE = 394,
     PING_TIME = 395,
     PING_WARNING = 396,
     PORT = 397,
     QSTRING = 398,
     QUIET_ON_BAN = 399,
     REASON = 400,
     REDIRPORT = 401,
     REDIRSERV = 402,
     REGEX_T = 403,
     REHASH = 404,
     REMOTE = 405,
     REMOTEBAN = 406,
     RESTRICTED = 407,
     RSA_PRIVATE_KEY_FILE = 408,
     RSA_PUBLIC_KEY_FILE = 409,
     SSL_CERTIFICATE_FILE = 410,
     RESV = 411,
     RESV_EXEMPT = 412,
     SECONDS = 413,
     MINUTES = 414,
     HOURS = 415,
     DAYS = 416,
     WEEKS = 417,
     SENDQ = 418,
     SEND_PASSWORD = 419,
     SERVERHIDE = 420,
     SERVERINFO = 421,
     SERVLINK_PATH = 422,
     IRCD_SID = 423,
     TKLINE_EXPIRE_NOTICES = 424,
     T_SHARED = 425,
     T_CLUSTER = 426,
     TYPE = 427,
     SHORT_MOTD = 428,
     SILENT = 429,
     SPOOF = 430,
     SPOOF_NOTICE = 431,
     STATS_I_OPER_ONLY = 432,
     STATS_K_OPER_ONLY = 433,
     STATS_O_OPER_ONLY = 434,
     STATS_P_OPER_ONLY = 435,
     TBOOL = 436,
     TMASKED = 437,
     T_REJECT = 438,
     TS_MAX_DELTA = 439,
     TS_WARN_DELTA = 440,
     TWODOTS = 441,
     T_ALL = 442,
     T_BOTS = 443,
     T_SOFTCALLERID = 444,
     T_CALLERID = 445,
     T_CCONN = 446,
     T_CLIENT_FLOOD = 447,
     T_DEAF = 448,
     T_DEBUG = 449,
     T_DRONE = 450,
     T_EXTERNAL = 451,
     T_FULL = 452,
     T_INVISIBLE = 453,
     T_IPV4 = 454,
     T_IPV6 = 455,
     T_LOCOPS = 456,
     T_LOGPATH = 457,
     T_L_CRIT = 458,
     T_L_DEBUG = 459,
     T_L_ERROR = 460,
     T_L_INFO = 461,
     T_L_NOTICE = 462,
     T_L_TRACE = 463,
     T_L_WARN = 464,
     T_MAX_CLIENTS = 465,
     T_NCHANGE = 466,
     T_OPERWALL = 467,
     T_REJ = 468,
     T_SERVNOTICE = 469,
     T_SKILL = 470,
     T_SPY = 471,
     T_SSL = 472,
     T_UNAUTH = 473,
     T_UNRESV = 474,
     T_UNXLINE = 475,
     T_WALLOP = 476,
     THROTTLE_TIME = 477,
     TOPICBURST = 478,
     TRUE_NO_OPER_FLOOD = 479,
     TKLINE = 480,
     TXLINE = 481,
     TRESV = 482,
     UNKLINE = 483,
     USER = 484,
     USE_EGD = 485,
     USE_EXCEPT = 486,
     USE_INVEX = 487,
     USE_KNOCK = 488,
     USE_LOGGING = 489,
     USE_WHOIS_ACTUALLY = 490,
     VHOST = 491,
     VHOST6 = 492,
     XLINE = 493,
     WARN = 494,
     WARN_NO_NLINE = 495
   };
#endif
#define ACCEPT_PASSWORD 258
#define ACTION 259
#define ADMIN 260
#define AFTYPE 261
#define T_ALLOW 262
#define ANTI_NICK_FLOOD 263
#define ANTI_SPAM_EXIT_MESSAGE_TIME 264
#define IRCD_AUTH 265
#define AUTOCONN 266
#define T_BLOCK 267
#define BURST_AWAY 268
#define BURST_TOPICWHO 269
#define BYTES 270
#define KBYTES 271
#define MBYTES 272
#define GBYTES 273
#define TBYTES 274
#define CALLER_ID_WAIT 275
#define OPERS_BYPASS_CALLERID 276
#define CAN_FLOOD 277
#define CAN_IDLE 278
#define CHANNEL 279
#define CIPHER_PREFERENCE 280
#define CLASS 281
#define COMPRESSED 282
#define COMPRESSION_LEVEL 283
#define CONNECT 284
#define CONNECTFREQ 285
#define CRYPTLINK 286
#define DEFAULT_CIPHER_PREFERENCE 287
#define DEFAULT_FLOODCOUNT 288
#define DEFAULT_SPLIT_SERVER_COUNT 289
#define DEFAULT_SPLIT_USER_COUNT 290
#define DENY 291
#define DESCRIPTION 292
#define DIE 293
#define DISABLE_AUTH 294
#define DISABLE_HIDDEN 295
#define DISABLE_LOCAL_CHANNELS 296
#define DISABLE_REMOTE_COMMANDS 297
#define DOT_IN_IP6_ADDR 298
#define DOTS_IN_IDENT 299
#define DURATION 300
#define EGDPOOL_PATH 301
#define EMAIL 302
#define ENABLE 303
#define ENCRYPTED 304
#define EXCEED_LIMIT 305
#define EXEMPT 306
#define FAILED_OPER_NOTICE 307
#define FAKENAME 308
#define IRCD_FLAGS 309
#define FLATTEN_LINKS 310
#define FFAILED_OPERLOG 311
#define FOPERLOG 312
#define FUSERLOG 313
#define GECOS 314
#define GENERAL 315
#define GLINE 316
#define GLINES 317
#define GLINE_EXEMPT 318
#define GLINE_LOG 319
#define GLINE_TIME 320
#define GLINE_MIN_CIDR 321
#define GLINE_MIN_CIDR6 322
#define GLOBAL_KILL 323
#define NEED_IDENT 324
#define HAVENT_READ_CONF 325
#define HIDDEN 326
#define HIDDEN_ADMIN 327
#define HIDDEN_OPER 328
#define HIDE_SERVER_IPS 329
#define HIDE_SERVERS 330
#define HIDE_SPOOF_IPS 331
#define HOST 332
#define HUB 333
#define HUB_MASK 334
#define IDLETIME 335
#define IGNORE_BOGUS_TS 336
#define IP 337
#define KILL 338
#define KILL_CHASE_TIME_LIMIT 339
#define KLINE 340
#define KLINE_EXEMPT 341
#define KLINE_REASON 342
#define KLINE_WITH_REASON 343
#define KNOCK_DELAY 344
#define KNOCK_DELAY_CHANNEL 345
#define LAZYLINK 346
#define LEAF_MASK 347
#define LINKS_DELAY 348
#define LISTEN 349
#define LOGGING 350
#define LOG_LEVEL 351
#define MAXIMUM_LINKS 352
#define MAX_ACCEPT 353
#define MAX_BANS 354
#define MAX_CHANS_PER_USER 355
#define MAX_GLOBAL 356
#define MAX_IDENT 357
#define MAX_LOCAL 358
#define MAX_NICK_CHANGES 359
#define MAX_NICK_TIME 360
#define MAX_NUMBER 361
#define MAX_TARGETS 362
#define MESSAGE_LOCALE 363
#define MIN_NONWILDCARD 364
#define MIN_NONWILDCARD_SIMPLE 365
#define MODULE 366
#define MODULES 367
#define NAME 368
#define NEED_PASSWORD 369
#define NETWORK_DESC 370
#define NETWORK_NAME 371
#define NICK 372
#define NICK_CHANGES 373
#define NO_CREATE_ON_SPLIT 374
#define NO_JOIN_ON_SPLIT 375
#define NO_OPER_FLOOD 376
#define NO_TILDE 377
#define NOT 378
#define NUMBER 379
#define NUMBER_PER_IDENT 380
#define NUMBER_PER_IP 381
#define NUMBER_PER_IP_GLOBAL 382
#define OPERATOR 383
#define OPER_LOG 384
#define OPER_ONLY_UMODES 385
#define OPER_PASS_RESV 386
#define OPER_SPY_T 387
#define OPER_UMODES 388
#define INVITE_OPS_ONLY 389
#define PACE_WAIT 390
#define PACE_WAIT_SIMPLE 391
#define PASSWORD 392
#define PATH 393
#define PING_COOKIE 394
#define PING_TIME 395
#define PING_WARNING 396
#define PORT 397
#define QSTRING 398
#define QUIET_ON_BAN 399
#define REASON 400
#define REDIRPORT 401
#define REDIRSERV 402
#define REGEX_T 403
#define REHASH 404
#define REMOTE 405
#define REMOTEBAN 406
#define RESTRICTED 407
#define RSA_PRIVATE_KEY_FILE 408
#define RSA_PUBLIC_KEY_FILE 409
#define SSL_CERTIFICATE_FILE 410
#define RESV 411
#define RESV_EXEMPT 412
#define SECONDS 413
#define MINUTES 414
#define HOURS 415
#define DAYS 416
#define WEEKS 417
#define SENDQ 418
#define SEND_PASSWORD 419
#define SERVERHIDE 420
#define SERVERINFO 421
#define SERVLINK_PATH 422
#define IRCD_SID 423
#define TKLINE_EXPIRE_NOTICES 424
#define T_SHARED 425
#define T_CLUSTER 426
#define TYPE 427
#define SHORT_MOTD 428
#define SILENT 429
#define SPOOF 430
#define SPOOF_NOTICE 431
#define STATS_I_OPER_ONLY 432
#define STATS_K_OPER_ONLY 433
#define STATS_O_OPER_ONLY 434
#define STATS_P_OPER_ONLY 435
#define TBOOL 436
#define TMASKED 437
#define T_REJECT 438
#define TS_MAX_DELTA 439
#define TS_WARN_DELTA 440
#define TWODOTS 441
#define T_ALL 442
#define T_BOTS 443
#define T_SOFTCALLERID 444
#define T_CALLERID 445
#define T_CCONN 446
#define T_CLIENT_FLOOD 447
#define T_DEAF 448
#define T_DEBUG 449
#define T_DRONE 450
#define T_EXTERNAL 451
#define T_FULL 452
#define T_INVISIBLE 453
#define T_IPV4 454
#define T_IPV6 455
#define T_LOCOPS 456
#define T_LOGPATH 457
#define T_L_CRIT 458
#define T_L_DEBUG 459
#define T_L_ERROR 460
#define T_L_INFO 461
#define T_L_NOTICE 462
#define T_L_TRACE 463
#define T_L_WARN 464
#define T_MAX_CLIENTS 465
#define T_NCHANGE 466
#define T_OPERWALL 467
#define T_REJ 468
#define T_SERVNOTICE 469
#define T_SKILL 470
#define T_SPY 471
#define T_SSL 472
#define T_UNAUTH 473
#define T_UNRESV 474
#define T_UNXLINE 475
#define T_WALLOP 476
#define THROTTLE_TIME 477
#define TOPICBURST 478
#define TRUE_NO_OPER_FLOOD 479
#define TKLINE 480
#define TXLINE 481
#define TRESV 482
#define UNKLINE 483
#define USER 484
#define USE_EGD 485
#define USE_EXCEPT 486
#define USE_INVEX 487
#define USE_KNOCK 488
#define USE_LOGGING 489
#define USE_WHOIS_ACTUALLY 490
#define VHOST 491
#define VHOST6 492
#define XLINE 493
#define WARN 494
#define WARN_NO_NLINE 495




/* Copy the first part of user declarations.  */
#line 25 "ircd_parser.y"


#define YY_NO_UNPUT
#include <sys/types.h>

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
#include "s_user.h"

#ifdef HAVE_LIBCRYPTO
#include <openssl/rsa.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#endif

static char *class_name = NULL;
static struct ConfItem *yy_conf = NULL;
static struct AccessItem *yy_aconf = NULL;
static struct MatchItem *yy_match_item = NULL;
static struct ClassItem *yy_class = NULL;

static dlink_list col_conf_list  = { NULL, NULL, 0 };
static dlink_list hub_conf_list  = { NULL, NULL, 0 };
static dlink_list leaf_conf_list = { NULL, NULL, 0 };
static unsigned int listener_flags = 0;
static unsigned int regex_ban = 0;
static char userbuf[IRCD_BUFSIZE];
static char hostbuf[IRCD_BUFSIZE];
static char reasonbuf[REASONLEN + 1];
static char gecos_name[REALLEN * 4];

extern dlink_list gdeny_items;

static char *resv_reason;
static char *listener_address;
static int not_atom = 0;

struct CollectItem {
  dlink_node node;
  char *name;
  char *user;
  char *host;
  char *passwd;
  int  port;
  int  flags;
#ifdef HAVE_LIBCRYPTO
  char *rsa_public_key_file;
  RSA *rsa_public_key;
#endif
};

static void
free_collect_item(struct CollectItem *item)
{
  MyFree(item->name);
  MyFree(item->user);
  MyFree(item->host);
  MyFree(item->passwd);
#ifdef HAVE_LIBCRYPTO
  MyFree(item->rsa_public_key_file);
#endif
  MyFree(item);
}

static void
unhook_hub_leaf_confs(void)
{
  dlink_node *ptr;
  dlink_node *next_ptr;
  struct CollectItem *yy_hconf;
  struct CollectItem *yy_lconf;

  DLINK_FOREACH_SAFE(ptr, next_ptr, hub_conf_list.head)
  {
    yy_hconf = ptr->data;
    dlinkDelete(&yy_hconf->node, &hub_conf_list);
    free_collect_item(yy_hconf);
  }

  DLINK_FOREACH_SAFE(ptr, next_ptr, leaf_conf_list.head)
  {
    yy_lconf = ptr->data;
    dlinkDelete(&yy_lconf->node, &leaf_conf_list);
    free_collect_item(yy_lconf);
  }
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#ifndef YYSTYPE
#line 132 "ircd_parser.y"
typedef union {
  int number;
  char *string;
} yystype;
/* Line 193 of /usr/local/share/bison/yacc.c.  */
#line 665 "y.tab.c"
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif

#ifndef YYLTYPE
typedef struct yyltype
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} yyltype;
# define YYLTYPE yyltype
# define YYLTYPE_IS_TRIVIAL 1
#endif

/* Copy the second part of user declarations.  */


/* Line 213 of /usr/local/share/bison/yacc.c.  */
#line 686 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];	\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  2
#define YYLAST   1318

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  246
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  314
/* YYNRULES -- Number of rules. */
#define YYNRULES  668
/* YYNRULES -- Number of states. */
#define YYNSTATES  1357

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   495

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   245,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   241,
       2,   244,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   243,     2,   242,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    50,    53,    54,    56,    59,
      63,    67,    71,    75,    79,    80,    82,    85,    89,    93,
      97,   103,   106,   108,   110,   112,   115,   120,   125,   131,
     134,   136,   138,   140,   142,   144,   146,   148,   150,   152,
     154,   156,   158,   161,   166,   171,   176,   181,   186,   191,
     196,   201,   206,   211,   216,   222,   225,   227,   229,   231,
     233,   236,   241,   246,   251,   257,   260,   262,   264,   266,
     268,   270,   272,   274,   276,   278,   281,   286,   291,   296,
     301,   306,   311,   316,   321,   326,   331,   336,   341,   346,
     351,   352,   360,   361,   363,   366,   368,   370,   372,   374,
     376,   378,   380,   382,   384,   386,   388,   390,   392,   394,
     396,   398,   400,   402,   404,   406,   409,   414,   416,   421,
     426,   431,   436,   441,   446,   451,   456,   461,   466,   471,
     476,   481,   486,   491,   496,   501,   502,   508,   512,   514,
     517,   519,   521,   523,   525,   527,   529,   531,   533,   535,
     537,   539,   541,   543,   545,   547,   549,   551,   552,   560,
     561,   563,   566,   568,   570,   572,   574,   576,   578,   580,
     582,   584,   586,   588,   591,   596,   598,   603,   608,   613,
     618,   623,   628,   633,   638,   643,   644,   651,   652,   658,
     662,   664,   666,   668,   671,   673,   675,   677,   679,   681,
     684,   689,   693,   695,   697,   701,   706,   711,   712,   719,
     722,   724,   726,   728,   730,   732,   734,   736,   738,   740,
     742,   744,   746,   748,   750,   752,   754,   756,   759,   764,
     769,   774,   779,   784,   785,   791,   795,   797,   800,   802,
     804,   806,   808,   810,   812,   814,   816,   818,   820,   822,
     827,   832,   837,   842,   847,   852,   857,   862,   867,   872,
     873,   880,   883,   885,   887,   889,   891,   894,   899,   904,
     909,   910,   917,   920,   922,   924,   926,   928,   931,   936,
     941,   942,   948,   952,   954,   956,   958,   960,   962,   964,
     966,   968,   970,   972,   974,   976,   977,   984,   987,   989,
     991,   993,   996,  1001,  1002,  1008,  1012,  1014,  1016,  1018,
    1020,  1022,  1024,  1026,  1028,  1030,  1032,  1034,  1036,  1037,
    1045,  1046,  1048,  1051,  1053,  1055,  1057,  1059,  1061,  1063,
    1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,
    1085,  1087,  1090,  1095,  1097,  1102,  1107,  1112,  1117,  1122,
    1127,  1132,  1133,  1139,  1143,  1145,  1148,  1150,  1152,  1154,
    1156,  1158,  1160,  1162,  1167,  1172,  1177,  1182,  1187,  1192,
    1197,  1202,  1207,  1208,  1215,  1216,  1222,  1226,  1228,  1230,
    1233,  1235,  1237,  1239,  1241,  1243,  1248,  1253,  1254,  1261,
    1264,  1266,  1268,  1270,  1272,  1277,  1282,  1283,  1290,  1293,
    1295,  1297,  1299,  1304,  1305,  1312,  1313,  1319,  1323,  1325,
    1327,  1330,  1332,  1334,  1336,  1338,  1340,  1345,  1350,  1356,
    1359,  1361,  1363,  1365,  1367,  1369,  1371,  1373,  1375,  1377,
    1379,  1381,  1383,  1385,  1387,  1389,  1391,  1393,  1395,  1397,
    1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,  1415,  1417,
    1419,  1421,  1423,  1425,  1427,  1429,  1431,  1433,  1435,  1437,
    1439,  1441,  1443,  1445,  1447,  1449,  1451,  1453,  1455,  1457,
    1459,  1461,  1463,  1465,  1467,  1469,  1474,  1479,  1484,  1489,
    1494,  1499,  1504,  1509,  1514,  1519,  1524,  1529,  1534,  1539,
    1544,  1549,  1554,  1559,  1564,  1569,  1574,  1579,  1584,  1589,
    1594,  1599,  1604,  1609,  1614,  1619,  1624,  1629,  1634,  1639,
    1644,  1649,  1654,  1659,  1664,  1669,  1674,  1679,  1684,  1689,
    1694,  1699,  1704,  1709,  1710,  1716,  1720,  1722,  1724,  1726,
    1728,  1730,  1732,  1734,  1736,  1738,  1740,  1742,  1744,  1746,
    1748,  1750,  1752,  1754,  1756,  1758,  1759,  1765,  1769,  1771,
    1773,  1775,  1777,  1779,  1781,  1783,  1785,  1787,  1789,  1791,
    1793,  1795,  1797,  1799,  1801,  1803,  1805,  1807,  1812,  1817,
    1822,  1827,  1832,  1833,  1840,  1843,  1845,  1847,  1849,  1851,
    1853,  1855,  1857,  1859,  1864,  1869,  1870,  1876,  1880,  1882,
    1884,  1886,  1891,  1896,  1897,  1903,  1907,  1909,  1911,  1913,
    1919,  1922,  1924,  1926,  1928,  1930,  1932,  1934,  1936,  1938,
    1940,  1942,  1944,  1946,  1948,  1950,  1952,  1954,  1956,  1961,
    1966,  1971,  1976,  1981,  1986,  1991,  1996,  2001,  2006,  2011,
    2016,  2021,  2026,  2031,  2037,  2040,  2042,  2044,  2046,  2048,
    2050,  2052,  2054,  2056,  2061,  2066,  2071,  2076,  2081
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     247,     0,    -1,    -1,   247,   248,    -1,   272,    -1,   278,
      -1,   289,    -1,   533,    -1,   318,    -1,   334,    -1,   347,
      -1,   258,    -1,   551,    -1,   371,    -1,   378,    -1,   388,
      -1,   397,    -1,   424,    -1,   434,    -1,   440,    -1,   455,
      -1,   517,    -1,   445,    -1,   253,    -1,     1,   241,    -1,
       1,   242,    -1,    -1,   250,    -1,   124,   249,    -1,   124,
     158,   249,    -1,   124,   159,   249,    -1,   124,   160,   249,
      -1,   124,   161,   249,    -1,   124,   162,   249,    -1,    -1,
     252,    -1,   124,   251,    -1,   124,    15,   251,    -1,   124,
      16,   251,    -1,   124,    17,   251,    -1,   112,   243,   254,
     242,   241,    -1,   254,   255,    -1,   255,    -1,   256,    -1,
     257,    -1,     1,   241,    -1,   111,   244,   143,   241,    -1,
     138,   244,   143,   241,    -1,   166,   243,   259,   242,   241,
      -1,   259,   260,    -1,   260,    -1,   263,    -1,   268,    -1,
     271,    -1,   265,    -1,   266,    -1,   267,    -1,   270,    -1,
     262,    -1,   269,    -1,   264,    -1,   261,    -1,     1,   241,
      -1,   155,   244,   143,   241,    -1,   153,   244,   143,   241,
      -1,   113,   244,   143,   241,    -1,   168,   244,   143,   241,
      -1,    37,   244,   143,   241,    -1,   116,   244,   143,   241,
      -1,   115,   244,   143,   241,    -1,   236,   244,   143,   241,
      -1,   237,   244,   143,   241,    -1,   210,   244,   124,   241,
      -1,    78,   244,   181,   241,    -1,     5,   243,   273,   242,
     241,    -1,   273,   274,    -1,   274,    -1,   275,    -1,   277,
      -1,   276,    -1,     1,   241,    -1,   113,   244,   143,   241,
      -1,    47,   244,   143,   241,    -1,    37,   244,   143,   241,
      -1,    95,   243,   279,   242,   241,    -1,   279,   280,    -1,
     280,    -1,   281,    -1,   282,    -1,   283,    -1,   287,    -1,
     288,    -1,   284,    -1,   286,    -1,   285,    -1,     1,   241,
      -1,   202,   244,   143,   241,    -1,   129,   244,   143,   241,
      -1,    64,   244,   143,   241,    -1,    58,   244,   143,   241,
      -1,    56,   244,   143,   241,    -1,    57,   244,   143,   241,
      -1,    96,   244,   203,   241,    -1,    96,   244,   205,   241,
      -1,    96,   244,   209,   241,    -1,    96,   244,   207,   241,
      -1,    96,   244,   208,   241,    -1,    96,   244,   206,   241,
      -1,    96,   244,   204,   241,    -1,   234,   244,   181,   241,
      -1,    -1,   128,   290,   291,   243,   292,   242,   241,    -1,
      -1,   295,    -1,   292,   293,    -1,   293,    -1,   294,    -1,
     296,    -1,   297,    -1,   299,    -1,   301,    -1,   302,    -1,
     303,    -1,   305,    -1,   306,    -1,   307,    -1,   308,    -1,
     309,    -1,   304,    -1,   310,    -1,   311,    -1,   312,    -1,
     298,    -1,   300,    -1,   313,    -1,     1,   241,    -1,   113,
     244,   143,   241,    -1,   143,    -1,   229,   244,   143,   241,
      -1,   137,   244,   143,   241,    -1,    49,   244,   181,   241,
      -1,    72,   244,   181,   241,    -1,   154,   244,   143,   241,
      -1,    26,   244,   143,   241,    -1,    68,   244,   181,   241,
      -1,   150,   244,   181,   241,    -1,   151,   244,   181,   241,
      -1,    85,   244,   181,   241,    -1,   238,   244,   181,   241,
      -1,   228,   244,   181,   241,    -1,    61,   244,   181,   241,
      -1,   118,   244,   181,   241,    -1,    38,   244,   181,   241,
      -1,   149,   244,   181,   241,    -1,     5,   244,   181,   241,
      -1,    -1,    54,   314,   244,   315,   241,    -1,   315,   245,
     316,    -1,   316,    -1,   123,   317,    -1,   317,    -1,    68,
      -1,   150,    -1,    85,    -1,   228,    -1,   238,    -1,    61,
      -1,    38,    -1,   149,    -1,     5,    -1,    72,    -1,   118,
      -1,   212,    -1,   132,    -1,    73,    -1,   151,    -1,    49,
      -1,    -1,    26,   319,   320,   243,   321,   242,   241,    -1,
      -1,   324,    -1,   321,   322,    -1,   322,    -1,   323,    -1,
     325,    -1,   326,    -1,   327,    -1,   328,    -1,   329,    -1,
     330,    -1,   331,    -1,   332,    -1,   333,    -1,     1,   241,
      -1,   113,   244,   143,   241,    -1,   143,    -1,   140,   244,
     250,   241,    -1,   141,   244,   250,   241,    -1,   126,   244,
     124,   241,    -1,    30,   244,   250,   241,    -1,   106,   244,
     124,   241,    -1,   101,   244,   124,   241,    -1,   103,   244,
     124,   241,    -1,   102,   244,   124,   241,    -1,   163,   244,
     252,   241,    -1,    -1,    94,   335,   243,   340,   242,   241,
      -1,    -1,    54,   337,   244,   338,   241,    -1,   338,   245,
     339,    -1,   339,    -1,   217,    -1,    71,    -1,   340,   341,
      -1,   341,    -1,   342,    -1,   336,    -1,   345,    -1,   346,
      -1,     1,   241,    -1,   142,   244,   343,   241,    -1,   343,
     245,   344,    -1,   344,    -1,   124,    -1,   124,   186,   124,
      -1,    82,   244,   143,   241,    -1,    77,   244,   143,   241,
      -1,    -1,    10,   348,   243,   349,   242,   241,    -1,   349,
     350,    -1,   350,    -1,   351,    -1,   352,    -1,   354,    -1,
     356,    -1,   361,    -1,   362,    -1,   363,    -1,   365,    -1,
     366,    -1,   367,    -1,   353,    -1,   368,    -1,   369,    -1,
     364,    -1,   370,    -1,   355,    -1,     1,   241,    -1,   229,
     244,   143,   241,    -1,   137,   244,   143,   241,    -1,   176,
     244,   181,   241,    -1,    26,   244,   143,   241,    -1,    49,
     244,   181,   241,    -1,    -1,    54,   357,   244,   358,   241,
      -1,   358,   245,   359,    -1,   359,    -1,   123,   360,    -1,
     360,    -1,   176,    -1,    50,    -1,    86,    -1,    69,    -1,
      22,    -1,    23,    -1,   122,    -1,    63,    -1,   157,    -1,
     114,    -1,    86,   244,   181,   241,    -1,    69,   244,   181,
     241,    -1,    50,   244,   181,   241,    -1,    22,   244,   181,
     241,    -1,   122,   244,   181,   241,    -1,    63,   244,   181,
     241,    -1,   175,   244,   143,   241,    -1,   147,   244,   143,
     241,    -1,   146,   244,   124,   241,    -1,   114,   244,   181,
     241,    -1,    -1,   156,   372,   243,   373,   242,   241,    -1,
     373,   374,    -1,   374,    -1,   375,    -1,   376,    -1,   377,
      -1,     1,   241,    -1,   145,   244,   143,   241,    -1,    24,
     244,   143,   241,    -1,   117,   244,   143,   241,    -1,    -1,
     170,   379,   243,   380,   242,   241,    -1,   380,   381,    -1,
     381,    -1,   382,    -1,   383,    -1,   384,    -1,     1,   241,
      -1,   113,   244,   143,   241,    -1,   229,   244,   143,   241,
      -1,    -1,   172,   385,   244,   386,   241,    -1,   386,   245,
     387,    -1,   387,    -1,    85,    -1,   225,    -1,   228,    -1,
     238,    -1,   226,    -1,   220,    -1,   156,    -1,   227,    -1,
     219,    -1,   201,    -1,   187,    -1,    -1,   171,   389,   243,
     390,   242,   241,    -1,   390,   391,    -1,   391,    -1,   392,
      -1,   393,    -1,     1,   241,    -1,   113,   244,   143,   241,
      -1,    -1,   172,   394,   244,   395,   241,    -1,   395,   245,
     396,    -1,   396,    -1,    85,    -1,   225,    -1,   228,    -1,
     238,    -1,   226,    -1,   220,    -1,   156,    -1,   227,    -1,
     219,    -1,   201,    -1,   187,    -1,    -1,    29,   398,   399,
     243,   400,   242,   241,    -1,    -1,   403,    -1,   400,   401,
      -1,   401,    -1,   402,    -1,   404,    -1,   405,    -1,   406,
      -1,   407,    -1,   408,    -1,   409,    -1,   410,    -1,   420,
      -1,   421,    -1,   422,    -1,   419,    -1,   416,    -1,   418,
      -1,   417,    -1,   415,    -1,   423,    -1,     1,   241,    -1,
     113,   244,   143,   241,    -1,   143,    -1,    77,   244,   143,
     241,    -1,   164,   244,   143,   241,    -1,     3,   244,   143,
     241,    -1,   142,   244,   124,   241,    -1,     6,   244,   199,
     241,    -1,     6,   244,   200,   241,    -1,    53,   244,   143,
     241,    -1,    -1,    54,   411,   244,   412,   241,    -1,   412,
     245,   413,    -1,   413,    -1,   123,   414,    -1,   414,    -1,
      91,    -1,    27,    -1,    31,    -1,    11,    -1,    13,    -1,
     223,    -1,   154,   244,   143,   241,    -1,    49,   244,   181,
     241,    -1,    31,   244,   181,   241,    -1,    27,   244,   181,
     241,    -1,    11,   244,   181,   241,    -1,    79,   244,   143,
     241,    -1,    92,   244,   143,   241,    -1,    26,   244,   143,
     241,    -1,    25,   244,   143,   241,    -1,    -1,    83,   425,
     243,   430,   242,   241,    -1,    -1,   172,   427,   244,   428,
     241,    -1,   428,   245,   429,    -1,   429,    -1,   148,    -1,
     430,   431,    -1,   431,    -1,   432,    -1,   433,    -1,   426,
      -1,     1,    -1,   229,   244,   143,   241,    -1,   145,   244,
     143,   241,    -1,    -1,    36,   435,   243,   436,   242,   241,
      -1,   436,   437,    -1,   437,    -1,   438,    -1,   439,    -1,
       1,    -1,    82,   244,   143,   241,    -1,   145,   244,   143,
     241,    -1,    -1,    51,   441,   243,   442,   242,   241,    -1,
     442,   443,    -1,   443,    -1,   444,    -1,     1,    -1,    82,
     244,   143,   241,    -1,    -1,    59,   446,   243,   451,   242,
     241,    -1,    -1,   172,   448,   244,   449,   241,    -1,   449,
     245,   450,    -1,   450,    -1,   148,    -1,   451,   452,    -1,
     452,    -1,   453,    -1,   454,    -1,   447,    -1,     1,    -1,
     113,   244,   143,   241,    -1,   145,   244,   143,   241,    -1,
      60,   243,   456,   242,   241,    -1,   456,   457,    -1,   457,
      -1,   464,    -1,   465,    -1,   467,    -1,   468,    -1,   469,
      -1,   470,    -1,   471,    -1,   472,    -1,   473,    -1,   474,
      -1,   463,    -1,   476,    -1,   477,    -1,   478,    -1,   493,
      -1,   479,    -1,   481,    -1,   483,    -1,   482,    -1,   486,
      -1,   480,    -1,   487,    -1,   488,    -1,   489,    -1,   490,
      -1,   492,    -1,   494,    -1,   491,    -1,   508,    -1,   495,
      -1,   499,    -1,   500,    -1,   504,    -1,   484,    -1,   485,
      -1,   514,    -1,   512,    -1,   513,    -1,   496,    -1,   466,
      -1,   497,    -1,   498,    -1,   515,    -1,   503,    -1,   475,
      -1,   516,    -1,   501,    -1,   502,    -1,   460,    -1,   462,
      -1,   458,    -1,   459,    -1,   461,    -1,     1,    -1,    66,
     244,   124,   241,    -1,    67,   244,   124,   241,    -1,    13,
     244,   181,   241,    -1,   235,   244,   181,   241,    -1,   169,
     244,   181,   241,    -1,    84,   244,   124,   241,    -1,    76,
     244,   181,   241,    -1,    81,   244,   181,   241,    -1,    42,
     244,   181,   241,    -1,    52,   244,   181,   241,    -1,     8,
     244,   181,   241,    -1,   105,   244,   250,   241,    -1,   104,
     244,   124,   241,    -1,    98,   244,   124,   241,    -1,     9,
     244,   250,   241,    -1,   185,   244,   250,   241,    -1,   184,
     244,   250,   241,    -1,    70,   244,   124,   241,    -1,    88,
     244,   181,   241,    -1,    87,   244,   143,   241,    -1,   240,
     244,   181,   241,    -1,   179,   244,   181,   241,    -1,   180,
     244,   181,   241,    -1,   178,   244,   181,   241,    -1,   178,
     244,   182,   241,    -1,   177,   244,   181,   241,    -1,   177,
     244,   182,   241,    -1,   135,   244,   250,   241,    -1,    20,
     244,   250,   241,    -1,    21,   244,   181,   241,    -1,   136,
     244,   250,   241,    -1,   173,   244,   181,   241,    -1,   121,
     244,   181,   241,    -1,   224,   244,   181,   241,    -1,   131,
     244,   181,   241,    -1,   108,   244,   143,   241,    -1,    80,
     244,   250,   241,    -1,    44,   244,   124,   241,    -1,    97,
     244,   124,   241,    -1,   107,   244,   124,   241,    -1,   167,
     244,   143,   241,    -1,    32,   244,   143,   241,    -1,    28,
     244,   124,   241,    -1,   230,   244,   181,   241,    -1,    46,
     244,   143,   241,    -1,   139,   244,   181,   241,    -1,    39,
     244,   181,   241,    -1,   222,   244,   250,   241,    -1,    -1,
     133,   505,   244,   506,   241,    -1,   506,   245,   507,    -1,
     507,    -1,   188,    -1,   191,    -1,   193,    -1,   194,    -1,
     197,    -1,   215,    -1,   211,    -1,   213,    -1,   218,    -1,
     216,    -1,   196,    -1,   212,    -1,   214,    -1,   198,    -1,
     221,    -1,   189,    -1,   190,    -1,   201,    -1,    -1,   130,
     509,   244,   510,   241,    -1,   510,   245,   511,    -1,   511,
      -1,   188,    -1,   191,    -1,   193,    -1,   194,    -1,   197,
      -1,   215,    -1,   211,    -1,   213,    -1,   218,    -1,   216,
      -1,   196,    -1,   212,    -1,   214,    -1,   198,    -1,   221,
      -1,   189,    -1,   190,    -1,   201,    -1,   109,   244,   124,
     241,    -1,   110,   244,   124,   241,    -1,    33,   244,   124,
     241,    -1,   192,   244,   252,   241,    -1,    43,   244,   181,
     241,    -1,    -1,    62,   518,   243,   519,   242,   241,    -1,
     519,   520,    -1,   520,    -1,   521,    -1,   522,    -1,   523,
      -1,   527,    -1,   528,    -1,   529,    -1,     1,    -1,    48,
     244,   181,   241,    -1,    45,   244,   250,   241,    -1,    -1,
      95,   524,   244,   525,   241,    -1,   525,   245,   526,    -1,
     526,    -1,   183,    -1,    12,    -1,   229,   244,   143,   241,
      -1,   113,   244,   143,   241,    -1,    -1,     4,   530,   244,
     531,   241,    -1,   531,   245,   532,    -1,   532,    -1,   183,
      -1,    12,    -1,    24,   243,   534,   242,   241,    -1,   534,
     535,    -1,   535,    -1,   536,    -1,   537,    -1,   538,    -1,
     539,    -1,   545,    -1,   540,    -1,   541,    -1,   542,    -1,
     543,    -1,   544,    -1,   546,    -1,   547,    -1,   548,    -1,
     549,    -1,   550,    -1,     1,    -1,    41,   244,   181,   241,
      -1,   231,   244,   181,   241,    -1,   232,   244,   181,   241,
      -1,   233,   244,   181,   241,    -1,    89,   244,   250,   241,
      -1,    90,   244,   250,   241,    -1,   134,   244,   181,   241,
      -1,   100,   244,   124,   241,    -1,   144,   244,   181,   241,
      -1,    99,   244,   124,   241,    -1,    35,   244,   124,   241,
      -1,    34,   244,   124,   241,    -1,   119,   244,   181,   241,
      -1,   120,   244,   181,   241,    -1,    14,   244,   181,   241,
      -1,   165,   243,   552,   242,   241,    -1,   552,   553,    -1,
     553,    -1,   554,    -1,   555,    -1,   556,    -1,   558,    -1,
     557,    -1,   559,    -1,     1,    -1,    55,   244,   181,   241,
      -1,    75,   244,   181,   241,    -1,    93,   244,   250,   241,
      -1,    71,   244,   181,   241,    -1,    40,   244,   181,   241,
      -1,    74,   244,   181,   241,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   376,   376,   377,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   405,   405,   406,   410,
     414,   418,   422,   426,   432,   432,   433,   434,   435,   436,
     443,   446,   446,   447,   447,   447,   449,   466,   477,   480,
     480,   482,   482,   482,   483,   483,   484,   484,   485,   486,
     486,   487,   487,   490,   524,   584,   598,   616,   625,   639,
     648,   676,   706,   722,   772,   774,   774,   775,   775,   775,
     776,   778,   787,   796,   809,   811,   811,   814,   814,   814,
     815,   815,   816,   816,   817,   817,   820,   824,   828,   832,
     839,   846,   853,   857,   861,   865,   869,   873,   877,   883,
     893,   892,   985,   985,   986,   986,   987,   987,   987,   987,
     987,   988,   988,   988,   989,   989,   989,   990,   990,   990,
     991,   991,   991,   992,   992,   993,   995,  1007,  1019,  1038,
    1050,  1061,  1072,  1114,  1123,  1134,  1145,  1156,  1167,  1178,
    1189,  1200,  1211,  1222,  1233,  1245,  1244,  1248,  1248,  1249,
    1250,  1252,  1259,  1266,  1273,  1280,  1287,  1294,  1301,  1308,
    1315,  1322,  1329,  1336,  1343,  1350,  1357,  1371,  1370,  1390,
    1390,  1392,  1392,  1393,  1393,  1394,  1395,  1396,  1397,  1398,
    1399,  1400,  1401,  1402,  1405,  1452,  1499,  1505,  1511,  1517,
    1523,  1529,  1535,  1541,  1547,  1557,  1556,  1573,  1572,  1576,
    1576,  1577,  1581,  1587,  1587,  1588,  1588,  1588,  1588,  1588,
    1590,  1592,  1592,  1594,  1609,  1631,  1640,  1653,  1652,  1721,
    1721,  1722,  1722,  1722,  1722,  1722,  1723,  1723,  1724,  1724,
    1724,  1725,  1725,  1726,  1726,  1726,  1727,  1727,  1729,  1748,
    1761,  1772,  1781,  1793,  1792,  1796,  1796,  1797,  1798,  1800,
    1808,  1815,  1822,  1829,  1836,  1843,  1850,  1857,  1864,  1873,
    1884,  1895,  1906,  1917,  1928,  1940,  1959,  1969,  1978,  1994,
    1993,  2009,  2009,  2010,  2010,  2010,  2010,  2012,  2021,  2036,
    2050,  2049,  2065,  2065,  2066,  2066,  2066,  2066,  2068,  2077,
    2086,  2085,  2091,  2091,  2092,  2096,  2100,  2104,  2108,  2112,
    2116,  2120,  2124,  2128,  2132,  2142,  2141,  2158,  2158,  2159,
    2159,  2159,  2161,  2168,  2167,  2173,  2173,  2174,  2178,  2182,
    2186,  2190,  2194,  2198,  2202,  2206,  2210,  2214,  2224,  2223,
    2373,  2373,  2374,  2374,  2375,  2375,  2375,  2375,  2376,  2376,
    2376,  2377,  2377,  2377,  2378,  2378,  2378,  2379,  2379,  2379,
    2380,  2380,  2383,  2395,  2407,  2416,  2428,  2440,  2446,  2450,
    2458,  2468,  2467,  2471,  2471,  2472,  2473,  2475,  2482,  2493,
    2500,  2507,  2514,  2524,  2565,  2576,  2587,  2602,  2613,  2626,
    2639,  2648,  2684,  2683,  2755,  2754,  2758,  2758,  2759,  2765,
    2765,  2766,  2766,  2766,  2766,  2768,  2784,  2794,  2793,  2815,
    2815,  2816,  2816,  2816,  2818,  2827,  2840,  2839,  2860,  2860,
    2861,  2861,  2863,  2876,  2875,  2926,  2925,  2929,  2929,  2930,
    2936,  2936,  2937,  2937,  2937,  2937,  2939,  2945,  2954,  2957,
    2957,  2958,  2958,  2958,  2959,  2959,  2960,  2960,  2961,  2961,
    2962,  2962,  2963,  2963,  2964,  2965,  2965,  2966,  2966,  2967,
    2967,  2968,  2968,  2969,  2969,  2970,  2970,  2971,  2971,  2972,
    2973,  2973,  2974,  2974,  2975,  2975,  2976,  2976,  2977,  2977,
    2978,  2978,  2979,  2980,  2980,  2981,  2981,  2982,  2982,  2983,
    2983,  2984,  2984,  2985,  2985,  2990,  2996,  3002,  3008,  3013,
    3018,  3024,  3030,  3036,  3042,  3048,  3054,  3060,  3066,  3072,
    3078,  3084,  3090,  3101,  3107,  3116,  3122,  3128,  3134,  3138,
    3144,  3148,  3154,  3160,  3166,  3172,  3178,  3184,  3190,  3196,
    3202,  3213,  3219,  3225,  3231,  3237,  3246,  3278,  3296,  3302,
    3311,  3317,  3322,  3329,  3328,  3334,  3334,  3335,  3339,  3343,
    3347,  3351,  3355,  3359,  3363,  3367,  3371,  3375,  3379,  3383,
    3387,  3391,  3395,  3399,  3403,  3410,  3409,  3415,  3415,  3416,
    3420,  3424,  3428,  3432,  3436,  3440,  3444,  3448,  3452,  3456,
    3460,  3464,  3468,  3472,  3476,  3480,  3484,  3490,  3496,  3502,
    3508,  3514,  3524,  3523,  3549,  3549,  3550,  3550,  3551,  3552,
    3553,  3554,  3555,  3558,  3564,  3571,  3570,  3575,  3575,  3576,
    3580,  3586,  3605,  3615,  3614,  3657,  3657,  3658,  3662,  3671,
    3674,  3674,  3675,  3675,  3676,  3677,  3678,  3679,  3680,  3681,
    3682,  3683,  3684,  3685,  3686,  3687,  3688,  3689,  3692,  3698,
    3704,  3710,  3716,  3722,  3728,  3734,  3740,  3746,  3752,  3758,
    3764,  3770,  3776,  3785,  3788,  3788,  3789,  3789,  3789,  3790,
    3791,  3792,  3793,  3796,  3802,  3808,  3822,  3828,  3834
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT_PASSWORD", "ACTION", "ADMIN", 
  "AFTYPE", "T_ALLOW", "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME", 
  "IRCD_AUTH", "AUTOCONN", "T_BLOCK", "BURST_AWAY", "BURST_TOPICWHO", 
  "BYTES", "KBYTES", "MBYTES", "GBYTES", "TBYTES", "CALLER_ID_WAIT", 
  "OPERS_BYPASS_CALLERID", "CAN_FLOOD", "CAN_IDLE", "CHANNEL", 
  "CIPHER_PREFERENCE", "CLASS", "COMPRESSED", "COMPRESSION_LEVEL", 
  "CONNECT", "CONNECTFREQ", "CRYPTLINK", "DEFAULT_CIPHER_PREFERENCE", 
  "DEFAULT_FLOODCOUNT", "DEFAULT_SPLIT_SERVER_COUNT", 
  "DEFAULT_SPLIT_USER_COUNT", "DENY", "DESCRIPTION", "DIE", 
  "DISABLE_AUTH", "DISABLE_HIDDEN", "DISABLE_LOCAL_CHANNELS", 
  "DISABLE_REMOTE_COMMANDS", "DOT_IN_IP6_ADDR", "DOTS_IN_IDENT", 
  "DURATION", "EGDPOOL_PATH", "EMAIL", "ENABLE", "ENCRYPTED", 
  "EXCEED_LIMIT", "EXEMPT", "FAILED_OPER_NOTICE", "FAKENAME", 
  "IRCD_FLAGS", "FLATTEN_LINKS", "FFAILED_OPERLOG", "FOPERLOG", 
  "FUSERLOG", "GECOS", "GENERAL", "GLINE", "GLINES", "GLINE_EXEMPT", 
  "GLINE_LOG", "GLINE_TIME", "GLINE_MIN_CIDR", "GLINE_MIN_CIDR6", 
  "GLOBAL_KILL", "NEED_IDENT", "HAVENT_READ_CONF", "HIDDEN", 
  "HIDDEN_ADMIN", "HIDDEN_OPER", "HIDE_SERVER_IPS", "HIDE_SERVERS", 
  "HIDE_SPOOF_IPS", "HOST", "HUB", "HUB_MASK", "IDLETIME", 
  "IGNORE_BOGUS_TS", "IP", "KILL", "KILL_CHASE_TIME_LIMIT", "KLINE", 
  "KLINE_EXEMPT", "KLINE_REASON", "KLINE_WITH_REASON", "KNOCK_DELAY", 
  "KNOCK_DELAY_CHANNEL", "LAZYLINK", "LEAF_MASK", "LINKS_DELAY", "LISTEN", 
  "LOGGING", "LOG_LEVEL", "MAXIMUM_LINKS", "MAX_ACCEPT", "MAX_BANS", 
  "MAX_CHANS_PER_USER", "MAX_GLOBAL", "MAX_IDENT", "MAX_LOCAL", 
  "MAX_NICK_CHANGES", "MAX_NICK_TIME", "MAX_NUMBER", "MAX_TARGETS", 
  "MESSAGE_LOCALE", "MIN_NONWILDCARD", "MIN_NONWILDCARD_SIMPLE", "MODULE", 
  "MODULES", "NAME", "NEED_PASSWORD", "NETWORK_DESC", "NETWORK_NAME", 
  "NICK", "NICK_CHANGES", "NO_CREATE_ON_SPLIT", "NO_JOIN_ON_SPLIT", 
  "NO_OPER_FLOOD", "NO_TILDE", "NOT", "NUMBER", "NUMBER_PER_IDENT", 
  "NUMBER_PER_IP", "NUMBER_PER_IP_GLOBAL", "OPERATOR", "OPER_LOG", 
  "OPER_ONLY_UMODES", "OPER_PASS_RESV", "OPER_SPY_T", "OPER_UMODES", 
  "INVITE_OPS_ONLY", "PACE_WAIT", "PACE_WAIT_SIMPLE", "PASSWORD", "PATH", 
  "PING_COOKIE", "PING_TIME", "PING_WARNING", "PORT", "QSTRING", 
  "QUIET_ON_BAN", "REASON", "REDIRPORT", "REDIRSERV", "REGEX_T", "REHASH", 
  "REMOTE", "REMOTEBAN", "RESTRICTED", "RSA_PRIVATE_KEY_FILE", 
  "RSA_PUBLIC_KEY_FILE", "SSL_CERTIFICATE_FILE", "RESV", "RESV_EXEMPT", 
  "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "SENDQ", 
  "SEND_PASSWORD", "SERVERHIDE", "SERVERINFO", "SERVLINK_PATH", 
  "IRCD_SID", "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE", 
  "SHORT_MOTD", "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_I_OPER_ONLY", 
  "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL", 
  "TMASKED", "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS", 
  "T_ALL", "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN", 
  "T_CLIENT_FLOOD", "T_DEAF", "T_DEBUG", "T_DRONE", "T_EXTERNAL", 
  "T_FULL", "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", 
  "T_L_CRIT", "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", 
  "T_L_TRACE", "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", 
  "T_REJ", "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_SSL", "T_UNAUTH", 
  "T_UNRESV", "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", "TOPICBURST", 
  "TRUE_NO_OPER_FLOOD", "TKLINE", "TXLINE", "TRESV", "UNKLINE", "USER", 
  "USE_EGD", "USE_EXCEPT", "USE_INVEX", "USE_KNOCK", "USE_LOGGING", 
  "USE_WHOIS_ACTUALLY", "VHOST", "VHOST6", "XLINE", "WARN", 
  "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='", "','", "$accept", "conf", 
  "conf_item", "timespec_", "timespec", "sizespec_", "sizespec", 
  "modules_entry", "modules_items", "modules_item", "modules_module", 
  "modules_path", "serverinfo_entry", "serverinfo_items", 
  "serverinfo_item", "serverinfo_ssl_certificate_file", 
  "serverinfo_rsa_private_key_file", "serverinfo_name", "serverinfo_sid", 
  "serverinfo_description", "serverinfo_network_name", 
  "serverinfo_network_desc", "serverinfo_vhost", "serverinfo_vhost6", 
  "serverinfo_max_clients", "serverinfo_hub", "admin_entry", 
  "admin_items", "admin_item", "admin_name", "admin_email", 
  "admin_description", "logging_entry", "logging_items", "logging_item", 
  "logging_path", "logging_oper_log", "logging_gline_log", 
  "logging_fuserlog", "logging_ffailed_operlog", "logging_foperlog", 
  "logging_log_level", "logging_use_logging", "oper_entry", "@1", 
  "oper_name_b", "oper_items", "oper_item", "oper_name", "oper_name_t", 
  "oper_user", "oper_password", "oper_encrypted", "oper_hidden_admin", 
  "oper_rsa_public_key_file", "oper_class", "oper_global_kill", 
  "oper_remote", "oper_remoteban", "oper_kline", "oper_xline", 
  "oper_unkline", "oper_gline", "oper_nick_changes", "oper_die", 
  "oper_rehash", "oper_admin", "oper_flags", "@2", "oper_flags_items", 
  "oper_flags_item", "oper_flags_item_atom", "class_entry", "@3", 
  "class_name_b", "class_items", "class_item", "class_name", 
  "class_name_t", "class_ping_time", "class_ping_warning", 
  "class_number_per_ip", "class_connectfreq", "class_max_number", 
  "class_max_global", "class_max_local", "class_max_ident", "class_sendq", 
  "listen_entry", "@4", "listen_flags", "@5", "listen_flags_items", 
  "listen_flags_item", "listen_items", "listen_item", "listen_port", 
  "port_items", "port_item", "listen_address", "listen_host", 
  "auth_entry", "@6", "auth_items", "auth_item", "auth_user", 
  "auth_passwd", "auth_spoof_notice", "auth_class", "auth_encrypted", 
  "auth_flags", "@7", "auth_flags_items", "auth_flags_item", 
  "auth_flags_item_atom", "auth_kline_exempt", "auth_need_ident", 
  "auth_exceed_limit", "auth_can_flood", "auth_no_tilde", 
  "auth_gline_exempt", "auth_spoof", "auth_redir_serv", "auth_redir_port", 
  "auth_need_password", "resv_entry", "@8", "resv_items", "resv_item", 
  "resv_creason", "resv_channel", "resv_nick", "shared_entry", "@9", 
  "shared_items", "shared_item", "shared_name", "shared_user", 
  "shared_type", "@10", "shared_types", "shared_type_item", 
  "cluster_entry", "@11", "cluster_items", "cluster_item", "cluster_name", 
  "cluster_type", "@12", "cluster_types", "cluster_type_item", 
  "connect_entry", "@13", "connect_name_b", "connect_items", 
  "connect_item", "connect_name", "connect_name_t", "connect_host", 
  "connect_send_password", "connect_accept_password", "connect_port", 
  "connect_aftype", "connect_fakename", "connect_flags", "@14", 
  "connect_flags_items", "connect_flags_item", "connect_flags_item_atom", 
  "connect_rsa_public_key_file", "connect_encrypted", "connect_cryptlink", 
  "connect_compressed", "connect_auto", "connect_hub_mask", 
  "connect_leaf_mask", "connect_class", "connect_cipher_preference", 
  "kill_entry", "@15", "kill_type", "@16", "kill_type_items", 
  "kill_type_item", "kill_items", "kill_item", "kill_user", "kill_reason", 
  "deny_entry", "@17", "deny_items", "deny_item", "deny_ip", 
  "deny_reason", "exempt_entry", "@18", "exempt_items", "exempt_item", 
  "exempt_ip", "gecos_entry", "@19", "gecos_flags", "@20", 
  "gecos_flags_items", "gecos_flags_item", "gecos_items", "gecos_item", 
  "gecos_name", "gecos_reason", "general_entry", "general_items", 
  "general_item", "general_gline_min_cidr", "general_gline_min_cidr6", 
  "general_burst_away", "general_use_whois_actually", 
  "general_tkline_expire_notices", "general_kill_chase_time_limit", 
  "general_hide_spoof_ips", "general_ignore_bogus_ts", 
  "general_disable_remote_commands", "general_failed_oper_notice", 
  "general_anti_nick_flood", "general_max_nick_time", 
  "general_max_nick_changes", "general_max_accept", 
  "general_anti_spam_exit_message_time", "general_ts_warn_delta", 
  "general_ts_max_delta", "general_havent_read_conf", 
  "general_kline_with_reason", "general_kline_reason", 
  "general_warn_no_nline", "general_stats_o_oper_only", 
  "general_stats_P_oper_only", "general_stats_k_oper_only", 
  "general_stats_i_oper_only", "general_pace_wait", 
  "general_caller_id_wait", "general_opers_bypass_callerid", 
  "general_pace_wait_simple", "general_short_motd", 
  "general_no_oper_flood", "general_true_no_oper_flood", 
  "general_oper_pass_resv", "general_message_locale", "general_idletime", 
  "general_dots_in_ident", "general_maximum_links", "general_max_targets", 
  "general_servlink_path", "general_default_cipher_preference", 
  "general_compression_level", "general_use_egd", "general_egdpool_path", 
  "general_ping_cookie", "general_disable_auth", "general_throttle_time", 
  "general_oper_umodes", "@21", "umode_oitems", "umode_oitem", 
  "general_oper_only_umodes", "@22", "umode_items", "umode_item", 
  "general_min_nonwildcard", "general_min_nonwildcard_simple", 
  "general_default_floodcount", "general_client_flood", 
  "general_dot_in_ip6_addr", "gline_entry", "@23", "gline_items", 
  "gline_item", "gline_enable", "gline_duration", "gline_logging", "@24", 
  "gline_logging_types", "gline_logging_type_item", "gline_user", 
  "gline_server", "gline_action", "@25", "gdeny_types", "gdeny_type_item", 
  "channel_entry", "channel_items", "channel_item", 
  "channel_disable_local_channels", "channel_use_except", 
  "channel_use_invex", "channel_use_knock", "channel_knock_delay", 
  "channel_knock_delay_channel", "channel_invite_ops_only", 
  "channel_max_chans_per_user", "channel_quiet_on_ban", 
  "channel_max_bans", "channel_default_split_user_count", 
  "channel_default_split_server_count", "channel_no_create_on_split", 
  "channel_no_join_on_split", "channel_burst_topicwho", 
  "serverhide_entry", "serverhide_items", "serverhide_item", 
  "serverhide_flatten_links", "serverhide_hide_servers", 
  "serverhide_links_delay", "serverhide_hidden", 
  "serverhide_disable_hidden", "serverhide_hide_server_ips", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   246,   247,   247,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   249,   249,   250,   250,
     250,   250,   250,   250,   251,   251,   252,   252,   252,   252,
     253,   254,   254,   255,   255,   255,   256,   257,   258,   259,
     259,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   273,   274,   274,   274,
     274,   275,   276,   277,   278,   279,   279,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   281,   282,   283,   284,
     285,   286,   287,   287,   287,   287,   287,   287,   287,   288,
     290,   289,   291,   291,   292,   292,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   314,   313,   315,   315,   316,
     316,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   319,   318,   320,
     320,   321,   321,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   335,   334,   337,   336,   338,
     338,   339,   339,   340,   340,   341,   341,   341,   341,   341,
     342,   343,   343,   344,   344,   345,   346,   348,   347,   349,
     349,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   351,   352,
     353,   354,   355,   357,   356,   358,   358,   359,   359,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   372,
     371,   373,   373,   374,   374,   374,   374,   375,   376,   377,
     379,   378,   380,   380,   381,   381,   381,   381,   382,   383,
     385,   384,   386,   386,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   389,   388,   390,   390,   391,
     391,   391,   392,   394,   393,   395,   395,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   398,   397,
     399,   399,   400,   400,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   402,   403,   404,   405,   406,   407,   408,   408,
     409,   411,   410,   412,   412,   413,   413,   414,   414,   414,
     414,   414,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   425,   424,   427,   426,   428,   428,   429,   430,
     430,   431,   431,   431,   431,   432,   433,   435,   434,   436,
     436,   437,   437,   437,   438,   439,   441,   440,   442,   442,
     443,   443,   444,   446,   445,   448,   447,   449,   449,   450,
     451,   451,   452,   452,   452,   452,   453,   454,   455,   456,
     456,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   481,
     482,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   505,   504,   506,   506,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   509,   508,   510,   510,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   512,   513,   514,
     515,   516,   518,   517,   519,   519,   520,   520,   520,   520,
     520,   520,   520,   521,   522,   524,   523,   525,   525,   526,
     526,   527,   528,   530,   529,   531,   531,   532,   532,   533,
     534,   534,   535,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   535,   535,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   552,   553,   553,   553,   553,
     553,   553,   553,   554,   555,   556,   557,   558,   559
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     1,     2,     3,
       3,     3,     3,     3,     0,     1,     2,     3,     3,     3,
       5,     2,     1,     1,     1,     2,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       2,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     7,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     6,     0,     5,     3,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     2,
       4,     3,     1,     1,     3,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     2,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     2,     4,     4,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     2,     1,     1,
       1,     2,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     1,     4,     4,     4,     4,     4,     4,
       4,     0,     5,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     6,     0,     5,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     4,     4,     0,     6,     2,     1,
       1,     1,     4,     0,     6,     0,     5,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     0,     5,     3,     1,     1,
       1,     4,     4,     0,     5,     3,     1,     1,     1,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,   227,     0,   177,   338,   407,
     416,   423,     0,   592,   392,   205,     0,     0,   110,   279,
       0,     0,   290,   315,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     179,   340,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   637,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   621,   622,   623,   624,   625,   627,
     628,   629,   630,   631,   626,   632,   633,   634,   635,   636,
     195,     0,   180,   363,     0,   341,     0,     0,     0,   494,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   565,     0,   543,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   440,   491,   492,   489,   493,   490,
     451,   441,   442,   480,   443,   444,   445,   446,   447,   448,
     449,   450,   485,   452,   453,   454,   456,   461,   457,   459,
     458,   474,   475,   460,   462,   463,   464,   465,   468,   466,
     455,   467,   470,   479,   481,   482,   471,   472,   487,   488,
     484,   473,   469,   477,   478,   476,   483,   486,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    92,    94,    93,    90,    91,
       0,     0,     0,     0,    42,    43,    44,   137,     0,   113,
       0,   662,     0,     0,     0,     0,     0,     0,     0,   655,
     656,   657,   658,   660,   659,   661,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      61,    58,    51,    60,    54,    55,    56,    52,    59,    57,
      53,     0,     0,    80,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,   253,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   230,   231,   232,
     241,   233,   246,   234,   235,   236,   237,   244,   238,   239,
     240,   242,   243,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     620,     0,     0,   413,     0,     0,     0,   410,   411,   412,
     421,     0,     0,   419,   420,   435,     0,     0,   425,   434,
       0,   431,   432,   433,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   439,   602,
     613,     0,     0,   605,     0,     0,     0,   595,   596,   597,
     598,   599,   600,   601,   404,     0,   394,     0,   403,     0,
     400,   401,   402,     0,   207,     0,     0,     0,   216,     0,
     214,   215,   217,   218,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    45,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,   282,   283,   284,   285,
       0,     0,     0,     0,     0,     0,     0,   654,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,   300,     0,     0,   293,   294,   295,
     296,     0,     0,   323,     0,   318,   319,   320,     0,     0,
       0,    74,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     229,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   619,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   359,
     356,   358,   357,   355,   352,   353,   354,   360,     0,     0,
       0,   409,     0,     0,   418,     0,     0,     0,     0,   430,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,   438,     0,     0,     0,
       0,     0,     0,     0,   594,     0,     0,     0,     0,   399,
     219,     0,     0,     0,     0,     0,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,    40,     0,     0,     0,     0,     0,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,   116,   117,   118,
     132,   119,   133,   120,   121,   122,   128,   123,   124,   125,
     126,   127,   129,   130,   131,   134,   286,     0,     0,     0,
       0,   281,     0,     0,     0,     0,     0,     0,   653,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,   297,     0,     0,     0,     0,   292,   321,     0,     0,
       0,   317,    83,    82,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,   652,   649,   648,   638,    26,    26,    26,    26,
      26,    28,    27,   642,   643,   647,   645,   650,   651,   644,
     646,   639,   640,   641,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   361,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   342,     0,     0,   408,
       0,   417,     0,     0,     0,   424,   505,   509,   497,   523,
     524,   537,   536,   589,   541,   503,   591,   532,   539,   504,
     495,   496,   512,   501,   531,   502,   500,   514,   513,   533,
     508,   507,   506,   534,   530,   587,   588,   527,   569,   584,
     585,   570,   571,   572,   579,   573,   582,   586,   575,   580,
     576,   581,   574,   578,   577,   583,     0,   568,   529,   547,
     562,   563,   548,   549,   550,   557,   551,   560,   564,   553,
     558,   554,   559,   552,   556,   555,   561,     0,   546,   522,
     525,   540,   535,   499,   526,   520,   521,   518,   519,   516,
     517,   511,   510,    34,    34,    34,    36,    35,   590,   542,
     528,   538,   498,   515,     0,     0,     0,     0,     0,     0,
     593,     0,     0,     0,   393,     0,     0,     0,   223,     0,
     222,   206,   100,   101,    99,    98,   102,   108,   103,   107,
     105,   106,   104,    97,    96,   109,    46,    47,   135,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
       0,     0,     0,   280,   667,   663,   666,   668,   664,   665,
      67,    73,    65,    69,    68,    64,    63,    66,    72,    70,
      71,     0,     0,     0,   291,     0,     0,   316,   272,   251,
     252,   271,   263,   264,   260,   266,   262,   261,   268,   265,
       0,   267,   259,     0,   256,   258,   274,   270,   269,   278,
     273,   249,   277,   276,   275,   250,   248,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   339,   414,   415,   422,   436,   437,   429,     0,   428,
     566,     0,   544,     0,    37,    38,    39,   618,   617,     0,
     616,   604,   603,   610,   609,     0,   608,   612,   611,   406,
     398,     0,   397,   405,   212,   211,     0,   210,   226,   225,
       0,   220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   288,   289,   287,   298,   304,   310,   314,
     313,   312,   309,   305,   308,   311,   306,   307,     0,   303,
     299,   322,   327,   333,   337,   336,   335,   332,   328,   331,
     334,   329,   330,     0,   326,   257,   254,     0,   199,   201,
     203,   202,   200,   194,   198,   196,   197,   204,   366,   368,
     369,   387,   391,   390,   386,   385,   384,   370,   380,   381,
     378,   379,   377,     0,   382,     0,   374,   376,   364,   388,
     389,   362,   367,   383,   365,   426,     0,   567,   545,   614,
       0,   606,     0,   395,     0,   208,     0,   224,   221,   154,
     143,   152,   140,   169,   167,   176,   166,   161,   170,   174,
     163,   171,     0,   173,   168,   162,   175,   172,   164,   165,
       0,   158,   160,   150,   144,   141,   147,   136,   151,   139,
     153,   145,   146,   142,   149,   138,   148,   301,     0,   324,
       0,   255,   375,   372,     0,   427,   615,   607,   396,   209,
     159,   156,     0,   302,   325,   373,   157
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   851,   852,   996,   997,    25,   253,   254,
     255,   256,    26,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    27,    71,    72,    73,
      74,    75,    28,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    29,    61,   258,   765,   766,   767,   259,
     768,   769,   770,   771,   772,   773,   774,   775,   776,   777,
     778,   779,   780,   781,   782,   783,   784,   785,  1043,  1320,
    1321,  1322,    30,    50,   111,   589,   590,   591,   112,   592,
     593,   594,   595,   596,   597,   598,   599,   600,    31,    58,
     468,   721,  1186,  1187,   469,   470,   471,  1019,  1020,   472,
     473,    32,    48,   326,   327,   328,   329,   330,   331,   332,
     333,   547,  1103,  1104,  1105,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,    33,    62,   495,   496,   497,
     498,   499,    34,    65,   526,   527,   528,   529,   530,   813,
    1228,  1229,    35,    66,   534,   535,   536,   537,   819,  1243,
    1244,    36,    51,   114,   619,   620,   621,   115,   622,   623,
     624,   625,   626,   627,   628,   887,  1275,  1276,  1277,   629,
     630,   631,   632,   633,   634,   635,   636,   637,    37,    57,
     458,   716,  1181,  1182,   459,   460,   461,   462,    38,    52,
     366,   367,   368,   369,    39,    53,   372,   373,   374,    40,
      54,   379,   647,  1158,  1159,   380,   381,   382,   383,    41,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   418,
     977,   978,   222,   416,   956,   957,   223,   224,   225,   226,
     227,    42,    56,   446,   447,   448,   449,   450,   710,  1175,
    1176,   451,   452,   453,   707,  1169,  1170,    43,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    44,   268,   269,   270,   271,
     272,   273,   274,   275
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -787
static const short yypact[] =
{
    -787,   778,  -787,  -232,  -224,  -787,  -214,  -787,  -787,  -787,
    -787,  -787,  -207,  -787,  -787,  -787,  -193,  -180,  -787,  -787,
    -147,  -139,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,    11,  -131,   672,
     -36,     2,   -85,   -80,   -77,   434,   -73,   -58,   -23,   350,
      27,    82,   -13,   420,   335,   -12,   -11,    36,     8,    10,
      38,    14,  -787,  -787,  -787,  -787,   695,  -787,    40,    41,
      47,    53,    56,    62,    68,    71,    72,    76,    77,    81,
      84,    85,    86,   199,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,    25,  -787,  -787,    35,  -787,    26,     3,    22,  -787,
      87,    91,    93,    95,   101,   102,   104,   119,   120,   121,
     123,   125,   136,   137,   141,   142,   143,   145,   146,   147,
     149,   153,   165,   166,   167,   168,   171,   175,   176,   178,
     179,   181,  -787,   182,  -787,   183,   185,   189,   190,   192,
     194,   196,   200,   205,   208,   209,   212,   213,   214,   215,
     217,   220,   226,    13,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,   464,   130,
     415,    39,   227,   228,   230,   237,   239,   240,   241,   243,
     154,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
      69,   249,   252,     4,  -787,  -787,  -787,  -787,   155,  -787,
     238,  -787,   254,   255,   258,   261,   262,   263,   186,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,   198,   264,   267,   272,
     275,   276,   279,   282,   283,   284,   285,   286,   158,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,    66,    16,  -787,   391,   392,   393,   296,  -787,   299,
     303,   307,   310,   312,  -787,   314,   317,   318,   319,   322,
     324,   331,   332,   334,   336,   337,   195,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,   367,   455,   458,   402,   461,   461,
     463,   465,   407,   409,   412,   413,   414,   417,   418,   355,
    -787,   717,   882,  -787,   356,   360,    24,  -787,  -787,  -787,
    -787,   362,     5,  -787,  -787,  -787,   364,   366,  -787,  -787,
      17,  -787,  -787,  -787,   436,   461,   441,   461,   446,   491,
     485,   510,   454,   456,   457,   515,   500,   466,   520,   521,
     522,   468,   461,   469,   527,   509,   472,   533,   538,   539,
     461,   543,   528,   546,   551,   495,   435,   497,   438,   461,
     461,   499,   540,   511,   513,  -138,    42,   514,   519,   461,
     461,   566,   461,   530,   531,   534,   535,   450,  -787,  -787,
    -787,   459,   470,  -787,   476,   478,   304,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,   479,  -787,   480,  -787,   124,
    -787,  -787,  -787,   467,  -787,   481,   482,   483,  -787,    59,
    -787,  -787,  -787,  -787,  -787,   585,   586,   588,   590,   170,
     592,   596,   549,   501,  -787,  -787,   600,   603,   512,  -787,
     548,   516,   506,   507,   508,    23,  -787,  -787,  -787,  -787,
     573,   574,   575,   578,   579,   461,   529,  -787,  -787,   620,
     593,   625,   626,   630,   637,   639,   641,   663,   646,   647,
     552,  -787,   554,   553,  -787,   556,   115,  -787,  -787,  -787,
    -787,   555,   557,  -787,    34,  -787,  -787,  -787,   562,   564,
     567,  -787,  -787,   617,   667,   631,   632,   577,   643,   645,
     650,   652,   653,   668,   698,   684,   692,   655,   696,   604,
    -787,   605,   606,   607,   608,   -84,   611,   612,   614,   619,
     621,   622,   623,   624,   627,   628,   633,  -787,   634,   615,
     635,   638,   640,   642,   648,   651,   654,   656,   658,   221,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,   636,   666,   671,   673,   674,   677,   678,   679,   685,
     686,  -787,   688,   689,   693,   697,   701,   702,   703,   150,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,   723,   724,
     670,  -787,   733,   675,  -787,   738,   746,   707,   699,  -787,
     711,   712,   713,   714,   715,   716,   719,   721,   726,   729,
     734,   736,   737,   739,   740,   741,   742,   743,   751,   753,
     756,   757,   758,   759,   760,   761,   762,   768,   771,   776,
     779,   780,   775,   781,   817,   782,   784,   785,   786,   793,
     796,   798,   799,   800,   801,   802,   803,   804,   806,    15,
     807,   808,   809,   810,   811,   812,  -787,   735,   461,   718,
     772,   769,   815,   813,  -787,   876,   814,   912,   816,  -787,
    -787,   818,   913,   916,   770,   819,  -787,   820,   822,   823,
     824,   825,   826,   827,   829,   830,   831,   832,   833,   834,
     835,  -787,   836,   837,  -787,   838,   839,   840,   841,   842,
    -787,   843,   844,   845,   846,   847,   848,   849,   850,   851,
     852,   853,   854,   855,   856,    65,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,   926,   937,   938,
     860,  -787,   861,   862,   863,   864,   865,   866,  -787,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   877,   878,
    -787,  -787,   939,   879,   974,   880,  -787,  -787,   977,   881,
     883,  -787,  -787,  -787,  -787,   885,   886,   887,   888,   618,
     889,   890,   891,   892,   893,   894,   895,   896,   897,   898,
     899,  -787,  -787,  -787,  -787,  -787,   461,   461,   461,   461,
     461,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,   461,   998,  1017,  1018,  1019,
    1001,  1021,   461,   461,   566,   905,  -787,  -787,  1004,   -27,
     967,  1006,  1007,   970,   971,   972,  1011,   911,  1013,  1014,
    1015,  1016,  1036,  1020,  1022,   920,  -787,   921,   923,  -787,
     925,  -787,   927,   928,   561,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -234,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -225,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,   566,   566,   566,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,    -9,   929,   930,     1,   931,   932,
    -787,   933,   748,   934,  -787,   -63,   935,   936,   981,  -203,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,   997,
    1037,  1000,  1002,   940,  1005,  1008,  1009,  1010,  1039,  1012,
    1042,  1023,  1024,  1025,  1044,  1026,  1045,  1027,   951,  -787,
     953,   954,   955,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,   956,   404,   957,  -787,   958,   700,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
     828,  -787,  -787,  -192,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,   959,   960,   961,   962,   968,   969,   973,   975,
     976,   978,  -787,   979,   980,   982,   983,   984,   985,   986,
     987,   988,   989,   259,   990,   991,   992,   993,   994,   995,
     996,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -177,  -787,
    -787,   775,  -787,   817,  -787,  -787,  -787,  -787,  -787,  -172,
    -787,  -787,  -787,  -787,  -787,  -155,  -787,  -787,  -787,  -787,
    -787,  -153,  -787,  -787,  -787,  -787,  -146,  -787,  -787,  -787,
    1055,  -787,   770,   999,  1003,  1028,  1029,   587,  1030,  1031,
    1032,  1033,  1034,  1035,  1038,  1040,  1041,  1043,  1046,  1047,
    1048,  1049,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -143,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -136,  -787,  -787,  -787,   618,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,   327,  -787,  -113,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,   561,  -787,  -787,  -787,
      -9,  -787,     1,  -787,   748,  -787,   -63,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,   616,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
     -81,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,   404,  -787,
     700,  -787,  -787,  -787,   259,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,   587,  -787,  -787,  -787,  -787
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -787,  -787,  -787,  -445,  -348,  -786,  -429,  -787,  -787,   965,
    -787,  -787,  -787,  -787,   -21,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  1140,  -787,
    -787,  -787,  -787,  -787,  1051,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,   174,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -140,   -99,  -787,  -787,  -787,  -787,   649,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,   -74,  -787,   773,  -787,  -787,    49,  -787,
    -787,  -787,  -787,  -787,   917,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,   -32,   139,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,   750,  -787,
    -787,  -787,  -787,  -787,  -787,   720,  -787,  -787,  -787,  -787,
    -787,   -91,  -787,  -787,  -787,   722,  -787,  -787,  -787,  -787,
     -92,  -787,  -787,  -787,  -787,   644,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,   -95,   -22,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,   -44,  -787,   794,  -787,  -787,  -787,  -787,
    -787,   900,  -787,  -787,  -787,  -787,  -787,   906,  -787,  -787,
    -787,  -787,  -787,  -787,   -34,  -787,   884,  -787,  -787,  -787,
    -787,  1081,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,    92,  -787,  -787,  -787,    96,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,   821,  -787,  -787,  -787,  -787,  -787,
     -33,  -787,  -787,  -787,  -787,  -787,   -30,  -787,  -787,  1165,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,  -787,
    -787,  -787,  -787,  -787,  -787,  -787,  -787,  1050,  -787,  -787,
    -787,  -787,  -787,  -787
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     566,   567,   700,  1167,   370,   250,   370,  1160,  1184,    45,
      46,  1161,    67,  1173,   119,    67,  1162,   531,   375,    47,
    1163,   120,   121,   375,   491,   363,   122,   363,   250,    49,
     993,   994,   995,   123,   124,   531,    55,   651,  1191,   653,
     565,   125,  1192,   691,   692,   126,   127,   492,    68,  1246,
      59,    68,   128,  1247,   668,   129,   130,   131,    69,   132,
     463,    69,   676,    60,  1285,   133,   745,   522,  1286,  1289,
     746,   685,   686,  1290,   846,   847,   848,   849,   850,   134,
     135,   697,   698,   136,   701,   371,  1291,   371,  1293,   137,
    1292,   747,  1294,   138,   139,  1295,    63,   140,  1337,  1296,
     141,   142,  1338,   748,    64,  1339,   364,   110,   364,  1340,
     143,   144,    76,   464,   749,   251,   522,   145,   146,   750,
     147,   148,   149,   150,    70,   454,   751,    70,  1343,   532,
     376,   454,  1344,   752,   151,   376,   465,   753,   251,   699,
     493,   466,   252,   152,   153,   113,   154,   532,   155,   156,
     754,   601,   157,   602,  1185,   231,   603,   797,   116,   276,
    1351,   604,   377,   117,  1352,   252,   118,   377,   494,   365,
     228,   365,  1134,  1135,  1168,   605,   606,   607,   755,   523,
     158,   608,   159,   756,  1174,   229,   160,   261,   533,   378,
     161,   162,   163,   164,   378,   277,   309,   165,   166,   609,
      77,   467,   757,   610,   611,   167,   533,  1164,  1165,  1166,
     232,   233,   234,    78,   758,   759,   760,   310,   235,   761,
     230,   311,   578,   693,   694,   257,   262,   612,   523,   613,
     260,   301,   302,    79,    80,   168,   278,   169,   524,   491,
      81,   263,   614,   170,   312,   313,   488,   643,   171,   314,
     236,   579,   304,   172,   305,   437,   307,   264,   315,   648,
     265,   266,   492,   615,   316,   790,   640,   521,   361,   455,
    1268,   279,  1269,   280,   281,   455,   820,   303,   362,   267,
     474,   317,   306,   237,   344,   345,  1270,   524,    82,    83,
    1271,   346,   616,   762,   763,   525,   456,   347,    84,    85,
     348,   725,   456,   764,   617,   439,   349,  1058,   440,   318,
     485,   282,   350,   283,   618,   351,   352,   319,    86,    87,
     353,   354,   580,   581,   582,   355,   284,   583,   356,   357,
     358,   384,   320,    88,   584,   385,   276,   386,  1268,   387,
    1269,   321,   322,    89,   525,   388,   389,   585,   390,   441,
    1272,   231,   442,   457,  1270,   493,   238,   815,  1271,   457,
    1005,   586,   587,   391,   392,   393,   718,   394,   285,   395,
     323,   324,   277,   731,   732,   733,   734,   735,   736,   737,
     396,   397,  1273,   494,   588,   398,   399,   400,   239,   401,
     402,   403,   895,   404,   286,   287,   483,   405,   490,   443,
     520,  1117,  1118,  1119,  1120,  1121,   232,   233,   234,   406,
     407,   408,   409,   278,   235,   410,   463,   444,  1272,   411,
     412,   261,   413,   414,   325,   415,   417,   419,   506,   420,
      90,    91,    92,   421,   422,   119,   423,   559,   424,   508,
     425,   359,   120,   121,   426,  1131,   236,   122,   279,   427,
     280,   281,   428,   429,   123,   124,   430,   431,   432,   433,
     262,   434,   125,   875,   435,   439,   126,   127,   440,   464,
     436,   475,   476,   128,   477,   263,   129,   130,   131,   237,
     132,   478,  1274,   479,   480,   481,   133,   482,   282,  1217,
     283,   264,   465,   486,   265,   266,   487,   466,   500,   501,
     134,   135,   502,   284,   136,   503,   504,   505,   509,   441,
     137,   510,   442,   267,   138,   139,   511,  1122,   140,   512,
     513,   141,   142,   514,  1129,  1130,   515,   516,   517,   518,
     519,   143,   144,   445,   538,   539,   540,   541,   145,   146,
     542,   147,   148,   149,   150,   285,   713,   543,   561,   745,
    1274,   544,   238,   746,   545,   151,   546,   467,   548,   443,
    1218,   549,   550,   551,   152,   153,   552,   154,   553,   155,
     156,   286,   287,   157,   747,   554,   555,   444,   556,   562,
     557,   558,   563,   564,   239,   565,   748,   568,   570,   569,
     571,  1219,  1303,   572,   573,   574,   577,   749,   575,   576,
     638,   158,   750,   159,   639,  1220,   642,   160,   645,   751,
     646,   161,   162,   163,   164,   655,   752,   650,   165,   166,
     753,  1303,   652,  1221,  1222,  1304,   167,   654,   656,  1223,
    1224,  1225,  1226,   754,   657,   658,  1305,   659,   660,   661,
    1092,  1093,  1227,   662,   664,   665,   666,   663,  1306,   667,
     669,   670,   671,   672,  1304,  1307,   168,   673,   169,  1308,
    1309,   755,   674,   675,   170,  1305,   756,   677,  1094,   171,
     679,   678,  1310,    77,   172,   680,   681,  1306,   683,   682,
     687,  1095,   684,   688,  1307,   757,    78,  1096,  1308,  1309,
     699,   706,   689,   445,   690,   695,   309,   758,   759,   760,
     696,  1310,   761,   708,  1097,  1311,    79,    80,   720,  1157,
    1312,   702,   703,    81,   709,   704,   705,   310,   578,  1313,
     711,   311,   712,   715,   717,   722,   723,   724,   727,   728,
     740,   729,  1098,   730,  1311,   738,  1314,  1315,  1316,   739,
    1099,  1100,   741,   742,   312,   313,   743,   579,  1313,   314,
     787,   788,   789,   744,   792,   793,   794,   786,   315,   795,
     796,    82,    83,   799,   316,  1314,  1315,  1316,   801,   802,
     798,    84,    85,   803,   800,  1101,   762,   763,     2,     3,
     804,   317,   805,     4,   806,  1232,   764,   807,     5,   808,
     809,    86,    87,   810,  1102,   811,   817,   812,   825,  1317,
     814,   818,     6,   822,     7,   823,    88,     8,   824,   318,
     826,   835,   827,   828,     9,  1318,    89,   319,   580,   581,
     582,   829,   836,   583,   830,  1319,   831,   837,  1317,    10,
     584,   832,   320,   833,   834,   838,   839,    11,    12,   840,
      13,   321,   322,   585,  1318,   841,   842,   843,   844,   845,
    1092,  1093,   853,   854,  1319,   855,  1233,   586,   587,   865,
     856,    14,   857,   858,   859,   860,   897,   898,   861,   862,
     323,   324,    15,    16,   863,   864,   900,   877,  1094,   866,
     588,   902,   867,   601,   868,   602,   869,  1234,   603,   903,
      17,  1095,   870,   604,  1018,   871,  1180,  1096,   872,  1006,
     873,  1235,   874,    90,    91,    92,    18,   605,   606,   607,
     878,   899,  1008,   608,  1097,   879,   901,   880,   881,  1236,
    1237,   882,   883,   884,   325,  1238,  1239,  1240,  1241,   885,
     886,   609,   888,   889,    19,   610,   611,   890,  1242,  1059,
     905,   891,  1098,    20,    21,   892,   893,   894,    22,    23,
    1099,   904,   906,   907,   908,   909,   910,   911,  1009,   612,
     912,   613,   913,   938,   939,   940,   941,   914,   942,   943,
     915,   944,   945,   946,   614,   916,   947,   917,   918,  1004,
     919,   920,   921,   922,   923,  1101,   948,   949,   950,   951,
     952,   953,   924,   954,   925,   615,   955,   926,   927,   928,
     929,   930,   931,   932,  1102,   959,   960,   961,   962,   933,
     963,   964,   934,   965,   966,   967,  1007,   935,   968,  1011,
     936,   937,   958,   979,   616,   980,   981,   982,   969,   970,
     971,   972,   973,   974,   983,   975,   617,   984,   976,   985,
     986,   987,   988,   989,   990,   991,   618,   992,   998,   999,
    1000,  1001,  1002,  1003,  1010,  1013,  1016,  1014,  1012,  1017,
    1021,  1022,  1015,  1023,  1024,  1025,  1026,  1027,  1028,  1060,
    1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
    1061,  1062,  1081,  1039,  1040,  1041,  1042,  1044,  1045,  1046,
    1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,
    1057,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,
    1072,  1073,  1074,  1075,  1076,  1077,  1078,  1083,  1079,  1080,
    1085,  1084,  1123,  1082,  1087,  1086,  1088,  1089,  1090,  1091,
    1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,
    1116,  1124,  1125,  1126,  1127,  1128,  1132,  1133,  1136,  1137,
    1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,
    1148,  1151,  1152,  1149,  1153,  1150,  1154,  1190,  1155,  1156,
    1171,  1172,  1177,  1178,  1179,  1183,  1188,  1189,  1193,  1297,
    1194,  1195,  1202,  1196,  1197,  1204,  1198,  1208,  1210,  1199,
    1200,  1201,  1212,  1203,  1213,  1214,  1215,  1216,  1230,  1231,
    1248,  1249,  1250,  1251,  1205,  1206,  1207,  1209,  1211,  1252,
    1253,   308,  1356,  1350,  1254,  1341,  1255,  1256,   489,  1257,
    1258,  1259,  1349,  1260,  1261,  1262,  1263,  1264,  1265,  1266,
    1267,  1278,  1279,  1280,  1281,  1282,  1283,  1284,   876,  1245,
    1299,  1298,   726,   560,  1300,   791,   816,  1353,  1354,  1355,
    1348,  1342,  1345,   719,   438,  1288,   821,  1287,   360,  1347,
    1346,     0,     0,   896,   649,     0,   641,   714,     0,  1301,
    1302,  1323,  1324,  1325,  1326,  1327,  1328,     0,   644,  1329,
       0,  1330,  1331,     0,  1332,     0,     0,  1333,  1334,  1335,
    1336,   484,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   507
};

static const short yycheck[] =
{
     348,   349,   431,    12,     1,     1,     1,   241,    71,   241,
     242,   245,     1,    12,     1,     1,   241,     1,     1,   243,
     245,     8,     9,     1,     1,     1,    13,     1,     1,   243,
      15,    16,    17,    20,    21,     1,   243,   385,   241,   387,
     124,    28,   245,   181,   182,    32,    33,    24,    37,   241,
     243,    37,    39,   245,   402,    42,    43,    44,    47,    46,
       1,    47,   410,   243,   241,    52,     1,     1,   245,   241,
       5,   419,   420,   245,   158,   159,   160,   161,   162,    66,
      67,   429,   430,    70,   432,    82,   241,    82,   241,    76,
     245,    26,   245,    80,    81,   241,   243,    84,   241,   245,
      87,    88,   245,    38,   243,   241,    82,   143,    82,   245,
      97,    98,   243,    54,    49,   111,     1,   104,   105,    54,
     107,   108,   109,   110,   113,     1,    61,   113,   241,   113,
     113,     1,   245,    68,   121,   113,    77,    72,   111,   124,
     117,    82,   138,   130,   131,   143,   133,   113,   135,   136,
      85,     1,   139,     3,   217,     1,     6,   505,   243,     1,
     241,    11,   145,   243,   245,   138,   243,   145,   145,   145,
     243,   145,   199,   200,   183,    25,    26,    27,   113,   113,
     167,    31,   169,   118,   183,   243,   173,     1,   172,   172,
     177,   178,   179,   180,   172,    37,     1,   184,   185,    49,
       1,   142,   137,    53,    54,   192,   172,   993,   994,   995,
      56,    57,    58,    14,   149,   150,   151,    22,    64,   154,
     243,    26,     1,   181,   182,   143,    40,    77,   113,    79,
     243,   243,   243,    34,    35,   222,    78,   224,   172,     1,
      41,    55,    92,   230,    49,    50,   242,   242,   235,    54,
      96,    30,   244,   240,   244,   242,   242,    71,    63,   242,
      74,    75,    24,   113,    69,   242,   242,   288,   243,   145,
      11,   113,    13,   115,   116,   145,   242,   241,   243,    93,
     241,    86,   244,   129,   244,   244,    27,   172,    89,    90,
      31,   244,   142,   228,   229,   229,   172,   244,    99,   100,
     244,   242,   172,   238,   154,     1,   244,   242,     4,   114,
     241,   153,   244,   155,   164,   244,   244,   122,   119,   120,
     244,   244,   101,   102,   103,   244,   168,   106,   244,   244,
     244,   244,   137,   134,   113,   244,     1,   244,    11,   244,
      13,   146,   147,   144,   229,   244,   244,   126,   244,    45,
      91,     1,    48,   229,    27,   117,   202,   242,    31,   229,
     708,   140,   141,   244,   244,   244,   242,   244,   210,   244,
     175,   176,    37,   203,   204,   205,   206,   207,   208,   209,
     244,   244,   123,   145,   163,   244,   244,   244,   234,   244,
     244,   244,   242,   244,   236,   237,   242,   244,   243,    95,
     242,   846,   847,   848,   849,   850,    56,    57,    58,   244,
     244,   244,   244,    78,    64,   244,     1,   113,    91,   244,
     244,     1,   244,   244,   229,   244,   244,   244,   242,   244,
     231,   232,   233,   244,   244,     1,   244,   242,   244,   241,
     244,   242,     8,     9,   244,   874,    96,    13,   113,   244,
     115,   116,   244,   244,    20,    21,   244,   244,   244,   244,
      40,   244,    28,   242,   244,     1,    32,    33,     4,    54,
     244,   244,   244,    39,   244,    55,    42,    43,    44,   129,
      46,   244,   223,   244,   244,   244,    52,   244,   153,    85,
     155,    71,    77,   244,    74,    75,   244,    82,   244,   244,
      66,    67,   244,   168,    70,   244,   244,   244,   244,    45,
      76,   244,    48,    93,    80,    81,   244,   865,    84,   244,
     244,    87,    88,   244,   872,   873,   244,   244,   244,   244,
     244,    97,    98,   229,   143,   143,   143,   241,   104,   105,
     241,   107,   108,   109,   110,   210,   242,   244,   181,     1,
     223,   244,   202,     5,   244,   121,   244,   142,   244,    95,
     156,   244,   244,   244,   130,   131,   244,   133,   244,   135,
     136,   236,   237,   139,    26,   244,   244,   113,   244,   124,
     244,   244,   124,   181,   234,   124,    38,   124,   181,   124,
     181,   187,     5,   181,   181,   181,   241,    49,   181,   181,
     244,   167,    54,   169,   244,   201,   244,   173,   244,    61,
     244,   177,   178,   179,   180,   124,    68,   181,   184,   185,
      72,     5,   181,   219,   220,    38,   192,   181,   143,   225,
     226,   227,   228,    85,   124,   181,    49,   181,   181,   124,
      22,    23,   238,   143,   124,   124,   124,   181,    61,   181,
     181,   124,   143,   181,    38,    68,   222,   124,   224,    72,
      73,   113,   124,   124,   230,    49,   118,   124,    50,   235,
     124,   143,    85,     1,   240,   124,   181,    61,   181,   244,
     181,    63,   244,   143,    68,   137,    14,    69,    72,    73,
     124,   241,   181,   229,   181,   181,     1,   149,   150,   151,
     181,    85,   154,   244,    86,   118,    34,    35,   241,   148,
     123,   181,   181,    41,   244,   181,   181,    22,     1,   132,
     244,    26,   244,   244,   244,   244,   244,   244,   143,   143,
     181,   143,   114,   143,   118,   143,   149,   150,   151,   143,
     122,   123,   241,   143,    49,    50,   143,    30,   132,    54,
     244,   244,   244,   241,   181,   181,   181,   241,    63,   181,
     181,    89,    90,   143,    69,   149,   150,   151,   143,   143,
     241,    99,   100,   143,   181,   157,   228,   229,     0,     1,
     143,    86,   143,     5,   143,    85,   238,   124,    10,   143,
     143,   119,   120,   241,   176,   241,   241,   244,   181,   212,
     244,   244,    24,   241,    26,   241,   134,    29,   241,   114,
     143,   143,   181,   181,    36,   228,   144,   122,   101,   102,
     103,   244,   124,   106,   181,   238,   181,   143,   212,    51,
     113,   181,   137,   181,   181,   143,   181,    59,    60,   143,
      62,   146,   147,   126,   228,   241,   241,   241,   241,   241,
      22,    23,   241,   241,   238,   241,   156,   140,   141,   244,
     241,    83,   241,   241,   241,   241,   143,   143,   241,   241,
     175,   176,    94,    95,   241,   241,   143,   241,    50,   244,
     163,   143,   244,     1,   244,     3,   244,   187,     6,   143,
     112,    63,   244,    11,   124,   244,   148,    69,   244,   181,
     244,   201,   244,   231,   232,   233,   128,    25,    26,    27,
     244,   241,   143,    31,    86,   244,   241,   244,   244,   219,
     220,   244,   244,   244,   229,   225,   226,   227,   228,   244,
     244,    49,   244,   244,   156,    53,    54,   244,   238,   765,
     241,   244,   114,   165,   166,   244,   244,   244,   170,   171,
     122,   244,   241,   241,   241,   241,   241,   241,   143,    77,
     241,    79,   241,   188,   189,   190,   191,   241,   193,   194,
     241,   196,   197,   198,    92,   241,   201,   241,   241,   244,
     241,   241,   241,   241,   241,   157,   211,   212,   213,   214,
     215,   216,   241,   218,   241,   113,   221,   241,   241,   241,
     241,   241,   241,   241,   176,   188,   189,   190,   191,   241,
     193,   194,   241,   196,   197,   198,   244,   241,   201,   143,
     241,   241,   241,   241,   142,   241,   241,   241,   211,   212,
     213,   214,   215,   216,   241,   218,   154,   241,   221,   241,
     241,   241,   241,   241,   241,   241,   164,   241,   241,   241,
     241,   241,   241,   241,   241,   143,   143,   241,   244,   143,
     241,   241,   244,   241,   241,   241,   241,   241,   241,   143,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     143,   143,   143,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   143,   241,   241,
     143,   241,   124,   244,   241,   244,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   124,   124,   124,   143,   124,   241,   143,   181,   143,
     143,   181,   181,   181,   143,   244,   143,   143,   143,   143,
     124,   241,   241,   143,   241,   143,   241,   186,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   181,   124,
     143,   181,   143,   181,   244,   143,   181,   143,   143,   181,
     181,   181,   241,   181,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   181,   181,   181,   181,   181,   241,
     241,    71,  1352,  1312,   241,  1247,   241,   241,   253,   241,
     241,   241,  1296,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   589,  1100,
     241,  1192,   469,   326,   241,   495,   526,  1338,  1340,  1344,
    1294,  1273,  1286,   459,   173,  1163,   534,  1161,    93,  1292,
    1290,    -1,    -1,   619,   380,    -1,   366,   446,    -1,   241,
     241,   241,   241,   241,   241,   241,   241,    -1,   372,   241,
      -1,   241,   241,    -1,   241,    -1,    -1,   241,   241,   241,
     241,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   268
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   247,     0,     1,     5,    10,    24,    26,    29,    36,
      51,    59,    60,    62,    83,    94,    95,   112,   128,   156,
     165,   166,   170,   171,   248,   253,   258,   272,   278,   289,
     318,   334,   347,   371,   378,   388,   397,   424,   434,   440,
     445,   455,   517,   533,   551,   241,   242,   243,   348,   243,
     319,   398,   435,   441,   446,   243,   518,   425,   335,   243,
     243,   290,   372,   243,   243,   379,   389,     1,    37,    47,
     113,   273,   274,   275,   276,   277,   243,     1,    14,    34,
      35,    41,    89,    90,    99,   100,   119,   120,   134,   144,
     231,   232,   233,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     143,   320,   324,   143,   399,   403,   243,   243,   243,     1,
       8,     9,    13,    20,    21,    28,    32,    33,    39,    42,
      43,    44,    46,    52,    66,    67,    70,    76,    80,    81,
      84,    87,    88,    97,    98,   104,   105,   107,   108,   109,
     110,   121,   130,   131,   133,   135,   136,   139,   167,   169,
     173,   177,   178,   179,   180,   184,   185,   192,   222,   224,
     230,   235,   240,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   508,   512,   513,   514,   515,   516,   243,   243,
     243,     1,    56,    57,    58,    64,    96,   129,   202,   234,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
       1,   111,   138,   254,   255,   256,   257,   143,   291,   295,
     243,     1,    40,    55,    71,    74,    75,    93,   552,   553,
     554,   555,   556,   557,   558,   559,     1,    37,    78,   113,
     115,   116,   153,   155,   168,   210,   236,   237,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   243,   243,   241,   244,   244,   244,   242,   274,     1,
      22,    26,    49,    50,    54,    63,    69,    86,   114,   122,
     137,   146,   147,   175,   176,   229,   349,   350,   351,   352,
     353,   354,   355,   356,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   242,
     535,   243,   243,     1,    82,   145,   436,   437,   438,   439,
       1,    82,   442,   443,   444,     1,   113,   145,   172,   447,
     451,   452,   453,   454,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   509,   244,   505,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   242,   457,     1,
       4,    45,    48,    95,   113,   229,   519,   520,   521,   522,
     523,   527,   528,   529,     1,   145,   172,   229,   426,   430,
     431,   432,   433,     1,    54,    77,    82,   142,   336,   340,
     341,   342,   345,   346,   241,   244,   244,   244,   244,   244,
     244,   244,   244,   242,   280,   241,   244,   244,   242,   255,
     243,     1,    24,   117,   145,   373,   374,   375,   376,   377,
     244,   244,   244,   244,   244,   244,   242,   553,   241,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     242,   260,     1,   113,   172,   229,   380,   381,   382,   383,
     384,     1,   113,   172,   390,   391,   392,   393,   143,   143,
     143,   241,   241,   244,   244,   244,   244,   357,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   242,
     350,   181,   124,   124,   181,   124,   250,   250,   124,   124,
     181,   181,   181,   181,   181,   181,   181,   241,     1,    30,
     101,   102,   103,   106,   113,   126,   140,   141,   163,   321,
     322,   323,   325,   326,   327,   328,   329,   330,   331,   332,
     333,     1,     3,     6,    11,    25,    26,    27,    31,    49,
      53,    54,    77,    79,    92,   113,   142,   154,   164,   400,
     401,   402,   404,   405,   406,   407,   408,   409,   410,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   244,   244,
     242,   437,   244,   242,   443,   244,   244,   448,   242,   452,
     181,   250,   181,   250,   181,   124,   143,   124,   181,   181,
     181,   124,   143,   181,   124,   124,   124,   181,   250,   181,
     124,   143,   181,   124,   124,   124,   250,   124,   143,   124,
     124,   181,   244,   181,   244,   250,   250,   181,   143,   181,
     181,   181,   182,   181,   182,   181,   181,   250,   250,   124,
     252,   250,   181,   181,   181,   181,   241,   530,   244,   244,
     524,   244,   244,   242,   520,   244,   427,   244,   242,   431,
     241,   337,   244,   244,   244,   242,   341,   143,   143,   143,
     143,   203,   204,   205,   206,   207,   208,   209,   143,   143,
     181,   241,   143,   143,   241,     1,     5,    26,    38,    49,
      54,    61,    68,    72,    85,   113,   118,   137,   149,   150,
     151,   154,   228,   229,   238,   292,   293,   294,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   241,   244,   244,   244,
     242,   374,   181,   181,   181,   181,   181,   250,   241,   143,
     181,   143,   143,   143,   143,   143,   143,   124,   143,   143,
     241,   241,   244,   385,   244,   242,   381,   241,   244,   394,
     242,   391,   241,   241,   241,   181,   143,   181,   181,   244,
     181,   181,   181,   181,   181,   143,   124,   143,   143,   181,
     143,   241,   241,   241,   241,   241,   158,   159,   160,   161,
     162,   249,   250,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   242,   322,   241,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   411,   244,   244,
     244,   244,   244,   244,   244,   242,   401,   143,   143,   241,
     143,   241,   143,   143,   244,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   188,   189,
     190,   191,   193,   194,   196,   197,   198,   201,   211,   212,
     213,   214,   215,   216,   218,   221,   510,   511,   241,   188,
     189,   190,   191,   193,   194,   196,   197,   198,   201,   211,
     212,   213,   214,   215,   216,   218,   221,   506,   507,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,    15,    16,    17,   251,   252,   241,   241,
     241,   241,   241,   241,   244,   250,   181,   244,   143,   143,
     241,   143,   244,   143,   241,   244,   143,   143,   124,   343,
     344,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   244,
     244,   244,   244,   314,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   242,   293,
     143,   143,   143,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   143,   244,   143,   241,   143,   244,   241,   241,   241,
     241,   241,    22,    23,    50,    63,    69,    86,   114,   122,
     123,   157,   176,   358,   359,   360,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   249,   249,   249,
     249,   249,   250,   124,   124,   124,   124,   143,   124,   250,
     250,   252,   241,   143,   199,   200,   181,   143,   143,   181,
     181,   181,   143,   244,   143,   143,   143,   143,   124,   143,
     143,   241,   241,   241,   241,   241,   241,   148,   449,   450,
     241,   245,   241,   245,   251,   251,   251,    12,   183,   531,
     532,   241,   241,    12,   183,   525,   526,   241,   241,   241,
     148,   428,   429,   241,    71,   217,   338,   339,   241,   241,
     186,   241,   245,   181,   143,   181,   181,   244,   181,   181,
     181,   181,   143,   181,   143,   181,   181,   181,   143,   181,
     143,   181,   241,   241,   241,   241,   241,    85,   156,   187,
     201,   219,   220,   225,   226,   227,   228,   238,   386,   387,
     241,   241,    85,   156,   187,   201,   219,   220,   225,   226,
     227,   228,   238,   395,   396,   360,   241,   245,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,    11,    13,
      27,    31,    91,   123,   223,   412,   413,   414,   241,   241,
     241,   241,   241,   241,   241,   241,   245,   511,   507,   241,
     245,   241,   245,   241,   245,   241,   245,   124,   344,   241,
     241,   241,   241,     5,    38,    49,    61,    68,    72,    73,
      85,   118,   123,   132,   149,   150,   151,   212,   228,   238,
     315,   316,   317,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   245,   241,
     245,   359,   414,   241,   245,   450,   532,   526,   429,   339,
     317,   241,   245,   387,   396,   413,   316
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)           \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#define YYLEX	yylex ()

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*-----------------------------.
| Print this symbol on YYOUT.  |
`-----------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yysymprint (FILE* yyout, int yytype, YYSTYPE yyvalue)
#else
yysymprint (yyout, yytype, yyvalue)
    FILE* yyout;
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyout, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyout, yytoknum[yytype], yyvalue);
# endif
    }
  else
    YYFPRINTF (yyout, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyout, ")");
}
#endif /* YYDEBUG. */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yydestruct (int yytype, YYSTYPE yyvalue)
#else
yydestruct (yytype, yyvalue)
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  switch (yytype)
    {
      default:
        break;
    }
}



/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of parse errors so far.  */
int yynerrs;


int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with.  */

  if (yychar <= 0)		/* This means end of input.  */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more.  */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

      /* We have to keep this `#if YYDEBUG', since we use variables
	 which are defined only if `YYDEBUG' is set.  */
      YYDPRINTF ((stderr, "Next token is "));
      YYDSYMPRINT ((stderr, yychar1, yylval));
      YYDPRINTF ((stderr, "\n"));
    }

  /* If the proper action on seeing token YYCHAR1 is to reduce or to
     detect an error, take that action.  */
  yyn += yychar1;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yychar1)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];



#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn - 1, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] >= 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif
  switch (yyn)
    {
        case 26:
#line 405 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 407 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 411 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 415 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 419 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 423 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 427 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 432 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 433 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 434 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 435 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 436 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 450 "ircd_parser.y"
    {
#ifndef STATIC_MODULES /* NOOP in the static case */
  if (ypass == 2)
  {
    char *m_bn;

    m_bn = basename(yylval.string);

    /* I suppose we should just ignore it if it is already loaded(since
     * otherwise we would flood the opers on rehash) -A1kmm.
     */
    add_conf_module(yylval.string);
  }
#endif
}
    break;

  case 47:
#line 467 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 491 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2 && ServerInfo.ctx) 
  {
    if (!ServerInfo.rsa_private_key_file)
    {
      yyerror("No rsa_private_key_file specified, SSL disabled");
      break;
    }

    if (SSL_CTX_use_certificate_file(ServerInfo.ctx,
      yylval.string, SSL_FILETYPE_PEM) <= 0)
    {
      yyerror(ERR_lib_error_string(ERR_get_error()));
      break;
    }

    if (SSL_CTX_use_PrivateKey_file(ServerInfo.ctx,
      ServerInfo.rsa_private_key_file, SSL_FILETYPE_PEM) <= 0)
    {
      yyerror(ERR_lib_error_string(ERR_get_error()));
      break;
    }

    if (!SSL_CTX_check_private_key(ServerInfo.ctx))
    {
      yyerror("RSA private key does not match the SSL certificate public key!");
      break;
    }
  }
#endif
}
    break;

  case 64:
#line 525 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 1)
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
      yyerror("File open failed, ignoring");
      break;
    }

    ServerInfo.rsa_private_key = (RSA *)PEM_read_bio_RSAPrivateKey(file, NULL,
      0, NULL);

    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);

    if (ServerInfo.rsa_private_key == NULL)
    {
      yyerror("Couldn't extract key, ignoring");
      break;
    }

    if (!RSA_check_key(ServerInfo.rsa_private_key))
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;

      yyerror("Invalid key, ignoring");
      break;
    }

    /* require 2048 bit (256 byte) key */
    if (RSA_size(ServerInfo.rsa_private_key) != 256)
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;

      yyerror("Not a 2048 bit key, ignoring");
    }
  }
#endif
}
    break;

  case 65:
#line 585 "ircd_parser.y"
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
}
    break;

  case 66:
#line 599 "ircd_parser.y"
    {
  /* this isn't rehashable */
  if (ypass == 2 && !ServerInfo.sid)
  {
    if ((strlen(yylval.string) == IRC_MAXSID) && IsDigit(yylval.string[0])
	&& IsAlNum(yylval.string[1]) && IsAlNum(yylval.string[2]))
    {
      DupString(ServerInfo.sid, yylval.string);
    }
    else
    {
      ilog(L_ERROR, "Ignoring config file entry SID -- invalid SID. Aborting.");
      exit(0);
    }
  }
}
    break;

  case 67:
#line 617 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 626 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char *p;

    if ((p = strchr(yylval.string, ' ')) != NULL)
      p = '\0';

    MyFree(ServerInfo.network_name);
    DupString(ServerInfo.network_name, yylval.string);
  }
}
    break;

  case 69:
#line 640 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 649 "ircd_parser.y"
    {
  if (ypass == 2 && *yylval.string != '*')
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
      assert(res != NULL);

      memcpy(&ServerInfo.ip, res->ai_addr, res->ai_addrlen);
      ServerInfo.ip.ss.ss_family = res->ai_family;
      ServerInfo.ip.ss_len = res->ai_addrlen;
      irc_freeaddrinfo(res);

      ServerInfo.specific_ipv4_vhost = 1;
    }
  }
}
    break;

  case 71:
#line 677 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2 && *yylval.string != '*')
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
}
    break;

  case 72:
#line 707 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (MAXCONN >= yyvsp[-1].number)
    {
      ServerInfo.max_clients = yyvsp[-1].number;
    }
    else
    {
      ilog(L_ERROR, "Setting serverinfo_max_clients to MAXCONN");
      ServerInfo.max_clients = MAXCONN;
    }
  }
}
    break;

  case 73:
#line 723 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
    {
      /* Don't become a hub if we have a lazylink active. */
      if (!ServerInfo.hub && uplink && IsCapable(uplink, CAP_LL))
      {
        sendto_realops_flags(UMODE_ALL, L_ALL,
                             "Ignoring config file line hub=yes; "
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
      dlink_node *ptr = NULL;

      ServerInfo.hub = 0;
      delete_capability("HUB");

      /* Don't become a leaf if we have a lazylink active. */
      DLINK_FOREACH(ptr, serv_list.head)
      {
        const struct Client *acptr = ptr->data;
        if (MyConnect(acptr) && IsCapable(acptr, CAP_LL))
        {
          sendto_realops_flags(UMODE_ALL, L_ALL,
                               "Ignoring config file line hub=no; "
                               "due to active LazyLink (%s)",
                               acptr->name);
          add_capability("HUB", CAP_HUB, 1);
          ServerInfo.hub = 1;
          break;
        }
      }
    }
  }
}
    break;

  case 81:
#line 779 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 788 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 797 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 96:
#line 821 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 825 "ircd_parser.y"
    {
                        }
    break;

  case 98:
#line 829 "ircd_parser.y"
    {
                        }
    break;

  case 99:
#line 833 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 100:
#line 840 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 101:
#line 847 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 102:
#line 854 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 103:
#line 858 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 104:
#line 862 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 105:
#line 866 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 106:
#line 870 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 107:
#line 874 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 108:
#line 878 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 109:
#line 884 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 110:
#line 893 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(OPER_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
}
    break;

  case 111:
#line 905 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;
    dlink_node *ptr;
    dlink_node *next_ptr;

    conf_add_class_to_conf(yy_conf, class_name);

    /* Now, make sure there is a copy of the "base" given oper
     * block in each of the collected copies
     */

    DLINK_FOREACH_SAFE(ptr, next_ptr, col_conf_list.head)
    {
      struct AccessItem *new_aconf;
      struct ConfItem *new_conf;
      yy_tmp = ptr->data;

      new_conf = make_conf_item(OPER_TYPE);
      new_aconf = (struct AccessItem *)map_to_conf(new_conf);

      new_aconf->flags = yy_aconf->flags;

      if (yy_conf->name != NULL)
        DupString(new_conf->name, yy_conf->name);
      if (yy_tmp->user != NULL)
	DupString(new_aconf->user, yy_tmp->user);
      else
	DupString(new_aconf->user, "*");
      if (yy_tmp->host != NULL)
	DupString(new_aconf->host, yy_tmp->host);
      else
	DupString(new_aconf->host, "*");
      conf_add_class_to_conf(new_conf, class_name);
      if (yy_aconf->passwd != NULL)
        DupString(new_aconf->passwd, yy_aconf->passwd);

      new_aconf->port = yy_aconf->port;
#ifdef HAVE_LIBCRYPTO
      if (yy_aconf->rsa_public_key_file != NULL)
      {
        BIO *file;

        DupString(new_aconf->rsa_public_key_file,
		  yy_aconf->rsa_public_key_file);

        file = BIO_new_file(yy_aconf->rsa_public_key_file, "r");
        new_aconf->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, 
							   NULL, 0, NULL);
        BIO_set_close(file, BIO_CLOSE);
        BIO_free(file);
      }
#endif

#ifdef HAVE_LIBCRYPTO
      if (yy_tmp->name && (yy_tmp->passwd || yy_aconf->rsa_public_key)
	  && yy_tmp->host)
#else
      if (yy_tmp->name && yy_tmp->passwd && yy_tmp->host)
#endif
      {
        conf_add_class_to_conf(new_conf, class_name);
	if (yy_tmp->name != NULL)
	  DupString(new_conf->name, yy_tmp->name);
      }

      dlinkDelete(&yy_tmp->node, &col_conf_list);
      free_collect_item(yy_tmp);
    }

    yy_conf = NULL;
    yy_aconf = NULL;


    MyFree(class_name);
    class_name = NULL;
  }
}
    break;

  case 136:
#line 996 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > OPERNICKLEN)
      yylval.string[OPERNICKLEN] = '\0';

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 137:
#line 1008 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > OPERNICKLEN)
      yylval.string[OPERNICKLEN] = '\0';

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 138:
#line 1020 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
    {
      split_nuh(yylval.string, NULL, &yy_aconf->user, &yy_aconf->host);
    }
    else
    {
      yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
      split_nuh(yylval.string, NULL, &yy_tmp->user, &yy_tmp->host);
      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 139:
#line 1039 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
}
    break;

  case 140:
#line 1051 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      SetConfEncrypted(yy_aconf);
    else
      ClearConfEncrypted(yy_aconf);
  }
}
    break;

  case 141:
#line 1062 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
    else
      yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 142:
#line 1073 "ircd_parser.y"
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
      yyerror("Ignoring rsa_public_key_file -- file doesn't exist");
      break;
    }

    yy_aconf->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL);

    if (yy_aconf->rsa_public_key == NULL)
    {
      yyerror("Ignoring rsa_public_key_file -- Key invalid; check key syntax.");
      break;
    }

    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif /* HAVE_LIBCRYPTO */
}
    break;

  case 143:
#line 1115 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 144:
#line 1124 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
    else
      yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 145:
#line 1135 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REMOTE;
    else
      yy_aconf->port &= ~OPER_FLAG_REMOTE; 
  }
}
    break;

  case 146:
#line 1146 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REMOTEBAN;
    else
      yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 147:
#line 1157 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_K;
    else
      yy_aconf->port &= ~OPER_FLAG_K;
  }
}
    break;

  case 148:
#line 1168 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_X;
    else
      yy_aconf->port &= ~OPER_FLAG_X;
  }
}
    break;

  case 149:
#line 1179 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_UNKLINE;
    else
      yy_aconf->port &= ~OPER_FLAG_UNKLINE; 
  }
}
    break;

  case 150:
#line 1190 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_GLINE;
    else
      yy_aconf->port &= ~OPER_FLAG_GLINE;
  }
}
    break;

  case 151:
#line 1201 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_N;
    else
      yy_aconf->port &= ~OPER_FLAG_N;
  }
}
    break;

  case 152:
#line 1212 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_DIE;
    else
      yy_aconf->port &= ~OPER_FLAG_DIE;
  }
}
    break;

  case 153:
#line 1223 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REHASH;
    else
      yy_aconf->port &= ~OPER_FLAG_REHASH;
  }
}
    break;

  case 154:
#line 1234 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_ADMIN;
    else
      yy_aconf->port &= ~OPER_FLAG_ADMIN;
  }
}
    break;

  case 155:
#line 1245 "ircd_parser.y"
    {
}
    break;

  case 159:
#line 1249 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 160:
#line 1250 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 161:
#line 1253 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 162:
#line 1260 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 163:
#line 1267 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 164:
#line 1274 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 165:
#line 1281 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 166:
#line 1288 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 167:
#line 1295 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 168:
#line 1302 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 169:
#line 1309 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 170:
#line 1316 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 171:
#line 1323 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 172:
#line 1330 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 173:
#line 1337 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 174:
#line 1344 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 175:
#line 1351 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 176:
#line 1358 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 177:
#line 1371 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 178:
#line 1378 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    if ((yy_conf != NULL) && (yy_conf->name == NULL))
    {
      delete_conf_item(yy_conf);
      yy_conf = NULL;
      yy_class = NULL;
    }
  }
}
    break;

  case 194:
#line 1406 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    struct ConfItem *cconf = find_exact_name_conf(CLASS_TYPE, yylval.string,
                                                  NULL, NULL);
    struct ClassItem *class = NULL;

    if (cconf != NULL)
    {
      if (cconf == yy_conf)
        cconf = NULL;
      else
        class = (struct ClassItem *) map_to_conf(cconf);
    }

    if (class != NULL && MaxTotal(class) >= 0)
    {
      yyerror("Multiple classes with the same name, using the first entry");
      MyFree(yy_conf->name);
      yy_conf->name = NULL;
    }
    else
    {
      if (class != NULL)
      {
        PingFreq(class) = PingFreq(yy_class);
	PingWarning(class) = PingWarning(yy_class);
        MaxPerIp(class) = MaxPerIp(yy_class);
        ConFreq(class) = ConFreq(yy_class);
        MaxTotal(class) = MaxTotal(yy_class);
        MaxGlobal(class) = MaxGlobal(yy_class);
        MaxLocal(class) = MaxLocal(yy_class);
        MaxIdent(class) = MaxIdent(yy_class);
        MaxSendq(class) = MaxSendq(yy_class);
        delete_conf_item(yy_conf);
        yy_conf = cconf;
        yy_class = class;
        /* allow changing case - replace old name */
      }

      MyFree(yy_conf->name);
      DupString(yy_conf->name, yylval.string);
    }
  }
}
    break;

  case 195:
#line 1453 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    struct ConfItem *cconf = find_exact_name_conf(CLASS_TYPE, yylval.string,
                                                  NULL, NULL);
    struct ClassItem *class = NULL;

    if (cconf != NULL)
    {
      if (cconf == yy_conf)
        cconf = NULL;
      else
        class = (struct ClassItem *) map_to_conf(cconf);
    }

    if (class != NULL && MaxTotal(class) >= 0)
    {
      yyerror("Multiple classes with the same name, using the first entry");
      MyFree(yy_conf->name);
      yy_conf->name = NULL;
    }
    else
    {
      if (class != NULL)
      {
        PingFreq(class) = PingFreq(yy_class);
	PingWarning(class) = PingWarning(yy_class);
        MaxPerIp(class) = MaxPerIp(yy_class);
        ConFreq(class) = ConFreq(yy_class);
        MaxTotal(class) = MaxTotal(yy_class);
        MaxGlobal(class) = MaxGlobal(yy_class);
        MaxLocal(class) = MaxLocal(yy_class);
        MaxIdent(class) = MaxIdent(yy_class);
        MaxSendq(class) = MaxSendq(yy_class);
        delete_conf_item(yy_conf);
        yy_conf = cconf;
        yy_class = class;
        /* allow changing case - replace old name */
      }

      MyFree(yy_conf->name);
      DupString(yy_conf->name, yylval.string);
    }
  }
}
    break;

  case 196:
#line 1500 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 197:
#line 1506 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = yyvsp[-1].number;
}
    break;

  case 198:
#line 1512 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 199:
#line 1518 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 200:
#line 1524 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 201:
#line 1530 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 202:
#line 1536 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 203:
#line 1542 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 204:
#line 1548 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 205:
#line 1557 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 206:
#line 1564 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 207:
#line 1573 "ircd_parser.y"
    {
}
    break;

  case 211:
#line 1578 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 212:
#line 1582 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 223:
#line 1595 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if ((listener_flags & LISTENER_SSL))
#ifdef HAVE_LIBCRYPTO
      if (!ServerInfo.ctx)
#endif
      {
        yyerror("SSL not available - port closed");
	break;
      }
    add_listener(yyvsp[0].number, listener_address, listener_flags);
    listener_flags = 0;
  }
}
    break;

  case 224:
#line 1610 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    int i;

    if ((listener_flags & LISTENER_SSL))
#ifdef HAVE_LIBCRYPTO
      if (!ServerInfo.ctx)
#endif
      {
        yyerror("SSL not available - port closed");
	break;
      }

    for (i = yyvsp[-2].number; i <= yyvsp[0].number; ++i)
      add_listener(i, listener_address, listener_flags);

    listener_flags = 0;
  }
}
    break;

  case 225:
#line 1632 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 226:
#line 1641 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 227:
#line 1653 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLIENT_TYPE);
    yy_aconf = map_to_conf(yy_conf);
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
}
    break;

  case 228:
#line 1665 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp = NULL;
    dlink_node *ptr = NULL, *next_ptr = NULL;

    if (yy_aconf->user && yy_aconf->host)
    {
      conf_add_class_to_conf(yy_conf, class_name);
      add_conf_by_address(CONF_CLIENT, yy_aconf);
    }
    else
      delete_conf_item(yy_conf);

    /* copy over settings from first struct */
    DLINK_FOREACH_SAFE(ptr, next_ptr, col_conf_list.head)
    {
      struct AccessItem *new_aconf;
      struct ConfItem *new_conf;

      new_conf = make_conf_item(CLIENT_TYPE);
      new_aconf = map_to_conf(new_conf);

      yy_tmp = ptr->data;

      assert(yy_tmp->user && yy_tmp->host);

      if (yy_aconf->passwd != NULL)
        DupString(new_aconf->passwd, yy_aconf->passwd);
      if (yy_conf->name != NULL)
        DupString(new_conf->name, yy_conf->name);
      if (yy_aconf->passwd != NULL)
        DupString(new_aconf->passwd, yy_aconf->passwd);

      new_aconf->flags = yy_aconf->flags;
      new_aconf->port  = yy_aconf->port;

      DupString(new_aconf->user, yy_tmp->user);
      collapse(new_aconf->user);

      DupString(new_aconf->host, yy_tmp->host);
      collapse(new_aconf->host);

      conf_add_class_to_conf(new_conf, class_name);
      add_conf_by_address(CONF_CLIENT, new_aconf);
      dlinkDelete(&yy_tmp->node, &col_conf_list);
      free_collect_item(yy_tmp);
    }

    MyFree(class_name);
    class_name = NULL;
    yy_conf = NULL;
    yy_aconf = NULL;
  }
}
    break;

  case 248:
#line 1730 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
      split_nuh(yylval.string, NULL, &yy_aconf->user, &yy_aconf->host);
    else
    {
      yy_tmp = MyMalloc(sizeof(struct CollectItem));
      split_nuh(yylval.string, NULL, &yy_tmp->user, &yy_tmp->host);
      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 249:
#line 1749 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    /* be paranoid */
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
}
    break;

  case 250:
#line 1762 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
  }
}
    break;

  case 251:
#line 1773 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 252:
#line 1782 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      SetConfEncrypted(yy_aconf);
    else
      ClearConfEncrypted(yy_aconf);
  }
}
    break;

  case 253:
#line 1793 "ircd_parser.y"
    {
}
    break;

  case 257:
#line 1797 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 258:
#line 1798 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 259:
#line 1801 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 260:
#line 1809 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 261:
#line 1816 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 262:
#line 1823 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 263:
#line 1830 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 264:
#line 1837 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 265:
#line 1844 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 266:
#line 1851 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 267:
#line 1858 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 268:
#line 1865 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 269:
#line 1874 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
  }
}
    break;

  case 270:
#line 1885 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 271:
#line 1896 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 272:
#line 1907 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 273:
#line 1918 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
  }
}
    break;

  case 274:
#line 1929 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
  }
}
    break;

  case 275:
#line 1941 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);

    if (strlen(yylval.string) < HOSTLEN)
    {    
      DupString(yy_conf->name, yylval.string);
      yy_aconf->flags |= CONF_FLAGS_SPOOF_IP;
    }
    else
    {
      ilog(L_ERROR, "Spoofs must be less than %d..ignoring it", HOSTLEN);
      yy_conf->name = NULL;
    }
  }
}
    break;

  case 276:
#line 1960 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 277:
#line 1970 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 278:
#line 1979 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 279:
#line 1994 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 280:
#line 2001 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 287:
#line 2013 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 288:
#line 2022 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (IsChanPrefix(*yylval.string))
    {
      char def_reason[] = "No reason";

      create_channel_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }
  /* ignore it for now.. but we really should make a warning if
   * its an erroneous name --fl_ */
}
    break;

  case 289:
#line 2037 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 290:
#line 2050 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 291:
#line 2058 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 298:
#line 2069 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 299:
#line 2078 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 300:
#line 2086 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 304:
#line 2093 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 305:
#line 2097 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 306:
#line 2101 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 307:
#line 2105 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 308:
#line 2109 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 309:
#line 2113 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 310:
#line 2117 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 311:
#line 2121 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 312:
#line 2125 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 313:
#line 2129 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 314:
#line 2133 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 315:
#line 2142 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 316:
#line 2149 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 322:
#line 2162 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 323:
#line 2168 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 327:
#line 2175 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 328:
#line 2179 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 329:
#line 2183 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 330:
#line 2187 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 331:
#line 2191 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 332:
#line 2195 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 333:
#line 2199 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 334:
#line 2203 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 335:
#line 2207 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 336:
#line 2211 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 337:
#line 2215 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 338:
#line 2224 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(SERVER_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->passwd = NULL;
    /* defaults */
    yy_aconf->port = PORTNUM;

    if (ConfigFileEntry.burst_away)
      yy_aconf->flags = CONF_FLAGS_BURST_AWAY;
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
}
    break;

  case 339:
#line 2242 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_hconf=NULL;
    struct CollectItem *yy_lconf=NULL;
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
	  if (conf_add_server(yy_conf, scount, class_name) >= 0)
	  {
	    ++scount;
	  }
	  else
	  {
	    delete_conf_item(yy_conf);
	    yy_conf = NULL;
	    yy_aconf = NULL;
	  }
	}
	else
	{
	  /* Even if yy_conf ->name is NULL
	   * should still unhook any hub/leaf confs still pending
	   */
	  unhook_hub_leaf_confs();

	  if (yy_conf->name != NULL)
	  {
#ifndef HAVE_LIBCRYPTO
	    if (IsConfCryptLink(yy_aconf))
	      yyerror("Ignoring connect block -- no OpenSSL support");
#else
	    if (IsConfCryptLink(yy_aconf) && !yy_aconf->rsa_public_key)
	      yyerror("Ignoring connect block -- missing key");
#endif
	    if (yy_aconf->host == NULL)
	      yyerror("Ignoring connect block -- missing host");
	    else if (!IsConfCryptLink(yy_aconf) && 
		    (!yy_aconf->passwd || !yy_aconf->spasswd))
              yyerror("Ignoring connect block -- missing password");
	  }


          /* XXX
           * This fixes a try_connections() core (caused by invalid class_ptr
           * pointers) reported by metalrock. That's an ugly fix, but there
           * is currently no better way. The entire config subsystem needs an
           * rewrite ASAP. make_conf_item() shouldn't really add things onto
           * a doubly linked list immediately without any sanity checks!  -Michael
           */
          delete_conf_item(yy_conf);

          yy_aconf = NULL;
	  yy_conf = NULL;
	}

      /*
       * yy_conf is still pointing at the server that is having
       * a connect block built for it. This means, y_aconf->name 
       * points to the actual irc name this server will be known as.
       * Now this new server has a set or even just one hub_mask (or leaf_mask)
       * given in the link list at yy_hconf. Fill in the HUB confs
       * from this link list now.
       */        
      DLINK_FOREACH_SAFE(ptr, next_ptr, hub_conf_list.head)
      {
	struct ConfItem *new_hub_conf;
	struct MatchItem *match_item;

	yy_hconf = ptr->data;

	/* yy_conf == NULL is a fatal error for this connect block! */
	if ((yy_conf != NULL) && (yy_conf->name != NULL))
	{
	  new_hub_conf = make_conf_item(HUB_TYPE);
	  match_item = (struct MatchItem *)map_to_conf(new_hub_conf);
	  DupString(new_hub_conf->name, yy_conf->name);
	  if (yy_hconf->user != NULL)
	    DupString(match_item->user, yy_hconf->user);
	  else
	    DupString(match_item->user, "*");
	  if (yy_hconf->host != NULL)
	    DupString(match_item->host, yy_hconf->host);
	  else
	    DupString(match_item->host, "*");
	}
	dlinkDelete(&yy_hconf->node, &hub_conf_list);
	free_collect_item(yy_hconf);
      }

      /* Ditto for the LEAF confs */

      DLINK_FOREACH_SAFE(ptr, next_ptr, leaf_conf_list.head)
      {
	struct ConfItem *new_leaf_conf;
	struct MatchItem *match_item;

	yy_lconf = ptr->data;

	if ((yy_conf != NULL) && (yy_conf->name != NULL))
	{
	  new_leaf_conf = make_conf_item(LEAF_TYPE);
	  match_item = (struct MatchItem *)map_to_conf(new_leaf_conf);
	  DupString(new_leaf_conf->name, yy_conf->name);
	  if (yy_lconf->user != NULL)
	    DupString(match_item->user, yy_lconf->user);
	  else
	    DupString(match_item->user, "*");
	  if (yy_lconf->host != NULL)
	    DupString(match_item->host, yy_lconf->host);
	  else
	    DupString(match_item->host, "*");
	}
	dlinkDelete(&yy_lconf->node, &leaf_conf_list);
	free_collect_item(yy_lconf);
      }
      MyFree(class_name);
      class_name = NULL;
      yy_conf = NULL;
      yy_aconf = NULL;
  }
}
    break;

  case 362:
#line 2384 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name != NULL)
      yyerror("Multiple connect name entry");

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 363:
#line 2396 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name != NULL)
      yyerror("Multiple connect name entry");

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 364:
#line 2408 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 365:
#line 2417 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->spasswd != NULL)
      memset(yy_aconf->spasswd, 0, strlen(yy_aconf->spasswd));

    MyFree(yy_aconf->spasswd);
    DupString(yy_aconf->spasswd, yylval.string);
  }
}
    break;

  case 366:
#line 2429 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
}
    break;

  case 367:
#line 2441 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 368:
#line 2447 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 369:
#line 2451 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 370:
#line 2459 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 371:
#line 2468 "ircd_parser.y"
    {
}
    break;

  case 375:
#line 2472 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 376:
#line 2473 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 377:
#line 2476 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 378:
#line 2483 "ircd_parser.y"
    {
  if (ypass == 2)
#ifndef HAVE_LIBZ
    yyerror("Ignoring flags = compressed; -- no zlib support");
#else
 {
   if (not_atom)ClearConfCompressed(yy_aconf);
   else SetConfCompressed(yy_aconf);
 }
#endif
}
    break;

  case 379:
#line 2494 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 380:
#line 2501 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 381:
#line 2508 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 382:
#line 2515 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 383:
#line 2525 "ircd_parser.y"
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
      yyerror("Ignoring rsa_public_key_file -- file doesn't exist");
      break;
    }

    yy_aconf->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL);

    if (yy_aconf->rsa_public_key == NULL)
    {
      yyerror("Ignoring rsa_public_key_file -- Key invalid; check key syntax.");
      break;
    }
      
    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif /* HAVE_LIBCRYPTO */
}
    break;

  case 384:
#line 2566 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_ENCRYPTED;
    else
      yy_aconf->flags &= ~CONF_FLAGS_ENCRYPTED;
  }
}
    break;

  case 385:
#line 2577 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
    else
      yy_aconf->flags &= ~CONF_FLAGS_CRYPTLINK;
  }
}
    break;

  case 386:
#line 2588 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
#ifndef HAVE_LIBZ
      yyerror("Ignoring compressed=yes; -- no zlib support");
#else
      yy_aconf->flags |= CONF_FLAGS_COMPRESSED;
#endif
    else
      yy_aconf->flags &= ~CONF_FLAGS_COMPRESSED;
  }
}
    break;

  case 387:
#line 2603 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
    else
      yy_aconf->flags &= ~CONF_FLAGS_ALLOW_AUTO_CONN;
  }
}
    break;

  case 388:
#line 2614 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
    DupString(yy_tmp->host, yylval.string);
    DupString(yy_tmp->user, "*");
    dlinkAdd(yy_tmp, &yy_tmp->node, &hub_conf_list);
  }
}
    break;

  case 389:
#line 2627 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
    DupString(yy_tmp->host, yylval.string);
    DupString(yy_tmp->user, "*");
    dlinkAdd(yy_tmp, &yy_tmp->node, &leaf_conf_list);
  }
}
    break;

  case 390:
#line 2640 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 391:
#line 2649 "ircd_parser.y"
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
      yyerror("Invalid cipher");
  }
#else
  if (ypass == 2)
    yyerror("Ignoring cipher_preference -- no OpenSSL support");
#endif
}
    break;

  case 392:
#line 2684 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 393:
#line 2691 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (userbuf[0] && hostbuf[0])
    {
      if (regex_ban)
      {
#ifdef HAVE_REGEX_H
        int ecode = 0;
        regex_t *exp_user = MyMalloc(sizeof(regex_t));
        regex_t *exp_host = MyMalloc(sizeof(regex_t));

        if ((ecode = regcomp(exp_user, userbuf, REG_EXTENDED|REG_ICASE|REG_NOSUB)) ||
            (ecode = regcomp(exp_host, hostbuf, REG_EXTENDED|REG_ICASE|REG_NOSUB)))
        {
          char errbuf[IRCD_BUFSIZE];

          regerror(ecode, NULL, errbuf, sizeof(errbuf));

          MyFree(exp_user);
          MyFree(exp_host);
          ilog(L_ERROR, "Failed to add regular expression based K-Line: %s", errbuf);
          break;
        }

        yy_conf = make_conf_item(RKLINE_TYPE);
        yy_aconf->regexuser = exp_user;
        yy_aconf->regexhost = exp_host;

        DupString(yy_aconf->user, userbuf);
        DupString(yy_aconf->host, hostbuf);

        if (reasonbuf[0])
          DupString(yy_aconf->reason, reasonbuf);
        else
          DupString(yy_aconf->reason, "No reason");
#else
        yyerror("Your system doesn't support regex");
#endif
      }
      else
      {
        yy_conf = make_conf_item(KLINE_TYPE);
        yy_aconf = map_to_conf(yy_conf);

        DupString(yy_aconf->user, userbuf);
        DupString(yy_aconf->host, hostbuf);

        if (reasonbuf[0])
          DupString(yy_aconf->reason, reasonbuf);
        else
          DupString(yy_aconf->reason, "No reason");
        add_conf_by_address(CONF_KILL, yy_aconf);
      }
    }
    else
      delete_conf_item(yy_conf);

    yy_conf = NULL;
    yy_aconf = NULL;
  }
}
    break;

  case 394:
#line 2755 "ircd_parser.y"
    {
}
    break;

  case 398:
#line 2760 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 405:
#line 2769 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char *user = NULL, *host = NULL;

    split_nuh(yylval.string, NULL, &user, &host);

    strlcpy(userbuf, user, sizeof(userbuf));
    strlcpy(hostbuf, host, sizeof(hostbuf));

    MyFree(user);
    MyFree(host);
  }
}
    break;

  case 406:
#line 2785 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 407:
#line 2794 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(DLINE_TYPE);
    yy_aconf = map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_aconf->reason, "No reason");
  }
}
    break;

  case 408:
#line 2803 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->host && parse_netmask(yy_aconf->host, NULL, NULL) != HM_HOST)
      add_conf_by_address(CONF_DLINE, yy_aconf);
    else
      delete_conf_item(yy_conf);
    yy_conf = NULL;
    yy_aconf = NULL;
  }
}
    break;

  case 414:
#line 2819 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 415:
#line 2828 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 416:
#line 2840 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 417:
#line 2848 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->host && parse_netmask(yy_aconf->host, NULL, NULL) != HM_HOST)
      add_conf_by_address(CONF_EXEMPTDLINE, yy_aconf);
    else
      delete_conf_item(yy_conf);
    yy_conf = NULL;
    yy_aconf = NULL;
  }
}
    break;

  case 422:
#line 2864 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 423:
#line 2876 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 424:
#line 2883 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (gecos_name[0])
    {
      int ecode = 0;

      if (regex_ban)
      {
#ifdef HAVE_REGEX_H
        regex_t *exp_p = MyMalloc(sizeof(regex_t));

        if ((ecode = regcomp(exp_p, gecos_name, REG_EXTENDED|REG_ICASE|REG_NOSUB)))
        {
          char errbuf[IRCD_BUFSIZE];

          regerror(ecode, NULL, errbuf, sizeof(errbuf));

          MyFree(exp_p);
          ilog(L_ERROR, "Failed to add regular expression based X-Line: %s", errbuf);
          break;
        }

        yy_conf = make_conf_item(RXLINE_TYPE);
        yy_conf->regexpname = exp_p;
#else
        yyerror("Your system doesn't support regex");
#endif
      }
      else
        yy_conf = make_conf_item(XLINE_TYPE);

      yy_match_item = map_to_conf(yy_conf);
      DupString(yy_conf->name, gecos_name);
      if (reasonbuf[0])
        DupString(yy_match_item->reason, reasonbuf);
      else
        DupString(yy_match_item->reason, "No reason");
    }
  }
}
    break;

  case 425:
#line 2926 "ircd_parser.y"
    {
}
    break;

  case 429:
#line 2931 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 436:
#line 2940 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 437:
#line 2946 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 495:
#line 2991 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 496:
#line 2997 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 497:
#line 3003 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 498:
#line 3009 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 499:
#line 3014 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 500:
#line 3019 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 501:
#line 3025 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 502:
#line 3031 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 503:
#line 3037 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 504:
#line 3043 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 505:
#line 3049 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 506:
#line 3055 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 507:
#line 3061 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 508:
#line 3067 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 509:
#line 3073 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 510:
#line 3079 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 511:
#line 3085 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 512:
#line 3091 "ircd_parser.y"
    {
  if ((yyvsp[-1].number > 0) && ypass == 1)
  {
    ilog(L_CRIT, "You haven't read your config file properly.");
    ilog(L_CRIT, "There is a line in the example conf that will kill your server if not removed.");
    ilog(L_CRIT, "Consider actually reading/editing the conf file, and removing this line.");
    exit(0);
  }
}
    break;

  case 513:
#line 3102 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 514:
#line 3108 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 515:
#line 3117 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 516:
#line 3123 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 517:
#line 3129 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 518:
#line 3135 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 519:
#line 3139 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 520:
#line 3145 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 521:
#line 3149 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 522:
#line 3155 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 523:
#line 3161 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 524:
#line 3167 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 525:
#line 3173 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 526:
#line 3179 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 527:
#line 3185 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 528:
#line 3191 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 529:
#line 3197 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 530:
#line 3203 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 531:
#line 3214 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 532:
#line 3220 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 533:
#line 3226 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 534:
#line 3232 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 535:
#line 3238 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 536:
#line 3247 "ircd_parser.y"
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
      yyerror("Invalid cipher");
  }
#else
  if (ypass == 2)
    yyerror("Ignoring default_cipher_preference -- no OpenSSL support");
#endif
}
    break;

  case 537:
#line 3279 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    ConfigFileEntry.compression_level = yyvsp[-1].number;
#ifndef HAVE_LIBZ
    yyerror("Ignoring compression_level -- no zlib support");
#else
    if ((ConfigFileEntry.compression_level < 1) ||
        (ConfigFileEntry.compression_level > 9))
    {
      yyerror("Ignoring invalid compression_level, using default");
      ConfigFileEntry.compression_level = 0;
    }
#endif
  }
}
    break;

  case 538:
#line 3297 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 539:
#line 3303 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 540:
#line 3312 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 541:
#line 3318 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 542:
#line 3323 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 543:
#line 3329 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 547:
#line 3336 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 548:
#line 3340 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 549:
#line 3344 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 550:
#line 3348 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 551:
#line 3352 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 552:
#line 3356 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 553:
#line 3360 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 554:
#line 3364 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 555:
#line 3368 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 556:
#line 3372 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 557:
#line 3376 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 558:
#line 3380 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 559:
#line 3384 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 560:
#line 3388 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 561:
#line 3392 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 562:
#line 3396 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 563:
#line 3400 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 564:
#line 3404 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 565:
#line 3410 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 569:
#line 3417 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 570:
#line 3421 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 571:
#line 3425 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 572:
#line 3429 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 573:
#line 3433 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 574:
#line 3437 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 575:
#line 3441 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 576:
#line 3445 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 577:
#line 3449 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 578:
#line 3453 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 579:
#line 3457 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 580:
#line 3461 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 581:
#line 3465 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 582:
#line 3469 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 583:
#line 3473 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 584:
#line 3477 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 585:
#line 3481 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 586:
#line 3485 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 587:
#line 3491 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 588:
#line 3497 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 589:
#line 3503 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 590:
#line 3509 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 591:
#line 3515 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 592:
#line 3524 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 593:
#line 3532 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    /*
     * since we re-allocate yy_conf/yy_aconf after the end of action=, at the
     * end we will have one extra, so we should free it.
     */
    if (yy_conf->name == NULL && gdeny_items.length)
    {
      dlinkDelete(gdeny_items.tail, &gdeny_items);
      MyFree(yy_conf);
      yy_conf = NULL;
      yy_aconf = NULL;
    }
  }
}
    break;

  case 603:
#line 3559 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 604:
#line 3565 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 605:
#line 3571 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 609:
#line 3577 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 610:
#line 3581 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 611:
#line 3587 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
    {
      split_nuh(yylval.string, NULL, &yy_aconf->user, &yy_aconf->host);
    }
    else
    {
      yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
      split_nuh(yylval.string, NULL, &yy_tmp->user, &yy_tmp->host);
      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 612:
#line 3606 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 613:
#line 3615 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 614:
#line 3619 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;
    dlink_node *ptr, *next_ptr;

    DLINK_FOREACH_SAFE(ptr, next_ptr, col_conf_list.head)
    {
      struct AccessItem *new_aconf;
      struct ConfItem *new_conf;

      yy_tmp = ptr->data;
      new_conf = make_conf_item(GDENY_TYPE);
      new_aconf = (struct AccessItem *)map_to_conf(new_conf);

      new_aconf->flags = yy_aconf->flags;

      if (yy_conf->name != NULL)
        DupString(new_conf->name, yy_conf->name);
      else
        DupString(new_conf->name, "*");
      if (yy_aconf->user != NULL)
         DupString(new_aconf->user, yy_tmp->user);
      else   
        DupString(new_aconf->user, "*");
      if (yy_aconf->host != NULL)
        DupString(new_aconf->host, yy_tmp->host);
      else
        DupString(new_aconf->host, "*");

      dlinkDelete(&yy_tmp->node, &col_conf_list);
    }
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 617:
#line 3659 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 618:
#line 3663 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 638:
#line 3693 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 639:
#line 3699 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 640:
#line 3705 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 641:
#line 3711 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 642:
#line 3717 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 643:
#line 3723 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 644:
#line 3729 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 645:
#line 3735 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 646:
#line 3741 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 647:
#line 3747 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 648:
#line 3753 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 649:
#line 3759 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 650:
#line 3765 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 651:
#line 3771 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 652:
#line 3777 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 663:
#line 3797 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 664:
#line 3803 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 665:
#line 3809 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if ((yyvsp[-1].number > 0) && ConfigServerHide.links_disabled == 1)
    {
      eventAddIsh("write_links_file", write_links_file, NULL, yyvsp[-1].number);
      ConfigServerHide.links_disabled = 0;
    }

    ConfigServerHide.links_delay = yyvsp[-1].number;
  }
}
    break;

  case 666:
#line 3823 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 667:
#line 3829 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 668:
#line 3835 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 6982 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyssp > yyss)
	    {
	      YYDPRINTF ((stderr, "Error: popping "));
	      YYDSYMPRINT ((stderr,
			    yystos[*yyssp],
			    *yyvsp));
	      YYDPRINTF ((stderr, "\n"));
	      yydestruct (yystos[*yyssp], *yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yydestruct (yychar1, yylval);
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDPRINTF ((stderr, "Error: popping "));
      YYDSYMPRINT ((stderr,
		    yystos[*yyssp], *yyvsp));
      YYDPRINTF ((stderr, "\n"));

      yydestruct (yystos[yystate], *yyvsp);
      yyvsp--;
      yystate = *--yyssp;


#if YYDEBUG
      if (yydebug)
	{
	  short *yyssp1 = yyss - 1;
	  YYFPRINTF (stderr, "Error: state stack now");
	  while (yyssp1 != yyssp)
	    YYFPRINTF (stderr, " %d", *++yyssp1);
	  YYFPRINTF (stderr, "\n");
	}
#endif
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 376 "ircd_parser.y"

