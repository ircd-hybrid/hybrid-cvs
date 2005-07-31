/* A Bison parser, made from ircd_parser.y, by GNU bison 1.75.  */
/* $Id: y.tab.c,v 7.43 2005/07/31 05:32:41 adx Exp $ */

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
     CAN_FLOOD = 276,
     CAN_IDLE = 277,
     CHANNEL = 278,
     CIPHER_PREFERENCE = 279,
     CLASS = 280,
     COMPRESSED = 281,
     COMPRESSION_LEVEL = 282,
     CONNECT = 283,
     CONNECTFREQ = 284,
     CRYPTLINK = 285,
     DEFAULT_CIPHER_PREFERENCE = 286,
     DEFAULT_FLOODCOUNT = 287,
     DEFAULT_SPLIT_SERVER_COUNT = 288,
     DEFAULT_SPLIT_USER_COUNT = 289,
     DENY = 290,
     DESCRIPTION = 291,
     DIE = 292,
     DISABLE_AUTH = 293,
     DISABLE_HIDDEN = 294,
     DISABLE_LOCAL_CHANNELS = 295,
     DISABLE_REMOTE_COMMANDS = 296,
     DOT_IN_IP6_ADDR = 297,
     DOTS_IN_IDENT = 298,
     DURATION = 299,
     EGDPOOL_PATH = 300,
     EMAIL = 301,
     ENABLE = 302,
     ENCRYPTED = 303,
     EXCEED_LIMIT = 304,
     EXEMPT = 305,
     FAILED_OPER_NOTICE = 306,
     FAKENAME = 307,
     IRCD_FLAGS = 308,
     FLATTEN_LINKS = 309,
     FFAILED_OPERLOG = 310,
     FOPERLOG = 311,
     FUSERLOG = 312,
     GECOS = 313,
     GENERAL = 314,
     GLINE = 315,
     GLINES = 316,
     GLINE_EXEMPT = 317,
     GLINE_LOG = 318,
     GLINE_TIME = 319,
     GLINE_MIN_CIDR = 320,
     GLINE_MIN_CIDR6 = 321,
     GLOBAL_KILL = 322,
     NEED_IDENT = 323,
     HAVENT_READ_CONF = 324,
     HIDDEN = 325,
     HIDDEN_ADMIN = 326,
     HIDDEN_OPER = 327,
     HIDE_SERVER_IPS = 328,
     HIDE_SERVERS = 329,
     HIDE_SPOOF_IPS = 330,
     HOST = 331,
     HUB = 332,
     HUB_MASK = 333,
     IDLETIME = 334,
     IGNORE_BOGUS_TS = 335,
     IP = 336,
     KILL = 337,
     KILL_CHASE_TIME_LIMIT = 338,
     KLINE = 339,
     KLINE_EXEMPT = 340,
     KLINE_REASON = 341,
     KLINE_WITH_REASON = 342,
     KNOCK_DELAY = 343,
     KNOCK_DELAY_CHANNEL = 344,
     LAZYLINK = 345,
     LEAF_MASK = 346,
     LINKS_DELAY = 347,
     LISTEN = 348,
     LOGGING = 349,
     LOG_LEVEL = 350,
     MAXIMUM_LINKS = 351,
     MAX_ACCEPT = 352,
     MAX_BANS = 353,
     MAX_CHANS_PER_USER = 354,
     MAX_GLOBAL = 355,
     MAX_IDENT = 356,
     MAX_LOCAL = 357,
     MAX_NICK_CHANGES = 358,
     MAX_NICK_TIME = 359,
     MAX_NUMBER = 360,
     MAX_TARGETS = 361,
     MESSAGE_LOCALE = 362,
     MIN_NONWILDCARD = 363,
     MIN_NONWILDCARD_SIMPLE = 364,
     MODULE = 365,
     MODULES = 366,
     NAME = 367,
     NEED_PASSWORD = 368,
     NETWORK_DESC = 369,
     NETWORK_NAME = 370,
     NICK = 371,
     NICK_CHANGES = 372,
     NO_CREATE_ON_SPLIT = 373,
     NO_JOIN_ON_SPLIT = 374,
     NO_OPER_FLOOD = 375,
     NO_TILDE = 376,
     NOT = 377,
     NUMBER = 378,
     NUMBER_PER_IDENT = 379,
     NUMBER_PER_IP = 380,
     NUMBER_PER_IP_GLOBAL = 381,
     OPERATOR = 382,
     OPER_LOG = 383,
     OPER_ONLY_UMODES = 384,
     OPER_PASS_RESV = 385,
     OPER_SPY_T = 386,
     OPER_UMODES = 387,
     INVITE_OPS_ONLY = 388,
     PACE_WAIT = 389,
     PACE_WAIT_SIMPLE = 390,
     PASSWORD = 391,
     PATH = 392,
     PING_COOKIE = 393,
     PING_TIME = 394,
     PORT = 395,
     QSTRING = 396,
     QUIET_ON_BAN = 397,
     REASON = 398,
     REDIRPORT = 399,
     REDIRSERV = 400,
     REGEX_T = 401,
     REHASH = 402,
     REMOTE = 403,
     REMOTEBAN = 404,
     RESTRICTED = 405,
     RSA_PRIVATE_KEY_FILE = 406,
     RSA_PUBLIC_KEY_FILE = 407,
     SSL_CERTIFICATE_FILE = 408,
     RESV = 409,
     RESV_EXEMPT = 410,
     SECONDS = 411,
     MINUTES = 412,
     HOURS = 413,
     DAYS = 414,
     WEEKS = 415,
     SENDQ = 416,
     SEND_PASSWORD = 417,
     SERVERHIDE = 418,
     SERVERINFO = 419,
     SERVLINK_PATH = 420,
     IRCD_SID = 421,
     TKLINE_EXPIRE_NOTICES = 422,
     T_SHARED = 423,
     T_CLUSTER = 424,
     TYPE = 425,
     SHORT_MOTD = 426,
     SILENT = 427,
     SPOOF = 428,
     SPOOF_NOTICE = 429,
     STATS_I_OPER_ONLY = 430,
     STATS_K_OPER_ONLY = 431,
     STATS_O_OPER_ONLY = 432,
     STATS_P_OPER_ONLY = 433,
     TBOOL = 434,
     TMASKED = 435,
     T_REJECT = 436,
     TS_MAX_DELTA = 437,
     TS_WARN_DELTA = 438,
     TWODOTS = 439,
     T_ALL = 440,
     T_BOTS = 441,
     T_SOFTCALLERID = 442,
     T_CALLERID = 443,
     T_CCONN = 444,
     T_CLIENT_FLOOD = 445,
     T_DEAF = 446,
     T_DEBUG = 447,
     T_DRONE = 448,
     T_EXTERNAL = 449,
     T_FULL = 450,
     T_INVISIBLE = 451,
     T_IPV4 = 452,
     T_IPV6 = 453,
     T_LOCOPS = 454,
     T_LOGPATH = 455,
     T_L_CRIT = 456,
     T_L_DEBUG = 457,
     T_L_ERROR = 458,
     T_L_INFO = 459,
     T_L_NOTICE = 460,
     T_L_TRACE = 461,
     T_L_WARN = 462,
     T_MAX_CLIENTS = 463,
     T_NCHANGE = 464,
     T_OPERWALL = 465,
     T_REJ = 466,
     T_SERVNOTICE = 467,
     T_SKILL = 468,
     T_SPY = 469,
     T_SSL = 470,
     T_UNAUTH = 471,
     T_UNRESV = 472,
     T_UNXLINE = 473,
     T_WALLOP = 474,
     THROTTLE_TIME = 475,
     TOPICBURST = 476,
     TRUE_NO_OPER_FLOOD = 477,
     UNKLINE = 478,
     USER = 479,
     USE_EGD = 480,
     USE_EXCEPT = 481,
     USE_INVEX = 482,
     USE_KNOCK = 483,
     USE_LOGGING = 484,
     USE_WHOIS_ACTUALLY = 485,
     VHOST = 486,
     VHOST6 = 487,
     XLINE = 488,
     WARN = 489,
     WARN_NO_NLINE = 490
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
#define CAN_FLOOD 276
#define CAN_IDLE 277
#define CHANNEL 278
#define CIPHER_PREFERENCE 279
#define CLASS 280
#define COMPRESSED 281
#define COMPRESSION_LEVEL 282
#define CONNECT 283
#define CONNECTFREQ 284
#define CRYPTLINK 285
#define DEFAULT_CIPHER_PREFERENCE 286
#define DEFAULT_FLOODCOUNT 287
#define DEFAULT_SPLIT_SERVER_COUNT 288
#define DEFAULT_SPLIT_USER_COUNT 289
#define DENY 290
#define DESCRIPTION 291
#define DIE 292
#define DISABLE_AUTH 293
#define DISABLE_HIDDEN 294
#define DISABLE_LOCAL_CHANNELS 295
#define DISABLE_REMOTE_COMMANDS 296
#define DOT_IN_IP6_ADDR 297
#define DOTS_IN_IDENT 298
#define DURATION 299
#define EGDPOOL_PATH 300
#define EMAIL 301
#define ENABLE 302
#define ENCRYPTED 303
#define EXCEED_LIMIT 304
#define EXEMPT 305
#define FAILED_OPER_NOTICE 306
#define FAKENAME 307
#define IRCD_FLAGS 308
#define FLATTEN_LINKS 309
#define FFAILED_OPERLOG 310
#define FOPERLOG 311
#define FUSERLOG 312
#define GECOS 313
#define GENERAL 314
#define GLINE 315
#define GLINES 316
#define GLINE_EXEMPT 317
#define GLINE_LOG 318
#define GLINE_TIME 319
#define GLINE_MIN_CIDR 320
#define GLINE_MIN_CIDR6 321
#define GLOBAL_KILL 322
#define NEED_IDENT 323
#define HAVENT_READ_CONF 324
#define HIDDEN 325
#define HIDDEN_ADMIN 326
#define HIDDEN_OPER 327
#define HIDE_SERVER_IPS 328
#define HIDE_SERVERS 329
#define HIDE_SPOOF_IPS 330
#define HOST 331
#define HUB 332
#define HUB_MASK 333
#define IDLETIME 334
#define IGNORE_BOGUS_TS 335
#define IP 336
#define KILL 337
#define KILL_CHASE_TIME_LIMIT 338
#define KLINE 339
#define KLINE_EXEMPT 340
#define KLINE_REASON 341
#define KLINE_WITH_REASON 342
#define KNOCK_DELAY 343
#define KNOCK_DELAY_CHANNEL 344
#define LAZYLINK 345
#define LEAF_MASK 346
#define LINKS_DELAY 347
#define LISTEN 348
#define LOGGING 349
#define LOG_LEVEL 350
#define MAXIMUM_LINKS 351
#define MAX_ACCEPT 352
#define MAX_BANS 353
#define MAX_CHANS_PER_USER 354
#define MAX_GLOBAL 355
#define MAX_IDENT 356
#define MAX_LOCAL 357
#define MAX_NICK_CHANGES 358
#define MAX_NICK_TIME 359
#define MAX_NUMBER 360
#define MAX_TARGETS 361
#define MESSAGE_LOCALE 362
#define MIN_NONWILDCARD 363
#define MIN_NONWILDCARD_SIMPLE 364
#define MODULE 365
#define MODULES 366
#define NAME 367
#define NEED_PASSWORD 368
#define NETWORK_DESC 369
#define NETWORK_NAME 370
#define NICK 371
#define NICK_CHANGES 372
#define NO_CREATE_ON_SPLIT 373
#define NO_JOIN_ON_SPLIT 374
#define NO_OPER_FLOOD 375
#define NO_TILDE 376
#define NOT 377
#define NUMBER 378
#define NUMBER_PER_IDENT 379
#define NUMBER_PER_IP 380
#define NUMBER_PER_IP_GLOBAL 381
#define OPERATOR 382
#define OPER_LOG 383
#define OPER_ONLY_UMODES 384
#define OPER_PASS_RESV 385
#define OPER_SPY_T 386
#define OPER_UMODES 387
#define INVITE_OPS_ONLY 388
#define PACE_WAIT 389
#define PACE_WAIT_SIMPLE 390
#define PASSWORD 391
#define PATH 392
#define PING_COOKIE 393
#define PING_TIME 394
#define PORT 395
#define QSTRING 396
#define QUIET_ON_BAN 397
#define REASON 398
#define REDIRPORT 399
#define REDIRSERV 400
#define REGEX_T 401
#define REHASH 402
#define REMOTE 403
#define REMOTEBAN 404
#define RESTRICTED 405
#define RSA_PRIVATE_KEY_FILE 406
#define RSA_PUBLIC_KEY_FILE 407
#define SSL_CERTIFICATE_FILE 408
#define RESV 409
#define RESV_EXEMPT 410
#define SECONDS 411
#define MINUTES 412
#define HOURS 413
#define DAYS 414
#define WEEKS 415
#define SENDQ 416
#define SEND_PASSWORD 417
#define SERVERHIDE 418
#define SERVERINFO 419
#define SERVLINK_PATH 420
#define IRCD_SID 421
#define TKLINE_EXPIRE_NOTICES 422
#define T_SHARED 423
#define T_CLUSTER 424
#define TYPE 425
#define SHORT_MOTD 426
#define SILENT 427
#define SPOOF 428
#define SPOOF_NOTICE 429
#define STATS_I_OPER_ONLY 430
#define STATS_K_OPER_ONLY 431
#define STATS_O_OPER_ONLY 432
#define STATS_P_OPER_ONLY 433
#define TBOOL 434
#define TMASKED 435
#define T_REJECT 436
#define TS_MAX_DELTA 437
#define TS_WARN_DELTA 438
#define TWODOTS 439
#define T_ALL 440
#define T_BOTS 441
#define T_SOFTCALLERID 442
#define T_CALLERID 443
#define T_CCONN 444
#define T_CLIENT_FLOOD 445
#define T_DEAF 446
#define T_DEBUG 447
#define T_DRONE 448
#define T_EXTERNAL 449
#define T_FULL 450
#define T_INVISIBLE 451
#define T_IPV4 452
#define T_IPV6 453
#define T_LOCOPS 454
#define T_LOGPATH 455
#define T_L_CRIT 456
#define T_L_DEBUG 457
#define T_L_ERROR 458
#define T_L_INFO 459
#define T_L_NOTICE 460
#define T_L_TRACE 461
#define T_L_WARN 462
#define T_MAX_CLIENTS 463
#define T_NCHANGE 464
#define T_OPERWALL 465
#define T_REJ 466
#define T_SERVNOTICE 467
#define T_SKILL 468
#define T_SPY 469
#define T_SSL 470
#define T_UNAUTH 471
#define T_UNRESV 472
#define T_UNXLINE 473
#define T_WALLOP 474
#define THROTTLE_TIME 475
#define TOPICBURST 476
#define TRUE_NO_OPER_FLOOD 477
#define UNKLINE 478
#define USER 479
#define USE_EGD 480
#define USE_EXCEPT 481
#define USE_INVEX 482
#define USE_KNOCK 483
#define USE_LOGGING 484
#define USE_WHOIS_ACTUALLY 485
#define VHOST 486
#define VHOST6 487
#define XLINE 488
#define WARN 489
#define WARN_NO_NLINE 490




/* Copy the first part of user declarations.  */
#line 25 "ircd_parser.y"


/* XXX */
#define WE_ARE_MEMORY_C

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
#include "cluster.h"
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
static unsigned int gecos_flags = 0;
static char gecos_reason[REASONLEN + 1];
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
#line 134 "ircd_parser.y"
typedef union {
  int number;
  char *string;
} yystype;
/* Line 193 of /usr/local/share/bison/yacc.c.  */
#line 657 "y.tab.c"
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
#line 678 "y.tab.c"

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
#define YYLAST   1284

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  241
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  306
/* YYNRULES -- Number of rules. */
#define YYNRULES  647
/* YYNRULES -- Number of states. */
#define YYNSTATES  1320

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   490

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   240,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   236,
       2,   239,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   238,     2,   237,     2,     2,     2,     2,
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
     235
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
     396,   398,   400,   402,   404,   407,   412,   414,   419,   424,
     429,   434,   439,   444,   449,   454,   459,   464,   469,   474,
     479,   484,   489,   494,   495,   501,   505,   507,   510,   512,
     514,   516,   518,   520,   522,   524,   526,   528,   530,   532,
     534,   536,   538,   540,   542,   544,   545,   553,   554,   556,
     559,   561,   563,   565,   567,   569,   571,   573,   575,   577,
     579,   582,   587,   589,   594,   599,   604,   609,   614,   619,
     624,   629,   630,   637,   638,   644,   648,   650,   652,   654,
     657,   659,   661,   663,   665,   667,   670,   675,   679,   681,
     683,   687,   692,   697,   698,   705,   708,   710,   712,   714,
     716,   718,   720,   722,   724,   726,   728,   730,   732,   734,
     736,   738,   740,   743,   748,   753,   758,   763,   764,   770,
     774,   776,   779,   781,   783,   785,   787,   789,   791,   793,
     795,   797,   799,   801,   806,   811,   816,   821,   826,   831,
     836,   841,   846,   851,   852,   859,   862,   864,   866,   868,
     870,   873,   878,   883,   888,   889,   896,   899,   901,   903,
     905,   907,   910,   915,   920,   921,   927,   931,   933,   935,
     937,   939,   941,   943,   945,   947,   948,   955,   958,   960,
     962,   964,   967,   972,   973,   979,   983,   985,   987,   989,
     991,   993,   995,   997,   999,  1001,  1002,  1010,  1011,  1013,
    1016,  1018,  1020,  1022,  1024,  1026,  1028,  1030,  1032,  1034,
    1036,  1038,  1040,  1042,  1044,  1046,  1048,  1050,  1052,  1055,
    1060,  1062,  1067,  1072,  1077,  1082,  1087,  1092,  1097,  1098,
    1104,  1108,  1110,  1113,  1115,  1117,  1119,  1121,  1123,  1125,
    1127,  1132,  1137,  1142,  1147,  1152,  1157,  1162,  1167,  1172,
    1173,  1180,  1183,  1185,  1187,  1189,  1191,  1196,  1201,  1202,
    1209,  1212,  1214,  1216,  1218,  1220,  1225,  1230,  1231,  1238,
    1241,  1243,  1245,  1247,  1252,  1253,  1260,  1261,  1267,  1271,
    1273,  1275,  1278,  1280,  1282,  1284,  1286,  1288,  1293,  1298,
    1304,  1307,  1309,  1311,  1313,  1315,  1317,  1319,  1321,  1323,
    1325,  1327,  1329,  1331,  1333,  1335,  1337,  1339,  1341,  1343,
    1345,  1347,  1349,  1351,  1353,  1355,  1357,  1359,  1361,  1363,
    1365,  1367,  1369,  1371,  1373,  1375,  1377,  1379,  1381,  1383,
    1385,  1387,  1389,  1391,  1393,  1395,  1397,  1399,  1401,  1403,
    1405,  1407,  1409,  1411,  1413,  1415,  1420,  1425,  1430,  1435,
    1440,  1445,  1450,  1455,  1460,  1465,  1470,  1475,  1480,  1485,
    1490,  1495,  1500,  1505,  1510,  1515,  1520,  1525,  1530,  1535,
    1540,  1545,  1550,  1555,  1560,  1565,  1570,  1575,  1580,  1585,
    1590,  1595,  1600,  1605,  1610,  1615,  1620,  1625,  1630,  1635,
    1640,  1645,  1650,  1651,  1657,  1661,  1663,  1665,  1667,  1669,
    1671,  1673,  1675,  1677,  1679,  1681,  1683,  1685,  1687,  1689,
    1691,  1693,  1695,  1697,  1699,  1700,  1706,  1710,  1712,  1714,
    1716,  1718,  1720,  1722,  1724,  1726,  1728,  1730,  1732,  1734,
    1736,  1738,  1740,  1742,  1744,  1746,  1748,  1753,  1758,  1763,
    1768,  1773,  1774,  1781,  1784,  1786,  1788,  1790,  1792,  1794,
    1796,  1798,  1800,  1805,  1810,  1811,  1817,  1821,  1823,  1825,
    1827,  1832,  1837,  1838,  1844,  1848,  1850,  1852,  1854,  1860,
    1863,  1865,  1867,  1869,  1871,  1873,  1875,  1877,  1879,  1881,
    1883,  1885,  1887,  1889,  1891,  1893,  1895,  1897,  1902,  1907,
    1912,  1917,  1922,  1927,  1932,  1937,  1942,  1947,  1952,  1957,
    1962,  1967,  1972,  1978,  1981,  1983,  1985,  1987,  1989,  1991,
    1993,  1995,  1997,  2002,  2007,  2012,  2017,  2022
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     242,     0,    -1,    -1,   242,   243,    -1,   267,    -1,   273,
      -1,   284,    -1,   520,    -1,   312,    -1,   327,    -1,   340,
      -1,   253,    -1,   538,    -1,   363,    -1,   370,    -1,   380,
      -1,   389,    -1,   416,    -1,   422,    -1,   428,    -1,   443,
      -1,   504,    -1,   433,    -1,   248,    -1,     1,   236,    -1,
       1,   237,    -1,    -1,   245,    -1,   123,   244,    -1,   123,
     156,   244,    -1,   123,   157,   244,    -1,   123,   158,   244,
      -1,   123,   159,   244,    -1,   123,   160,   244,    -1,    -1,
     247,    -1,   123,   246,    -1,   123,    15,   246,    -1,   123,
      16,   246,    -1,   123,    17,   246,    -1,   111,   238,   249,
     237,   236,    -1,   249,   250,    -1,   250,    -1,   251,    -1,
     252,    -1,     1,   236,    -1,   110,   239,   141,   236,    -1,
     137,   239,   141,   236,    -1,   164,   238,   254,   237,   236,
      -1,   254,   255,    -1,   255,    -1,   258,    -1,   263,    -1,
     266,    -1,   260,    -1,   261,    -1,   262,    -1,   265,    -1,
     257,    -1,   264,    -1,   259,    -1,   256,    -1,     1,   236,
      -1,   153,   239,   141,   236,    -1,   151,   239,   141,   236,
      -1,   112,   239,   141,   236,    -1,   166,   239,   141,   236,
      -1,    36,   239,   141,   236,    -1,   115,   239,   141,   236,
      -1,   114,   239,   141,   236,    -1,   231,   239,   141,   236,
      -1,   232,   239,   141,   236,    -1,   208,   239,   123,   236,
      -1,    77,   239,   179,   236,    -1,     5,   238,   268,   237,
     236,    -1,   268,   269,    -1,   269,    -1,   270,    -1,   272,
      -1,   271,    -1,     1,   236,    -1,   112,   239,   141,   236,
      -1,    46,   239,   141,   236,    -1,    36,   239,   141,   236,
      -1,    94,   238,   274,   237,   236,    -1,   274,   275,    -1,
     275,    -1,   276,    -1,   277,    -1,   278,    -1,   282,    -1,
     283,    -1,   279,    -1,   281,    -1,   280,    -1,     1,   236,
      -1,   200,   239,   141,   236,    -1,   128,   239,   141,   236,
      -1,    63,   239,   141,   236,    -1,    57,   239,   141,   236,
      -1,    55,   239,   141,   236,    -1,    56,   239,   141,   236,
      -1,    95,   239,   201,   236,    -1,    95,   239,   203,   236,
      -1,    95,   239,   207,   236,    -1,    95,   239,   205,   236,
      -1,    95,   239,   206,   236,    -1,    95,   239,   204,   236,
      -1,    95,   239,   202,   236,    -1,   229,   239,   179,   236,
      -1,    -1,   127,   285,   286,   238,   287,   237,   236,    -1,
      -1,   290,    -1,   287,   288,    -1,   288,    -1,   289,    -1,
     291,    -1,   292,    -1,   294,    -1,   296,    -1,   297,    -1,
     298,    -1,   299,    -1,   300,    -1,   301,    -1,   302,    -1,
     303,    -1,   304,    -1,   305,    -1,   306,    -1,   293,    -1,
     295,    -1,   307,    -1,     1,   236,    -1,   112,   239,   141,
     236,    -1,   141,    -1,   224,   239,   141,   236,    -1,   136,
     239,   141,   236,    -1,    48,   239,   179,   236,    -1,    71,
     239,   179,   236,    -1,   152,   239,   141,   236,    -1,    25,
     239,   141,   236,    -1,    67,   239,   179,   236,    -1,   148,
     239,   179,   236,    -1,    84,   239,   179,   236,    -1,   233,
     239,   179,   236,    -1,   223,   239,   179,   236,    -1,    60,
     239,   179,   236,    -1,   117,   239,   179,   236,    -1,    37,
     239,   179,   236,    -1,   147,   239,   179,   236,    -1,     5,
     239,   179,   236,    -1,    -1,    53,   308,   239,   309,   236,
      -1,   309,   240,   310,    -1,   310,    -1,   122,   311,    -1,
     311,    -1,    67,    -1,   148,    -1,    84,    -1,   223,    -1,
     233,    -1,    60,    -1,    37,    -1,   147,    -1,     5,    -1,
      71,    -1,   117,    -1,   210,    -1,   131,    -1,    72,    -1,
     149,    -1,    48,    -1,    -1,    25,   313,   314,   238,   315,
     237,   236,    -1,    -1,   318,    -1,   315,   316,    -1,   316,
      -1,   317,    -1,   319,    -1,   320,    -1,   321,    -1,   322,
      -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,     1,
     236,    -1,   112,   239,   141,   236,    -1,   141,    -1,   139,
     239,   245,   236,    -1,   125,   239,   123,   236,    -1,    29,
     239,   245,   236,    -1,   105,   239,   123,   236,    -1,   100,
     239,   123,   236,    -1,   102,   239,   123,   236,    -1,   101,
     239,   123,   236,    -1,   161,   239,   247,   236,    -1,    -1,
      93,   328,   238,   333,   237,   236,    -1,    -1,    53,   330,
     239,   331,   236,    -1,   331,   240,   332,    -1,   332,    -1,
     215,    -1,    70,    -1,   333,   334,    -1,   334,    -1,   335,
      -1,   329,    -1,   338,    -1,   339,    -1,     1,   236,    -1,
     140,   239,   336,   236,    -1,   336,   240,   337,    -1,   337,
      -1,   123,    -1,   123,   184,   123,    -1,    81,   239,   141,
     236,    -1,    76,   239,   141,   236,    -1,    -1,    10,   341,
     238,   342,   237,   236,    -1,   342,   343,    -1,   343,    -1,
     344,    -1,   345,    -1,   347,    -1,   348,    -1,   353,    -1,
     354,    -1,   355,    -1,   357,    -1,   358,    -1,   359,    -1,
     346,    -1,   360,    -1,   361,    -1,   356,    -1,   362,    -1,
       1,   236,    -1,   224,   239,   141,   236,    -1,   136,   239,
     141,   236,    -1,   174,   239,   179,   236,    -1,    25,   239,
     141,   236,    -1,    -1,    53,   349,   239,   350,   236,    -1,
     350,   240,   351,    -1,   351,    -1,   122,   352,    -1,   352,
      -1,   174,    -1,    49,    -1,    85,    -1,    68,    -1,    21,
      -1,    22,    -1,   121,    -1,    62,    -1,   155,    -1,   113,
      -1,    85,   239,   179,   236,    -1,    68,   239,   179,   236,
      -1,    49,   239,   179,   236,    -1,    21,   239,   179,   236,
      -1,   121,   239,   179,   236,    -1,    62,   239,   179,   236,
      -1,   173,   239,   141,   236,    -1,   145,   239,   141,   236,
      -1,   144,   239,   123,   236,    -1,   113,   239,   179,   236,
      -1,    -1,   154,   364,   238,   365,   237,   236,    -1,   365,
     366,    -1,   366,    -1,   367,    -1,   368,    -1,   369,    -1,
       1,   236,    -1,   143,   239,   141,   236,    -1,    23,   239,
     141,   236,    -1,   116,   239,   141,   236,    -1,    -1,   168,
     371,   238,   372,   237,   236,    -1,   372,   373,    -1,   373,
      -1,   374,    -1,   375,    -1,   376,    -1,     1,   236,    -1,
     112,   239,   141,   236,    -1,   224,   239,   141,   236,    -1,
      -1,   170,   377,   239,   378,   236,    -1,   378,   240,   379,
      -1,   379,    -1,    84,    -1,   223,    -1,   233,    -1,   218,
      -1,   154,    -1,   217,    -1,   185,    -1,    -1,   169,   381,
     238,   382,   237,   236,    -1,   382,   383,    -1,   383,    -1,
     384,    -1,   385,    -1,     1,   236,    -1,   112,   239,   141,
     236,    -1,    -1,   170,   386,   239,   387,   236,    -1,   387,
     240,   388,    -1,   388,    -1,    84,    -1,   223,    -1,   233,
      -1,   218,    -1,   154,    -1,   217,    -1,   199,    -1,   185,
      -1,    -1,    28,   390,   391,   238,   392,   237,   236,    -1,
      -1,   395,    -1,   392,   393,    -1,   393,    -1,   394,    -1,
     396,    -1,   397,    -1,   398,    -1,   399,    -1,   400,    -1,
     401,    -1,   402,    -1,   412,    -1,   413,    -1,   414,    -1,
     411,    -1,   408,    -1,   410,    -1,   409,    -1,   407,    -1,
     415,    -1,     1,   236,    -1,   112,   239,   141,   236,    -1,
     141,    -1,    76,   239,   141,   236,    -1,   162,   239,   141,
     236,    -1,     3,   239,   141,   236,    -1,   140,   239,   123,
     236,    -1,     6,   239,   197,   236,    -1,     6,   239,   198,
     236,    -1,    52,   239,   141,   236,    -1,    -1,    53,   403,
     239,   404,   236,    -1,   404,   240,   405,    -1,   405,    -1,
     122,   406,    -1,   406,    -1,    90,    -1,    26,    -1,    30,
      -1,    11,    -1,    13,    -1,   221,    -1,   152,   239,   141,
     236,    -1,    48,   239,   179,   236,    -1,    30,   239,   179,
     236,    -1,    26,   239,   179,   236,    -1,    11,   239,   179,
     236,    -1,    78,   239,   141,   236,    -1,    91,   239,   141,
     236,    -1,    25,   239,   141,   236,    -1,    24,   239,   141,
     236,    -1,    -1,    82,   417,   238,   418,   237,   236,    -1,
     418,   419,    -1,   419,    -1,   420,    -1,   421,    -1,     1,
      -1,   224,   239,   141,   236,    -1,   143,   239,   141,   236,
      -1,    -1,    35,   423,   238,   424,   237,   236,    -1,   424,
     425,    -1,   425,    -1,   426,    -1,   427,    -1,     1,    -1,
      81,   239,   141,   236,    -1,   143,   239,   141,   236,    -1,
      -1,    50,   429,   238,   430,   237,   236,    -1,   430,   431,
      -1,   431,    -1,   432,    -1,     1,    -1,    81,   239,   141,
     236,    -1,    -1,    58,   434,   238,   439,   237,   236,    -1,
      -1,    53,   436,   239,   437,   236,    -1,   437,   240,   438,
      -1,   438,    -1,   146,    -1,   439,   440,    -1,   440,    -1,
     441,    -1,   442,    -1,   435,    -1,     1,    -1,   112,   239,
     141,   236,    -1,   143,   239,   141,   236,    -1,    59,   238,
     444,   237,   236,    -1,   444,   445,    -1,   445,    -1,   452,
      -1,   453,    -1,   455,    -1,   456,    -1,   457,    -1,   458,
      -1,   459,    -1,   460,    -1,   461,    -1,   462,    -1,   451,
      -1,   464,    -1,   465,    -1,   466,    -1,   480,    -1,   467,
      -1,   469,    -1,   471,    -1,   470,    -1,   473,    -1,   468,
      -1,   474,    -1,   475,    -1,   476,    -1,   477,    -1,   479,
      -1,   481,    -1,   478,    -1,   495,    -1,   482,    -1,   486,
      -1,   487,    -1,   491,    -1,   472,    -1,   501,    -1,   499,
      -1,   500,    -1,   483,    -1,   454,    -1,   484,    -1,   485,
      -1,   502,    -1,   490,    -1,   463,    -1,   503,    -1,   488,
      -1,   489,    -1,   448,    -1,   450,    -1,   446,    -1,   447,
      -1,   449,    -1,     1,    -1,    65,   239,   123,   236,    -1,
      66,   239,   123,   236,    -1,    13,   239,   179,   236,    -1,
     230,   239,   179,   236,    -1,   167,   239,   179,   236,    -1,
      83,   239,   123,   236,    -1,    75,   239,   179,   236,    -1,
      80,   239,   179,   236,    -1,    41,   239,   179,   236,    -1,
      51,   239,   179,   236,    -1,     8,   239,   179,   236,    -1,
     104,   239,   245,   236,    -1,   103,   239,   123,   236,    -1,
      97,   239,   123,   236,    -1,     9,   239,   245,   236,    -1,
     183,   239,   245,   236,    -1,   182,   239,   245,   236,    -1,
      69,   239,   123,   236,    -1,    87,   239,   179,   236,    -1,
      86,   239,   141,   236,    -1,   235,   239,   179,   236,    -1,
     177,   239,   179,   236,    -1,   178,   239,   179,   236,    -1,
     176,   239,   179,   236,    -1,   176,   239,   180,   236,    -1,
     175,   239,   179,   236,    -1,   175,   239,   180,   236,    -1,
     134,   239,   245,   236,    -1,    20,   239,   245,   236,    -1,
     135,   239,   245,   236,    -1,   171,   239,   179,   236,    -1,
     120,   239,   179,   236,    -1,   222,   239,   179,   236,    -1,
     130,   239,   179,   236,    -1,   107,   239,   141,   236,    -1,
      79,   239,   245,   236,    -1,    43,   239,   123,   236,    -1,
      96,   239,   123,   236,    -1,   106,   239,   123,   236,    -1,
     165,   239,   141,   236,    -1,    31,   239,   141,   236,    -1,
      27,   239,   123,   236,    -1,   225,   239,   179,   236,    -1,
      45,   239,   141,   236,    -1,   138,   239,   179,   236,    -1,
      38,   239,   179,   236,    -1,   220,   239,   245,   236,    -1,
      -1,   132,   492,   239,   493,   236,    -1,   493,   240,   494,
      -1,   494,    -1,   186,    -1,   189,    -1,   191,    -1,   192,
      -1,   195,    -1,   213,    -1,   209,    -1,   211,    -1,   216,
      -1,   214,    -1,   194,    -1,   210,    -1,   212,    -1,   196,
      -1,   219,    -1,   187,    -1,   188,    -1,   199,    -1,    -1,
     129,   496,   239,   497,   236,    -1,   497,   240,   498,    -1,
     498,    -1,   186,    -1,   189,    -1,   191,    -1,   192,    -1,
     195,    -1,   213,    -1,   209,    -1,   211,    -1,   216,    -1,
     214,    -1,   194,    -1,   210,    -1,   212,    -1,   196,    -1,
     219,    -1,   187,    -1,   188,    -1,   199,    -1,   108,   239,
     123,   236,    -1,   109,   239,   123,   236,    -1,    32,   239,
     123,   236,    -1,   190,   239,   247,   236,    -1,    42,   239,
     179,   236,    -1,    -1,    61,   505,   238,   506,   237,   236,
      -1,   506,   507,    -1,   507,    -1,   508,    -1,   509,    -1,
     510,    -1,   514,    -1,   515,    -1,   516,    -1,     1,    -1,
      47,   239,   179,   236,    -1,    44,   239,   245,   236,    -1,
      -1,    94,   511,   239,   512,   236,    -1,   512,   240,   513,
      -1,   513,    -1,   181,    -1,    12,    -1,   224,   239,   141,
     236,    -1,   112,   239,   141,   236,    -1,    -1,     4,   517,
     239,   518,   236,    -1,   518,   240,   519,    -1,   519,    -1,
     181,    -1,    12,    -1,    23,   238,   521,   237,   236,    -1,
     521,   522,    -1,   522,    -1,   523,    -1,   524,    -1,   525,
      -1,   526,    -1,   532,    -1,   527,    -1,   528,    -1,   529,
      -1,   530,    -1,   531,    -1,   533,    -1,   534,    -1,   535,
      -1,   536,    -1,   537,    -1,     1,    -1,    40,   239,   179,
     236,    -1,   226,   239,   179,   236,    -1,   227,   239,   179,
     236,    -1,   228,   239,   179,   236,    -1,    88,   239,   245,
     236,    -1,    89,   239,   245,   236,    -1,   133,   239,   179,
     236,    -1,    99,   239,   123,   236,    -1,   142,   239,   179,
     236,    -1,    98,   239,   123,   236,    -1,    34,   239,   123,
     236,    -1,    33,   239,   123,   236,    -1,   118,   239,   179,
     236,    -1,   119,   239,   179,   236,    -1,    14,   239,   179,
     236,    -1,   163,   238,   539,   237,   236,    -1,   539,   540,
      -1,   540,    -1,   541,    -1,   542,    -1,   543,    -1,   545,
      -1,   544,    -1,   546,    -1,     1,    -1,    54,   239,   179,
     236,    -1,    74,   239,   179,   236,    -1,    92,   239,   245,
     236,    -1,    70,   239,   179,   236,    -1,    39,   239,   179,
     236,    -1,    73,   239,   179,   236,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   373,   373,   374,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   402,   402,   403,   407,
     411,   415,   419,   423,   429,   429,   430,   431,   432,   433,
     440,   443,   443,   444,   444,   444,   446,   463,   474,   477,
     477,   479,   479,   479,   480,   480,   481,   481,   482,   483,
     483,   484,   484,   487,   521,   581,   595,   613,   622,   636,
     645,   673,   703,   719,   769,   771,   771,   772,   772,   772,
     773,   775,   784,   793,   805,   807,   807,   810,   810,   810,
     811,   811,   812,   812,   813,   813,   816,   820,   824,   828,
     835,   842,   849,   853,   857,   861,   865,   869,   873,   879,
     889,   888,   981,   981,   982,   982,   983,   983,   983,   983,
     983,   984,   984,   984,   985,   985,   985,   986,   986,   987,
     987,   987,   988,   988,   989,   991,  1003,  1015,  1038,  1050,
    1061,  1072,  1114,  1123,  1134,  1145,  1156,  1167,  1178,  1189,
    1200,  1211,  1222,  1234,  1233,  1237,  1237,  1238,  1239,  1241,
    1248,  1255,  1262,  1269,  1276,  1283,  1290,  1297,  1304,  1311,
    1318,  1325,  1332,  1339,  1346,  1360,  1359,  1379,  1379,  1381,
    1381,  1382,  1382,  1383,  1384,  1385,  1386,  1387,  1388,  1389,
    1390,  1393,  1439,  1485,  1491,  1497,  1503,  1509,  1515,  1521,
    1527,  1537,  1536,  1553,  1552,  1556,  1556,  1557,  1561,  1567,
    1567,  1568,  1568,  1568,  1568,  1568,  1570,  1572,  1572,  1574,
    1589,  1611,  1620,  1633,  1632,  1706,  1706,  1707,  1707,  1707,
    1707,  1707,  1708,  1708,  1709,  1709,  1709,  1710,  1710,  1711,
    1711,  1711,  1712,  1714,  1743,  1756,  1767,  1777,  1776,  1780,
    1780,  1781,  1782,  1784,  1792,  1799,  1806,  1813,  1820,  1827,
    1834,  1841,  1848,  1857,  1868,  1879,  1890,  1901,  1912,  1924,
    1943,  1953,  1962,  1978,  1977,  1990,  1990,  1991,  1991,  1991,
    1991,  1993,  2002,  2017,  2036,  2035,  2051,  2051,  2052,  2052,
    2052,  2052,  2054,  2063,  2079,  2078,  2084,  2084,  2085,  2089,
    2093,  2097,  2101,  2105,  2109,  2119,  2118,  2140,  2140,  2141,
    2141,  2141,  2143,  2150,  2149,  2155,  2155,  2156,  2160,  2164,
    2168,  2172,  2176,  2180,  2184,  2194,  2193,  2343,  2343,  2344,
    2344,  2345,  2345,  2345,  2345,  2346,  2346,  2346,  2347,  2347,
    2347,  2348,  2348,  2348,  2349,  2349,  2349,  2350,  2350,  2353,
    2365,  2377,  2386,  2398,  2410,  2416,  2420,  2428,  2438,  2437,
    2441,  2441,  2442,  2443,  2445,  2452,  2463,  2470,  2477,  2484,
    2494,  2535,  2546,  2557,  2572,  2583,  2596,  2609,  2618,  2654,
    2653,  2676,  2676,  2677,  2677,  2677,  2679,  2688,  2701,  2700,
    2722,  2722,  2723,  2723,  2723,  2725,  2734,  2747,  2746,  2767,
    2767,  2768,  2768,  2770,  2783,  2782,  2833,  2832,  2836,  2836,
    2837,  2843,  2843,  2844,  2844,  2844,  2844,  2846,  2855,  2867,
    2870,  2870,  2871,  2871,  2871,  2872,  2872,  2873,  2873,  2874,
    2874,  2875,  2875,  2876,  2876,  2877,  2878,  2878,  2879,  2879,
    2880,  2880,  2881,  2881,  2882,  2882,  2883,  2883,  2884,  2884,
    2885,  2886,  2886,  2887,  2887,  2888,  2889,  2889,  2890,  2890,
    2891,  2891,  2892,  2893,  2893,  2894,  2894,  2895,  2895,  2896,
    2896,  2897,  2897,  2898,  2898,  2903,  2909,  2915,  2921,  2926,
    2931,  2937,  2943,  2949,  2955,  2961,  2967,  2973,  2979,  2985,
    2991,  2997,  3003,  3014,  3020,  3029,  3035,  3041,  3047,  3051,
    3057,  3061,  3067,  3073,  3079,  3085,  3091,  3097,  3103,  3109,
    3120,  3126,  3132,  3138,  3144,  3153,  3185,  3203,  3209,  3218,
    3224,  3229,  3236,  3235,  3241,  3241,  3242,  3246,  3250,  3254,
    3258,  3262,  3266,  3270,  3274,  3278,  3282,  3286,  3290,  3294,
    3298,  3302,  3306,  3310,  3317,  3316,  3322,  3322,  3323,  3327,
    3331,  3335,  3339,  3343,  3347,  3351,  3355,  3359,  3363,  3367,
    3371,  3375,  3379,  3383,  3387,  3391,  3397,  3403,  3409,  3415,
    3421,  3431,  3430,  3456,  3456,  3457,  3457,  3458,  3459,  3460,
    3461,  3462,  3465,  3471,  3478,  3477,  3482,  3482,  3483,  3487,
    3493,  3516,  3526,  3525,  3568,  3568,  3569,  3573,  3582,  3585,
    3585,  3586,  3586,  3587,  3588,  3589,  3590,  3591,  3592,  3593,
    3594,  3595,  3596,  3597,  3598,  3599,  3600,  3603,  3609,  3615,
    3621,  3627,  3633,  3639,  3645,  3651,  3657,  3663,  3669,  3675,
    3681,  3687,  3696,  3699,  3699,  3700,  3700,  3700,  3701,  3702,
    3703,  3704,  3707,  3713,  3719,  3733,  3739,  3745
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
  "CAN_FLOOD", "CAN_IDLE", "CHANNEL", "CIPHER_PREFERENCE", "CLASS", 
  "COMPRESSED", "COMPRESSION_LEVEL", "CONNECT", "CONNECTFREQ", 
  "CRYPTLINK", "DEFAULT_CIPHER_PREFERENCE", "DEFAULT_FLOODCOUNT", 
  "DEFAULT_SPLIT_SERVER_COUNT", "DEFAULT_SPLIT_USER_COUNT", "DENY", 
  "DESCRIPTION", "DIE", "DISABLE_AUTH", "DISABLE_HIDDEN", 
  "DISABLE_LOCAL_CHANNELS", "DISABLE_REMOTE_COMMANDS", "DOT_IN_IP6_ADDR", 
  "DOTS_IN_IDENT", "DURATION", "EGDPOOL_PATH", "EMAIL", "ENABLE", 
  "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT", "FAILED_OPER_NOTICE", "FAKENAME", 
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
  "PING_COOKIE", "PING_TIME", "PORT", "QSTRING", "QUIET_ON_BAN", "REASON", 
  "REDIRPORT", "REDIRSERV", "REGEX_T", "REHASH", "REMOTE", "REMOTEBAN", 
  "RESTRICTED", "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE", 
  "SSL_CERTIFICATE_FILE", "RESV", "RESV_EXEMPT", "SECONDS", "MINUTES", 
  "HOURS", "DAYS", "WEEKS", "SENDQ", "SEND_PASSWORD", "SERVERHIDE", 
  "SERVERINFO", "SERVLINK_PATH", "IRCD_SID", "TKLINE_EXPIRE_NOTICES", 
  "T_SHARED", "T_CLUSTER", "TYPE", "SHORT_MOTD", "SILENT", "SPOOF", 
  "SPOOF_NOTICE", "STATS_I_OPER_ONLY", "STATS_K_OPER_ONLY", 
  "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL", "TMASKED", 
  "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS", "T_ALL", 
  "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN", "T_CLIENT_FLOOD", 
  "T_DEAF", "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL", "T_INVISIBLE", 
  "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT", "T_L_DEBUG", 
  "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE", "T_L_WARN", 
  "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ", "T_SERVNOTICE", 
  "T_SKILL", "T_SPY", "T_SSL", "T_UNAUTH", "T_UNRESV", "T_UNXLINE", 
  "T_WALLOP", "THROTTLE_TIME", "TOPICBURST", "TRUE_NO_OPER_FLOOD", 
  "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT", "USE_INVEX", "USE_KNOCK", 
  "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST", "VHOST6", "XLINE", "WARN", 
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
  "oper_remote", "oper_kline", "oper_xline", "oper_unkline", "oper_gline", 
  "oper_nick_changes", "oper_die", "oper_rehash", "oper_admin", 
  "oper_flags", "@2", "oper_flags_items", "oper_flags_item", 
  "oper_flags_item_atom", "class_entry", "@3", "class_name_b", 
  "class_items", "class_item", "class_name", "class_name_t", 
  "class_ping_time", "class_number_per_ip", "class_connectfreq", 
  "class_max_number", "class_max_global", "class_max_local", 
  "class_max_ident", "class_sendq", "listen_entry", "@4", "listen_flags", 
  "@5", "listen_flags_items", "listen_flags_item", "listen_items", 
  "listen_item", "listen_port", "port_items", "port_item", 
  "listen_address", "listen_host", "auth_entry", "@6", "auth_items", 
  "auth_item", "auth_user", "auth_passwd", "auth_spoof_notice", 
  "auth_class", "auth_flags", "@7", "auth_flags_items", "auth_flags_item", 
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
  "kill_entry", "@15", "kill_items", "kill_item", "kill_user", 
  "kill_reason", "deny_entry", "@16", "deny_items", "deny_item", 
  "deny_ip", "deny_reason", "exempt_entry", "@17", "exempt_items", 
  "exempt_item", "exempt_ip", "gecos_entry", "@18", "gecos_flags", "@19", 
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
  "general_caller_id_wait", "general_pace_wait_simple", 
  "general_short_motd", "general_no_oper_flood", 
  "general_true_no_oper_flood", "general_oper_pass_resv", 
  "general_message_locale", "general_idletime", "general_dots_in_ident", 
  "general_maximum_links", "general_max_targets", "general_servlink_path", 
  "general_default_cipher_preference", "general_compression_level", 
  "general_use_egd", "general_egdpool_path", "general_ping_cookie", 
  "general_disable_auth", "general_throttle_time", "general_oper_umodes", 
  "@20", "umode_oitems", "umode_oitem", "general_oper_only_umodes", "@21", 
  "umode_items", "umode_item", "general_min_nonwildcard", 
  "general_min_nonwildcard_simple", "general_default_floodcount", 
  "general_client_flood", "general_dot_in_ip6_addr", "gline_entry", "@22", 
  "gline_items", "gline_item", "gline_enable", "gline_duration", 
  "gline_logging", "@23", "gline_logging_types", 
  "gline_logging_type_item", "gline_user", "gline_server", "gline_action", 
  "@24", "gdeny_types", "gdeny_type_item", "channel_entry", 
  "channel_items", "channel_item", "channel_disable_local_channels", 
  "channel_use_except", "channel_use_invex", "channel_use_knock", 
  "channel_knock_delay", "channel_knock_delay_channel", 
  "channel_invite_ops_only", "channel_max_chans_per_user", 
  "channel_quiet_on_ban", "channel_max_bans", 
  "channel_default_split_user_count", 
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
     485,   486,   487,   488,   489,   490,    59,   125,   123,    61,
      44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   241,   242,   242,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   244,   244,   245,   245,
     245,   245,   245,   245,   246,   246,   247,   247,   247,   247,
     248,   249,   249,   250,   250,   250,   251,   252,   253,   254,
     254,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   268,   269,   269,   269,
     269,   270,   271,   272,   273,   274,   274,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   276,   277,   278,   279,
     280,   281,   282,   282,   282,   282,   282,   282,   282,   283,
     285,   284,   286,   286,   287,   287,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   308,   307,   309,   309,   310,   310,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   313,   312,   314,   314,   315,
     315,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   328,   327,   330,   329,   331,   331,   332,   332,   333,
     333,   334,   334,   334,   334,   334,   335,   336,   336,   337,
     337,   338,   339,   341,   340,   342,   342,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   344,   345,   346,   347,   349,   348,   350,
     350,   351,   351,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   364,   363,   365,   365,   366,   366,   366,
     366,   367,   368,   369,   371,   370,   372,   372,   373,   373,
     373,   373,   374,   375,   377,   376,   378,   378,   379,   379,
     379,   379,   379,   379,   379,   381,   380,   382,   382,   383,
     383,   383,   384,   386,   385,   387,   387,   388,   388,   388,
     388,   388,   388,   388,   388,   390,   389,   391,   391,   392,
     392,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   394,
     395,   396,   397,   398,   399,   400,   400,   401,   403,   402,
     404,   404,   405,   405,   406,   406,   406,   406,   406,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   417,
     416,   418,   418,   419,   419,   419,   420,   421,   423,   422,
     424,   424,   425,   425,   425,   426,   427,   429,   428,   430,
     430,   431,   431,   432,   434,   433,   436,   435,   437,   437,
     438,   439,   439,   440,   440,   440,   440,   441,   442,   443,
     444,   444,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   469,
     470,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   492,   491,   493,   493,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   496,   495,   497,   497,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   499,   500,   501,   502,
     503,   505,   504,   506,   506,   507,   507,   507,   507,   507,
     507,   507,   508,   509,   511,   510,   512,   512,   513,   513,
     514,   515,   517,   516,   518,   518,   519,   519,   520,   521,
     521,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   539,   540,   540,   540,   540,   540,
     540,   540,   541,   542,   543,   544,   545,   546
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
       1,     1,     1,     1,     2,     4,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     7,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     6,     0,     5,     3,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     4,     3,     1,     1,
       3,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     4,     4,     0,     5,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       2,     4,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     2,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     2,     1,     1,
       1,     2,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     7,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       1,     4,     4,     4,     4,     4,     4,     4,     0,     5,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     4,     4,     0,     6,     2,
       1,     1,     1,     4,     0,     6,     0,     5,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     4,     4,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     0,     5,     3,     1,     1,     1,
       4,     4,     0,     5,     3,     1,     1,     1,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,   223,     0,   175,   325,   388,
     397,   404,     0,   571,   379,   201,     0,     0,   110,   273,
       0,     0,   284,   305,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     177,   327,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   616,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   600,   601,   602,   603,   604,   606,
     607,   608,   609,   610,   605,   611,   612,   613,   614,   615,
     192,     0,   178,   350,     0,   328,     0,     0,     0,   474,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   544,     0,   522,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   421,   471,   472,   469,   473,   470,   432,
     422,   423,   460,   424,   425,   426,   427,   428,   429,   430,
     431,   465,   433,   434,   435,   437,   442,   438,   440,   439,
     455,   441,   443,   444,   445,   446,   449,   447,   436,   448,
     451,   459,   461,   462,   452,   453,   467,   468,   464,   454,
     450,   457,   458,   456,   463,   466,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    92,    94,    93,    90,    91,     0,     0,
       0,     0,    42,    43,    44,   136,     0,   113,     0,   641,
       0,     0,     0,     0,     0,     0,     0,   634,   635,   636,
     637,   639,   638,   640,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    61,    58,
      51,    60,    54,    55,    56,    52,    59,    57,    53,     0,
       0,    80,     0,     0,     0,     0,    75,     0,     0,     0,
       0,   247,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   226,   227,   228,   237,   229,   230,
     231,   232,   233,   240,   234,   235,   236,   238,   239,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   599,     0,     0,   394,
       0,     0,     0,   391,   392,   393,   402,     0,     0,   400,
     401,   416,   406,     0,     0,   415,     0,   412,   413,   414,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   420,   581,   592,     0,     0,   584,     0,
       0,     0,   574,   575,   576,   577,   578,   579,   580,   385,
       0,     0,     0,   382,   383,   384,     0,   203,     0,     0,
       0,   212,     0,   210,   211,   213,   214,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    45,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,   276,
     277,   278,   279,     0,     0,     0,     0,     0,     0,     0,
     633,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,   294,     0,     0,
     287,   288,   289,   290,     0,     0,   313,     0,   308,   309,
     310,     0,     0,     0,    74,   242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   598,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   358,     0,     0,     0,     0,     0,     0,     0,     0,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   346,
     343,   345,   344,   342,   339,   340,   341,   347,     0,     0,
       0,   390,     0,     0,   399,     0,     0,     0,     0,   411,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,   419,     0,     0,     0,     0,
       0,     0,     0,   573,     0,     0,     0,   381,   215,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,    40,     0,     0,     0,     0,     0,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   131,   119,   132,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   133,   280,     0,     0,     0,     0,   275,     0,     0,
       0,     0,     0,     0,   632,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,   291,     0,     0,
       0,     0,   286,   311,     0,     0,     0,   307,    83,    82,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   631,   628,   627,
     617,    26,    26,    26,    26,    26,    28,    27,   621,   622,
     626,   624,   629,   630,   623,   625,   618,   619,   620,   190,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,   348,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,   389,     0,   398,     0,     0,     0,   405,
     485,   489,   477,   503,   516,   515,   568,   520,   483,   570,
     511,   518,   484,   475,   476,   492,   481,   510,   482,   480,
     494,   493,   512,   488,   487,   486,   513,   509,   566,   567,
     506,   548,   563,   564,   549,   550,   551,   558,   552,   561,
     565,   554,   559,   555,   560,   553,   557,   556,   562,     0,
     547,   508,   526,   541,   542,   527,   528,   529,   536,   530,
     539,   543,   532,   537,   533,   538,   531,   535,   534,   540,
       0,   525,   502,   504,   519,   514,   479,   505,   500,   501,
     498,   499,   496,   497,   491,   490,    34,    34,    34,    36,
      35,   569,   521,   507,   517,   478,   495,     0,     0,     0,
       0,     0,     0,   572,     0,     0,   380,     0,     0,     0,
     219,     0,   218,   202,   100,   101,    99,    98,   102,   108,
     103,   107,   105,   106,   104,    97,    96,   109,    46,    47,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,   274,   646,   642,   645,   647,   643,
     644,    67,    73,    65,    69,    68,    64,    63,    66,    72,
      70,    71,     0,     0,     0,   285,     0,     0,   306,   266,
     246,   265,   257,   258,   254,   260,   256,   255,   262,   259,
       0,   261,   253,     0,   250,   252,   268,   264,   263,   272,
     267,   244,   271,   270,   269,   245,   243,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   176,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     326,   395,   396,   403,   410,     0,   409,   417,   418,   545,
       0,   523,     0,    37,    38,    39,   597,   596,     0,   595,
     583,   582,   589,   588,     0,   587,   591,   590,   387,   386,
     208,   207,     0,   206,   222,   221,     0,   216,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,   282,   283,
     281,   292,   298,   302,   304,   303,   301,   299,   300,     0,
     297,   293,   312,   317,   321,   324,   323,   322,   320,   318,
     319,     0,   316,   251,   248,     0,   195,   197,   199,   198,
     196,   191,   194,   193,   200,   353,   355,   356,   374,   378,
     377,   373,   372,   371,   357,   367,   368,   365,   366,   364,
       0,   369,     0,   361,   363,   351,   375,   376,   349,   354,
     370,   352,   407,     0,   546,   524,   593,     0,   585,     0,
     204,     0,   220,   217,   152,   142,   150,   139,   167,   165,
     174,   164,   159,   168,   172,   161,   169,     0,   171,   166,
     160,   173,   170,   162,   163,     0,   156,   158,   148,   143,
     140,   145,   135,   149,   138,   151,   144,   141,   147,   137,
     146,   295,     0,   314,     0,   249,   362,   359,     0,   408,
     594,   586,   205,   157,   154,     0,   296,   315,   360,   155
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   836,   837,   979,   980,    25,   251,   252,
     253,   254,    26,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,    27,    71,    72,    73,
      74,    75,    28,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,    29,    61,   256,   752,   753,   754,   257,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,  1025,  1285,  1286,
    1287,    30,    50,   111,   580,   581,   582,   112,   583,   584,
     585,   586,   587,   588,   589,   590,    31,    58,   461,   709,
    1162,  1163,   462,   463,   464,  1001,  1002,   465,   466,    32,
      48,   323,   324,   325,   326,   327,   328,   329,   539,  1083,
    1084,  1085,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,    33,    62,   488,   489,   490,   491,   492,    34,
      65,   519,   520,   521,   522,   523,   799,  1199,  1200,    35,
      66,   527,   528,   529,   530,   805,  1211,  1212,    36,    51,
     114,   609,   610,   611,   115,   612,   613,   614,   615,   616,
     617,   618,   871,  1242,  1243,  1244,   619,   620,   621,   622,
     623,   624,   625,   626,   627,    37,    57,   452,   453,   454,
     455,    38,    52,   362,   363,   364,   365,    39,    53,   368,
     369,   370,    40,    54,   375,   635,  1135,  1136,   376,   377,
     378,   379,    41,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   413,   960,   961,   220,   411,   939,   940,   221,   222,
     223,   224,   225,    42,    56,   441,   442,   443,   444,   445,
     699,  1154,  1155,   446,   447,   448,   696,  1148,  1149,    43,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    44,   266,   267,
     268,   269,   270,   271,   272,   273
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -870
static const short yypact[] =
{
    -870,   735,  -870,  -179,  -235,  -870,  -229,  -870,  -870,  -870,
    -870,  -870,  -222,  -870,  -870,  -870,  -215,  -205,  -870,  -870,
    -203,  -200,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,   254,  -195,   546,
    -135,   -92,  -183,  -172,  -162,   432,  -156,  -144,  -141,   334,
     189,   -42,  -117,   601,   261,   -98,   -79,  -134,  -104,   -70,
     -60,    41,  -870,  -870,  -870,  -870,   669,  -870,   -50,   -45,
     -38,   -29,    -7,    -6,    -1,    15,    33,    35,    47,    52,
      54,    62,    64,   118,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,   -12,  -870,  -870,    42,  -870,   208,     4,   307,  -870,
      74,    75,    77,    82,    83,    86,    88,    89,    98,   100,
     101,   103,   109,   111,   115,   119,   120,   123,   128,   130,
     133,   138,   145,   146,   148,   160,   161,   165,   167,   168,
     169,  -870,   174,  -870,   176,   178,   181,   182,   184,   185,
     191,   192,   204,   207,   212,   214,   219,   222,   226,   227,
     228,   229,     9,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,   348,     6,   234,    70,
     232,   237,   239,   240,   241,   242,   245,   247,    67,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,   127,   248,
     251,    24,  -870,  -870,  -870,  -870,   190,  -870,    97,  -870,
     252,   255,   256,   257,   260,   263,    72,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,   162,   264,   265,   266,   269,   271,
     278,   281,   288,   291,   292,   294,   217,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,   147,
      45,  -870,   142,   195,   306,   196,  -870,   309,   304,   310,
     311,  -870,   314,   315,   317,   318,   319,   326,   330,   335,
     336,   337,   338,   220,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
     277,   377,   423,   402,   462,   462,   475,   477,   425,   433,
     438,   439,   440,   444,   445,   389,  -870,   676,   797,  -870,
     390,   391,    20,  -870,  -870,  -870,  -870,   398,    12,  -870,
    -870,  -870,  -870,   399,   404,  -870,   159,  -870,  -870,  -870,
     447,   462,   468,   462,   518,   507,   526,   474,   482,   487,
     533,   527,   490,   549,   550,   553,   499,   462,   501,   558,
     541,   504,   561,   562,   563,   462,   564,   548,   572,   574,
     519,   460,   521,   463,   462,   462,   522,   565,   524,   525,
    -116,   -52,   530,   532,   462,   462,   589,   462,   534,   535,
     536,   537,   488,  -870,  -870,  -870,   481,   486,  -870,   491,
     494,   164,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
     500,   502,    61,  -870,  -870,  -870,   493,  -870,   503,   508,
     509,  -870,   124,  -870,  -870,  -870,  -870,  -870,   582,   602,
     605,   608,   387,   609,   610,   573,   517,  -870,  -870,   615,
     616,   523,  -870,   484,   528,   529,   540,   545,   149,  -870,
    -870,  -870,  -870,   583,   586,   587,   588,   590,   462,   539,
    -870,  -870,   620,   592,   639,   645,   646,   654,   656,   658,
     681,   665,   666,   580,  -870,   584,   570,  -870,   585,    44,
    -870,  -870,  -870,  -870,   594,   593,  -870,    58,  -870,  -870,
    -870,   595,   597,   598,  -870,  -870,   640,   677,   647,   596,
     657,   660,   661,   662,   668,   707,   730,   711,   713,   679,
     714,   623,  -870,   624,   625,   627,   628,   279,   629,   630,
     631,   632,   633,   634,   635,   636,   641,   642,   643,  -870,
     644,   617,   637,   648,   651,   652,   653,   655,   667,   672,
     218,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,   649,   673,   674,   675,   680,   683,   687,   688,   690,
     691,  -870,   692,   693,   694,   695,   696,   697,   708,   172,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,   740,   741,
     650,  -870,   742,   659,  -870,   712,   743,   755,   664,  -870,
     671,   710,   720,   728,   731,   732,   733,   734,   736,   737,
     738,   745,   747,   748,   750,   751,   752,   753,   754,   756,
     757,   758,   759,   760,   761,   762,   763,   764,   765,   767,
     768,   729,   769,   766,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,   365,   784,
     785,   786,   787,   788,   790,  -870,   727,   462,   718,   791,
     809,   830,   792,  -870,   850,   861,   793,  -870,  -870,   794,
     884,   886,   908,   796,  -870,   798,   799,   800,   801,   802,
     803,   804,   805,   806,   807,   808,   810,   811,   812,  -870,
     813,   814,  -870,   815,   816,   817,   818,   819,  -870,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   831,
     832,   833,    19,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,   904,   911,   912,   837,  -870,   838,   839,
     840,   841,   842,   843,  -870,   844,   845,   846,   847,   848,
     849,   851,   852,   853,   854,   855,  -870,  -870,   913,   856,
     928,   857,  -870,  -870,   945,   858,   860,  -870,  -870,  -870,
    -870,   862,   863,   864,   670,   865,   866,   867,   868,   869,
     870,   871,   872,   873,   874,   875,  -870,  -870,  -870,  -870,
    -870,   462,   462,   462,   462,   462,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
     462,   969,   971,   989,   990,   973,   992,   462,   589,   880,
    -870,  -870,   976,   -16,   722,   977,   978,   726,   941,   942,
     981,   885,   982,   984,   985,   986,  1005,   988,   991,   894,
    -870,   895,   897,  -870,   898,  -870,   993,   899,   900,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -232,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -225,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,   589,   589,   589,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,     7,   901,   902,
      22,   905,   906,  -870,   907,   909,  -870,   -22,   910,   914,
     724,  -210,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,   961,  1003,   968,   970,   915,   972,   974,   979,   980,
    1007,   983,  1011,   987,   994,  1014,   995,  1015,   996,   921,
    -870,   924,   925,   927,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,   929,   193,   931,  -870,   932,   388,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
     789,  -870,  -870,  -208,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,   933,   934,   935,   936,   940,   943,   944,   946,
     947,  -870,   948,   949,   950,   951,   952,   953,   954,   955,
     956,   957,   392,   958,   959,   960,   962,   963,   964,   965,
    -870,  -870,  -870,  -870,  -870,  -171,  -870,  -870,  -870,  -870,
     729,  -870,   766,  -870,  -870,  -870,  -870,  -870,  -136,  -870,
    -870,  -870,  -870,  -870,  -126,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -103,  -870,  -870,  -870,  1041,  -870,   908,   966,
     967,   975,   997,   511,   998,   999,  1000,  1001,  1002,  1004,
    1006,  1008,  1009,  1010,  1012,  1013,  1016,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,   -13,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,    30,  -870,  -870,  -870,   670,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
       1,  -870,    39,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,   993,  -870,  -870,  -870,     7,  -870,    22,
    -870,   -22,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,   579,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,    71,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,   193,  -870,   388,  -870,  -870,  -870,   392,  -870,
    -870,  -870,  -870,  -870,  -870,   511,  -870,  -870,  -870,  -870
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -870,  -870,  -870,  -309,  -344,  -869,  -424,  -870,  -870,   926,
    -870,  -870,  -870,  -870,   892,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  1110,  -870,
    -870,  -870,  -870,  -870,  1017,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,   452,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -118,
     -72,  -870,  -870,  -870,  -870,   626,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,   -54,  -870,   746,  -870,  -870,    46,  -870,  -870,  -870,
    -870,  -870,   887,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
      -3,   129,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,   725,  -870,  -870,  -870,  -870,
    -870,  -870,   698,  -870,  -870,  -870,  -870,  -870,   -87,  -870,
    -870,  -870,   689,  -870,  -870,  -870,  -870,   -86,  -870,  -870,
    -870,  -870,   611,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,   -89,   -19,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,   795,  -870,
    -870,  -870,  -870,  -870,   877,  -870,  -870,  -870,  -870,  -870,
     859,  -870,  -870,  -870,  -870,  -870,  -870,   -31,  -870,   878,
    -870,  -870,  -870,  -870,  1051,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,    84,  -870,  -870,  -870,    85,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,   834,  -870,  -870,  -870,
    -870,  -870,   -35,  -870,  -870,  -870,  -870,  -870,   -28,  -870,
    -870,  1135,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  1018,
    -870,  -870,  -870,  -870,  -870,  -870
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     558,   559,   689,    47,  1139,   366,   110,   449,  1140,    49,
     119,  1141,  1235,   366,  1236,  1142,    55,   120,   121,  1146,
     733,   359,   122,    59,   734,   248,  1167,  1237,  1214,   123,
    1168,  1238,  1215,    60,  1152,    63,   124,   641,    64,   643,
     125,   126,    67,    76,   735,   515,   524,   127,  1160,   113,
     128,   129,   130,   657,   131,   116,   736,    45,    46,   524,
     132,   665,   449,   680,   681,  1252,   117,   737,   229,  1253,
     674,   675,   738,   259,   133,   134,   118,    68,   135,   739,
     686,   687,   226,   690,   136,   367,   740,    69,   137,   138,
     741,  1239,   139,   367,   227,   140,   141,   228,   484,   255,
    1256,   360,   301,   742,  1257,   142,   143,  1143,  1144,  1145,
    1258,   260,   144,   145,  1259,   146,   147,   148,   149,    77,
     485,   258,   230,   231,   232,   456,   261,   682,   683,   150,
     233,   743,    78,  1260,   249,   302,   744,  1261,   151,   152,
     299,   153,   262,   154,   155,   263,   264,   156,   515,   450,
     484,    79,    80,    70,   783,   745,   516,   525,    81,   300,
     371,   250,   234,   361,   265,   434,   746,   747,   435,   303,
     525,   748,   485,   591,   157,   592,   158,   457,   593,   304,
     159,  1113,  1114,   594,   160,   161,   162,   163,  1147,   340,
     248,   164,   165,  1161,   341,   235,   595,   596,   597,   166,
     458,   342,   598,  1153,   450,   459,    82,    83,   436,   359,
     343,   437,   372,   486,   517,   526,    84,    85,   274,   570,
     599,   307,  1241,  1301,   600,   601,   357,  1302,   526,   167,
     451,   168,   344,   345,   169,   456,    86,    87,   346,   170,
     487,   308,   749,   750,   171,   309,   432,   571,   602,   633,
     603,    88,   751,   275,   347,    67,  1039,   630,   438,   516,
      89,   481,   274,   604,   460,   486,  1303,   236,   518,   310,
    1304,   373,   348,   311,   349,  1307,   439,  1192,   305,  1308,
     358,   801,   312,   531,   605,   451,   350,   457,   313,   360,
      68,   351,   487,   352,   276,   806,   237,   275,   706,   249,
      69,   353,   374,   354,   476,   314,   467,  1314,   371,   499,
     458,  1315,   606,   380,   381,   459,   382,   517,   572,   573,
     574,   383,   384,   575,   607,   385,   250,   386,   387,   277,
     576,   278,   279,   315,   608,   229,   532,   388,   276,   389,
     390,   316,   391,   577,    90,    91,    92,  1193,   392,   434,
     393,   361,   435,   988,   394,   355,   317,   578,   395,   396,
     372,   713,   397,   478,   318,   319,    70,   398,   280,   399,
     281,   518,   400,   277,   460,   278,   279,   401,  1194,   579,
     976,   977,   978,   282,   402,   403,   776,   404,   440,   230,
     231,   232,   436,   320,   321,   437,   638,   233,   501,   405,
     406,   702,   557,  1235,   407,  1236,   408,   409,   410,   879,
    1195,  1196,   280,   412,   281,   414,  1197,   415,  1237,   373,
     416,   417,  1238,   418,   419,   283,  1198,   282,   483,   234,
     420,   421,   534,   119,  1110,   831,   832,   833,   834,   835,
     120,   121,   438,   422,   322,   122,   423,   533,   284,   285,
     374,   424,   123,   425,   513,   859,   553,   551,   426,   124,
     439,   427,   235,   125,   126,   428,   429,   430,   431,   283,
     127,   468,  1203,   128,   129,   130,   469,   131,   470,   471,
     472,   473,  1239,   132,   474,   733,   475,   479,   688,   734,
     480,   493,   284,   285,   494,   495,   496,   133,   134,   497,
     554,   135,   498,   502,   503,   504,  1102,   136,   505,   735,
     506,   137,   138,  1109,  1240,   139,  1268,   507,   140,   141,
     508,   736,  1097,  1098,  1099,  1100,  1101,   509,   142,   143,
     510,   511,   737,   512,   236,   144,   145,   738,   146,   147,
     148,   149,  1204,   536,   739,   535,   555,    77,  1269,   537,
     538,   740,   150,   540,   541,   741,   542,   543,   544,  1270,
      78,   151,   152,   237,   153,   545,   154,   155,   742,   546,
     156,  1271,   440,  1205,   547,   548,   549,   550,  1272,    79,
      80,   556,  1273,  1274,  1268,   557,    81,  1206,   719,   720,
     721,   722,   723,   724,   725,  1275,   743,   157,   560,   158,
     561,   744,   259,   159,   562,  1207,  1208,   160,   161,   162,
     163,  1209,   563,  1241,   164,   165,  1269,   564,   565,   566,
     745,  1210,   166,   567,   568,   569,   640,  1270,  1276,   628,
     629,   746,   747,  1277,    82,    83,   748,   632,   636,  1271,
     260,   644,  1278,   637,    84,    85,  1272,   642,   645,   646,
    1273,  1274,   167,   647,   168,   261,   650,   169,  1279,  1280,
    1281,   648,   170,  1275,    86,    87,   649,   171,   651,   652,
     307,   262,   653,   654,   263,   264,   655,   570,   656,    88,
     658,   659,   660,   661,   662,   663,   664,   666,    89,   667,
     308,  1072,  1073,   265,   309,   668,  1276,   669,   670,   671,
     672,   676,   673,   678,   679,   571,   677,   749,   750,   684,
    1278,   685,   688,   691,   692,   693,   694,   751,   310,  1074,
     697,  1282,   311,   715,   695,   698,  1279,  1280,  1281,   708,
     700,   312,  1075,   701,  1283,     2,     3,   313,  1076,   704,
       4,   705,   710,   716,  1284,     5,   717,   711,   712,   718,
     726,   727,   728,   729,   314,  1077,   730,   731,     6,   732,
       7,   785,   778,     8,   772,   779,   780,   781,   773,   782,
       9,   786,    90,    91,    92,   784,   572,   573,   574,   774,
     787,   575,   315,  1078,   775,    10,   788,   789,   576,  1282,
     316,  1079,  1080,    11,    12,   790,    13,   791,   591,   792,
     592,   577,  1283,   593,   793,   317,   794,   795,   594,   798,
    1072,  1073,  1284,   318,   319,   578,   796,    14,   812,   811,
     797,   595,   596,   597,   800,  1081,   813,   598,    15,    16,
     803,   808,   804,   809,   810,   814,   815,   579,  1074,   816,
     817,   818,   320,   321,  1082,   599,    17,   819,   820,   600,
     601,  1075,   822,   821,   823,   825,   850,  1076,   824,   826,
     827,   828,    18,   829,   830,   838,   839,   840,   841,   842,
     843,   844,   845,   602,  1077,   603,   851,   846,   847,   848,
     849,   881,   882,   884,   887,   861,   883,   852,   604,    19,
     853,   854,   855,   322,   856,   885,   888,   989,    20,    21,
     889,  1115,  1078,    22,    23,  1118,   857,   890,  1166,   605,
    1079,   858,   862,   863,   864,   921,   922,   923,   924,   865,
     925,   926,   866,   927,   928,   929,   867,   868,   930,   869,
     870,   872,   873,   874,   875,   876,   877,   606,   931,   932,
     933,   934,   935,   936,  1081,   937,   891,   878,   938,   607,
     991,   886,   942,   943,   944,   945,   892,   946,   947,   608,
     948,   949,   950,  1082,   893,   951,   987,   894,   895,   896,
     897,   992,   898,   899,   900,   952,   953,   954,   955,   956,
     957,   901,   958,   902,   903,   959,   904,   905,   906,   907,
     908,   994,   909,   910,   911,   912,   913,   914,   915,   916,
     917,   918,   995,   919,   920,   941,   962,   963,   964,   965,
     966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     981,   982,   983,   984,   985,   998,   986,   999,   993,   996,
     990,  1000,  1003,   997,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,  1041,  1015,  1016,  1017,  1018,
    1019,  1020,  1042,  1043,  1062,  1021,  1022,  1023,  1024,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1064,
    1036,  1037,  1038,  1044,  1045,  1046,  1047,  1048,  1049,  1050,
    1051,  1052,  1053,  1054,  1055,  1056,  1066,  1057,  1058,  1059,
    1060,  1061,  1103,  1065,  1104,  1063,  1068,  1067,  1069,  1070,
    1071,  1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,  1094,
    1095,  1096,  1105,  1106,  1107,  1108,  1111,  1112,  1116,  1117,
    1119,  1120,  1121,  1123,  1122,  1124,  1125,  1126,  1127,  1128,
    1130,  1131,  1129,  1132,  1133,  1137,  1138,  1150,  1151,  1134,
    1169,  1156,  1157,  1158,  1170,  1159,  1164,  1171,  1178,  1172,
    1165,  1174,  1180,  1175,  1173,  1183,  1185,  1187,  1176,  1177,
    1188,  1189,  1179,  1190,  1262,  1191,  1181,  1201,  1202,  1216,
    1217,  1218,  1219,  1182,  1184,  1186,  1220,   482,   514,  1221,
    1222,   306,  1223,  1224,  1225,  1226,  1227,  1228,  1229,  1230,
    1231,  1232,  1233,  1234,  1245,  1246,  1247,  1319,  1248,  1249,
    1250,  1251,  1264,  1265,  1040,  1313,   860,  1312,   714,  1213,
     552,  1266,  1305,   777,  1263,  1316,   807,   802,  1317,  1318,
     880,  1306,  1309,   433,  1311,  1254,  1255,   634,   356,  1310,
       0,     0,     0,  1267,  1288,  1289,  1290,  1291,  1292,   631,
    1293,     0,  1294,     0,  1295,  1296,  1297,   707,  1298,  1299,
       0,     0,  1300,     0,   639,   477,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   703,     0,     0,     0,     0,
       0,     0,     0,     0,   500
};

static const short yycheck[] =
{
     344,   345,   426,   238,   236,     1,   141,     1,   240,   238,
       1,   236,    11,     1,    13,   240,   238,     8,     9,    12,
       1,     1,    13,   238,     5,     1,   236,    26,   236,    20,
     240,    30,   240,   238,    12,   238,    27,   381,   238,   383,
      31,    32,     1,   238,    25,     1,     1,    38,    70,   141,
      41,    42,    43,   397,    45,   238,    37,   236,   237,     1,
      51,   405,     1,   179,   180,   236,   238,    48,     1,   240,
     414,   415,    53,     1,    65,    66,   238,    36,    69,    60,
     424,   425,   238,   427,    75,    81,    67,    46,    79,    80,
      71,    90,    83,    81,   238,    86,    87,   238,     1,   141,
     236,    81,   236,    84,   240,    96,    97,   976,   977,   978,
     236,    39,   103,   104,   240,   106,   107,   108,   109,     1,
      23,   238,    55,    56,    57,     1,    54,   179,   180,   120,
      63,   112,    14,   236,   110,   239,   117,   240,   129,   130,
     238,   132,    70,   134,   135,    73,    74,   138,     1,   143,
       1,    33,    34,   112,   498,   136,   112,   112,    40,   238,
       1,   137,    95,   143,    92,     1,   147,   148,     4,   239,
     112,   152,    23,     1,   165,     3,   167,    53,     6,   239,
     171,   197,   198,    11,   175,   176,   177,   178,   181,   239,
       1,   182,   183,   215,   239,   128,    24,    25,    26,   190,
      76,   239,    30,   181,   143,    81,    88,    89,    44,     1,
     239,    47,    53,   116,   170,   170,    98,    99,     1,     1,
      48,     1,   221,   236,    52,    53,   238,   240,   170,   220,
     224,   222,   239,   239,   225,     1,   118,   119,   239,   230,
     143,    21,   223,   224,   235,    25,   237,    29,    76,   237,
      78,   133,   233,    36,   239,     1,   237,   237,    94,   112,
     142,   237,     1,    91,   140,   116,   236,   200,   224,    49,
     240,   112,   239,    53,   239,   236,   112,    84,   237,   240,
     238,   237,    62,   141,   112,   224,   239,    53,    68,    81,
      36,   239,   143,   239,    77,   237,   229,    36,   237,   110,
      46,   239,   143,   239,   237,    85,   236,   236,     1,   237,
      76,   240,   140,   239,   239,    81,   239,   170,   100,   101,
     102,   239,   239,   105,   152,   239,   137,   239,   239,   112,
     112,   114,   115,   113,   162,     1,   141,   239,    77,   239,
     239,   121,   239,   125,   226,   227,   228,   154,   239,     1,
     239,   143,     4,   697,   239,   237,   136,   139,   239,   239,
      53,   237,   239,   236,   144,   145,   112,   239,   151,   239,
     153,   224,   239,   112,   140,   114,   115,   239,   185,   161,
      15,    16,    17,   166,   239,   239,   237,   239,   224,    55,
      56,    57,    44,   173,   174,    47,   237,    63,   236,   239,
     239,   237,   123,    11,   239,    13,   239,   239,   239,   237,
     217,   218,   151,   239,   153,   239,   223,   239,    26,   112,
     239,   239,    30,   239,   239,   208,   233,   166,   238,    95,
     239,   239,   236,     1,   858,   156,   157,   158,   159,   160,
       8,     9,    94,   239,   224,    13,   239,   141,   231,   232,
     143,   239,    20,   239,   237,   237,   179,   237,   239,    27,
     112,   239,   128,    31,    32,   239,   239,   239,   239,   208,
      38,   239,    84,    41,    42,    43,   239,    45,   239,   239,
     239,   239,    90,    51,   239,     1,   239,   239,   123,     5,
     239,   239,   231,   232,   239,   239,   239,    65,    66,   239,
     123,    69,   239,   239,   239,   239,   850,    75,   239,    25,
     239,    79,    80,   857,   122,    83,     5,   239,    86,    87,
     239,    37,   831,   832,   833,   834,   835,   239,    96,    97,
     239,   239,    48,   239,   200,   103,   104,    53,   106,   107,
     108,   109,   154,   239,    60,   236,   123,     1,    37,   239,
     239,    67,   120,   239,   239,    71,   239,   239,   239,    48,
      14,   129,   130,   229,   132,   239,   134,   135,    84,   239,
     138,    60,   224,   185,   239,   239,   239,   239,    67,    33,
      34,   179,    71,    72,     5,   123,    40,   199,   201,   202,
     203,   204,   205,   206,   207,    84,   112,   165,   123,   167,
     123,   117,     1,   171,   179,   217,   218,   175,   176,   177,
     178,   223,   179,   221,   182,   183,    37,   179,   179,   179,
     136,   233,   190,   179,   179,   236,   179,    48,   117,   239,
     239,   147,   148,   122,    88,    89,   152,   239,   239,    60,
      39,   123,   131,   239,    98,    99,    67,   179,   141,   123,
      71,    72,   220,   179,   222,    54,   123,   225,   147,   148,
     149,   179,   230,    84,   118,   119,   179,   235,   141,   179,
       1,    70,   123,   123,    73,    74,   123,     1,   179,   133,
     179,   123,   141,   179,   123,   123,   123,   123,   142,   141,
      21,    21,    22,    92,    25,   123,   117,   123,   179,   239,
     179,   179,   239,   179,   179,    29,   141,   223,   224,   179,
     131,   179,   123,   179,   179,   179,   179,   233,    49,    49,
     239,   210,    53,   141,   236,   239,   147,   148,   149,   236,
     239,    62,    62,   239,   223,     0,     1,    68,    68,   239,
       5,   239,   239,   141,   233,    10,   141,   239,   239,   141,
     141,   141,   179,   236,    85,    85,   141,   141,    23,   236,
      25,   141,   179,    28,   236,   179,   179,   179,   239,   179,
      35,   179,   226,   227,   228,   236,   100,   101,   102,   239,
     141,   105,   113,   113,   239,    50,   141,   141,   112,   210,
     121,   121,   122,    58,    59,   141,    61,   141,     1,   141,
       3,   125,   223,     6,   123,   136,   141,   141,    11,   239,
      21,    22,   233,   144,   145,   139,   236,    82,   141,   179,
     236,    24,    25,    26,   239,   155,   179,    30,    93,    94,
     236,   236,   239,   236,   236,   239,   179,   161,    49,   179,
     179,   179,   173,   174,   174,    48,   111,   179,   141,    52,
      53,    62,   141,   123,   141,   141,   239,    68,   179,   236,
     236,   236,   127,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,    76,    85,    78,   239,   236,   236,   236,
     236,   141,   141,   141,   141,   236,   236,   239,    91,   154,
     239,   239,   239,   224,   239,   236,   141,   179,   163,   164,
     236,   179,   113,   168,   169,   179,   239,   236,   184,   112,
     121,   239,   239,   239,   239,   186,   187,   188,   189,   239,
     191,   192,   239,   194,   195,   196,   239,   239,   199,   239,
     239,   239,   239,   239,   239,   239,   239,   140,   209,   210,
     211,   212,   213,   214,   155,   216,   236,   239,   219,   152,
     141,   239,   186,   187,   188,   189,   236,   191,   192,   162,
     194,   195,   196,   174,   236,   199,   239,   236,   236,   236,
     236,   141,   236,   236,   236,   209,   210,   211,   212,   213,
     214,   236,   216,   236,   236,   219,   236,   236,   236,   236,
     236,   141,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   141,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   141,   236,   141,   236,   236,
     239,   123,   236,   239,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   141,   236,   236,   236,   236,
     236,   236,   141,   141,   141,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   141,
     239,   239,   239,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   141,   236,   236,   236,
     236,   236,   123,   236,   123,   239,   236,   239,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   123,   123,   141,   123,   236,   141,   141,   141,
     179,   179,   141,   141,   239,   141,   141,   141,   123,   141,
     236,   236,   141,   236,   236,   236,   236,   236,   236,   146,
     179,   236,   236,   236,   141,   236,   236,   179,   141,   179,
     236,   179,   141,   179,   239,   141,   141,   236,   179,   179,
     236,   236,   179,   236,   123,   236,   179,   236,   236,   236,
     236,   236,   236,   179,   179,   179,   236,   251,   286,   236,
     236,    71,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,  1315,   236,   236,
     236,   236,   236,   236,   752,  1277,   580,  1261,   462,  1080,
     323,   236,  1215,   488,  1168,  1302,   527,   519,  1304,  1308,
     609,  1240,  1253,   172,  1259,  1140,  1142,   368,    93,  1257,
      -1,    -1,    -1,   236,   236,   236,   236,   236,   236,   362,
     236,    -1,   236,    -1,   236,   236,   236,   452,   236,   236,
      -1,    -1,   236,    -1,   376,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   266
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   242,     0,     1,     5,    10,    23,    25,    28,    35,
      50,    58,    59,    61,    82,    93,    94,   111,   127,   154,
     163,   164,   168,   169,   243,   248,   253,   267,   273,   284,
     312,   327,   340,   363,   370,   380,   389,   416,   422,   428,
     433,   443,   504,   520,   538,   236,   237,   238,   341,   238,
     313,   390,   423,   429,   434,   238,   505,   417,   328,   238,
     238,   285,   364,   238,   238,   371,   381,     1,    36,    46,
     112,   268,   269,   270,   271,   272,   238,     1,    14,    33,
      34,    40,    88,    89,    98,    99,   118,   119,   133,   142,
     226,   227,   228,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     141,   314,   318,   141,   391,   395,   238,   238,   238,     1,
       8,     9,    13,    20,    27,    31,    32,    38,    41,    42,
      43,    45,    51,    65,    66,    69,    75,    79,    80,    83,
      86,    87,    96,    97,   103,   104,   106,   107,   108,   109,
     120,   129,   130,   132,   134,   135,   138,   165,   167,   171,
     175,   176,   177,   178,   182,   183,   190,   220,   222,   225,
     230,   235,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     495,   499,   500,   501,   502,   503,   238,   238,   238,     1,
      55,    56,    57,    63,    95,   128,   200,   229,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,     1,   110,
     137,   249,   250,   251,   252,   141,   286,   290,   238,     1,
      39,    54,    70,    73,    74,    92,   539,   540,   541,   542,
     543,   544,   545,   546,     1,    36,    77,   112,   114,   115,
     151,   153,   166,   208,   231,   232,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   238,
     238,   236,   239,   239,   239,   237,   269,     1,    21,    25,
      49,    53,    62,    68,    85,   113,   121,   136,   144,   145,
     173,   174,   224,   342,   343,   344,   345,   346,   347,   348,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   237,   522,   238,   238,     1,
      81,   143,   424,   425,   426,   427,     1,    81,   430,   431,
     432,     1,    53,   112,   143,   435,   439,   440,   441,   442,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   496,   239,   492,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   237,   445,     1,     4,    44,    47,    94,   112,
     224,   506,   507,   508,   509,   510,   514,   515,   516,     1,
     143,   224,   418,   419,   420,   421,     1,    53,    76,    81,
     140,   329,   333,   334,   335,   338,   339,   236,   239,   239,
     239,   239,   239,   239,   239,   239,   237,   275,   236,   239,
     239,   237,   250,   238,     1,    23,   116,   143,   365,   366,
     367,   368,   369,   239,   239,   239,   239,   239,   239,   237,
     540,   236,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   237,   255,     1,   112,   170,   224,   372,
     373,   374,   375,   376,     1,   112,   170,   382,   383,   384,
     385,   141,   141,   141,   236,   236,   239,   239,   239,   349,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   237,   343,   179,   123,   123,   179,   123,   245,   245,
     123,   123,   179,   179,   179,   179,   179,   179,   179,   236,
       1,    29,   100,   101,   102,   105,   112,   125,   139,   161,
     315,   316,   317,   319,   320,   321,   322,   323,   324,   325,
     326,     1,     3,     6,    11,    24,    25,    26,    30,    48,
      52,    53,    76,    78,    91,   112,   140,   152,   162,   392,
     393,   394,   396,   397,   398,   399,   400,   401,   402,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   239,   239,
     237,   425,   239,   237,   431,   436,   239,   239,   237,   440,
     179,   245,   179,   245,   123,   141,   123,   179,   179,   179,
     123,   141,   179,   123,   123,   123,   179,   245,   179,   123,
     141,   179,   123,   123,   123,   245,   123,   141,   123,   123,
     179,   239,   179,   239,   245,   245,   179,   141,   179,   179,
     179,   180,   179,   180,   179,   179,   245,   245,   123,   247,
     245,   179,   179,   179,   179,   236,   517,   239,   239,   511,
     239,   239,   237,   507,   239,   239,   237,   419,   236,   330,
     239,   239,   239,   237,   334,   141,   141,   141,   141,   201,
     202,   203,   204,   205,   206,   207,   141,   141,   179,   236,
     141,   141,   236,     1,     5,    25,    37,    48,    53,    60,
      67,    71,    84,   112,   117,   136,   147,   148,   152,   223,
     224,   233,   287,   288,   289,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   236,   239,   239,   239,   237,   366,   179,   179,
     179,   179,   179,   245,   236,   141,   179,   141,   141,   141,
     141,   141,   141,   123,   141,   141,   236,   236,   239,   377,
     239,   237,   373,   236,   239,   386,   237,   383,   236,   236,
     236,   179,   141,   179,   239,   179,   179,   179,   179,   179,
     141,   123,   141,   141,   179,   141,   236,   236,   236,   236,
     236,   156,   157,   158,   159,   160,   244,   245,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   237,
     316,   236,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   403,   239,   239,   239,   239,   239,   239,   239,   237,
     393,   141,   141,   236,   141,   236,   239,   141,   141,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   186,   187,   188,   189,   191,   192,   194,   195,   196,
     199,   209,   210,   211,   212,   213,   214,   216,   219,   497,
     498,   236,   186,   187,   188,   189,   191,   192,   194,   195,
     196,   199,   209,   210,   211,   212,   213,   214,   216,   219,
     493,   494,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,    15,    16,    17,   246,
     247,   236,   236,   236,   236,   236,   236,   239,   245,   179,
     239,   141,   141,   236,   141,   141,   236,   239,   141,   141,
     123,   336,   337,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   239,   239,   239,   239,   308,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   237,
     288,   141,   141,   141,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   141,   239,   141,   236,   141,   239,   236,   236,
     236,   236,    21,    22,    49,    62,    68,    85,   113,   121,
     122,   155,   174,   350,   351,   352,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   244,   244,   244,
     244,   244,   245,   123,   123,   123,   123,   141,   123,   245,
     247,   236,   141,   197,   198,   179,   141,   141,   179,   179,
     179,   141,   239,   141,   141,   141,   141,   123,   141,   141,
     236,   236,   236,   236,   146,   437,   438,   236,   236,   236,
     240,   236,   240,   246,   246,   246,    12,   181,   518,   519,
     236,   236,    12,   181,   512,   513,   236,   236,   236,   236,
      70,   215,   331,   332,   236,   236,   184,   236,   240,   179,
     141,   179,   179,   239,   179,   179,   179,   179,   141,   179,
     141,   179,   179,   141,   179,   141,   179,   236,   236,   236,
     236,   236,    84,   154,   185,   217,   218,   223,   233,   378,
     379,   236,   236,    84,   154,   185,   199,   217,   218,   223,
     233,   387,   388,   352,   236,   240,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,    11,    13,    26,    30,    90,
     122,   221,   404,   405,   406,   236,   236,   236,   236,   236,
     236,   236,   236,   240,   498,   494,   236,   240,   236,   240,
     236,   240,   123,   337,   236,   236,   236,   236,     5,    37,
      48,    60,    67,    71,    72,    84,   117,   122,   131,   147,
     148,   149,   210,   223,   233,   309,   310,   311,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   240,   236,   240,   351,   406,   236,   240,   438,
     519,   513,   332,   311,   236,   240,   379,   388,   405,   310
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
#line 402 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 404 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 408 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 412 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 416 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 420 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 424 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 429 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 430 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 431 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 432 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 433 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 447 "ircd_parser.y"
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
#line 464 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 488 "ircd_parser.y"
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
#line 522 "ircd_parser.y"
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
#line 582 "ircd_parser.y"
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
#line 596 "ircd_parser.y"
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
#line 614 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 623 "ircd_parser.y"
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
#line 637 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 646 "ircd_parser.y"
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
#line 674 "ircd_parser.y"
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
#line 704 "ircd_parser.y"
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
#line 720 "ircd_parser.y"
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
                               "Ignoring config file line hub=no; "
                               "due to active LazyLink (%s)",
                               ((struct Client *)ptr->data)->name);
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
#line 776 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 785 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 794 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 96:
#line 817 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 821 "ircd_parser.y"
    {
                        }
    break;

  case 98:
#line 825 "ircd_parser.y"
    {
                        }
    break;

  case 99:
#line 829 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 100:
#line 836 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 101:
#line 843 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 102:
#line 850 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 103:
#line 854 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 104:
#line 858 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 105:
#line 862 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 106:
#line 866 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 107:
#line 870 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 108:
#line 874 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 109:
#line 880 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 110:
#line 889 "ircd_parser.y"
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
#line 901 "ircd_parser.y"
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

  case 135:
#line 992 "ircd_parser.y"
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

  case 136:
#line 1004 "ircd_parser.y"
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
#line 1016 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
    {
      DupString(yy_aconf->host, yylval.string);
      split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
    }
    else
    {
      yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));

      DupString(yy_tmp->host, yylval.string);
      split_user_host(yy_tmp->host, &yy_tmp->user, &yy_tmp->host);

      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 138:
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

  case 139:
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

  case 140:
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

  case 141:
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

  case 142:
#line 1115 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 143:
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

  case 144:
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

  case 145:
#line 1146 "ircd_parser.y"
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

  case 146:
#line 1157 "ircd_parser.y"
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

  case 147:
#line 1168 "ircd_parser.y"
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

  case 148:
#line 1179 "ircd_parser.y"
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

  case 149:
#line 1190 "ircd_parser.y"
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

  case 150:
#line 1201 "ircd_parser.y"
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

  case 151:
#line 1212 "ircd_parser.y"
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

  case 152:
#line 1223 "ircd_parser.y"
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

  case 153:
#line 1234 "ircd_parser.y"
    {
}
    break;

  case 157:
#line 1238 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 158:
#line 1239 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 159:
#line 1242 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 160:
#line 1249 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 161:
#line 1256 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 162:
#line 1263 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 163:
#line 1270 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 164:
#line 1277 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 165:
#line 1284 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 166:
#line 1291 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 167:
#line 1298 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 168:
#line 1305 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 169:
#line 1312 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 170:
#line 1319 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 171:
#line 1326 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 172:
#line 1333 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 173:
#line 1340 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 174:
#line 1347 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 175:
#line 1360 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 176:
#line 1367 "ircd_parser.y"
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

  case 191:
#line 1394 "ircd_parser.y"
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

  case 192:
#line 1440 "ircd_parser.y"
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

  case 193:
#line 1486 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 194:
#line 1492 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 195:
#line 1498 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 196:
#line 1504 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 197:
#line 1510 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 198:
#line 1516 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 199:
#line 1522 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 200:
#line 1528 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 201:
#line 1537 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 202:
#line 1544 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 203:
#line 1553 "ircd_parser.y"
    {
}
    break;

  case 207:
#line 1558 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 208:
#line 1562 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 219:
#line 1575 "ircd_parser.y"
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

  case 220:
#line 1590 "ircd_parser.y"
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

  case 221:
#line 1612 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 222:
#line 1621 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 223:
#line 1633 "ircd_parser.y"
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

  case 224:
#line 1645 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;
    dlink_node *ptr;
    dlink_node *next_ptr;

    conf_add_class_to_conf(yy_conf, class_name);
    add_conf_by_address(CONF_CLIENT, yy_aconf);

    /* copy over settings from first struct */
    DLINK_FOREACH_SAFE(ptr, next_ptr, col_conf_list.head)
    {
      struct AccessItem *new_aconf;
      struct ConfItem *new_conf;

      new_conf = make_conf_item(CLIENT_TYPE);
      new_aconf = (struct AccessItem *)map_to_conf(new_conf);

      yy_tmp = ptr->data;

      if (yy_aconf->passwd != NULL)
        DupString(new_aconf->passwd, yy_aconf->passwd);
      if (yy_conf->name != NULL)
        DupString(new_conf->name, yy_conf->name);

      if (yy_aconf->passwd != NULL)
	DupString(new_aconf->passwd, yy_aconf->passwd);

      new_aconf->flags = yy_aconf->flags;
      new_aconf->port  = yy_aconf->port;

      if (yy_tmp->user != NULL)
      {
	DupString(new_aconf->user, yy_tmp->user);
        collapse(new_aconf->user);
      }
      else
        DupString(new_aconf->user, "*");

      if (yy_tmp->host != NULL)
      {
	DupString(new_aconf->host, yy_tmp->host);
        collapse(new_aconf->host);
      }
      else
	DupString(new_aconf->host, "*");

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

  case 243:
#line 1715 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
    {
      if (yylval.string != NULL)
      {
	DupString(yy_aconf->host, yylval.string);
	split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
      }
    }
    else
    {
      yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
      if (yylval.string != NULL)
      {
	DupString(yy_tmp->host, yylval.string);
	split_user_host(yy_tmp->host, &yy_tmp->user, &yy_tmp->host);
      }
      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 244:
#line 1744 "ircd_parser.y"
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

  case 245:
#line 1757 "ircd_parser.y"
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

  case 246:
#line 1768 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 247:
#line 1777 "ircd_parser.y"
    {
}
    break;

  case 251:
#line 1781 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 252:
#line 1782 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 253:
#line 1785 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 254:
#line 1793 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 255:
#line 1800 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 256:
#line 1807 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 257:
#line 1814 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 258:
#line 1821 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 259:
#line 1828 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 260:
#line 1835 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 261:
#line 1842 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 262:
#line 1849 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 263:
#line 1858 "ircd_parser.y"
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

  case 264:
#line 1869 "ircd_parser.y"
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

  case 265:
#line 1880 "ircd_parser.y"
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

  case 266:
#line 1891 "ircd_parser.y"
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

  case 267:
#line 1902 "ircd_parser.y"
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

  case 268:
#line 1913 "ircd_parser.y"
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

  case 269:
#line 1925 "ircd_parser.y"
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

  case 270:
#line 1944 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 271:
#line 1954 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 272:
#line 1963 "ircd_parser.y"
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

  case 273:
#line 1978 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 274:
#line 1982 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 281:
#line 1994 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 282:
#line 2003 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (IsChanPrefix(*yylval.string))
    {
      char def_reason[] = "No reason specified";

      create_channel_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }
  /* ignore it for now.. but we really should make a warning if
   * its an erroneous name --fl_ */
}
    break;

  case 283:
#line 2018 "ircd_parser.y"
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
}
    break;

  case 284:
#line 2036 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 285:
#line 2044 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 292:
#line 2055 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 293:
#line 2064 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_match_item->user, yylval.string);
    split_user_host(yy_match_item->user, &yy_match_item->user, &yy_match_item->host);

    /* default to *@* */
    if (yy_match_item->user == NULL)
      DupString(yy_match_item->user, "*");
    if (yy_match_item->host == NULL)
      DupString(yy_match_item->host, "*");
  }
}
    break;

  case 294:
#line 2079 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 298:
#line 2086 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 299:
#line 2090 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 300:
#line 2094 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 301:
#line 2098 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 302:
#line 2102 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 303:
#line 2106 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 304:
#line 2110 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 305:
#line 2119 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    yy_match_item->action = CLUSTER_ALL;
  }
}
    break;

  case 306:
#line 2127 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    if (yy_match_item->user == NULL)
      DupString(yy_match_item->user, "*");
    if (yy_match_item->host == NULL)
      DupString(yy_match_item->host, "*");
    yy_conf = NULL;
  }
}
    break;

  case 312:
#line 2144 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 313:
#line 2150 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 317:
#line 2157 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 318:
#line 2161 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 319:
#line 2165 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 320:
#line 2169 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 321:
#line 2173 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 322:
#line 2177 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 323:
#line 2181 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 324:
#line 2185 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 325:
#line 2194 "ircd_parser.y"
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

  case 326:
#line 2212 "ircd_parser.y"
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

  case 349:
#line 2354 "ircd_parser.y"
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

  case 350:
#line 2366 "ircd_parser.y"
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

  case 351:
#line 2378 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 352:
#line 2387 "ircd_parser.y"
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

  case 353:
#line 2399 "ircd_parser.y"
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

  case 354:
#line 2411 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 355:
#line 2417 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 356:
#line 2421 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 357:
#line 2429 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 358:
#line 2438 "ircd_parser.y"
    {
}
    break;

  case 362:
#line 2442 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 363:
#line 2443 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 364:
#line 2446 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 365:
#line 2453 "ircd_parser.y"
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

  case 366:
#line 2464 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 367:
#line 2471 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 368:
#line 2478 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 369:
#line 2485 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 370:
#line 2495 "ircd_parser.y"
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

  case 371:
#line 2536 "ircd_parser.y"
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

  case 372:
#line 2547 "ircd_parser.y"
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

  case 373:
#line 2558 "ircd_parser.y"
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

  case 374:
#line 2573 "ircd_parser.y"
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

  case 375:
#line 2584 "ircd_parser.y"
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

  case 376:
#line 2597 "ircd_parser.y"
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

  case 377:
#line 2610 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 378:
#line 2619 "ircd_parser.y"
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

  case 379:
#line 2654 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 380:
#line 2661 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->user && yy_aconf->reason && yy_aconf->host)
    {
      if (yy_aconf->host != NULL)
        add_conf_by_address(CONF_KILL, yy_aconf);
    }
    else
      delete_conf_item(yy_conf);
    yy_conf = NULL;
    yy_aconf = NULL;
  }
}
    break;

  case 386:
#line 2680 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 387:
#line 2689 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 388:
#line 2701 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(DLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_aconf->reason, "NO REASON");
  }
}
    break;

  case 389:
#line 2710 "ircd_parser.y"
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

  case 395:
#line 2726 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 396:
#line 2735 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 397:
#line 2747 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 398:
#line 2755 "ircd_parser.y"
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

  case 403:
#line 2771 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 404:
#line 2783 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_flags = 0;
    gecos_reason[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 405:
#line 2790 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (gecos_name[0])
    {
      int ecode = 0;

      if (gecos_flags & 1)
      {
#ifdef HAVE_REGEX_H
        regex_t *exp_p = MyMalloc(sizeof(regex_t));

        if ((ecode = regcomp(exp_p, gecos_name, REG_EXTENDED|REG_ICASE|REG_NOSUB)))
        {
          char errbuf[BUFSIZE];

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
      if (gecos_reason[0])
        DupString(yy_match_item->reason, gecos_reason);
      else
        DupString(yy_match_item->reason, "<No reason specified>");
    }
  }
}
    break;

  case 406:
#line 2833 "ircd_parser.y"
    {
}
    break;

  case 410:
#line 2838 "ircd_parser.y"
    {
  if (ypass == 2)
    gecos_flags |= 1;
}
    break;

  case 417:
#line 2847 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_name, yylval.string, sizeof(gecos_reason));
  }
}
    break;

  case 418:
#line 2856 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_reason, yylval.string, sizeof(gecos_name));
  }
}
    break;

  case 475:
#line 2904 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 476:
#line 2910 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 477:
#line 2916 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 478:
#line 2922 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 479:
#line 2927 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 480:
#line 2932 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 481:
#line 2938 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 482:
#line 2944 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 483:
#line 2950 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 484:
#line 2956 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 485:
#line 2962 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 486:
#line 2968 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 487:
#line 2974 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 488:
#line 2980 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 489:
#line 2986 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 490:
#line 2992 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 491:
#line 2998 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 492:
#line 3004 "ircd_parser.y"
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

  case 493:
#line 3015 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 494:
#line 3021 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 495:
#line 3030 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 496:
#line 3036 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 497:
#line 3042 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 498:
#line 3048 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 499:
#line 3052 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 500:
#line 3058 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 501:
#line 3062 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 502:
#line 3068 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 503:
#line 3074 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 504:
#line 3080 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 505:
#line 3086 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 506:
#line 3092 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 507:
#line 3098 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 508:
#line 3104 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 509:
#line 3110 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 510:
#line 3121 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 511:
#line 3127 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 512:
#line 3133 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 513:
#line 3139 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 514:
#line 3145 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 515:
#line 3154 "ircd_parser.y"
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

  case 516:
#line 3186 "ircd_parser.y"
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

  case 517:
#line 3204 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 518:
#line 3210 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 519:
#line 3219 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 520:
#line 3225 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 521:
#line 3230 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 522:
#line 3236 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 526:
#line 3243 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 527:
#line 3247 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 528:
#line 3251 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 529:
#line 3255 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 530:
#line 3259 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 531:
#line 3263 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 532:
#line 3267 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 533:
#line 3271 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 534:
#line 3275 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 535:
#line 3279 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 536:
#line 3283 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 537:
#line 3287 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 538:
#line 3291 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 539:
#line 3295 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 540:
#line 3299 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 541:
#line 3303 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 542:
#line 3307 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 543:
#line 3311 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 544:
#line 3317 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 548:
#line 3324 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 549:
#line 3328 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 550:
#line 3332 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 551:
#line 3336 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 552:
#line 3340 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 553:
#line 3344 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 554:
#line 3348 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 555:
#line 3352 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 556:
#line 3356 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 557:
#line 3360 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 558:
#line 3364 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 559:
#line 3368 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 560:
#line 3372 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 561:
#line 3376 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 562:
#line 3380 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 563:
#line 3384 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 564:
#line 3388 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 565:
#line 3392 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 566:
#line 3398 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 567:
#line 3404 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 568:
#line 3410 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 569:
#line 3416 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 570:
#line 3422 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 571:
#line 3431 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 572:
#line 3439 "ircd_parser.y"
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

  case 582:
#line 3466 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 583:
#line 3472 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 584:
#line 3478 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 588:
#line 3484 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 589:
#line 3488 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 590:
#line 3494 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    if (yy_aconf->user == NULL)
    {
      DupString(yy_aconf->host, yylval.string);
      split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
    }
    else
    {
      yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));

      DupString(yy_tmp->host, yylval.string);
      split_user_host(yy_tmp->host, &yy_tmp->user, &yy_tmp->host);

      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
}
    break;

  case 591:
#line 3517 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 592:
#line 3526 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 593:
#line 3530 "ircd_parser.y"
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

  case 596:
#line 3570 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 597:
#line 3574 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 617:
#line 3604 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 618:
#line 3610 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 619:
#line 3616 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 620:
#line 3622 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 621:
#line 3628 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 622:
#line 3634 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 623:
#line 3640 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 624:
#line 3646 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 625:
#line 3652 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 626:
#line 3658 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 627:
#line 3664 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 628:
#line 3670 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 629:
#line 3676 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 630:
#line 3682 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 631:
#line 3688 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 642:
#line 3708 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 643:
#line 3714 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 644:
#line 3720 "ircd_parser.y"
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

  case 645:
#line 3734 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 646:
#line 3740 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 647:
#line 3746 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 6813 "y.tab.c"

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


#line 373 "ircd_parser.y"

