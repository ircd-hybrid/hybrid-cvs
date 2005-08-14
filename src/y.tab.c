/* A Bison parser, made by GNU Bison 2.0.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

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
/*  $Id: y.tab.c,v 7.56 2005/08/14 07:26:45 michael Exp $ */
/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

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
     TKLINE = 478,
     TXLINE = 479,
     TRESV = 480,
     UNKLINE = 481,
     USER = 482,
     USE_EGD = 483,
     USE_EXCEPT = 484,
     USE_INVEX = 485,
     USE_KNOCK = 486,
     USE_LOGGING = 487,
     USE_WHOIS_ACTUALLY = 488,
     VHOST = 489,
     VHOST6 = 490,
     XLINE = 491,
     WARN = 492,
     WARN_NO_NLINE = 493
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
#define TKLINE 478
#define TXLINE 479
#define TRESV 480
#define UNKLINE 481
#define USER 482
#define USE_EGD 483
#define USE_EXCEPT 484
#define USE_INVEX 485
#define USE_KNOCK 486
#define USE_LOGGING 487
#define USE_WHOIS_ACTUALLY 488
#define VHOST 489
#define VHOST6 490
#define XLINE 491
#define WARN 492
#define WARN_NO_NLINE 493




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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 130 "ircd_parser.y"
typedef union YYSTYPE {
  int number;
  char *string;
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 662 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 674 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
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
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
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
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1356

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  244
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  308
/* YYNRULES -- Number of rules. */
#define YYNRULES  658
/* YYNRULES -- Number of states. */
#define YYNSTATES  1337

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   493

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   243,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   239,
       2,   242,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   241,     2,   240,     2,     2,     2,     2,
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
     235,   236,   237,   238
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
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
     582,   584,   586,   589,   594,   596,   601,   606,   611,   616,
     621,   626,   631,   636,   637,   644,   645,   651,   655,   657,
     659,   661,   664,   666,   668,   670,   672,   674,   677,   682,
     686,   688,   690,   694,   699,   704,   705,   712,   715,   717,
     719,   721,   723,   725,   727,   729,   731,   733,   735,   737,
     739,   741,   743,   745,   747,   749,   752,   757,   762,   767,
     772,   777,   778,   784,   788,   790,   793,   795,   797,   799,
     801,   803,   805,   807,   809,   811,   813,   815,   820,   825,
     830,   835,   840,   845,   850,   855,   860,   865,   866,   873,
     876,   878,   880,   882,   884,   887,   892,   897,   902,   903,
     910,   913,   915,   917,   919,   921,   924,   929,   934,   935,
     941,   945,   947,   949,   951,   953,   955,   957,   959,   961,
     963,   965,   967,   969,   970,   977,   980,   982,   984,   986,
     989,   994,   995,  1001,  1005,  1007,  1009,  1011,  1013,  1015,
    1017,  1019,  1021,  1023,  1025,  1027,  1029,  1030,  1038,  1039,
    1041,  1044,  1046,  1048,  1050,  1052,  1054,  1056,  1058,  1060,
    1062,  1064,  1066,  1068,  1070,  1072,  1074,  1076,  1078,  1080,
    1083,  1088,  1090,  1095,  1100,  1105,  1110,  1115,  1120,  1125,
    1126,  1132,  1136,  1138,  1141,  1143,  1145,  1147,  1149,  1151,
    1153,  1155,  1160,  1165,  1170,  1175,  1180,  1185,  1190,  1195,
    1200,  1201,  1208,  1211,  1213,  1215,  1217,  1219,  1224,  1229,
    1230,  1237,  1240,  1242,  1244,  1246,  1248,  1253,  1258,  1259,
    1266,  1269,  1271,  1273,  1275,  1280,  1281,  1288,  1289,  1295,
    1299,  1301,  1303,  1306,  1308,  1310,  1312,  1314,  1316,  1321,
    1326,  1332,  1335,  1337,  1339,  1341,  1343,  1345,  1347,  1349,
    1351,  1353,  1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,
    1371,  1373,  1375,  1377,  1379,  1381,  1383,  1385,  1387,  1389,
    1391,  1393,  1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,
    1411,  1413,  1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,
    1431,  1433,  1435,  1437,  1439,  1441,  1443,  1448,  1453,  1458,
    1463,  1468,  1473,  1478,  1483,  1488,  1493,  1498,  1503,  1508,
    1513,  1518,  1523,  1528,  1533,  1538,  1543,  1548,  1553,  1558,
    1563,  1568,  1573,  1578,  1583,  1588,  1593,  1598,  1603,  1608,
    1613,  1618,  1623,  1628,  1633,  1638,  1643,  1648,  1653,  1658,
    1663,  1668,  1673,  1678,  1679,  1685,  1689,  1691,  1693,  1695,
    1697,  1699,  1701,  1703,  1705,  1707,  1709,  1711,  1713,  1715,
    1717,  1719,  1721,  1723,  1725,  1727,  1728,  1734,  1738,  1740,
    1742,  1744,  1746,  1748,  1750,  1752,  1754,  1756,  1758,  1760,
    1762,  1764,  1766,  1768,  1770,  1772,  1774,  1776,  1781,  1786,
    1791,  1796,  1801,  1802,  1809,  1812,  1814,  1816,  1818,  1820,
    1822,  1824,  1826,  1828,  1833,  1838,  1839,  1845,  1849,  1851,
    1853,  1855,  1860,  1865,  1866,  1872,  1876,  1878,  1880,  1882,
    1888,  1891,  1893,  1895,  1897,  1899,  1901,  1903,  1905,  1907,
    1909,  1911,  1913,  1915,  1917,  1919,  1921,  1923,  1925,  1930,
    1935,  1940,  1945,  1950,  1955,  1960,  1965,  1970,  1975,  1980,
    1985,  1990,  1995,  2000,  2006,  2009,  2011,  2013,  2015,  2017,
    2019,  2021,  2023,  2025,  2030,  2035,  2040,  2045,  2050
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     245,     0,    -1,    -1,   245,   246,    -1,   270,    -1,   276,
      -1,   287,    -1,   525,    -1,   316,    -1,   331,    -1,   344,
      -1,   256,    -1,   543,    -1,   368,    -1,   375,    -1,   385,
      -1,   394,    -1,   421,    -1,   427,    -1,   433,    -1,   448,
      -1,   509,    -1,   438,    -1,   251,    -1,     1,   239,    -1,
       1,   240,    -1,    -1,   248,    -1,   123,   247,    -1,   123,
     156,   247,    -1,   123,   157,   247,    -1,   123,   158,   247,
      -1,   123,   159,   247,    -1,   123,   160,   247,    -1,    -1,
     250,    -1,   123,   249,    -1,   123,    15,   249,    -1,   123,
      16,   249,    -1,   123,    17,   249,    -1,   111,   241,   252,
     240,   239,    -1,   252,   253,    -1,   253,    -1,   254,    -1,
     255,    -1,     1,   239,    -1,   110,   242,   141,   239,    -1,
     137,   242,   141,   239,    -1,   164,   241,   257,   240,   239,
      -1,   257,   258,    -1,   258,    -1,   261,    -1,   266,    -1,
     269,    -1,   263,    -1,   264,    -1,   265,    -1,   268,    -1,
     260,    -1,   267,    -1,   262,    -1,   259,    -1,     1,   239,
      -1,   153,   242,   141,   239,    -1,   151,   242,   141,   239,
      -1,   112,   242,   141,   239,    -1,   166,   242,   141,   239,
      -1,    36,   242,   141,   239,    -1,   115,   242,   141,   239,
      -1,   114,   242,   141,   239,    -1,   234,   242,   141,   239,
      -1,   235,   242,   141,   239,    -1,   208,   242,   123,   239,
      -1,    77,   242,   179,   239,    -1,     5,   241,   271,   240,
     239,    -1,   271,   272,    -1,   272,    -1,   273,    -1,   275,
      -1,   274,    -1,     1,   239,    -1,   112,   242,   141,   239,
      -1,    46,   242,   141,   239,    -1,    36,   242,   141,   239,
      -1,    94,   241,   277,   240,   239,    -1,   277,   278,    -1,
     278,    -1,   279,    -1,   280,    -1,   281,    -1,   285,    -1,
     286,    -1,   282,    -1,   284,    -1,   283,    -1,     1,   239,
      -1,   200,   242,   141,   239,    -1,   128,   242,   141,   239,
      -1,    63,   242,   141,   239,    -1,    57,   242,   141,   239,
      -1,    55,   242,   141,   239,    -1,    56,   242,   141,   239,
      -1,    95,   242,   201,   239,    -1,    95,   242,   203,   239,
      -1,    95,   242,   207,   239,    -1,    95,   242,   205,   239,
      -1,    95,   242,   206,   239,    -1,    95,   242,   204,   239,
      -1,    95,   242,   202,   239,    -1,   232,   242,   179,   239,
      -1,    -1,   127,   288,   289,   241,   290,   240,   239,    -1,
      -1,   293,    -1,   290,   291,    -1,   291,    -1,   292,    -1,
     294,    -1,   295,    -1,   297,    -1,   299,    -1,   300,    -1,
     301,    -1,   303,    -1,   304,    -1,   305,    -1,   306,    -1,
     307,    -1,   302,    -1,   308,    -1,   309,    -1,   310,    -1,
     296,    -1,   298,    -1,   311,    -1,     1,   239,    -1,   112,
     242,   141,   239,    -1,   141,    -1,   227,   242,   141,   239,
      -1,   136,   242,   141,   239,    -1,    48,   242,   179,   239,
      -1,    71,   242,   179,   239,    -1,   152,   242,   141,   239,
      -1,    25,   242,   141,   239,    -1,    67,   242,   179,   239,
      -1,   148,   242,   179,   239,    -1,   149,   242,   179,   239,
      -1,    84,   242,   179,   239,    -1,   236,   242,   179,   239,
      -1,   226,   242,   179,   239,    -1,    60,   242,   179,   239,
      -1,   117,   242,   179,   239,    -1,    37,   242,   179,   239,
      -1,   147,   242,   179,   239,    -1,     5,   242,   179,   239,
      -1,    -1,    53,   312,   242,   313,   239,    -1,   313,   243,
     314,    -1,   314,    -1,   122,   315,    -1,   315,    -1,    67,
      -1,   148,    -1,    84,    -1,   226,    -1,   236,    -1,    60,
      -1,    37,    -1,   147,    -1,     5,    -1,    71,    -1,   117,
      -1,   210,    -1,   131,    -1,    72,    -1,   149,    -1,    48,
      -1,    -1,    25,   317,   318,   241,   319,   240,   239,    -1,
      -1,   322,    -1,   319,   320,    -1,   320,    -1,   321,    -1,
     323,    -1,   324,    -1,   325,    -1,   326,    -1,   327,    -1,
     328,    -1,   329,    -1,   330,    -1,     1,   239,    -1,   112,
     242,   141,   239,    -1,   141,    -1,   139,   242,   248,   239,
      -1,   125,   242,   123,   239,    -1,    29,   242,   248,   239,
      -1,   105,   242,   123,   239,    -1,   100,   242,   123,   239,
      -1,   102,   242,   123,   239,    -1,   101,   242,   123,   239,
      -1,   161,   242,   250,   239,    -1,    -1,    93,   332,   241,
     337,   240,   239,    -1,    -1,    53,   334,   242,   335,   239,
      -1,   335,   243,   336,    -1,   336,    -1,   215,    -1,    70,
      -1,   337,   338,    -1,   338,    -1,   339,    -1,   333,    -1,
     342,    -1,   343,    -1,     1,   239,    -1,   140,   242,   340,
     239,    -1,   340,   243,   341,    -1,   341,    -1,   123,    -1,
     123,   184,   123,    -1,    81,   242,   141,   239,    -1,    76,
     242,   141,   239,    -1,    -1,    10,   345,   241,   346,   240,
     239,    -1,   346,   347,    -1,   347,    -1,   348,    -1,   349,
      -1,   351,    -1,   353,    -1,   358,    -1,   359,    -1,   360,
      -1,   362,    -1,   363,    -1,   364,    -1,   350,    -1,   365,
      -1,   366,    -1,   361,    -1,   367,    -1,   352,    -1,     1,
     239,    -1,   227,   242,   141,   239,    -1,   136,   242,   141,
     239,    -1,   174,   242,   179,   239,    -1,    25,   242,   141,
     239,    -1,    48,   242,   179,   239,    -1,    -1,    53,   354,
     242,   355,   239,    -1,   355,   243,   356,    -1,   356,    -1,
     122,   357,    -1,   357,    -1,   174,    -1,    49,    -1,    85,
      -1,    68,    -1,    21,    -1,    22,    -1,   121,    -1,    62,
      -1,   155,    -1,   113,    -1,    85,   242,   179,   239,    -1,
      68,   242,   179,   239,    -1,    49,   242,   179,   239,    -1,
      21,   242,   179,   239,    -1,   121,   242,   179,   239,    -1,
      62,   242,   179,   239,    -1,   173,   242,   141,   239,    -1,
     145,   242,   141,   239,    -1,   144,   242,   123,   239,    -1,
     113,   242,   179,   239,    -1,    -1,   154,   369,   241,   370,
     240,   239,    -1,   370,   371,    -1,   371,    -1,   372,    -1,
     373,    -1,   374,    -1,     1,   239,    -1,   143,   242,   141,
     239,    -1,    23,   242,   141,   239,    -1,   116,   242,   141,
     239,    -1,    -1,   168,   376,   241,   377,   240,   239,    -1,
     377,   378,    -1,   378,    -1,   379,    -1,   380,    -1,   381,
      -1,     1,   239,    -1,   112,   242,   141,   239,    -1,   227,
     242,   141,   239,    -1,    -1,   170,   382,   242,   383,   239,
      -1,   383,   243,   384,    -1,   384,    -1,    84,    -1,   223,
      -1,   226,    -1,   236,    -1,   224,    -1,   218,    -1,   154,
      -1,   225,    -1,   217,    -1,   199,    -1,   185,    -1,    -1,
     169,   386,   241,   387,   240,   239,    -1,   387,   388,    -1,
     388,    -1,   389,    -1,   390,    -1,     1,   239,    -1,   112,
     242,   141,   239,    -1,    -1,   170,   391,   242,   392,   239,
      -1,   392,   243,   393,    -1,   393,    -1,    84,    -1,   223,
      -1,   226,    -1,   236,    -1,   224,    -1,   218,    -1,   154,
      -1,   225,    -1,   217,    -1,   199,    -1,   185,    -1,    -1,
      28,   395,   396,   241,   397,   240,   239,    -1,    -1,   400,
      -1,   397,   398,    -1,   398,    -1,   399,    -1,   401,    -1,
     402,    -1,   403,    -1,   404,    -1,   405,    -1,   406,    -1,
     407,    -1,   417,    -1,   418,    -1,   419,    -1,   416,    -1,
     413,    -1,   415,    -1,   414,    -1,   412,    -1,   420,    -1,
       1,   239,    -1,   112,   242,   141,   239,    -1,   141,    -1,
      76,   242,   141,   239,    -1,   162,   242,   141,   239,    -1,
       3,   242,   141,   239,    -1,   140,   242,   123,   239,    -1,
       6,   242,   197,   239,    -1,     6,   242,   198,   239,    -1,
      52,   242,   141,   239,    -1,    -1,    53,   408,   242,   409,
     239,    -1,   409,   243,   410,    -1,   410,    -1,   122,   411,
      -1,   411,    -1,    90,    -1,    26,    -1,    30,    -1,    11,
      -1,    13,    -1,   221,    -1,   152,   242,   141,   239,    -1,
      48,   242,   179,   239,    -1,    30,   242,   179,   239,    -1,
      26,   242,   179,   239,    -1,    11,   242,   179,   239,    -1,
      78,   242,   141,   239,    -1,    91,   242,   141,   239,    -1,
      25,   242,   141,   239,    -1,    24,   242,   141,   239,    -1,
      -1,    82,   422,   241,   423,   240,   239,    -1,   423,   424,
      -1,   424,    -1,   425,    -1,   426,    -1,     1,    -1,   227,
     242,   141,   239,    -1,   143,   242,   141,   239,    -1,    -1,
      35,   428,   241,   429,   240,   239,    -1,   429,   430,    -1,
     430,    -1,   431,    -1,   432,    -1,     1,    -1,    81,   242,
     141,   239,    -1,   143,   242,   141,   239,    -1,    -1,    50,
     434,   241,   435,   240,   239,    -1,   435,   436,    -1,   436,
      -1,   437,    -1,     1,    -1,    81,   242,   141,   239,    -1,
      -1,    58,   439,   241,   444,   240,   239,    -1,    -1,    53,
     441,   242,   442,   239,    -1,   442,   243,   443,    -1,   443,
      -1,   146,    -1,   444,   445,    -1,   445,    -1,   446,    -1,
     447,    -1,   440,    -1,     1,    -1,   112,   242,   141,   239,
      -1,   143,   242,   141,   239,    -1,    59,   241,   449,   240,
     239,    -1,   449,   450,    -1,   450,    -1,   457,    -1,   458,
      -1,   460,    -1,   461,    -1,   462,    -1,   463,    -1,   464,
      -1,   465,    -1,   466,    -1,   467,    -1,   456,    -1,   469,
      -1,   470,    -1,   471,    -1,   485,    -1,   472,    -1,   474,
      -1,   476,    -1,   475,    -1,   478,    -1,   473,    -1,   479,
      -1,   480,    -1,   481,    -1,   482,    -1,   484,    -1,   486,
      -1,   483,    -1,   500,    -1,   487,    -1,   491,    -1,   492,
      -1,   496,    -1,   477,    -1,   506,    -1,   504,    -1,   505,
      -1,   488,    -1,   459,    -1,   489,    -1,   490,    -1,   507,
      -1,   495,    -1,   468,    -1,   508,    -1,   493,    -1,   494,
      -1,   453,    -1,   455,    -1,   451,    -1,   452,    -1,   454,
      -1,     1,    -1,    65,   242,   123,   239,    -1,    66,   242,
     123,   239,    -1,    13,   242,   179,   239,    -1,   233,   242,
     179,   239,    -1,   167,   242,   179,   239,    -1,    83,   242,
     123,   239,    -1,    75,   242,   179,   239,    -1,    80,   242,
     179,   239,    -1,    41,   242,   179,   239,    -1,    51,   242,
     179,   239,    -1,     8,   242,   179,   239,    -1,   104,   242,
     248,   239,    -1,   103,   242,   123,   239,    -1,    97,   242,
     123,   239,    -1,     9,   242,   248,   239,    -1,   183,   242,
     248,   239,    -1,   182,   242,   248,   239,    -1,    69,   242,
     123,   239,    -1,    87,   242,   179,   239,    -1,    86,   242,
     141,   239,    -1,   238,   242,   179,   239,    -1,   177,   242,
     179,   239,    -1,   178,   242,   179,   239,    -1,   176,   242,
     179,   239,    -1,   176,   242,   180,   239,    -1,   175,   242,
     179,   239,    -1,   175,   242,   180,   239,    -1,   134,   242,
     248,   239,    -1,    20,   242,   248,   239,    -1,   135,   242,
     248,   239,    -1,   171,   242,   179,   239,    -1,   120,   242,
     179,   239,    -1,   222,   242,   179,   239,    -1,   130,   242,
     179,   239,    -1,   107,   242,   141,   239,    -1,    79,   242,
     248,   239,    -1,    43,   242,   123,   239,    -1,    96,   242,
     123,   239,    -1,   106,   242,   123,   239,    -1,   165,   242,
     141,   239,    -1,    31,   242,   141,   239,    -1,    27,   242,
     123,   239,    -1,   228,   242,   179,   239,    -1,    45,   242,
     141,   239,    -1,   138,   242,   179,   239,    -1,    38,   242,
     179,   239,    -1,   220,   242,   248,   239,    -1,    -1,   132,
     497,   242,   498,   239,    -1,   498,   243,   499,    -1,   499,
      -1,   186,    -1,   189,    -1,   191,    -1,   192,    -1,   195,
      -1,   213,    -1,   209,    -1,   211,    -1,   216,    -1,   214,
      -1,   194,    -1,   210,    -1,   212,    -1,   196,    -1,   219,
      -1,   187,    -1,   188,    -1,   199,    -1,    -1,   129,   501,
     242,   502,   239,    -1,   502,   243,   503,    -1,   503,    -1,
     186,    -1,   189,    -1,   191,    -1,   192,    -1,   195,    -1,
     213,    -1,   209,    -1,   211,    -1,   216,    -1,   214,    -1,
     194,    -1,   210,    -1,   212,    -1,   196,    -1,   219,    -1,
     187,    -1,   188,    -1,   199,    -1,   108,   242,   123,   239,
      -1,   109,   242,   123,   239,    -1,    32,   242,   123,   239,
      -1,   190,   242,   250,   239,    -1,    42,   242,   179,   239,
      -1,    -1,    61,   510,   241,   511,   240,   239,    -1,   511,
     512,    -1,   512,    -1,   513,    -1,   514,    -1,   515,    -1,
     519,    -1,   520,    -1,   521,    -1,     1,    -1,    47,   242,
     179,   239,    -1,    44,   242,   248,   239,    -1,    -1,    94,
     516,   242,   517,   239,    -1,   517,   243,   518,    -1,   518,
      -1,   181,    -1,    12,    -1,   227,   242,   141,   239,    -1,
     112,   242,   141,   239,    -1,    -1,     4,   522,   242,   523,
     239,    -1,   523,   243,   524,    -1,   524,    -1,   181,    -1,
      12,    -1,    23,   241,   526,   240,   239,    -1,   526,   527,
      -1,   527,    -1,   528,    -1,   529,    -1,   530,    -1,   531,
      -1,   537,    -1,   532,    -1,   533,    -1,   534,    -1,   535,
      -1,   536,    -1,   538,    -1,   539,    -1,   540,    -1,   541,
      -1,   542,    -1,     1,    -1,    40,   242,   179,   239,    -1,
     229,   242,   179,   239,    -1,   230,   242,   179,   239,    -1,
     231,   242,   179,   239,    -1,    88,   242,   248,   239,    -1,
      89,   242,   248,   239,    -1,   133,   242,   179,   239,    -1,
      99,   242,   123,   239,    -1,   142,   242,   179,   239,    -1,
      98,   242,   123,   239,    -1,    34,   242,   123,   239,    -1,
      33,   242,   123,   239,    -1,   118,   242,   179,   239,    -1,
     119,   242,   179,   239,    -1,    14,   242,   179,   239,    -1,
     163,   241,   544,   240,   239,    -1,   544,   545,    -1,   545,
      -1,   546,    -1,   547,    -1,   548,    -1,   550,    -1,   549,
      -1,   551,    -1,     1,    -1,    54,   242,   179,   239,    -1,
      74,   242,   179,   239,    -1,    92,   242,   248,   239,    -1,
      70,   242,   179,   239,    -1,    39,   242,   179,   239,    -1,
      73,   242,   179,   239,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   372,   372,   373,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   401,   401,   402,   406,
     410,   414,   418,   422,   428,   428,   429,   430,   431,   432,
     439,   442,   442,   443,   443,   443,   445,   462,   473,   476,
     477,   478,   478,   479,   479,   480,   480,   481,   482,   482,
     483,   483,   484,   486,   520,   580,   594,   612,   621,   635,
     644,   672,   702,   718,   768,   770,   770,   771,   771,   772,
     772,   774,   783,   792,   805,   807,   808,   810,   810,   811,
     811,   812,   812,   813,   813,   814,   816,   820,   824,   828,
     835,   842,   849,   853,   857,   861,   865,   869,   873,   879,
     889,   888,   981,   981,   982,   982,   983,   983,   983,   983,
     984,   984,   984,   985,   985,   985,   986,   986,   986,   987,
     987,   987,   988,   988,   989,   989,   991,  1003,  1015,  1034,
    1046,  1057,  1068,  1110,  1119,  1130,  1141,  1152,  1163,  1174,
    1185,  1196,  1207,  1218,  1229,  1241,  1240,  1244,  1244,  1245,
    1246,  1248,  1255,  1262,  1269,  1276,  1283,  1290,  1297,  1304,
    1311,  1318,  1325,  1332,  1339,  1346,  1353,  1367,  1366,  1386,
    1386,  1388,  1388,  1389,  1390,  1391,  1392,  1393,  1394,  1395,
    1396,  1397,  1398,  1400,  1446,  1492,  1498,  1504,  1510,  1516,
    1522,  1528,  1534,  1544,  1543,  1560,  1559,  1563,  1563,  1564,
    1568,  1574,  1574,  1575,  1575,  1575,  1575,  1575,  1577,  1579,
    1579,  1581,  1596,  1618,  1627,  1640,  1639,  1713,  1713,  1714,
    1714,  1714,  1714,  1715,  1715,  1716,  1716,  1716,  1717,  1717,
    1718,  1718,  1718,  1719,  1719,  1719,  1721,  1742,  1755,  1766,
    1775,  1787,  1786,  1790,  1790,  1791,  1792,  1794,  1802,  1809,
    1816,  1823,  1830,  1837,  1844,  1851,  1858,  1867,  1878,  1889,
    1900,  1911,  1922,  1934,  1953,  1963,  1972,  1988,  1987,  2003,
    2003,  2004,  2004,  2004,  2004,  2006,  2015,  2030,  2044,  2043,
    2059,  2059,  2060,  2060,  2060,  2060,  2062,  2071,  2080,  2079,
    2085,  2085,  2086,  2090,  2094,  2098,  2102,  2106,  2110,  2114,
    2118,  2122,  2126,  2136,  2135,  2152,  2152,  2153,  2153,  2153,
    2155,  2162,  2161,  2167,  2167,  2168,  2172,  2176,  2180,  2184,
    2188,  2192,  2196,  2200,  2204,  2208,  2218,  2217,  2367,  2367,
    2368,  2368,  2369,  2369,  2369,  2370,  2370,  2370,  2371,  2371,
    2371,  2372,  2372,  2372,  2373,  2373,  2373,  2374,  2374,  2375,
    2377,  2389,  2401,  2410,  2422,  2434,  2440,  2444,  2452,  2462,
    2461,  2465,  2465,  2466,  2467,  2469,  2476,  2487,  2494,  2501,
    2508,  2518,  2559,  2570,  2581,  2596,  2607,  2620,  2633,  2642,
    2678,  2677,  2700,  2700,  2701,  2701,  2701,  2703,  2711,  2724,
    2723,  2745,  2745,  2746,  2746,  2746,  2748,  2757,  2770,  2769,
    2790,  2790,  2791,  2791,  2793,  2806,  2805,  2856,  2855,  2859,
    2859,  2860,  2866,  2866,  2867,  2867,  2867,  2867,  2869,  2878,
    2890,  2893,  2893,  2894,  2894,  2895,  2895,  2896,  2896,  2897,
    2897,  2898,  2898,  2899,  2899,  2900,  2901,  2901,  2902,  2902,
    2903,  2903,  2904,  2904,  2905,  2905,  2906,  2906,  2907,  2907,
    2908,  2909,  2909,  2910,  2910,  2911,  2912,  2912,  2913,  2913,
    2914,  2914,  2915,  2916,  2916,  2917,  2917,  2918,  2918,  2919,
    2919,  2920,  2920,  2921,  2921,  2922,  2926,  2932,  2938,  2944,
    2949,  2954,  2960,  2966,  2972,  2978,  2984,  2990,  2996,  3002,
    3008,  3014,  3020,  3026,  3037,  3043,  3052,  3058,  3064,  3070,
    3074,  3080,  3084,  3090,  3096,  3102,  3108,  3114,  3120,  3126,
    3132,  3143,  3149,  3155,  3161,  3167,  3176,  3208,  3226,  3232,
    3241,  3247,  3252,  3259,  3258,  3264,  3264,  3265,  3269,  3273,
    3277,  3281,  3285,  3289,  3293,  3297,  3301,  3305,  3309,  3313,
    3317,  3321,  3325,  3329,  3333,  3340,  3339,  3345,  3345,  3346,
    3350,  3354,  3358,  3362,  3366,  3370,  3374,  3378,  3382,  3386,
    3390,  3394,  3398,  3402,  3406,  3410,  3414,  3420,  3426,  3432,
    3438,  3444,  3454,  3453,  3479,  3479,  3480,  3481,  3482,  3483,
    3484,  3485,  3486,  3488,  3494,  3501,  3500,  3505,  3505,  3506,
    3510,  3516,  3535,  3545,  3544,  3587,  3587,  3588,  3592,  3601,
    3604,  3604,  3605,  3606,  3607,  3608,  3609,  3610,  3611,  3612,
    3613,  3614,  3615,  3616,  3617,  3618,  3619,  3620,  3622,  3628,
    3634,  3640,  3646,  3652,  3658,  3664,  3670,  3676,  3682,  3688,
    3694,  3700,  3706,  3715,  3718,  3718,  3719,  3719,  3720,  3721,
    3722,  3723,  3724,  3726,  3732,  3738,  3752,  3758,  3764
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
  "COMPRESSED", "COMPRESSION_LEVEL", "CONNECT", "CONNECTFREQ", "CRYPTLINK",
  "DEFAULT_CIPHER_PREFERENCE", "DEFAULT_FLOODCOUNT",
  "DEFAULT_SPLIT_SERVER_COUNT", "DEFAULT_SPLIT_USER_COUNT", "DENY",
  "DESCRIPTION", "DIE", "DISABLE_AUTH", "DISABLE_HIDDEN",
  "DISABLE_LOCAL_CHANNELS", "DISABLE_REMOTE_COMMANDS", "DOT_IN_IP6_ADDR",
  "DOTS_IN_IDENT", "DURATION", "EGDPOOL_PATH", "EMAIL", "ENABLE",
  "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT", "FAILED_OPER_NOTICE", "FAKENAME",
  "IRCD_FLAGS", "FLATTEN_LINKS", "FFAILED_OPERLOG", "FOPERLOG", "FUSERLOG",
  "GECOS", "GENERAL", "GLINE", "GLINES", "GLINE_EXEMPT", "GLINE_LOG",
  "GLINE_TIME", "GLINE_MIN_CIDR", "GLINE_MIN_CIDR6", "GLOBAL_KILL",
  "NEED_IDENT", "HAVENT_READ_CONF", "HIDDEN", "HIDDEN_ADMIN",
  "HIDDEN_OPER", "HIDE_SERVER_IPS", "HIDE_SERVERS", "HIDE_SPOOF_IPS",
  "HOST", "HUB", "HUB_MASK", "IDLETIME", "IGNORE_BOGUS_TS", "IP", "KILL",
  "KILL_CHASE_TIME_LIMIT", "KLINE", "KLINE_EXEMPT", "KLINE_REASON",
  "KLINE_WITH_REASON", "KNOCK_DELAY", "KNOCK_DELAY_CHANNEL", "LAZYLINK",
  "LEAF_MASK", "LINKS_DELAY", "LISTEN", "LOGGING", "LOG_LEVEL",
  "MAXIMUM_LINKS", "MAX_ACCEPT", "MAX_BANS", "MAX_CHANS_PER_USER",
  "MAX_GLOBAL", "MAX_IDENT", "MAX_LOCAL", "MAX_NICK_CHANGES",
  "MAX_NICK_TIME", "MAX_NUMBER", "MAX_TARGETS", "MESSAGE_LOCALE",
  "MIN_NONWILDCARD", "MIN_NONWILDCARD_SIMPLE", "MODULE", "MODULES", "NAME",
  "NEED_PASSWORD", "NETWORK_DESC", "NETWORK_NAME", "NICK", "NICK_CHANGES",
  "NO_CREATE_ON_SPLIT", "NO_JOIN_ON_SPLIT", "NO_OPER_FLOOD", "NO_TILDE",
  "NOT", "NUMBER", "NUMBER_PER_IDENT", "NUMBER_PER_IP",
  "NUMBER_PER_IP_GLOBAL", "OPERATOR", "OPER_LOG", "OPER_ONLY_UMODES",
  "OPER_PASS_RESV", "OPER_SPY_T", "OPER_UMODES", "INVITE_OPS_ONLY",
  "PACE_WAIT", "PACE_WAIT_SIMPLE", "PASSWORD", "PATH", "PING_COOKIE",
  "PING_TIME", "PORT", "QSTRING", "QUIET_ON_BAN", "REASON", "REDIRPORT",
  "REDIRSERV", "REGEX_T", "REHASH", "REMOTE", "REMOTEBAN", "RESTRICTED",
  "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE", "SSL_CERTIFICATE_FILE",
  "RESV", "RESV_EXEMPT", "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS",
  "SENDQ", "SEND_PASSWORD", "SERVERHIDE", "SERVERINFO", "SERVLINK_PATH",
  "IRCD_SID", "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE",
  "SHORT_MOTD", "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_I_OPER_ONLY",
  "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL",
  "TMASKED", "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS",
  "T_ALL", "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN",
  "T_CLIENT_FLOOD", "T_DEAF", "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL",
  "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT",
  "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE",
  "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ",
  "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_SSL", "T_UNAUTH", "T_UNRESV",
  "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", "TOPICBURST",
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
  "serverinfo_max_clients", "serverinfo_hub", "admin_entry", "admin_items",
  "admin_item", "admin_name", "admin_email", "admin_description",
  "logging_entry", "logging_items", "logging_item", "logging_path",
  "logging_oper_log", "logging_gline_log", "logging_fuserlog",
  "logging_ffailed_operlog", "logging_foperlog", "logging_log_level",
  "logging_use_logging", "oper_entry", "@1", "oper_name_b", "oper_items",
  "oper_item", "oper_name", "oper_name_t", "oper_user", "oper_password",
  "oper_encrypted", "oper_hidden_admin", "oper_rsa_public_key_file",
  "oper_class", "oper_global_kill", "oper_remote", "oper_remoteban",
  "oper_kline", "oper_xline", "oper_unkline", "oper_gline",
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
  "auth_class", "auth_encrypted", "auth_flags", "@7", "auth_flags_items",
  "auth_flags_item", "auth_flags_item_atom", "auth_kline_exempt",
  "auth_need_ident", "auth_exceed_limit", "auth_can_flood",
  "auth_no_tilde", "auth_gline_exempt", "auth_spoof", "auth_redir_serv",
  "auth_redir_port", "auth_need_password", "resv_entry", "@8",
  "resv_items", "resv_item", "resv_creason", "resv_channel", "resv_nick",
  "shared_entry", "@9", "shared_items", "shared_item", "shared_name",
  "shared_user", "shared_type", "@10", "shared_types", "shared_type_item",
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
  "kill_reason", "deny_entry", "@16", "deny_items", "deny_item", "deny_ip",
  "deny_reason", "exempt_entry", "@17", "exempt_items", "exempt_item",
  "exempt_ip", "gecos_entry", "@18", "gecos_flags", "@19",
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
  "gline_logging", "@23", "gline_logging_types", "gline_logging_type_item",
  "gline_user", "gline_server", "gline_action", "@24", "gdeny_types",
  "gdeny_type_item", "channel_entry", "channel_items", "channel_item",
  "channel_disable_local_channels", "channel_use_except",
  "channel_use_invex", "channel_use_knock", "channel_knock_delay",
  "channel_knock_delay_channel", "channel_invite_ops_only",
  "channel_max_chans_per_user", "channel_quiet_on_ban", "channel_max_bans",
  "channel_default_split_user_count", "channel_default_split_server_count",
  "channel_no_create_on_split", "channel_no_join_on_split",
  "channel_burst_topicwho", "serverhide_entry", "serverhide_items",
  "serverhide_item", "serverhide_flatten_links", "serverhide_hide_servers",
  "serverhide_links_delay", "serverhide_hidden",
  "serverhide_disable_hidden", "serverhide_hide_server_ips", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,    59,
     125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   244,   245,   245,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   247,   247,   248,   248,
     248,   248,   248,   248,   249,   249,   250,   250,   250,   250,
     251,   252,   252,   253,   253,   253,   254,   255,   256,   257,
     257,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   271,   272,   272,   272,
     272,   273,   274,   275,   276,   277,   277,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   279,   280,   281,   282,
     283,   284,   285,   285,   285,   285,   285,   285,   285,   286,
     288,   287,   289,   289,   290,   290,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   312,   311,   313,   313,   314,
     314,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   317,   316,   318,
     318,   319,   319,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   332,   331,   334,   333,   335,   335,   336,
     336,   337,   337,   338,   338,   338,   338,   338,   339,   340,
     340,   341,   341,   342,   343,   345,   344,   346,   346,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   348,   349,   350,   351,
     352,   354,   353,   355,   355,   356,   356,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   369,   368,   370,
     370,   371,   371,   371,   371,   372,   373,   374,   376,   375,
     377,   377,   378,   378,   378,   378,   379,   380,   382,   381,
     383,   383,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   386,   385,   387,   387,   388,   388,   388,
     389,   391,   390,   392,   392,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   395,   394,   396,   396,
     397,   397,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     399,   400,   401,   402,   403,   404,   405,   405,   406,   408,
     407,   409,   409,   410,   410,   411,   411,   411,   411,   411,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     422,   421,   423,   423,   424,   424,   424,   425,   426,   428,
     427,   429,   429,   430,   430,   430,   431,   432,   434,   433,
     435,   435,   436,   436,   437,   439,   438,   441,   440,   442,
     442,   443,   444,   444,   445,   445,   445,   445,   446,   447,
     448,   449,   449,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     474,   475,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   497,   496,   498,   498,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   501,   500,   502,   502,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   504,   505,   506,
     507,   508,   510,   509,   511,   511,   512,   512,   512,   512,
     512,   512,   512,   513,   514,   516,   515,   517,   517,   518,
     518,   519,   520,   522,   521,   523,   523,   524,   524,   525,
     526,   526,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   544,   545,   545,   545,   545,
     545,   545,   545,   546,   547,   548,   549,   550,   551
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
       1,     1,     2,     4,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     6,     0,     5,     3,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     4,     3,
       1,     1,     3,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     4,     4,     4,
       4,     0,     5,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     2,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     2,     4,     4,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     2,     1,     1,     1,     2,
       4,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     7,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     1,     4,     4,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     4,     4,     0,     6,
       2,     1,     1,     1,     4,     0,     6,     0,     5,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     4,     4,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
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
static const unsigned short int yydefact[] =
{
       2,     0,     1,     0,     0,   225,     0,   177,   336,   399,
     408,   415,     0,   582,   390,   203,     0,     0,   110,   277,
       0,     0,   288,   313,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     179,   338,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   627,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   611,   612,   613,   614,   615,   617,
     618,   619,   620,   621,   616,   622,   623,   624,   625,   626,
     194,     0,   180,   361,     0,   339,     0,     0,     0,   485,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   555,     0,   533,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   432,   482,   483,   480,   484,   481,   443,
     433,   434,   471,   435,   436,   437,   438,   439,   440,   441,
     442,   476,   444,   445,   446,   448,   453,   449,   451,   450,
     466,   452,   454,   455,   456,   457,   460,   458,   447,   459,
     462,   470,   472,   473,   463,   464,   478,   479,   475,   465,
     461,   468,   469,   467,   474,   477,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    92,    94,    93,    90,    91,     0,     0,
       0,     0,    42,    43,    44,   137,     0,   113,     0,   652,
       0,     0,     0,     0,     0,     0,     0,   645,   646,   647,
     648,   650,   649,   651,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    61,    58,
      51,    60,    54,    55,    56,    52,    59,    57,    53,     0,
       0,    80,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,   229,   230,   239,   231,
     244,   232,   233,   234,   235,   242,   236,   237,   238,   240,
     241,   243,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   610,     0,
       0,   405,     0,     0,     0,   402,   403,   404,   413,     0,
       0,   411,   412,   427,   417,     0,     0,   426,     0,   423,
     424,   425,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   431,   592,   603,     0,     0,
     595,     0,     0,     0,   585,   586,   587,   588,   589,   590,
     591,   396,     0,     0,     0,   393,   394,   395,     0,   205,
       0,     0,     0,   214,     0,   212,   213,   215,   216,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      45,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,   280,   281,   282,   283,     0,     0,     0,     0,     0,
       0,     0,   644,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,   298,
       0,     0,   291,   292,   293,   294,     0,     0,   321,     0,
     316,   317,   318,     0,     0,     0,    74,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   609,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,     0,     0,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   357,   354,   356,   355,   353,   350,   351,   352,
     358,     0,     0,     0,   401,     0,     0,   410,     0,     0,
       0,     0,   422,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,   430,     0,
       0,     0,     0,     0,     0,     0,   584,     0,     0,     0,
     392,   217,     0,     0,     0,     0,     0,   211,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,    40,     0,     0,     0,     0,
       0,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,   116,   117,
     118,   132,   119,   133,   120,   121,   122,   128,   123,   124,
     125,   126,   127,   129,   130,   131,   134,   284,     0,     0,
       0,     0,   279,     0,     0,     0,     0,     0,     0,   643,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,   295,     0,     0,     0,     0,   290,   319,     0,
       0,     0,   315,    83,    82,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   226,   642,   639,   638,   628,    26,    26,    26,
      26,    26,    28,    27,   632,   633,   637,   635,   640,   641,
     634,   636,   629,   630,   631,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   359,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   340,     0,     0,   400,
       0,   409,     0,     0,     0,   416,   496,   500,   488,   514,
     527,   526,   579,   531,   494,   581,   522,   529,   495,   486,
     487,   503,   492,   521,   493,   491,   505,   504,   523,   499,
     498,   497,   524,   520,   577,   578,   517,   559,   574,   575,
     560,   561,   562,   569,   563,   572,   576,   565,   570,   566,
     571,   564,   568,   567,   573,     0,   558,   519,   537,   552,
     553,   538,   539,   540,   547,   541,   550,   554,   543,   548,
     544,   549,   542,   546,   545,   551,     0,   536,   513,   515,
     530,   525,   490,   516,   511,   512,   509,   510,   507,   508,
     502,   501,    34,    34,    34,    36,    35,   580,   532,   518,
     528,   489,   506,     0,     0,     0,     0,     0,     0,   583,
       0,     0,   391,     0,     0,     0,   221,     0,   220,   204,
     100,   101,    99,    98,   102,   108,   103,   107,   105,   106,
     104,    97,    96,   109,    46,    47,   135,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,   278,   657,   653,   656,   658,   654,   655,    67,    73,
      65,    69,    68,    64,    63,    66,    72,    70,    71,     0,
       0,     0,   289,     0,     0,   314,   270,   249,   250,   269,
     261,   262,   258,   264,   260,   259,   266,   263,     0,   265,
     257,     0,   254,   256,   272,   268,   267,   276,   271,   247,
     275,   274,   273,   248,   246,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   337,   406,
     407,   414,   421,     0,   420,   428,   429,   556,     0,   534,
       0,    37,    38,    39,   608,   607,     0,   606,   594,   593,
     600,   599,     0,   598,   602,   601,   398,   397,   210,   209,
       0,   208,   224,   223,     0,   218,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,   286,   287,   285,
     296,   302,   308,   312,   311,   310,   307,   303,   306,   309,
     304,   305,     0,   301,   297,   320,   325,   331,   335,   334,
     333,   330,   326,   329,   332,   327,   328,     0,   324,   255,
     252,     0,   197,   199,   201,   200,   198,   193,   196,   195,
     202,   364,   366,   367,   385,   389,   388,   384,   383,   382,
     368,   378,   379,   376,   377,   375,     0,   380,     0,   372,
     374,   362,   386,   387,   360,   365,   381,   363,   418,     0,
     557,   535,   604,     0,   596,     0,   206,     0,   222,   219,
     154,   143,   152,   140,   169,   167,   176,   166,   161,   170,
     174,   163,   171,     0,   173,   168,   162,   175,   172,   164,
     165,     0,   158,   160,   150,   144,   141,   147,   136,   151,
     139,   153,   145,   146,   142,   149,   138,   148,   299,     0,
     322,     0,   253,   373,   370,     0,   419,   605,   597,   207,
     159,   156,     0,   300,   323,   371,   157
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   842,   843,   985,   986,    25,   251,   252,
     253,   254,    26,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,    27,    71,    72,    73,
      74,    75,    28,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,    29,    61,   256,   756,   757,   758,   257,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,   776,  1031,  1301,
    1302,  1303,    30,    50,   111,   583,   584,   585,   112,   586,
     587,   588,   589,   590,   591,   592,   593,    31,    58,   463,
     712,  1170,  1171,   464,   465,   466,  1007,  1008,   467,   468,
      32,    48,   324,   325,   326,   327,   328,   329,   330,   331,
     542,  1091,  1092,  1093,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    33,    62,   490,   491,   492,   493,
     494,    34,    65,   521,   522,   523,   524,   525,   804,  1212,
    1213,    35,    66,   529,   530,   531,   532,   810,  1227,  1228,
      36,    51,   114,   612,   613,   614,   115,   615,   616,   617,
     618,   619,   620,   621,   877,  1258,  1259,  1260,   622,   623,
     624,   625,   626,   627,   628,   629,   630,    37,    57,   454,
     455,   456,   457,    38,    52,   364,   365,   366,   367,    39,
      53,   370,   371,   372,    40,    54,   377,   638,  1143,  1144,
     378,   379,   380,   381,    41,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   415,   966,   967,   220,   413,   945,   946,
     221,   222,   223,   224,   225,    42,    56,   443,   444,   445,
     446,   447,   702,  1162,  1163,   448,   449,   450,   699,  1156,
    1157,    43,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    44,
     266,   267,   268,   269,   270,   271,   272,   273
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -679
static const short int yypact[] =
{
    -679,   737,  -679,   -76,  -238,  -679,  -225,  -679,  -679,  -679,
    -679,  -679,  -222,  -679,  -679,  -679,  -208,  -203,  -679,  -679,
    -198,  -196,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,    22,  -184,   580,
    -135,   -77,  -175,  -168,  -165,   422,  -159,  -122,  -111,   274,
     178,    -8,   -59,   720,   202,   -46,   -41,   -31,   -15,    -9,
      10,    41,  -679,  -679,  -679,  -679,   671,  -679,    24,    28,
      36,    40,    44,    49,    50,    53,    65,    69,    71,    79,
      80,    85,    86,   263,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,    -6,  -679,  -679,    91,  -679,   159,    45,   156,  -679,
      97,   102,   114,   115,   117,   121,   125,   130,   131,   132,
     133,   138,   141,   142,   146,   147,   148,   151,   152,   158,
     162,   164,   165,   167,   173,   174,   183,   184,   186,   197,
     198,  -679,   199,  -679,   201,   204,   206,   209,   213,   217,
     219,   224,   226,   238,   239,   247,   248,   254,   256,   258,
     265,   271,     9,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,   468,    62,   376,   103,
     272,   279,   282,   290,   291,   293,   294,   296,    93,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,   109,   301,
     302,    25,  -679,  -679,  -679,  -679,   160,  -679,   260,  -679,
     311,   317,   319,   321,   322,   324,    54,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,   208,   325,   326,   327,   328,   329,
     331,   332,   335,   336,   337,   340,   157,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,   139,
     188,  -679,   194,   435,   443,   346,  -679,   351,   354,   359,
     361,   366,  -679,   367,   369,   373,   374,   375,   383,   392,
     397,   398,   401,   404,   205,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,   220,   465,   495,   470,   528,   528,   530,   533,
     483,   484,   485,   486,   488,   494,   498,   431,  -679,   536,
     826,  -679,   432,   438,    96,  -679,  -679,  -679,  -679,   439,
       4,  -679,  -679,  -679,  -679,   444,   445,  -679,    98,  -679,
    -679,  -679,   506,   528,   509,   528,   566,   550,   570,   515,
     523,   524,   582,   565,   532,   584,   589,   600,   546,   528,
     547,   605,   588,   551,   608,   609,   617,   528,   618,   602,
     621,   623,   569,   507,   571,   510,   528,   528,   572,   612,
     575,   576,    34,    77,   578,   579,   528,   528,   640,   528,
     585,   590,   591,   594,   527,  -679,  -679,  -679,   525,   526,
    -679,   534,   537,   168,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,   538,   539,    47,  -679,  -679,  -679,   543,  -679,
     541,   544,   549,  -679,    61,  -679,  -679,  -679,  -679,  -679,
     634,   636,   637,   644,   426,   647,   648,   620,   561,  -679,
    -679,   660,   661,   564,  -679,   474,   567,   562,   563,   583,
     100,  -679,  -679,  -679,  -679,   629,   635,   638,   639,   641,
     528,   595,  -679,  -679,   680,   643,   683,   685,   687,   692,
     694,   695,   715,   698,   699,   603,  -679,   604,   599,  -679,
     607,    58,  -679,  -679,  -679,  -679,   614,   613,  -679,   106,
    -679,  -679,  -679,   615,   619,   628,  -679,  -679,   667,   706,
     678,   693,   633,   697,   701,   702,   703,   710,   718,   748,
     736,   751,   716,   753,   657,  -679,   658,   664,   668,   669,
     262,   670,   672,   673,   675,   676,   677,   686,   690,   691,
     696,   700,  -679,   708,   707,   711,   712,   713,   714,   717,
     719,   721,   722,    20,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,   723,   725,   726,   727,   728,   729,
     730,   731,   733,   734,  -679,   735,   738,   739,   740,   741,
     742,   743,   172,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,   758,   769,   747,  -679,   772,   750,  -679,   745,   781,
     791,   752,  -679,   754,   755,   756,   757,   759,   760,   761,
     762,   763,   764,   765,   766,   767,   768,   770,   771,   773,
     774,   775,   776,   777,   778,   779,   780,   782,   783,   784,
     785,   786,   787,   788,   674,   789,   732,   790,   792,   793,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,    94,   805,   806,   807,   808,   809,   810,  -679,   811,
     528,   813,   812,   816,   817,   818,  -679,   819,   824,   820,
    -679,  -679,   814,   833,   838,   827,   821,  -679,   822,   823,
     825,   828,   829,   830,   831,   832,   834,   835,   836,   837,
     839,   840,  -679,   841,   842,  -679,   843,   844,   845,   846,
     847,  -679,   848,   849,   850,   851,   852,   853,   854,   855,
     856,   857,   858,   859,   860,   861,    19,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,   867,   870,
     879,   865,  -679,   866,   868,   869,   871,   872,   873,  -679,
     874,   875,   876,   877,   878,   880,   881,   882,   883,   884,
     885,  -679,  -679,   889,   864,   909,   886,  -679,  -679,   910,
     887,   888,  -679,  -679,  -679,  -679,   891,   892,   893,   894,
     349,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,  -679,  -679,  -679,  -679,  -679,   528,   528,   528,
     528,   528,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,   528,   929,   932,   935,
     940,   924,   943,   528,   640,   906,  -679,  -679,   931,   122,
     930,   936,   942,   939,   947,   949,   944,   907,  1005,  1006,
    1007,  1009,   961,  1010,  1011,   914,  -679,   915,   916,  -679,
     917,  -679,  1012,   918,   920,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -235,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -230,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,   640,   640,   640,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,    13,   921,   922,    23,   923,   925,  -679,
     926,   927,  -679,   -63,   928,   933,   749,  -228,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,   984,  1027,   990,
     991,   934,   992,   994,   995,   996,  1036,   999,  1038,  1001,
    1002,  1003,  1042,  1008,  1043,  1013,   946,  -679,   950,   951,
     952,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,   954,
     259,   955,  -679,   956,   491,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,   365,  -679,
    -679,  -211,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
     957,   958,   959,   960,   962,   963,   964,   965,   966,  -679,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     334,   977,   978,   979,   980,   981,   982,   983,  -679,  -679,
    -679,  -679,  -679,  -209,  -679,  -679,  -679,  -679,   674,  -679,
     732,  -679,  -679,  -679,  -679,  -679,  -174,  -679,  -679,  -679,
    -679,  -679,  -141,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -139,  -679,  -679,  -679,  1063,  -679,   827,   985,   986,   987,
     988,   535,   989,   993,   997,   998,  1000,  1004,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,   -78,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,   -32,  -679,  -679,
    -679,   349,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,     1,  -679,   -20,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  1012,
    -679,  -679,  -679,    13,  -679,    23,  -679,   -63,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,   587,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,    -7,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,   259,
    -679,   491,  -679,  -679,  -679,   334,  -679,  -679,  -679,  -679,
    -679,  -679,   535,  -679,  -679,  -679,  -679
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -679,  -679,  -679,  -291,  -346,  -678,  -426,  -679,  -679,   689,
    -679,  -679,  -679,  -679,   650,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,   863,  -679,
    -679,  -679,  -679,  -679,  1023,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,   181,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -380,  -303,  -679,  -679,  -679,  -679,   414,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,   -89,  -679,   815,  -679,  -679,    55,  -679,  -679,
    -679,  -679,  -679,   911,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,    -2,   112,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,   744,  -679,  -679,
    -679,  -679,  -679,  -679,   709,  -679,  -679,  -679,  -679,  -679,
     -96,  -679,  -679,  -679,   704,  -679,  -679,  -679,  -679,   -83,
    -679,  -679,  -679,  -679,   630,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,   -85,   -12,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
     862,  -679,  -679,  -679,  -679,  -679,   908,  -679,  -679,  -679,
    -679,  -679,   912,  -679,  -679,  -679,  -679,  -679,  -679,   -28,
    -679,   890,  -679,  -679,  -679,  -679,  1073,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,    99,  -679,  -679,  -679,   104,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,   913,  -679,
    -679,  -679,  -679,  -679,   -29,  -679,  -679,  -679,  -679,  -679,
     -26,  -679,  -679,  1155,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  1022,  -679,  -679,  -679,  -679,  -679,  -679
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     561,   562,   692,    47,  1147,   368,   110,  1168,  1148,  1149,
     119,  1175,  1251,  1150,  1252,  1176,    49,   120,   121,    55,
     736,   573,   122,    67,   737,  1154,   248,  1253,  1230,   123,
    1268,  1254,  1231,    59,  1269,  1160,   124,   644,    60,   646,
     125,   126,    67,    63,   738,    64,   368,   127,   451,   574,
     128,   129,   130,   660,   131,   259,   739,    76,    68,   517,
     132,   668,   458,   451,   113,  1272,   116,   740,    69,  1273,
     677,   678,   741,   117,   133,   134,   118,    68,   135,   742,
     689,   690,   226,   693,   136,   369,   743,    69,   137,   138,
     744,  1255,   139,   260,   229,   140,   141,   361,  1274,   373,
    1276,   486,  1275,   745,  1277,   142,   143,   526,   261,   982,
     983,   984,   144,   145,   459,   146,   147,   148,   149,   227,
     575,   576,   577,   487,   262,   578,   369,   263,   264,   150,
     228,   746,   579,   255,    70,   249,   747,   460,   151,   152,
     517,   153,   461,   154,   155,   580,   265,   156,   230,   231,
     232,   374,  1169,    70,   788,   748,   233,   373,   274,   581,
     361,  1318,   250,    45,    46,  1319,   749,   750,   751,   436,
     518,   752,   437,   594,   157,   595,   158,   362,   596,   248,
     159,   582,   258,   597,   160,   161,   162,   163,   234,   526,
     452,   164,   165,   275,  1155,   299,   598,   599,   600,   166,
     300,   462,   601,   274,  1161,   452,   307,  1320,   301,   374,
     375,  1321,   438,   683,   684,   439,   488,   691,   527,  1324,
     602,   235,  1257,  1325,   603,   604,   308,   302,   519,   167,
     309,   168,  1331,   303,   276,   359,  1332,   169,   275,   363,
     362,   376,   170,   489,   636,   753,   754,   171,   605,   434,
     606,   518,   304,   310,   311,   755,   685,   686,   312,  1046,
     865,   486,   440,   607,    77,   483,   342,   313,   375,   277,
     343,   278,   279,   314,   453,   229,   528,    78,   344,   276,
     441,   305,   345,   487,   608,   520,   346,   709,   249,   453,
     315,   347,   348,   236,   501,   349,    79,    80,   806,   376,
     527,   716,   363,    81,  1151,  1152,  1153,   350,   280,   519,
     281,   351,   609,   352,   277,   250,   278,   279,   316,  1121,
    1122,   353,   354,   282,   610,   237,   317,   355,   356,   230,
     231,   232,   360,   478,   611,   533,   633,   233,   641,   382,
     781,   318,   469,  1201,   383,  1251,   811,  1252,   480,   319,
     320,    82,    83,   280,   994,   281,   384,   385,   528,   386,
    1253,    84,    85,   387,  1254,   283,   520,   388,   282,   234,
    1080,  1081,   389,   390,   391,   392,   488,   458,   321,   322,
     393,    86,    87,   394,   395,   560,  1080,  1081,   396,   397,
     398,   284,   285,   399,   400,   442,    88,   515,  1082,   556,
     401,   485,   235,   489,   402,    89,   403,   404,   705,   405,
     283,  1083,   885,  1202,  1082,   406,   407,  1084,   837,   838,
     839,   840,   841,   119,  1255,   408,   409,  1083,   410,   459,
     120,   121,   323,  1084,  1085,   122,   284,   285,  1118,   411,
     412,   414,   123,   416,  1203,   554,   417,   503,   418,   124,
    1085,   419,   460,   125,   126,   420,  1256,   461,  1204,   421,
     127,   422,  1086,   128,   129,   130,   423,   131,   424,   436,
    1087,  1088,   437,   132,   236,   736,  1205,  1206,  1086,   737,
     425,   426,  1207,  1208,  1209,  1210,  1087,   133,   134,   427,
     428,   135,    90,    91,    92,  1211,   429,   136,   430,   738,
     431,   137,   138,   357,  1089,   139,   237,   432,   140,   141,
    1110,   739,   438,   433,   470,   439,   462,  1117,   142,   143,
    1089,   471,   740,  1090,   472,   144,   145,   741,   146,   147,
     148,   149,   473,   474,   742,   475,   476,   573,   477,  1090,
    1284,   743,   150,   481,   482,   744,  1105,  1106,  1107,  1108,
    1109,   151,   152,   495,   153,  1257,   154,   155,   745,   496,
     156,   497,   440,   498,   499,   574,   500,   504,   505,   506,
     507,   508,  1285,   509,   510,  1216,   534,   511,   512,   513,
     441,    77,   514,  1286,   535,   536,   746,   157,   557,   158,
     537,   747,  1284,   159,    78,  1287,   538,   160,   161,   162,
     163,   539,  1288,   540,   164,   165,  1289,  1290,   541,   543,
     748,   544,   166,    79,    80,   545,   546,   547,   558,  1291,
      81,   749,   750,   751,  1285,   548,   752,   722,   723,   724,
     725,   726,   727,   728,   549,  1286,   575,   576,   577,   550,
     551,   578,   167,   552,   168,  1217,   553,  1287,   579,   559,
     169,   560,  1292,   563,  1288,   170,   564,  1293,  1289,  1290,
     171,   580,   565,   566,   567,   568,  1294,   569,    82,    83,
     572,  1291,   307,   570,   631,   581,  1218,   571,    84,    85,
     632,   635,  1295,  1296,  1297,   643,   639,   640,   645,   647,
    1219,   648,   308,   649,   650,   442,   309,   582,    86,    87,
     753,   754,   651,   652,  1292,   653,   654,   656,  1220,  1221,
     755,   655,   657,    88,  1222,  1223,  1224,  1225,  1294,   310,
     311,   259,    89,   658,   312,   659,   661,  1226,   662,   663,
     664,   665,   666,   313,  1295,  1296,  1297,     2,     3,   314,
     667,   669,     4,   670,   671,  1298,   672,     5,   673,   674,
     675,   679,   676,   680,   681,   682,   315,   687,   688,   260,
       6,  1299,     7,   691,   694,     8,   698,   700,   701,   695,
     696,  1300,     9,   697,   261,   718,   703,   719,   720,   704,
     707,   708,   711,   713,   316,   721,   714,    10,   729,   730,
     262,   715,   317,   263,   264,    11,    12,  1298,    13,   731,
     732,   733,   734,   735,   778,   779,   777,   318,   783,    90,
      91,    92,   265,  1299,   784,   319,   320,   785,   786,    14,
     787,   790,   791,  1300,   792,   780,   793,   594,   794,   595,
      15,    16,   596,   795,   789,   796,   797,   597,   798,   799,
     800,   803,   801,   802,   321,   322,   816,   817,    17,   805,
     598,   599,   600,   808,   813,   809,   601,   818,   814,   826,
     927,   928,   929,   930,    18,   931,   932,   815,   933,   934,
     935,   827,   819,   936,   602,   820,   821,   828,   603,   604,
     822,   823,   824,   937,   938,   939,   940,   941,   942,   825,
     943,    19,   829,   944,   831,   830,   832,   833,   323,   887,
      20,    21,   605,   834,   606,    22,    23,   835,   836,   844,
     888,   845,   846,   890,   847,   848,   849,   607,   948,   949,
     950,   951,   893,   952,   953,   850,   954,   955,   956,   851,
     852,   957,   894,  1174,   306,   853,   516,  1047,   608,   854,
     484,   958,   959,   960,   961,   962,   963,   855,   964,   856,
    1006,   965,  1336,   857,   858,   859,   860,   997,   998,   861,
    1000,   862,   867,   863,   864,  1001,   609,   868,   869,   870,
     871,   872,   873,   874,  1004,   875,   876,   878,   610,  1005,
     879,   880,   881,   882,   883,   884,   889,   892,   611,   891,
    1330,   895,   995,   896,   897,   898,   899,   866,   900,   901,
     902,   903,   904,   905,   906,   907,   908,   909,  1048,   910,
     911,  1049,   912,   913,   914,   915,   916,   917,   918,   919,
    1050,   920,   921,   922,   923,   924,   925,   926,   947,   968,
    1069,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,   981,   987,   988,   989,   990,   991,   992,
    1071,  1073,  1111,   993,   996,  1112,  1003,   999,  1113,  1002,
    1009,  1010,  1011,  1114,  1012,  1115,  1116,  1013,  1014,  1015,
    1016,  1017,  1120,  1018,  1019,  1020,  1021,  1124,  1022,  1023,
    1024,  1025,  1026,  1125,  1135,  1129,  1027,  1028,  1029,  1030,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1045,  1051,  1052,  1070,  1053,  1054,  1123,
    1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1126,  1063,
    1064,  1065,  1066,  1067,  1068,  1072,  1127,  1075,  1128,  1074,
    1076,  1077,  1078,  1079,  1094,  1095,  1096,  1097,  1098,  1099,
    1100,  1101,  1102,  1103,  1104,  1119,  1131,  1132,  1133,  1130,
    1134,  1136,  1137,  1138,  1139,  1140,  1141,  1145,  1142,  1146,
    1158,  1159,  1164,  1177,  1165,  1166,  1167,  1172,  1178,  1179,
    1180,  1182,  1173,  1183,  1184,  1185,  1181,  1186,  1187,  1188,
    1189,  1190,  1191,  1192,  1194,  1196,  1278,  1193,  1329,  1197,
    1198,  1199,  1195,  1200,  1214,  1215,  1232,  1233,  1234,  1235,
    1229,  1236,  1237,  1238,  1239,  1240,  1241,  1242,  1243,  1244,
    1245,  1246,  1247,  1248,  1249,  1250,  1261,  1262,  1263,  1264,
    1265,  1266,  1267,  1333,  1280,  1281,  1282,  1283,  1304,  1322,
     807,  1279,  1305,   812,   782,   555,  1306,  1307,  1334,  1308,
    1335,  1326,   886,  1309,  1323,   435,  1328,  1327,   358,  1271,
       0,     0,  1270,  1310,  1311,  1312,  1313,  1314,  1315,  1316,
    1317,   479,     0,     0,     0,     0,     0,     0,   642,     0,
       0,     0,   634,     0,     0,     0,     0,     0,     0,   717,
       0,     0,   637,     0,     0,     0,     0,     0,   502,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   710,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   706
};

static const short int yycheck[] =
{
     346,   347,   428,   241,   239,     1,   141,    70,   243,   239,
       1,   239,    11,   243,    13,   243,   241,     8,     9,   241,
       1,     1,    13,     1,     5,    12,     1,    26,   239,    20,
     239,    30,   243,   241,   243,    12,    27,   383,   241,   385,
      31,    32,     1,   241,    25,   241,     1,    38,     1,    29,
      41,    42,    43,   399,    45,     1,    37,   241,    36,     1,
      51,   407,     1,     1,   141,   239,   241,    48,    46,   243,
     416,   417,    53,   241,    65,    66,   241,    36,    69,    60,
     426,   427,   241,   429,    75,    81,    67,    46,    79,    80,
      71,    90,    83,    39,     1,    86,    87,     1,   239,     1,
     239,     1,   243,    84,   243,    96,    97,     1,    54,    15,
      16,    17,   103,   104,    53,   106,   107,   108,   109,   241,
     100,   101,   102,    23,    70,   105,    81,    73,    74,   120,
     241,   112,   112,   141,   112,   110,   117,    76,   129,   130,
       1,   132,    81,   134,   135,   125,    92,   138,    55,    56,
      57,    53,   215,   112,   500,   136,    63,     1,     1,   139,
       1,   239,   137,   239,   240,   243,   147,   148,   149,     1,
     112,   152,     4,     1,   165,     3,   167,    81,     6,     1,
     171,   161,   241,    11,   175,   176,   177,   178,    95,     1,
     143,   182,   183,    36,   181,   241,    24,    25,    26,   190,
     241,   140,    30,     1,   181,   143,     1,   239,   239,    53,
     112,   243,    44,   179,   180,    47,   116,   123,   112,   239,
      48,   128,   221,   243,    52,    53,    21,   242,   170,   220,
      25,   222,   239,   242,    77,   241,   243,   228,    36,   143,
      81,   143,   233,   143,   240,   226,   227,   238,    76,   240,
      78,   112,   242,    48,    49,   236,   179,   180,    53,   240,
     240,     1,    94,    91,     1,   240,   242,    62,   112,   112,
     242,   114,   115,    68,   227,     1,   170,    14,   242,    77,
     112,   240,   242,    23,   112,   227,   242,   240,   110,   227,
      85,   242,   242,   200,   240,   242,    33,    34,   240,   143,
     112,   240,   143,    40,   982,   983,   984,   242,   151,   170,
     153,   242,   140,   242,   112,   137,   114,   115,   113,   197,
     198,   242,   242,   166,   152,   232,   121,   242,   242,    55,
      56,    57,   241,   240,   162,   141,   240,    63,   240,   242,
     240,   136,   239,    84,   242,    11,   240,    13,   239,   144,
     145,    88,    89,   151,   700,   153,   242,   242,   170,   242,
      26,    98,    99,   242,    30,   208,   227,   242,   166,    95,
      21,    22,   242,   242,   242,   242,   116,     1,   173,   174,
     242,   118,   119,   242,   242,   123,    21,    22,   242,   242,
     242,   234,   235,   242,   242,   227,   133,   240,    49,   179,
     242,   241,   128,   143,   242,   142,   242,   242,   240,   242,
     208,    62,   240,   154,    49,   242,   242,    68,   156,   157,
     158,   159,   160,     1,    90,   242,   242,    62,   242,    53,
       8,     9,   227,    68,    85,    13,   234,   235,   864,   242,
     242,   242,    20,   242,   185,   240,   242,   239,   242,    27,
      85,   242,    76,    31,    32,   242,   122,    81,   199,   242,
      38,   242,   113,    41,    42,    43,   242,    45,   242,     1,
     121,   122,     4,    51,   200,     1,   217,   218,   113,     5,
     242,   242,   223,   224,   225,   226,   121,    65,    66,   242,
     242,    69,   229,   230,   231,   236,   242,    75,   242,    25,
     242,    79,    80,   240,   155,    83,   232,   242,    86,    87,
     856,    37,    44,   242,   242,    47,   140,   863,    96,    97,
     155,   242,    48,   174,   242,   103,   104,    53,   106,   107,
     108,   109,   242,   242,    60,   242,   242,     1,   242,   174,
       5,    67,   120,   242,   242,    71,   837,   838,   839,   840,
     841,   129,   130,   242,   132,   221,   134,   135,    84,   242,
     138,   242,    94,   242,   242,    29,   242,   242,   242,   242,
     242,   242,    37,   242,   242,    84,   141,   242,   242,   242,
     112,     1,   242,    48,   141,   239,   112,   165,   123,   167,
     239,   117,     5,   171,    14,    60,   242,   175,   176,   177,
     178,   242,    67,   242,   182,   183,    71,    72,   242,   242,
     136,   242,   190,    33,    34,   242,   242,   242,   123,    84,
      40,   147,   148,   149,    37,   242,   152,   201,   202,   203,
     204,   205,   206,   207,   242,    48,   100,   101,   102,   242,
     242,   105,   220,   242,   222,   154,   242,    60,   112,   179,
     228,   123,   117,   123,    67,   233,   123,   122,    71,    72,
     238,   125,   179,   179,   179,   179,   131,   179,    88,    89,
     239,    84,     1,   179,   242,   139,   185,   179,    98,    99,
     242,   242,   147,   148,   149,   179,   242,   242,   179,   123,
     199,   141,    21,   123,   179,   227,    25,   161,   118,   119,
     226,   227,   179,   179,   117,   123,   141,   123,   217,   218,
     236,   179,   123,   133,   223,   224,   225,   226,   131,    48,
      49,     1,   142,   123,    53,   179,   179,   236,   123,   141,
     179,   123,   123,    62,   147,   148,   149,     0,     1,    68,
     123,   123,     5,   141,   123,   210,   123,    10,   179,   242,
     179,   179,   242,   141,   179,   179,    85,   179,   179,    39,
      23,   226,    25,   123,   179,    28,   239,   242,   242,   179,
     179,   236,    35,   179,    54,   141,   242,   141,   141,   242,
     242,   242,   239,   242,   113,   141,   242,    50,   141,   141,
      70,   242,   121,    73,    74,    58,    59,   210,    61,   179,
     239,   141,   141,   239,   242,   242,   239,   136,   179,   229,
     230,   231,    92,   226,   179,   144,   145,   179,   179,    82,
     179,   141,   179,   236,   141,   242,   141,     1,   141,     3,
      93,    94,     6,   141,   239,   141,   141,    11,   123,   141,
     141,   242,   239,   239,   173,   174,   179,   141,   111,   242,
      24,    25,    26,   239,   239,   242,    30,   179,   239,   141,
     186,   187,   188,   189,   127,   191,   192,   239,   194,   195,
     196,   123,   179,   199,    48,   242,   179,   141,    52,    53,
     179,   179,   179,   209,   210,   211,   212,   213,   214,   179,
     216,   154,   141,   219,   141,   179,   239,   239,   227,   141,
     163,   164,    76,   239,    78,   168,   169,   239,   239,   239,
     141,   239,   239,   141,   239,   239,   239,    91,   186,   187,
     188,   189,   141,   191,   192,   239,   194,   195,   196,   239,
     239,   199,   141,   184,    71,   239,   286,   756,   112,   239,
     251,   209,   210,   211,   212,   213,   214,   239,   216,   242,
     123,   219,  1332,   242,   242,   242,   242,   141,   141,   242,
     141,   242,   239,   242,   242,   141,   140,   242,   242,   242,
     242,   242,   242,   242,   141,   242,   242,   242,   152,   141,
     242,   242,   242,   242,   242,   242,   239,   242,   162,   239,
    1293,   239,   179,   239,   239,   239,   239,   583,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   141,   239,
     239,   141,   239,   239,   239,   239,   239,   239,   239,   239,
     141,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     141,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     141,   141,   123,   242,   242,   123,   242,   239,   123,   239,
     239,   239,   239,   123,   239,   141,   123,   239,   239,   239,
     239,   239,   141,   239,   239,   239,   239,   141,   239,   239,
     239,   239,   239,   141,   123,   141,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   239,   239,   242,   239,   239,   179,
     239,   239,   239,   239,   239,   239,   239,   239,   179,   239,
     239,   239,   239,   239,   239,   239,   179,   239,   179,   242,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   141,   141,   141,   242,
     141,   141,   141,   239,   239,   239,   239,   239,   146,   239,
     239,   239,   239,   179,   239,   239,   239,   239,   141,   179,
     179,   179,   239,   179,   179,   179,   242,   141,   179,   141,
     179,   179,   179,   141,   141,   239,   123,   179,  1277,   239,
     239,   239,   179,   239,   239,   239,   239,   239,   239,   239,
    1088,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,  1319,   239,   239,   239,   239,   239,  1231,
     521,  1176,   239,   529,   490,   324,   239,   239,  1321,   239,
    1325,  1269,   612,   239,  1256,   172,  1275,  1273,    93,  1150,
      -1,    -1,  1148,   239,   239,   239,   239,   239,   239,   239,
     239,   238,    -1,    -1,    -1,    -1,    -1,    -1,   378,    -1,
      -1,    -1,   364,    -1,    -1,    -1,    -1,    -1,    -1,   464,
      -1,    -1,   370,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   454,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   443
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   245,     0,     1,     5,    10,    23,    25,    28,    35,
      50,    58,    59,    61,    82,    93,    94,   111,   127,   154,
     163,   164,   168,   169,   246,   251,   256,   270,   276,   287,
     316,   331,   344,   368,   375,   385,   394,   421,   427,   433,
     438,   448,   509,   525,   543,   239,   240,   241,   345,   241,
     317,   395,   428,   434,   439,   241,   510,   422,   332,   241,
     241,   288,   369,   241,   241,   376,   386,     1,    36,    46,
     112,   271,   272,   273,   274,   275,   241,     1,    14,    33,
      34,    40,    88,    89,    98,    99,   118,   119,   133,   142,
     229,   230,   231,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     141,   318,   322,   141,   396,   400,   241,   241,   241,     1,
       8,     9,    13,    20,    27,    31,    32,    38,    41,    42,
      43,    45,    51,    65,    66,    69,    75,    79,    80,    83,
      86,    87,    96,    97,   103,   104,   106,   107,   108,   109,
     120,   129,   130,   132,   134,   135,   138,   165,   167,   171,
     175,   176,   177,   178,   182,   183,   190,   220,   222,   228,
     233,   238,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     500,   504,   505,   506,   507,   508,   241,   241,   241,     1,
      55,    56,    57,    63,    95,   128,   200,   232,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,     1,   110,
     137,   252,   253,   254,   255,   141,   289,   293,   241,     1,
      39,    54,    70,    73,    74,    92,   544,   545,   546,   547,
     548,   549,   550,   551,     1,    36,    77,   112,   114,   115,
     151,   153,   166,   208,   234,   235,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   241,
     241,   239,   242,   242,   242,   240,   272,     1,    21,    25,
      48,    49,    53,    62,    68,    85,   113,   121,   136,   144,
     145,   173,   174,   227,   346,   347,   348,   349,   350,   351,
     352,   353,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   240,   527,   241,
     241,     1,    81,   143,   429,   430,   431,   432,     1,    81,
     435,   436,   437,     1,    53,   112,   143,   440,   444,   445,
     446,   447,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   501,   242,   497,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   240,   450,     1,     4,    44,    47,
      94,   112,   227,   511,   512,   513,   514,   515,   519,   520,
     521,     1,   143,   227,   423,   424,   425,   426,     1,    53,
      76,    81,   140,   333,   337,   338,   339,   342,   343,   239,
     242,   242,   242,   242,   242,   242,   242,   242,   240,   278,
     239,   242,   242,   240,   253,   241,     1,    23,   116,   143,
     370,   371,   372,   373,   374,   242,   242,   242,   242,   242,
     242,   240,   545,   239,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   240,   258,     1,   112,   170,
     227,   377,   378,   379,   380,   381,     1,   112,   170,   387,
     388,   389,   390,   141,   141,   141,   239,   239,   242,   242,
     242,   242,   354,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   240,   347,   179,   123,   123,   179,
     123,   248,   248,   123,   123,   179,   179,   179,   179,   179,
     179,   179,   239,     1,    29,   100,   101,   102,   105,   112,
     125,   139,   161,   319,   320,   321,   323,   324,   325,   326,
     327,   328,   329,   330,     1,     3,     6,    11,    24,    25,
      26,    30,    48,    52,    53,    76,    78,    91,   112,   140,
     152,   162,   397,   398,   399,   401,   402,   403,   404,   405,
     406,   407,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   242,   242,   240,   430,   242,   240,   436,   441,   242,
     242,   240,   445,   179,   248,   179,   248,   123,   141,   123,
     179,   179,   179,   123,   141,   179,   123,   123,   123,   179,
     248,   179,   123,   141,   179,   123,   123,   123,   248,   123,
     141,   123,   123,   179,   242,   179,   242,   248,   248,   179,
     141,   179,   179,   179,   180,   179,   180,   179,   179,   248,
     248,   123,   250,   248,   179,   179,   179,   179,   239,   522,
     242,   242,   516,   242,   242,   240,   512,   242,   242,   240,
     424,   239,   334,   242,   242,   242,   240,   338,   141,   141,
     141,   141,   201,   202,   203,   204,   205,   206,   207,   141,
     141,   179,   239,   141,   141,   239,     1,     5,    25,    37,
      48,    53,    60,    67,    71,    84,   112,   117,   136,   147,
     148,   149,   152,   226,   227,   236,   290,   291,   292,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   239,   242,   242,
     242,   240,   371,   179,   179,   179,   179,   179,   248,   239,
     141,   179,   141,   141,   141,   141,   141,   141,   123,   141,
     141,   239,   239,   242,   382,   242,   240,   378,   239,   242,
     391,   240,   388,   239,   239,   239,   179,   141,   179,   179,
     242,   179,   179,   179,   179,   179,   141,   123,   141,   141,
     179,   141,   239,   239,   239,   239,   239,   156,   157,   158,
     159,   160,   247,   248,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   240,   320,   239,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   408,   242,   242,
     242,   242,   242,   242,   242,   240,   398,   141,   141,   239,
     141,   239,   242,   141,   141,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   186,   187,   188,
     189,   191,   192,   194,   195,   196,   199,   209,   210,   211,
     212,   213,   214,   216,   219,   502,   503,   239,   186,   187,
     188,   189,   191,   192,   194,   195,   196,   199,   209,   210,
     211,   212,   213,   214,   216,   219,   498,   499,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,    15,    16,    17,   249,   250,   239,   239,   239,
     239,   239,   239,   242,   248,   179,   242,   141,   141,   239,
     141,   141,   239,   242,   141,   141,   123,   340,   341,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   242,   242,   242,
     242,   312,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   240,   291,   141,   141,
     141,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   141,
     242,   141,   239,   141,   242,   239,   239,   239,   239,   239,
      21,    22,    49,    62,    68,    85,   113,   121,   122,   155,
     174,   355,   356,   357,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   247,   247,   247,   247,   247,
     248,   123,   123,   123,   123,   141,   123,   248,   250,   239,
     141,   197,   198,   179,   141,   141,   179,   179,   179,   141,
     242,   141,   141,   141,   141,   123,   141,   141,   239,   239,
     239,   239,   146,   442,   443,   239,   239,   239,   243,   239,
     243,   249,   249,   249,    12,   181,   523,   524,   239,   239,
      12,   181,   517,   518,   239,   239,   239,   239,    70,   215,
     335,   336,   239,   239,   184,   239,   243,   179,   141,   179,
     179,   242,   179,   179,   179,   179,   141,   179,   141,   179,
     179,   179,   141,   179,   141,   179,   239,   239,   239,   239,
     239,    84,   154,   185,   199,   217,   218,   223,   224,   225,
     226,   236,   383,   384,   239,   239,    84,   154,   185,   199,
     217,   218,   223,   224,   225,   226,   236,   392,   393,   357,
     239,   243,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,    11,    13,    26,    30,    90,   122,   221,   409,   410,
     411,   239,   239,   239,   239,   239,   239,   239,   239,   243,
     503,   499,   239,   243,   239,   243,   239,   243,   123,   341,
     239,   239,   239,   239,     5,    37,    48,    60,    67,    71,
      72,    84,   117,   122,   131,   147,   148,   149,   210,   226,
     236,   313,   314,   315,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   243,
     239,   243,   356,   411,   239,   243,   443,   524,   518,   336,
     315,   239,   243,   384,   393,   410,   314
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
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


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
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

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

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
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
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  register short int *yyssp;

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


  yyvsp[0] = yylval;

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

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
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

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 26:
#line 401 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 28:
#line 403 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number);
		}
    break;

  case 29:
#line 407 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number);
		}
    break;

  case 30:
#line 411 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number);
		}
    break;

  case 31:
#line 415 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number);
		}
    break;

  case 32:
#line 419 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number);
		}
    break;

  case 33:
#line 423 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number);
		}
    break;

  case 34:
#line 428 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 36:
#line 429 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
    break;

  case 37:
#line 430 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
    break;

  case 38:
#line 431 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
    break;

  case 39:
#line 432 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
    break;

  case 46:
#line 446 "ircd_parser.y"
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
#line 463 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 487 "ircd_parser.y"
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
#line 521 "ircd_parser.y"
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
#line 581 "ircd_parser.y"
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
#line 595 "ircd_parser.y"
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
#line 613 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 622 "ircd_parser.y"
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
#line 636 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 645 "ircd_parser.y"
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
#line 673 "ircd_parser.y"
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
#line 703 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (MAXCONN >= (yyvsp[-1].number))
    {
      ServerInfo.max_clients = (yyvsp[-1].number);
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
#line 719 "ircd_parser.y"
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
#line 775 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 784 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 793 "ircd_parser.y"
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

  case 136:
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

  case 137:
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

  case 138:
#line 1016 "ircd_parser.y"
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
#line 1035 "ircd_parser.y"
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
#line 1047 "ircd_parser.y"
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
#line 1058 "ircd_parser.y"
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
#line 1069 "ircd_parser.y"
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
#line 1111 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 144:
#line 1120 "ircd_parser.y"
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
#line 1131 "ircd_parser.y"
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
#line 1142 "ircd_parser.y"
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
#line 1153 "ircd_parser.y"
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
#line 1164 "ircd_parser.y"
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
#line 1175 "ircd_parser.y"
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
#line 1186 "ircd_parser.y"
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
#line 1197 "ircd_parser.y"
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
#line 1208 "ircd_parser.y"
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
#line 1219 "ircd_parser.y"
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
#line 1230 "ircd_parser.y"
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
#line 1241 "ircd_parser.y"
    {
}
    break;

  case 159:
#line 1245 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 160:
#line 1246 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 161:
#line 1249 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 162:
#line 1256 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 163:
#line 1263 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 164:
#line 1270 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 165:
#line 1277 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 166:
#line 1284 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 167:
#line 1291 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 168:
#line 1298 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 169:
#line 1305 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 170:
#line 1312 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 171:
#line 1319 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 172:
#line 1326 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 173:
#line 1333 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 174:
#line 1340 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 175:
#line 1347 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 176:
#line 1354 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 177:
#line 1367 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 178:
#line 1374 "ircd_parser.y"
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

  case 193:
#line 1401 "ircd_parser.y"
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

  case 194:
#line 1447 "ircd_parser.y"
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

  case 195:
#line 1493 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 196:
#line 1499 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[-1].number);
}
    break;

  case 197:
#line 1505 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 198:
#line 1511 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 199:
#line 1517 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 200:
#line 1523 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 201:
#line 1529 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[-1].number);
}
    break;

  case 202:
#line 1535 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 203:
#line 1544 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 204:
#line 1551 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 205:
#line 1560 "ircd_parser.y"
    {
}
    break;

  case 209:
#line 1565 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 210:
#line 1569 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 221:
#line 1582 "ircd_parser.y"
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
    add_listener((yyvsp[0].number), listener_address, listener_flags);
    listener_flags = 0;
  }
}
    break;

  case 222:
#line 1597 "ircd_parser.y"
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

    for (i = (yyvsp[-2].number); i <= (yyvsp[0].number); ++i)
      add_listener(i, listener_address, listener_flags);

    listener_flags = 0;
  }
}
    break;

  case 223:
#line 1619 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 224:
#line 1628 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 225:
#line 1640 "ircd_parser.y"
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

  case 226:
#line 1652 "ircd_parser.y"
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

  case 246:
#line 1722 "ircd_parser.y"
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

  case 247:
#line 1743 "ircd_parser.y"
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

  case 248:
#line 1756 "ircd_parser.y"
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

  case 249:
#line 1767 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 250:
#line 1776 "ircd_parser.y"
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

  case 251:
#line 1787 "ircd_parser.y"
    {
}
    break;

  case 255:
#line 1791 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 256:
#line 1792 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 257:
#line 1795 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 258:
#line 1803 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 259:
#line 1810 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 260:
#line 1817 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 261:
#line 1824 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 262:
#line 1831 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 263:
#line 1838 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 264:
#line 1845 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 265:
#line 1852 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 266:
#line 1859 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 267:
#line 1868 "ircd_parser.y"
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

  case 268:
#line 1879 "ircd_parser.y"
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

  case 269:
#line 1890 "ircd_parser.y"
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

  case 270:
#line 1901 "ircd_parser.y"
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

  case 271:
#line 1912 "ircd_parser.y"
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

  case 272:
#line 1923 "ircd_parser.y"
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

  case 273:
#line 1935 "ircd_parser.y"
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

  case 274:
#line 1954 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 275:
#line 1964 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[-1].number);
  }
}
    break;

  case 276:
#line 1973 "ircd_parser.y"
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

  case 277:
#line 1988 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 278:
#line 1995 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 285:
#line 2007 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 286:
#line 2016 "ircd_parser.y"
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

  case 287:
#line 2031 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 288:
#line 2044 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 289:
#line 2052 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 296:
#line 2063 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 297:
#line 2072 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_match_item->user, &yy_match_item->host);
  }
}
    break;

  case 298:
#line 2080 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 302:
#line 2087 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 303:
#line 2091 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 304:
#line 2095 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 305:
#line 2099 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 306:
#line 2103 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 307:
#line 2107 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 308:
#line 2111 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 309:
#line 2115 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 310:
#line 2119 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 311:
#line 2123 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 312:
#line 2127 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 313:
#line 2136 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 314:
#line 2143 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 320:
#line 2156 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 321:
#line 2162 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 325:
#line 2169 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 326:
#line 2173 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 327:
#line 2177 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 328:
#line 2181 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 329:
#line 2185 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 330:
#line 2189 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 331:
#line 2193 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 332:
#line 2197 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 333:
#line 2201 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 334:
#line 2205 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 335:
#line 2209 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 336:
#line 2218 "ircd_parser.y"
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

  case 337:
#line 2236 "ircd_parser.y"
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

  case 360:
#line 2378 "ircd_parser.y"
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

  case 361:
#line 2390 "ircd_parser.y"
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

  case 362:
#line 2402 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 363:
#line 2411 "ircd_parser.y"
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

  case 364:
#line 2423 "ircd_parser.y"
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

  case 365:
#line 2435 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[-1].number);
}
    break;

  case 366:
#line 2441 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 367:
#line 2445 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 368:
#line 2453 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 369:
#line 2462 "ircd_parser.y"
    {
}
    break;

  case 373:
#line 2466 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 374:
#line 2467 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 375:
#line 2470 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 376:
#line 2477 "ircd_parser.y"
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

  case 377:
#line 2488 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 378:
#line 2495 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 379:
#line 2502 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 380:
#line 2509 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 381:
#line 2519 "ircd_parser.y"
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

  case 382:
#line 2560 "ircd_parser.y"
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

  case 383:
#line 2571 "ircd_parser.y"
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

  case 384:
#line 2582 "ircd_parser.y"
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

  case 385:
#line 2597 "ircd_parser.y"
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

  case 386:
#line 2608 "ircd_parser.y"
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

  case 387:
#line 2621 "ircd_parser.y"
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

  case 388:
#line 2634 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 389:
#line 2643 "ircd_parser.y"
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

  case 390:
#line 2678 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 391:
#line 2685 "ircd_parser.y"
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

  case 397:
#line 2704 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    split_nuh(yylval.string, NULL, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 398:
#line 2712 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 399:
#line 2724 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(DLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_aconf->reason, "No reason");
  }
}
    break;

  case 400:
#line 2733 "ircd_parser.y"
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

  case 406:
#line 2749 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 407:
#line 2758 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 408:
#line 2770 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 409:
#line 2778 "ircd_parser.y"
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

  case 414:
#line 2794 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 415:
#line 2806 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_flags = 0;
    gecos_reason[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 416:
#line 2813 "ircd_parser.y"
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
        DupString(yy_match_item->reason, "No reason");
    }
  }
}
    break;

  case 417:
#line 2856 "ircd_parser.y"
    {
}
    break;

  case 421:
#line 2861 "ircd_parser.y"
    {
  if (ypass == 2)
    gecos_flags |= 1;
}
    break;

  case 428:
#line 2870 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_name, yylval.string, sizeof(gecos_reason));
  }
}
    break;

  case 429:
#line 2879 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_reason, yylval.string, sizeof(gecos_name));
  }
}
    break;

  case 486:
#line 2927 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = (yyvsp[-1].number);
}
    break;

  case 487:
#line 2933 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = (yyvsp[-1].number);
}
    break;

  case 488:
#line 2939 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 489:
#line 2945 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 490:
#line 2950 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 491:
#line 2955 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = (yyvsp[-1].number);
}
    break;

  case 492:
#line 2961 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 493:
#line 2967 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 494:
#line 2973 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 495:
#line 2979 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 496:
#line 2985 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 497:
#line 2991 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = (yyvsp[-1].number); 
}
    break;

  case 498:
#line 2997 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = (yyvsp[-1].number);
}
    break;

  case 499:
#line 3003 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = (yyvsp[-1].number);
}
    break;

  case 500:
#line 3009 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[-1].number);
}
    break;

  case 501:
#line 3015 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = (yyvsp[-1].number);
}
    break;

  case 502:
#line 3021 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[-1].number);
}
    break;

  case 503:
#line 3027 "ircd_parser.y"
    {
  if (((yyvsp[-1].number) > 0) && ypass == 1)
  {
    ilog(L_CRIT, "You haven't read your config file properly.");
    ilog(L_CRIT, "There is a line in the example conf that will kill your server if not removed.");
    ilog(L_CRIT, "Consider actually reading/editing the conf file, and removing this line.");
    exit(0);
  }
}
    break;

  case 504:
#line 3038 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 505:
#line 3044 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 506:
#line 3053 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 507:
#line 3059 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 508:
#line 3065 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 509:
#line 3071 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 510:
#line 3075 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 511:
#line 3081 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 512:
#line 3085 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 513:
#line 3091 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = (yyvsp[-1].number);
}
    break;

  case 514:
#line 3097 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = (yyvsp[-1].number);
}
    break;

  case 515:
#line 3103 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = (yyvsp[-1].number);
}
    break;

  case 516:
#line 3109 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 517:
#line 3115 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 518:
#line 3121 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 519:
#line 3127 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 520:
#line 3133 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 521:
#line 3144 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = (yyvsp[-1].number);
}
    break;

  case 522:
#line 3150 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = (yyvsp[-1].number);
}
    break;

  case 523:
#line 3156 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = (yyvsp[-1].number);
}
    break;

  case 524:
#line 3162 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = (yyvsp[-1].number);
}
    break;

  case 525:
#line 3168 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 526:
#line 3177 "ircd_parser.y"
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

  case 527:
#line 3209 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    ConfigFileEntry.compression_level = (yyvsp[-1].number);
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

  case 528:
#line 3227 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 529:
#line 3233 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 530:
#line 3242 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 531:
#line 3248 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 532:
#line 3253 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 533:
#line 3259 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 537:
#line 3266 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 538:
#line 3270 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 539:
#line 3274 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 540:
#line 3278 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 541:
#line 3282 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 542:
#line 3286 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 543:
#line 3290 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 544:
#line 3294 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 545:
#line 3298 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 546:
#line 3302 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 547:
#line 3306 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 548:
#line 3310 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 549:
#line 3314 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 550:
#line 3318 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 551:
#line 3322 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 552:
#line 3326 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 553:
#line 3330 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 554:
#line 3334 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 555:
#line 3340 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 559:
#line 3347 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 560:
#line 3351 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 561:
#line 3355 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 562:
#line 3359 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 563:
#line 3363 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 564:
#line 3367 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 565:
#line 3371 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 566:
#line 3375 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 567:
#line 3379 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 568:
#line 3383 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 569:
#line 3387 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 570:
#line 3391 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 571:
#line 3395 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 572:
#line 3399 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 573:
#line 3403 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 574:
#line 3407 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 575:
#line 3411 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 576:
#line 3415 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 577:
#line 3421 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = (yyvsp[-1].number);
}
    break;

  case 578:
#line 3427 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = (yyvsp[-1].number);
}
    break;

  case 579:
#line 3433 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = (yyvsp[-1].number);
}
    break;

  case 580:
#line 3439 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = (yyvsp[-1].number);
}
    break;

  case 581:
#line 3445 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 582:
#line 3454 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 583:
#line 3462 "ircd_parser.y"
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

  case 593:
#line 3489 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 594:
#line 3495 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[-1].number);
}
    break;

  case 595:
#line 3501 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 599:
#line 3507 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 600:
#line 3511 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 601:
#line 3517 "ircd_parser.y"
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

  case 602:
#line 3536 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 603:
#line 3545 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 604:
#line 3549 "ircd_parser.y"
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

  case 607:
#line 3589 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 608:
#line 3593 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 628:
#line 3623 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 629:
#line 3629 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 630:
#line 3635 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 631:
#line 3641 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 632:
#line 3647 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = (yyvsp[-1].number);
}
    break;

  case 633:
#line 3653 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
    break;

  case 634:
#line 3659 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 635:
#line 3665 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = (yyvsp[-1].number);
}
    break;

  case 636:
#line 3671 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 637:
#line 3677 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = (yyvsp[-1].number);
}
    break;

  case 638:
#line 3683 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = (yyvsp[-1].number);
}
    break;

  case 639:
#line 3689 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = (yyvsp[-1].number);
}
    break;

  case 640:
#line 3695 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 641:
#line 3701 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 642:
#line 3707 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 653:
#line 3727 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 654:
#line 3733 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 655:
#line 3739 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (((yyvsp[-1].number) > 0) && ConfigServerHide.links_disabled == 1)
    {
      eventAddIsh("write_links_file", write_links_file, NULL, (yyvsp[-1].number));
      ConfigServerHide.links_disabled = 0;
    }

    ConfigServerHide.links_delay = (yyvsp[-1].number);
  }
}
    break;

  case 656:
#line 3753 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 657:
#line 3759 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 658:
#line 3765 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 6979 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

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
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {

		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 yydestruct ("Error: popping",
                             yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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
  yydestruct ("Error: discarding lookahead",
              yytoken, &yylval);
  yychar = YYEMPTY;
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



