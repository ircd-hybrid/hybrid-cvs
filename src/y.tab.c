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
/* $Id: y.tab.c,v 7.42 2005/07/30 09:38:47 michael Exp $ */
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
     T_DEBUG = 446,
     T_DRONE = 447,
     T_EXTERNAL = 448,
     T_FULL = 449,
     T_INVISIBLE = 450,
     T_IPV4 = 451,
     T_IPV6 = 452,
     T_LOCOPS = 453,
     T_LOGPATH = 454,
     T_L_CRIT = 455,
     T_L_DEBUG = 456,
     T_L_ERROR = 457,
     T_L_INFO = 458,
     T_L_NOTICE = 459,
     T_L_TRACE = 460,
     T_L_WARN = 461,
     T_MAX_CLIENTS = 462,
     T_NCHANGE = 463,
     T_OPERWALL = 464,
     T_REJ = 465,
     T_SERVNOTICE = 466,
     T_SKILL = 467,
     T_SPY = 468,
     T_SSL = 469,
     T_UNAUTH = 470,
     T_UNRESV = 471,
     T_UNXLINE = 472,
     T_WALLOP = 473,
     THROTTLE_TIME = 474,
     TOPICBURST = 475,
     TRUE_NO_OPER_FLOOD = 476,
     UNKLINE = 477,
     USER = 478,
     USE_EGD = 479,
     USE_EXCEPT = 480,
     USE_INVEX = 481,
     USE_KNOCK = 482,
     USE_LOGGING = 483,
     USE_WHOIS_ACTUALLY = 484,
     VHOST = 485,
     VHOST6 = 486,
     XLINE = 487,
     WARN = 488,
     WARN_NO_NLINE = 489
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
#define T_DEBUG 446
#define T_DRONE 447
#define T_EXTERNAL 448
#define T_FULL 449
#define T_INVISIBLE 450
#define T_IPV4 451
#define T_IPV6 452
#define T_LOCOPS 453
#define T_LOGPATH 454
#define T_L_CRIT 455
#define T_L_DEBUG 456
#define T_L_ERROR 457
#define T_L_INFO 458
#define T_L_NOTICE 459
#define T_L_TRACE 460
#define T_L_WARN 461
#define T_MAX_CLIENTS 462
#define T_NCHANGE 463
#define T_OPERWALL 464
#define T_REJ 465
#define T_SERVNOTICE 466
#define T_SKILL 467
#define T_SPY 468
#define T_SSL 469
#define T_UNAUTH 470
#define T_UNRESV 471
#define T_UNXLINE 472
#define T_WALLOP 473
#define THROTTLE_TIME 474
#define TOPICBURST 475
#define TRUE_NO_OPER_FLOOD 476
#define UNKLINE 477
#define USER 478
#define USE_EGD 479
#define USE_EXCEPT 480
#define USE_INVEX 481
#define USE_KNOCK 482
#define USE_LOGGING 483
#define USE_WHOIS_ACTUALLY 484
#define VHOST 485
#define VHOST6 486
#define XLINE 487
#define WARN 488
#define WARN_NO_NLINE 489




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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 134 "ircd_parser.y"
typedef union YYSTYPE {
  int number;
  char *string;
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 658 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 670 "y.tab.c"

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
#define YYLAST   1286

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  240
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  306
/* YYNRULES -- Number of rules. */
#define YYNRULES  645
/* YYNRULES -- Number of states. */
#define YYNSTATES  1318

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   489

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   239,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   235,
       2,   238,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   237,     2,   236,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234
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
    1691,  1693,  1695,  1697,  1698,  1704,  1708,  1710,  1712,  1714,
    1716,  1718,  1720,  1722,  1724,  1726,  1728,  1730,  1732,  1734,
    1736,  1738,  1740,  1742,  1744,  1749,  1754,  1759,  1764,  1769,
    1770,  1777,  1780,  1782,  1784,  1786,  1788,  1790,  1792,  1794,
    1796,  1801,  1806,  1807,  1813,  1817,  1819,  1821,  1823,  1828,
    1833,  1834,  1840,  1844,  1846,  1848,  1850,  1856,  1859,  1861,
    1863,  1865,  1867,  1869,  1871,  1873,  1875,  1877,  1879,  1881,
    1883,  1885,  1887,  1889,  1891,  1893,  1898,  1903,  1908,  1913,
    1918,  1923,  1928,  1933,  1938,  1943,  1948,  1953,  1958,  1963,
    1968,  1974,  1977,  1979,  1981,  1983,  1985,  1987,  1989,  1991,
    1993,  1998,  2003,  2008,  2013,  2018
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     241,     0,    -1,    -1,   241,   242,    -1,   266,    -1,   272,
      -1,   283,    -1,   519,    -1,   311,    -1,   326,    -1,   339,
      -1,   252,    -1,   537,    -1,   362,    -1,   369,    -1,   379,
      -1,   388,    -1,   415,    -1,   421,    -1,   427,    -1,   442,
      -1,   503,    -1,   432,    -1,   247,    -1,     1,   235,    -1,
       1,   236,    -1,    -1,   244,    -1,   123,   243,    -1,   123,
     156,   243,    -1,   123,   157,   243,    -1,   123,   158,   243,
      -1,   123,   159,   243,    -1,   123,   160,   243,    -1,    -1,
     246,    -1,   123,   245,    -1,   123,    15,   245,    -1,   123,
      16,   245,    -1,   123,    17,   245,    -1,   111,   237,   248,
     236,   235,    -1,   248,   249,    -1,   249,    -1,   250,    -1,
     251,    -1,     1,   235,    -1,   110,   238,   141,   235,    -1,
     137,   238,   141,   235,    -1,   164,   237,   253,   236,   235,
      -1,   253,   254,    -1,   254,    -1,   257,    -1,   262,    -1,
     265,    -1,   259,    -1,   260,    -1,   261,    -1,   264,    -1,
     256,    -1,   263,    -1,   258,    -1,   255,    -1,     1,   235,
      -1,   153,   238,   141,   235,    -1,   151,   238,   141,   235,
      -1,   112,   238,   141,   235,    -1,   166,   238,   141,   235,
      -1,    36,   238,   141,   235,    -1,   115,   238,   141,   235,
      -1,   114,   238,   141,   235,    -1,   230,   238,   141,   235,
      -1,   231,   238,   141,   235,    -1,   207,   238,   123,   235,
      -1,    77,   238,   179,   235,    -1,     5,   237,   267,   236,
     235,    -1,   267,   268,    -1,   268,    -1,   269,    -1,   271,
      -1,   270,    -1,     1,   235,    -1,   112,   238,   141,   235,
      -1,    46,   238,   141,   235,    -1,    36,   238,   141,   235,
      -1,    94,   237,   273,   236,   235,    -1,   273,   274,    -1,
     274,    -1,   275,    -1,   276,    -1,   277,    -1,   281,    -1,
     282,    -1,   278,    -1,   280,    -1,   279,    -1,     1,   235,
      -1,   199,   238,   141,   235,    -1,   128,   238,   141,   235,
      -1,    63,   238,   141,   235,    -1,    57,   238,   141,   235,
      -1,    55,   238,   141,   235,    -1,    56,   238,   141,   235,
      -1,    95,   238,   200,   235,    -1,    95,   238,   202,   235,
      -1,    95,   238,   206,   235,    -1,    95,   238,   204,   235,
      -1,    95,   238,   205,   235,    -1,    95,   238,   203,   235,
      -1,    95,   238,   201,   235,    -1,   228,   238,   179,   235,
      -1,    -1,   127,   284,   285,   237,   286,   236,   235,    -1,
      -1,   289,    -1,   286,   287,    -1,   287,    -1,   288,    -1,
     290,    -1,   291,    -1,   293,    -1,   295,    -1,   296,    -1,
     297,    -1,   298,    -1,   299,    -1,   300,    -1,   301,    -1,
     302,    -1,   303,    -1,   304,    -1,   305,    -1,   292,    -1,
     294,    -1,   306,    -1,     1,   235,    -1,   112,   238,   141,
     235,    -1,   141,    -1,   223,   238,   141,   235,    -1,   136,
     238,   141,   235,    -1,    48,   238,   179,   235,    -1,    71,
     238,   179,   235,    -1,   152,   238,   141,   235,    -1,    25,
     238,   141,   235,    -1,    67,   238,   179,   235,    -1,   148,
     238,   179,   235,    -1,    84,   238,   179,   235,    -1,   232,
     238,   179,   235,    -1,   222,   238,   179,   235,    -1,    60,
     238,   179,   235,    -1,   117,   238,   179,   235,    -1,    37,
     238,   179,   235,    -1,   147,   238,   179,   235,    -1,     5,
     238,   179,   235,    -1,    -1,    53,   307,   238,   308,   235,
      -1,   308,   239,   309,    -1,   309,    -1,   122,   310,    -1,
     310,    -1,    67,    -1,   148,    -1,    84,    -1,   222,    -1,
     232,    -1,    60,    -1,    37,    -1,   147,    -1,     5,    -1,
      71,    -1,   117,    -1,   209,    -1,   131,    -1,    72,    -1,
     149,    -1,    48,    -1,    -1,    25,   312,   313,   237,   314,
     236,   235,    -1,    -1,   317,    -1,   314,   315,    -1,   315,
      -1,   316,    -1,   318,    -1,   319,    -1,   320,    -1,   321,
      -1,   322,    -1,   323,    -1,   324,    -1,   325,    -1,     1,
     235,    -1,   112,   238,   141,   235,    -1,   141,    -1,   139,
     238,   244,   235,    -1,   125,   238,   123,   235,    -1,    29,
     238,   244,   235,    -1,   105,   238,   123,   235,    -1,   100,
     238,   123,   235,    -1,   102,   238,   123,   235,    -1,   101,
     238,   123,   235,    -1,   161,   238,   246,   235,    -1,    -1,
      93,   327,   237,   332,   236,   235,    -1,    -1,    53,   329,
     238,   330,   235,    -1,   330,   239,   331,    -1,   331,    -1,
     214,    -1,    70,    -1,   332,   333,    -1,   333,    -1,   334,
      -1,   328,    -1,   337,    -1,   338,    -1,     1,   235,    -1,
     140,   238,   335,   235,    -1,   335,   239,   336,    -1,   336,
      -1,   123,    -1,   123,   184,   123,    -1,    81,   238,   141,
     235,    -1,    76,   238,   141,   235,    -1,    -1,    10,   340,
     237,   341,   236,   235,    -1,   341,   342,    -1,   342,    -1,
     343,    -1,   344,    -1,   346,    -1,   347,    -1,   352,    -1,
     353,    -1,   354,    -1,   356,    -1,   357,    -1,   358,    -1,
     345,    -1,   359,    -1,   360,    -1,   355,    -1,   361,    -1,
       1,   235,    -1,   223,   238,   141,   235,    -1,   136,   238,
     141,   235,    -1,   174,   238,   179,   235,    -1,    25,   238,
     141,   235,    -1,    -1,    53,   348,   238,   349,   235,    -1,
     349,   239,   350,    -1,   350,    -1,   122,   351,    -1,   351,
      -1,   174,    -1,    49,    -1,    85,    -1,    68,    -1,    21,
      -1,    22,    -1,   121,    -1,    62,    -1,   155,    -1,   113,
      -1,    85,   238,   179,   235,    -1,    68,   238,   179,   235,
      -1,    49,   238,   179,   235,    -1,    21,   238,   179,   235,
      -1,   121,   238,   179,   235,    -1,    62,   238,   179,   235,
      -1,   173,   238,   141,   235,    -1,   145,   238,   141,   235,
      -1,   144,   238,   123,   235,    -1,   113,   238,   179,   235,
      -1,    -1,   154,   363,   237,   364,   236,   235,    -1,   364,
     365,    -1,   365,    -1,   366,    -1,   367,    -1,   368,    -1,
       1,   235,    -1,   143,   238,   141,   235,    -1,    23,   238,
     141,   235,    -1,   116,   238,   141,   235,    -1,    -1,   168,
     370,   237,   371,   236,   235,    -1,   371,   372,    -1,   372,
      -1,   373,    -1,   374,    -1,   375,    -1,     1,   235,    -1,
     112,   238,   141,   235,    -1,   223,   238,   141,   235,    -1,
      -1,   170,   376,   238,   377,   235,    -1,   377,   239,   378,
      -1,   378,    -1,    84,    -1,   222,    -1,   232,    -1,   217,
      -1,   154,    -1,   216,    -1,   185,    -1,    -1,   169,   380,
     237,   381,   236,   235,    -1,   381,   382,    -1,   382,    -1,
     383,    -1,   384,    -1,     1,   235,    -1,   112,   238,   141,
     235,    -1,    -1,   170,   385,   238,   386,   235,    -1,   386,
     239,   387,    -1,   387,    -1,    84,    -1,   222,    -1,   232,
      -1,   217,    -1,   154,    -1,   216,    -1,   198,    -1,   185,
      -1,    -1,    28,   389,   390,   237,   391,   236,   235,    -1,
      -1,   394,    -1,   391,   392,    -1,   392,    -1,   393,    -1,
     395,    -1,   396,    -1,   397,    -1,   398,    -1,   399,    -1,
     400,    -1,   401,    -1,   411,    -1,   412,    -1,   413,    -1,
     410,    -1,   407,    -1,   409,    -1,   408,    -1,   406,    -1,
     414,    -1,     1,   235,    -1,   112,   238,   141,   235,    -1,
     141,    -1,    76,   238,   141,   235,    -1,   162,   238,   141,
     235,    -1,     3,   238,   141,   235,    -1,   140,   238,   123,
     235,    -1,     6,   238,   196,   235,    -1,     6,   238,   197,
     235,    -1,    52,   238,   141,   235,    -1,    -1,    53,   402,
     238,   403,   235,    -1,   403,   239,   404,    -1,   404,    -1,
     122,   405,    -1,   405,    -1,    90,    -1,    26,    -1,    30,
      -1,    11,    -1,    13,    -1,   220,    -1,   152,   238,   141,
     235,    -1,    48,   238,   179,   235,    -1,    30,   238,   179,
     235,    -1,    26,   238,   179,   235,    -1,    11,   238,   179,
     235,    -1,    78,   238,   141,   235,    -1,    91,   238,   141,
     235,    -1,    25,   238,   141,   235,    -1,    24,   238,   141,
     235,    -1,    -1,    82,   416,   237,   417,   236,   235,    -1,
     417,   418,    -1,   418,    -1,   419,    -1,   420,    -1,     1,
      -1,   223,   238,   141,   235,    -1,   143,   238,   141,   235,
      -1,    -1,    35,   422,   237,   423,   236,   235,    -1,   423,
     424,    -1,   424,    -1,   425,    -1,   426,    -1,     1,    -1,
      81,   238,   141,   235,    -1,   143,   238,   141,   235,    -1,
      -1,    50,   428,   237,   429,   236,   235,    -1,   429,   430,
      -1,   430,    -1,   431,    -1,     1,    -1,    81,   238,   141,
     235,    -1,    -1,    58,   433,   237,   438,   236,   235,    -1,
      -1,    53,   435,   238,   436,   235,    -1,   436,   239,   437,
      -1,   437,    -1,   146,    -1,   438,   439,    -1,   439,    -1,
     440,    -1,   441,    -1,   434,    -1,     1,    -1,   112,   238,
     141,   235,    -1,   143,   238,   141,   235,    -1,    59,   237,
     443,   236,   235,    -1,   443,   444,    -1,   444,    -1,   451,
      -1,   452,    -1,   454,    -1,   455,    -1,   456,    -1,   457,
      -1,   458,    -1,   459,    -1,   460,    -1,   461,    -1,   450,
      -1,   463,    -1,   464,    -1,   465,    -1,   479,    -1,   466,
      -1,   468,    -1,   470,    -1,   469,    -1,   472,    -1,   467,
      -1,   473,    -1,   474,    -1,   475,    -1,   476,    -1,   478,
      -1,   480,    -1,   477,    -1,   494,    -1,   481,    -1,   485,
      -1,   486,    -1,   490,    -1,   471,    -1,   500,    -1,   498,
      -1,   499,    -1,   482,    -1,   453,    -1,   483,    -1,   484,
      -1,   501,    -1,   489,    -1,   462,    -1,   502,    -1,   487,
      -1,   488,    -1,   447,    -1,   449,    -1,   445,    -1,   446,
      -1,   448,    -1,     1,    -1,    65,   238,   123,   235,    -1,
      66,   238,   123,   235,    -1,    13,   238,   179,   235,    -1,
     229,   238,   179,   235,    -1,   167,   238,   179,   235,    -1,
      83,   238,   123,   235,    -1,    75,   238,   179,   235,    -1,
      80,   238,   179,   235,    -1,    41,   238,   179,   235,    -1,
      51,   238,   179,   235,    -1,     8,   238,   179,   235,    -1,
     104,   238,   244,   235,    -1,   103,   238,   123,   235,    -1,
      97,   238,   123,   235,    -1,     9,   238,   244,   235,    -1,
     183,   238,   244,   235,    -1,   182,   238,   244,   235,    -1,
      69,   238,   123,   235,    -1,    87,   238,   179,   235,    -1,
      86,   238,   141,   235,    -1,   234,   238,   179,   235,    -1,
     177,   238,   179,   235,    -1,   178,   238,   179,   235,    -1,
     176,   238,   179,   235,    -1,   176,   238,   180,   235,    -1,
     175,   238,   179,   235,    -1,   175,   238,   180,   235,    -1,
     134,   238,   244,   235,    -1,    20,   238,   244,   235,    -1,
     135,   238,   244,   235,    -1,   171,   238,   179,   235,    -1,
     120,   238,   179,   235,    -1,   221,   238,   179,   235,    -1,
     130,   238,   179,   235,    -1,   107,   238,   141,   235,    -1,
      79,   238,   244,   235,    -1,    43,   238,   123,   235,    -1,
      96,   238,   123,   235,    -1,   106,   238,   123,   235,    -1,
     165,   238,   141,   235,    -1,    31,   238,   141,   235,    -1,
      27,   238,   123,   235,    -1,   224,   238,   179,   235,    -1,
      45,   238,   141,   235,    -1,   138,   238,   179,   235,    -1,
      38,   238,   179,   235,    -1,   219,   238,   244,   235,    -1,
      -1,   132,   491,   238,   492,   235,    -1,   492,   239,   493,
      -1,   493,    -1,   186,    -1,   189,    -1,   191,    -1,   194,
      -1,   212,    -1,   208,    -1,   210,    -1,   215,    -1,   213,
      -1,   193,    -1,   209,    -1,   211,    -1,   195,    -1,   218,
      -1,   187,    -1,   188,    -1,   198,    -1,    -1,   129,   495,
     238,   496,   235,    -1,   496,   239,   497,    -1,   497,    -1,
     186,    -1,   189,    -1,   191,    -1,   194,    -1,   212,    -1,
     208,    -1,   210,    -1,   215,    -1,   213,    -1,   193,    -1,
     209,    -1,   211,    -1,   195,    -1,   218,    -1,   187,    -1,
     188,    -1,   198,    -1,   108,   238,   123,   235,    -1,   109,
     238,   123,   235,    -1,    32,   238,   123,   235,    -1,   190,
     238,   246,   235,    -1,    42,   238,   179,   235,    -1,    -1,
      61,   504,   237,   505,   236,   235,    -1,   505,   506,    -1,
     506,    -1,   507,    -1,   508,    -1,   509,    -1,   513,    -1,
     514,    -1,   515,    -1,     1,    -1,    47,   238,   179,   235,
      -1,    44,   238,   244,   235,    -1,    -1,    94,   510,   238,
     511,   235,    -1,   511,   239,   512,    -1,   512,    -1,   181,
      -1,    12,    -1,   223,   238,   141,   235,    -1,   112,   238,
     141,   235,    -1,    -1,     4,   516,   238,   517,   235,    -1,
     517,   239,   518,    -1,   518,    -1,   181,    -1,    12,    -1,
      23,   237,   520,   236,   235,    -1,   520,   521,    -1,   521,
      -1,   522,    -1,   523,    -1,   524,    -1,   525,    -1,   531,
      -1,   526,    -1,   527,    -1,   528,    -1,   529,    -1,   530,
      -1,   532,    -1,   533,    -1,   534,    -1,   535,    -1,   536,
      -1,     1,    -1,    40,   238,   179,   235,    -1,   225,   238,
     179,   235,    -1,   226,   238,   179,   235,    -1,   227,   238,
     179,   235,    -1,    88,   238,   244,   235,    -1,    89,   238,
     244,   235,    -1,   133,   238,   179,   235,    -1,    99,   238,
     123,   235,    -1,   142,   238,   179,   235,    -1,    98,   238,
     123,   235,    -1,    34,   238,   123,   235,    -1,    33,   238,
     123,   235,    -1,   118,   238,   179,   235,    -1,   119,   238,
     179,   235,    -1,    14,   238,   179,   235,    -1,   163,   237,
     538,   236,   235,    -1,   538,   539,    -1,   539,    -1,   540,
      -1,   541,    -1,   542,    -1,   544,    -1,   543,    -1,   545,
      -1,     1,    -1,    54,   238,   179,   235,    -1,    74,   238,
     179,   235,    -1,    92,   238,   244,   235,    -1,    70,   238,
     179,   235,    -1,    39,   238,   179,   235,    -1,    73,   238,
     179,   235,    -1
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
     772,   774,   783,   792,   804,   806,   807,   809,   809,   810,
     810,   811,   811,   812,   812,   813,   815,   819,   823,   827,
     834,   841,   848,   852,   856,   860,   864,   868,   872,   878,
     888,   887,   980,   980,   981,   981,   982,   982,   982,   982,
     983,   983,   983,   984,   984,   984,   985,   985,   986,   986,
     986,   987,   987,   988,   988,   990,  1002,  1014,  1037,  1049,
    1060,  1071,  1113,  1122,  1133,  1144,  1155,  1166,  1177,  1188,
    1199,  1210,  1221,  1233,  1232,  1236,  1236,  1237,  1238,  1240,
    1247,  1254,  1261,  1268,  1275,  1282,  1289,  1296,  1303,  1310,
    1317,  1324,  1331,  1338,  1345,  1359,  1358,  1378,  1378,  1380,
    1380,  1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,  1389,
    1390,  1392,  1438,  1484,  1490,  1496,  1502,  1508,  1514,  1520,
    1526,  1536,  1535,  1552,  1551,  1555,  1555,  1556,  1560,  1566,
    1566,  1567,  1567,  1567,  1567,  1567,  1569,  1571,  1571,  1573,
    1588,  1610,  1619,  1632,  1631,  1705,  1705,  1706,  1706,  1706,
    1706,  1707,  1707,  1708,  1708,  1708,  1709,  1709,  1710,  1710,
    1710,  1711,  1711,  1713,  1742,  1755,  1766,  1776,  1775,  1779,
    1779,  1780,  1781,  1783,  1791,  1798,  1805,  1812,  1819,  1826,
    1833,  1840,  1847,  1856,  1867,  1878,  1889,  1900,  1911,  1923,
    1942,  1952,  1961,  1977,  1976,  1989,  1989,  1990,  1990,  1990,
    1990,  1992,  2001,  2016,  2035,  2034,  2050,  2050,  2051,  2051,
    2051,  2051,  2053,  2062,  2078,  2077,  2083,  2083,  2084,  2088,
    2092,  2096,  2100,  2104,  2108,  2118,  2117,  2139,  2139,  2140,
    2140,  2140,  2142,  2149,  2148,  2154,  2154,  2155,  2159,  2163,
    2167,  2171,  2175,  2179,  2183,  2193,  2192,  2342,  2342,  2343,
    2343,  2344,  2344,  2344,  2345,  2345,  2345,  2346,  2346,  2346,
    2347,  2347,  2347,  2348,  2348,  2348,  2349,  2349,  2350,  2352,
    2364,  2376,  2385,  2397,  2409,  2415,  2419,  2427,  2437,  2436,
    2440,  2440,  2441,  2442,  2444,  2451,  2462,  2469,  2476,  2483,
    2493,  2534,  2545,  2556,  2571,  2582,  2595,  2608,  2617,  2653,
    2652,  2675,  2675,  2676,  2676,  2676,  2678,  2687,  2700,  2699,
    2721,  2721,  2722,  2722,  2722,  2724,  2733,  2746,  2745,  2766,
    2766,  2767,  2767,  2769,  2782,  2781,  2832,  2831,  2835,  2835,
    2836,  2842,  2842,  2843,  2843,  2843,  2843,  2845,  2854,  2866,
    2869,  2869,  2870,  2870,  2871,  2871,  2872,  2872,  2873,  2873,
    2874,  2874,  2875,  2875,  2876,  2877,  2877,  2878,  2878,  2879,
    2879,  2880,  2880,  2881,  2881,  2882,  2882,  2883,  2883,  2884,
    2885,  2885,  2886,  2886,  2887,  2888,  2888,  2889,  2889,  2890,
    2890,  2891,  2892,  2892,  2893,  2893,  2894,  2894,  2895,  2895,
    2896,  2896,  2897,  2897,  2898,  2902,  2908,  2914,  2920,  2925,
    2930,  2936,  2942,  2948,  2954,  2960,  2966,  2972,  2978,  2984,
    2990,  2996,  3002,  3013,  3019,  3028,  3034,  3040,  3046,  3050,
    3056,  3060,  3066,  3072,  3078,  3084,  3090,  3096,  3102,  3108,
    3119,  3125,  3131,  3137,  3143,  3152,  3184,  3202,  3208,  3217,
    3223,  3228,  3235,  3234,  3240,  3240,  3241,  3245,  3249,  3253,
    3257,  3261,  3265,  3269,  3273,  3277,  3281,  3285,  3289,  3293,
    3297,  3301,  3305,  3312,  3311,  3317,  3317,  3318,  3322,  3326,
    3330,  3334,  3338,  3342,  3346,  3350,  3354,  3358,  3362,  3366,
    3370,  3374,  3378,  3382,  3388,  3394,  3400,  3406,  3412,  3422,
    3421,  3447,  3447,  3448,  3449,  3450,  3451,  3452,  3453,  3454,
    3456,  3462,  3469,  3468,  3473,  3473,  3474,  3478,  3484,  3507,
    3517,  3516,  3559,  3559,  3560,  3564,  3573,  3576,  3576,  3577,
    3578,  3579,  3580,  3581,  3582,  3583,  3584,  3585,  3586,  3587,
    3588,  3589,  3590,  3591,  3592,  3594,  3600,  3606,  3612,  3618,
    3624,  3630,  3636,  3642,  3648,  3654,  3660,  3666,  3672,  3678,
    3687,  3690,  3690,  3691,  3691,  3692,  3693,  3694,  3695,  3696,
    3698,  3704,  3710,  3724,  3730,  3736
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
  "T_CLIENT_FLOOD", "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL",
  "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT",
  "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE",
  "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ",
  "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_SSL", "T_UNAUTH", "T_UNRESV",
  "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", "TOPICBURST",
  "TRUE_NO_OPER_FLOOD", "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT",
  "USE_INVEX", "USE_KNOCK", "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST",
  "VHOST6", "XLINE", "WARN", "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='",
  "','", "$accept", "conf", "conf_item", "timespec_", "timespec",
  "sizespec_", "sizespec", "modules_entry", "modules_items",
  "modules_item", "modules_module", "modules_path", "serverinfo_entry",
  "serverinfo_items", "serverinfo_item", "serverinfo_ssl_certificate_file",
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
  "oper_class", "oper_global_kill", "oper_remote", "oper_kline",
  "oper_xline", "oper_unkline", "oper_gline", "oper_nick_changes",
  "oper_die", "oper_rehash", "oper_admin", "oper_flags", "@2",
  "oper_flags_items", "oper_flags_item", "oper_flags_item_atom",
  "class_entry", "@3", "class_name_b", "class_items", "class_item",
  "class_name", "class_name_t", "class_ping_time", "class_number_per_ip",
  "class_connectfreq", "class_max_number", "class_max_global",
  "class_max_local", "class_max_ident", "class_sendq", "listen_entry",
  "@4", "listen_flags", "@5", "listen_flags_items", "listen_flags_item",
  "listen_items", "listen_item", "listen_port", "port_items", "port_item",
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
     485,   486,   487,   488,   489,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   240,   241,   241,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   243,   243,   244,   244,
     244,   244,   244,   244,   245,   245,   246,   246,   246,   246,
     247,   248,   248,   249,   249,   249,   250,   251,   252,   253,
     253,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   267,   268,   268,   268,
     268,   269,   270,   271,   272,   273,   273,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   275,   276,   277,   278,
     279,   280,   281,   281,   281,   281,   281,   281,   281,   282,
     284,   283,   285,   285,   286,   286,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   307,   306,   308,   308,   309,   309,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   312,   311,   313,   313,   314,
     314,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   327,   326,   329,   328,   330,   330,   331,   331,   332,
     332,   333,   333,   333,   333,   333,   334,   335,   335,   336,
     336,   337,   338,   340,   339,   341,   341,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   343,   344,   345,   346,   348,   347,   349,
     349,   350,   350,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   363,   362,   364,   364,   365,   365,   365,
     365,   366,   367,   368,   370,   369,   371,   371,   372,   372,
     372,   372,   373,   374,   376,   375,   377,   377,   378,   378,
     378,   378,   378,   378,   378,   380,   379,   381,   381,   382,
     382,   382,   383,   385,   384,   386,   386,   387,   387,   387,
     387,   387,   387,   387,   387,   389,   388,   390,   390,   391,
     391,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   393,
     394,   395,   396,   397,   398,   399,   399,   400,   402,   401,
     403,   403,   404,   404,   405,   405,   405,   405,   405,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   416,
     415,   417,   417,   418,   418,   418,   419,   420,   422,   421,
     423,   423,   424,   424,   424,   425,   426,   428,   427,   429,
     429,   430,   430,   431,   433,   432,   435,   434,   436,   436,
     437,   438,   438,   439,   439,   439,   439,   440,   441,   442,
     443,   443,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   468,
     469,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   491,   490,   492,   492,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   495,   494,   496,   496,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   498,   499,   500,   501,   502,   504,
     503,   505,   505,   506,   506,   506,   506,   506,   506,   506,
     507,   508,   510,   509,   511,   511,   512,   512,   513,   514,
     516,   515,   517,   517,   518,   518,   519,   520,   520,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   538,   539,   539,   539,   539,   539,   539,   539,
     540,   541,   542,   543,   544,   545
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
       1,     1,     1,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     0,     5,     3,     1,     1,     1,     4,     4,
       0,     5,     3,     1,     1,     1,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       2,     0,     1,     0,     0,   223,     0,   175,   325,   388,
     397,   404,     0,   569,   379,   201,     0,     0,   110,   273,
       0,     0,   284,   305,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     177,   327,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   614,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   598,   599,   600,   601,   602,   604,
     605,   606,   607,   608,   603,   609,   610,   611,   612,   613,
     192,     0,   178,   350,     0,   328,     0,     0,     0,   474,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   543,     0,   522,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   421,   471,   472,   469,   473,   470,   432,
     422,   423,   460,   424,   425,   426,   427,   428,   429,   430,
     431,   465,   433,   434,   435,   437,   442,   438,   440,   439,
     455,   441,   443,   444,   445,   446,   449,   447,   436,   448,
     451,   459,   461,   462,   452,   453,   467,   468,   464,   454,
     450,   457,   458,   456,   463,   466,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    92,    94,    93,    90,    91,     0,     0,
       0,     0,    42,    43,    44,   136,     0,   113,     0,   639,
       0,     0,     0,     0,     0,     0,     0,   632,   633,   634,
     635,   637,   636,   638,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    61,    58,
      51,    60,    54,    55,    56,    52,    59,    57,    53,     0,
       0,    80,     0,     0,     0,     0,    75,     0,     0,     0,
       0,   247,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   226,   227,   228,   237,   229,   230,
     231,   232,   233,   240,   234,   235,   236,   238,   239,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   597,     0,     0,   394,
       0,     0,     0,   391,   392,   393,   402,     0,     0,   400,
     401,   416,   406,     0,     0,   415,     0,   412,   413,   414,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   420,   579,   590,     0,     0,   582,     0,
       0,     0,   572,   573,   574,   575,   576,   577,   578,   385,
       0,     0,     0,   382,   383,   384,     0,   203,     0,     0,
       0,   212,     0,   210,   211,   213,   214,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    45,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,   276,
     277,   278,   279,     0,     0,     0,     0,     0,     0,     0,
     631,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,   294,     0,     0,
     287,   288,   289,   290,     0,     0,   313,     0,   308,   309,
     310,     0,     0,     0,    74,   242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   596,
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
       0,     0,     0,   571,     0,     0,     0,   381,   215,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,    40,     0,     0,     0,     0,     0,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   131,   119,   132,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   133,   280,     0,     0,     0,     0,   275,     0,     0,
       0,     0,     0,     0,   630,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,   291,     0,     0,
       0,     0,   286,   311,     0,     0,     0,   307,    83,    82,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   629,   626,   625,
     615,    26,    26,    26,    26,    26,    28,    27,   619,   620,
     624,   622,   627,   628,   621,   623,   616,   617,   618,   190,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,   348,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,   389,     0,   398,     0,     0,     0,   405,
     485,   489,   477,   503,   516,   515,   566,   520,   483,   568,
     511,   518,   484,   475,   476,   492,   481,   510,   482,   480,
     494,   493,   512,   488,   487,   486,   513,   509,   564,   565,
     506,   547,   561,   562,   548,   549,   556,   550,   559,   563,
     552,   557,   553,   558,   551,   555,   554,   560,     0,   546,
     508,   526,   540,   541,   527,   528,   535,   529,   538,   542,
     531,   536,   532,   537,   530,   534,   533,   539,     0,   525,
     502,   504,   519,   514,   479,   505,   500,   501,   498,   499,
     496,   497,   491,   490,    34,    34,    34,    36,    35,   567,
     521,   507,   517,   478,   495,     0,     0,     0,     0,     0,
       0,   570,     0,     0,   380,     0,     0,     0,   219,     0,
     218,   202,   100,   101,    99,    98,   102,   108,   103,   107,
     105,   106,   104,    97,    96,   109,    46,    47,   134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,     0,
       0,     0,   274,   644,   640,   643,   645,   641,   642,    67,
      73,    65,    69,    68,    64,    63,    66,    72,    70,    71,
       0,     0,     0,   285,     0,     0,   306,   266,   246,   265,
     257,   258,   254,   260,   256,   255,   262,   259,     0,   261,
     253,     0,   250,   252,   268,   264,   263,   272,   267,   244,
     271,   270,   269,   245,   243,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   326,   395,
     396,   403,   410,     0,   409,   417,   418,   544,     0,   523,
       0,    37,    38,    39,   595,   594,     0,   593,   581,   580,
     587,   586,     0,   585,   589,   588,   387,   386,   208,   207,
       0,   206,   222,   221,     0,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   282,   283,   281,   292,
     298,   302,   304,   303,   301,   299,   300,     0,   297,   293,
     312,   317,   321,   324,   323,   322,   320,   318,   319,     0,
     316,   251,   248,     0,   195,   197,   199,   198,   196,   191,
     194,   193,   200,   353,   355,   356,   374,   378,   377,   373,
     372,   371,   357,   367,   368,   365,   366,   364,     0,   369,
       0,   361,   363,   351,   375,   376,   349,   354,   370,   352,
     407,     0,   545,   524,   591,     0,   583,     0,   204,     0,
     220,   217,   152,   142,   150,   139,   167,   165,   174,   164,
     159,   168,   172,   161,   169,     0,   171,   166,   160,   173,
     170,   162,   163,     0,   156,   158,   148,   143,   140,   145,
     135,   149,   138,   151,   144,   141,   147,   137,   146,   295,
       0,   314,     0,   249,   362,   359,     0,   408,   592,   584,
     205,   157,   154,     0,   296,   315,   360,   155
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   836,   837,   977,   978,    25,   251,   252,
     253,   254,    26,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,    27,    71,    72,    73,
      74,    75,    28,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,    29,    61,   256,   752,   753,   754,   257,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,  1023,  1283,  1284,
    1285,    30,    50,   111,   580,   581,   582,   112,   583,   584,
     585,   586,   587,   588,   589,   590,    31,    58,   461,   709,
    1160,  1161,   462,   463,   464,   999,  1000,   465,   466,    32,
      48,   323,   324,   325,   326,   327,   328,   329,   539,  1081,
    1082,  1083,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,    33,    62,   488,   489,   490,   491,   492,    34,
      65,   519,   520,   521,   522,   523,   799,  1197,  1198,    35,
      66,   527,   528,   529,   530,   805,  1209,  1210,    36,    51,
     114,   609,   610,   611,   115,   612,   613,   614,   615,   616,
     617,   618,   871,  1240,  1241,  1242,   619,   620,   621,   622,
     623,   624,   625,   626,   627,    37,    57,   452,   453,   454,
     455,    38,    52,   362,   363,   364,   365,    39,    53,   368,
     369,   370,    40,    54,   375,   635,  1133,  1134,   376,   377,
     378,   379,    41,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   413,   958,   959,   220,   411,   938,   939,   221,   222,
     223,   224,   225,    42,    56,   441,   442,   443,   444,   445,
     699,  1152,  1153,   446,   447,   448,   696,  1146,  1147,    43,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    44,   266,   267,
     268,   269,   270,   271,   272,   273
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -875
static const short int yypact[] =
{
    -875,   749,  -875,  -203,  -234,  -875,  -221,  -875,  -875,  -875,
    -875,  -875,  -212,  -875,  -875,  -875,  -202,  -194,  -875,  -875,
    -182,  -171,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,   299,  -155,   602,
     -50,   -48,  -143,  -127,  -110,   450,   -97,   -73,   -58,   295,
     212,   -32,   -44,   363,   279,   -43,   -42,  -222,  -117,   -38,
     -30,    13,  -875,  -875,  -875,  -875,   660,  -875,   -22,   -16,
     -15,    -9,    21,    36,    50,    51,    53,    55,    66,    68,
      69,    71,    72,   148,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,   -28,  -875,  -875,    74,  -875,    27,     6,   218,  -875,
      75,    76,    85,    89,   100,   101,   102,   106,   109,   110,
     127,   128,   129,   133,   134,   138,   141,   142,   143,   144,
     151,   154,   157,   159,   161,   165,   167,   176,   178,   180,
     183,  -875,   184,  -875,   188,   190,   193,   201,   204,   206,
     208,   214,   219,   224,   227,   230,   240,   241,   242,   245,
     246,   247,     9,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,   315,    29,   362,    22,
     249,   251,   252,   259,   260,   262,   266,   267,   213,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,    70,   270,
     273,    67,  -875,  -875,  -875,  -875,   123,  -875,   297,  -875,
     274,   276,   280,   282,   283,   284,   263,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,   175,   286,   288,   290,   293,   294,
     302,   303,   304,   305,   306,   307,   217,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,   103,
      33,  -875,   309,   376,   394,   313,  -875,   314,   322,   323,
     325,  -875,   326,   327,   329,   330,   333,   334,   336,   337,
     338,   340,   343,   233,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
     207,   428,   429,   408,   460,   460,   467,   468,   413,   414,
     416,   418,   419,   420,   423,   377,  -875,   754,   787,  -875,
     373,   380,    47,  -875,  -875,  -875,  -875,   384,     4,  -875,
    -875,  -875,  -875,   385,   386,  -875,    20,  -875,  -875,  -875,
     451,   460,   452,   460,   506,   493,   514,   462,   464,   465,
     516,   504,   469,   524,   530,   532,   477,   460,   478,   535,
     518,   483,   541,   542,   543,   460,   544,   527,   547,   549,
     494,   442,   509,   445,   460,   460,   510,   551,   515,   517,
    -134,  -116,   519,   523,   460,   460,   570,   460,   525,   526,
     528,   531,   471,  -875,  -875,  -875,   457,   459,  -875,   470,
     473,   231,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
     474,   476,     8,  -875,  -875,  -875,   480,  -875,   479,   481,
     485,  -875,    61,  -875,  -875,  -875,  -875,  -875,   562,   575,
     577,   585,   404,   586,   588,   552,   495,  -875,  -875,   592,
     595,   505,  -875,   502,   507,   499,   501,   503,     3,  -875,
    -875,  -875,  -875,   564,   568,   569,   573,   574,   460,   521,
    -875,  -875,   616,   579,   619,   624,   625,   626,   627,   628,
     647,   630,   634,   545,  -875,   550,   538,  -875,   540,    56,
    -875,  -875,  -875,  -875,   554,   548,  -875,    41,  -875,  -875,
    -875,   556,   557,   559,  -875,  -875,   600,   641,   608,   563,
     618,   621,   623,   635,   636,   654,   680,   665,   668,   637,
     677,   584,  -875,   587,   590,   591,   597,     0,   601,   603,
     606,   611,   613,   614,   617,   622,   629,   632,   633,  -875,
     638,   582,   583,   612,   620,   639,   642,   643,   644,   646,
     160,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,   640,   648,   649,   650,   651,   652,   656,   657,   658,
     662,  -875,   663,   664,   666,   667,   669,   671,   673,   172,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,   682,   689,
     679,  -875,   710,   684,  -875,   683,   712,   720,   685,  -875,
     687,   688,   690,   691,   693,   694,   695,   696,   697,   699,
     700,   702,   703,   705,   706,   707,   708,   711,   713,   719,
     721,   725,   728,   729,   730,   731,   732,   733,   735,   736,
     745,   764,   746,   797,   752,   758,   759,   761,   763,   765,
     766,   767,   769,   776,   778,   779,   781,   782,    82,   783,
     784,   785,   786,   788,   789,  -875,   686,   460,   692,   709,
     751,   757,   790,  -875,   858,   885,   792,  -875,  -875,   791,
     887,   889,   739,   796,  -875,   798,   799,   800,   801,   802,
     803,   804,   805,   806,   807,   808,   809,   810,   811,  -875,
     812,   813,  -875,   814,   794,   815,   816,   817,  -875,   818,
     819,   820,   821,   822,   824,   825,   826,   827,   828,   829,
     830,   831,    19,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,   909,   910,   911,   835,  -875,   836,   837,
     838,   839,   840,   841,  -875,   842,   843,   844,   845,   846,
     847,   849,   850,   851,   852,   853,  -875,  -875,   920,   854,
     942,   855,  -875,  -875,   948,   856,   860,  -875,  -875,  -875,
    -875,   861,   862,   863,   823,   864,   865,   866,   867,   868,
     869,   870,   871,   872,   873,   874,  -875,  -875,  -875,  -875,
    -875,   460,   460,   460,   460,   460,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
     460,   968,   970,   987,   988,   971,   990,   460,   570,   879,
    -875,  -875,   974,  -120,   727,   975,   976,   939,   940,   941,
     980,   884,   982,   983,   984,   985,  1004,   989,   991,   893,
    -875,   894,   896,  -875,   898,  -875,   992,   899,   900,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -227,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -224,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,   570,   570,   570,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,    26,   901,   902,    46,   904,
     905,  -875,   906,   907,  -875,   -64,   908,   912,   960,  -216,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,   966,
    1005,   969,   972,   914,   977,   978,   979,   981,  1008,   986,
    1009,   993,   994,  1012,   995,  1013,   996,   924,  -875,   926,
     927,   928,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
     929,   244,   931,  -875,   932,   203,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,   848,  -875,
    -875,  -208,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
     933,   934,   935,   936,   943,   944,   945,   946,   947,  -875,
     949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
     374,   959,   961,   962,   963,   964,   965,   967,  -875,  -875,
    -875,  -875,  -875,  -170,  -875,  -875,  -875,  -875,   764,  -875,
     797,  -875,  -875,  -875,  -875,  -875,  -128,  -875,  -875,  -875,
    -875,  -875,  -115,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -113,  -875,  -875,  -875,  1032,  -875,   739,   973,   997,   998,
     999,   529,  1000,  1001,  1002,  1003,  1006,  1007,  1010,  1011,
    1014,  1015,  1016,  1017,  1018,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -105,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,   -70,
    -875,  -875,  -875,   823,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,   122,  -875,
     -29,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,   992,  -875,  -875,  -875,    26,  -875,    46,  -875,   -64,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,   615,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,   -18,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
     244,  -875,   203,  -875,  -875,  -875,   374,  -875,  -875,  -875,
    -875,  -875,  -875,   529,  -875,  -875,  -875,  -875
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -875,  -875,  -875,  -360,  -344,  -874,  -424,  -875,  -875,   738,
    -875,  -875,  -875,  -875,   890,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  1106,  -875,
    -875,  -875,  -875,  -875,  1019,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,   431,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -439,
     -80,  -875,  -875,  -875,  -875,   631,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,   -56,  -875,   742,  -875,  -875,    35,  -875,  -875,  -875,
    -875,  -875,   882,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
      -7,   131,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,   722,  -875,  -875,  -875,  -875,
    -875,  -875,   698,  -875,  -875,  -875,  -875,  -875,   -93,  -875,
    -875,  -875,   701,  -875,  -875,  -875,  -875,   -90,  -875,  -875,
    -875,  -875,   604,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,   -92,   -23,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,   768,  -875,
    -875,  -875,  -875,  -875,   857,  -875,  -875,  -875,  -875,  -875,
     859,  -875,  -875,  -875,  -875,  -875,  -875,   -35,  -875,   878,
    -875,  -875,  -875,  -875,  1046,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,    81,  -875,  -875,  -875,    84,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,   832,  -875,  -875,  -875,
    -875,  -875,   -34,  -875,  -875,  -875,  -875,  -875,   -31,  -875,
    -875,  1132,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  1020,
    -875,  -875,  -875,  -875,  -875,  -875
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     558,   559,   689,    47,   484,   366,  1158,   366,  1137,   449,
     119,  1139,  1138,   301,    67,  1140,    49,   120,   121,  1165,
     733,   371,   122,  1166,   734,    55,   485,  1212,   359,   123,
     449,  1213,    45,    46,   524,    59,   124,   641,  1144,   643,
     125,   126,   524,    60,   735,   680,   681,   127,   359,    68,
     128,   129,   130,   657,   131,    63,   736,   515,  1150,    69,
     132,   665,   456,   682,   683,  1250,    64,   737,   248,  1251,
     674,   675,   738,   372,   133,   134,  1111,  1112,   135,   739,
     686,   687,    76,   690,   136,   367,   740,   367,   137,   138,
     741,   110,   139,   113,   116,   140,   141,   974,   975,   976,
    1141,  1142,  1143,   742,   515,   142,   143,  1254,   360,   255,
     117,  1255,   144,   145,   457,   146,   147,   148,   149,   486,
    1256,   302,  1258,   557,  1257,    70,  1259,   118,   360,   150,
    1299,   743,   373,  1233,  1300,  1234,   744,   458,   151,   152,
     226,   153,   459,   154,   155,   525,   487,   156,  1235,    77,
    1159,   450,  1236,   525,   783,   745,   831,   832,   833,   834,
     835,   570,    78,   374,   227,  1301,   746,   747,   516,  1302,
     361,   748,   450,   591,   157,   592,   158,   249,   593,   228,
     159,    79,    80,   594,   160,   161,   162,   163,    81,   571,
     361,   164,   165,   258,   299,   300,   595,   596,   597,   166,
     303,   460,   598,   526,   250,   688,  1305,  1145,   304,   357,
    1306,   526,  1237,   248,   229,   516,   340,  1312,   274,   371,
     599,  1313,   341,   342,   600,   601,   517,  1151,   167,   343,
     168,   451,   434,   169,   307,   435,    82,    83,   170,   776,
     633,   749,   750,   171,   706,   432,    84,    85,   602,   305,
     603,   751,   451,   275,   308,  1037,   638,   467,   309,   344,
     572,   573,   574,   604,   259,   575,    86,    87,   230,   231,
     232,   372,   576,   517,   345,   436,   233,   806,   437,   518,
     274,    88,   310,   630,   605,   577,   311,  1201,   346,   347,
      89,   348,   801,   349,   276,   312,   229,   713,   484,   578,
      67,   313,   260,   481,   350,   478,   351,   352,   234,   353,
     354,   358,   606,   380,   381,   275,   434,   261,   314,   435,
     485,   579,   249,   382,   607,   438,   518,   383,  1190,   277,
     373,   278,   279,   262,   608,    68,   263,   264,   384,   385,
     386,   235,  1239,   439,   387,    69,   315,   388,   389,   250,
     230,   231,   232,   986,   316,   265,   276,  1202,   233,   436,
     483,   374,   437,   456,   259,   390,   391,   392,   280,   317,
     281,   393,   394,    90,    91,    92,   395,   318,   319,   396,
     397,   398,   399,   282,   355,  1233,   553,  1234,  1203,   400,
     234,   277,   401,   278,   279,   402,   859,   403,  1191,   404,
    1235,  1204,   260,   405,  1236,   406,   320,   321,   879,   438,
     501,    70,   236,   486,   407,   457,   408,   261,   409,  1205,
    1206,   410,   412,   235,   283,  1207,   414,   439,   415,  1192,
     280,   416,   281,   262,  1108,  1208,   263,   264,   458,   417,
     487,   237,   418,   459,   419,   282,   420,   284,   285,   476,
     531,   119,   421,   513,   440,   265,   322,   422,   120,   121,
    1193,  1194,   423,   122,  1237,   424,  1195,   702,   425,   551,
     123,  1095,  1096,  1097,  1098,  1099,  1196,   124,   426,   427,
     428,   125,   126,   429,   430,   431,   283,   468,   127,   469,
     470,   128,   129,   130,   236,   131,  1238,   471,   472,   499,
     473,   132,   460,   733,   474,   475,  1100,   734,   479,   284,
     285,   480,   493,  1107,   494,   133,   134,   532,   495,   135,
     496,   497,   498,   237,   502,   136,   503,   735,   504,   137,
     138,   505,   506,   139,  1266,   533,   140,   141,   440,   736,
     507,   508,   509,   510,   511,   512,   142,   143,   534,   535,
     737,   554,   555,   144,   145,   738,   146,   147,   148,   149,
     536,   537,   739,   538,   540,   541,  1267,   542,   543,   740,
     150,   544,   545,   741,   546,   547,   548,  1268,   549,   151,
     152,   550,   153,   557,   154,   155,   742,   556,   156,  1269,
     560,   561,   562,   563,  1239,   564,  1270,   565,   566,   567,
    1271,  1272,   568,    77,   719,   720,   721,   722,   723,   724,
     725,   628,   569,  1273,   743,   157,    78,   158,   629,   744,
    1266,   159,   632,   636,   637,   160,   161,   162,   163,   644,
     640,   642,   164,   165,   645,    79,    80,   646,   745,   650,
     166,   647,    81,   648,   649,   651,  1274,   653,   652,   746,
     747,  1275,  1267,   654,   748,   655,   656,   658,   659,   660,
    1276,   307,   661,  1268,   662,   663,   664,   666,   667,   167,
     668,   168,   669,   670,   169,  1269,  1277,  1278,  1279,   170,
     671,   308,  1270,   673,   171,   309,  1271,  1272,   672,   676,
      82,    83,   677,   688,   678,   697,   679,   698,   684,  1273,
      84,    85,   685,   715,   691,   692,   695,   693,   700,   310,
     694,   701,   704,   311,   705,   708,   716,   710,   717,   711,
      86,    87,   312,   712,   749,   750,   718,   726,   313,   727,
     729,   728,  1274,   730,   751,    88,   731,   773,  1280,   774,
     732,   775,   772,   778,    89,   314,  1276,   779,   780,     2,
       3,  1281,   781,   782,     4,   570,   784,   785,   786,     5,
     787,  1282,  1277,  1278,  1279,   788,   789,   790,   791,   792,
     793,   794,     6,   315,     7,   795,   798,     8,   800,   811,
     796,   316,   812,   571,     9,   797,   804,   813,   591,   803,
     592,   808,   809,   593,   810,   820,   317,   815,   594,    10,
     816,   814,   817,   821,   318,   319,   822,    11,    12,   823,
      13,   595,   596,   597,   818,   819,   824,   598,   825,   826,
     850,   851,   827,   881,  1280,   828,   829,    90,    91,    92,
     882,    14,   830,   320,   321,   599,   838,  1281,   839,   600,
     601,   840,    15,    16,  1070,  1071,   841,  1282,   842,   843,
     852,   884,   844,   887,   572,   573,   574,   845,   853,   575,
      17,   888,   998,   602,   846,   603,   576,   847,   848,  1070,
    1071,   987,  1072,   849,  1317,   861,    18,   854,   604,   577,
     855,   856,   857,   322,   858,  1073,   862,   863,   864,   865,
     866,  1074,   989,   578,   867,   868,   869,  1072,   990,   605,
     870,   872,   873,    19,   874,   875,  1113,   876,  1075,   877,
    1073,   878,    20,    21,   883,   579,  1074,    22,    23,   885,
     889,   886,   890,   891,   985,   892,   893,   606,   894,   895,
     896,   897,   898,  1075,   899,   900,  1076,   901,   902,   607,
     903,   904,   905,   906,  1077,  1078,   907,   988,   908,   608,
     921,   922,   923,   924,   909,   925,   910,   926,   927,   928,
     911,  1076,   929,   912,   913,   914,   915,   916,   917,  1077,
     918,   919,   930,   931,   932,   933,   934,   935,  1079,   936,
     920,   940,   937,   941,   942,   943,   944,   960,   945,   482,
     946,   947,   948,   961,   962,   949,   963,  1080,   964,   992,
     965,   966,   967,  1079,   968,   950,   951,   952,   953,   954,
     955,   969,   956,   970,   971,   957,   972,   973,   979,   980,
     981,   982,  1080,   983,   984,   991,   993,   994,   996,   995,
     997,  1001,  1019,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1039,  1040,  1041,  1020,  1021,  1022,  1024,  1025,  1026,  1027,
    1028,  1060,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1053,  1054,  1062,  1055,  1056,  1057,  1058,  1059,  1064,
    1063,  1101,  1061,  1102,  1065,  1066,  1067,  1068,  1069,  1084,
    1085,  1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,  1094,
    1103,  1104,  1105,  1106,  1109,  1110,  1114,  1115,  1116,  1117,
    1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1128,  1129,
    1126,  1130,  1127,  1131,  1135,  1136,  1148,  1149,  1132,  1154,
    1155,  1156,  1157,  1162,  1164,  1167,  1168,  1163,  1169,  1176,
    1178,  1170,  1171,  1181,  1183,  1260,  1172,  1173,  1174,  1185,
    1175,  1186,  1187,  1188,  1189,  1177,  1199,  1200,  1214,  1215,
    1216,  1217,  1179,  1180,  1182,  1184,   514,   306,  1218,  1219,
    1220,  1221,  1222,  1038,  1223,  1224,  1225,  1226,  1227,  1228,
    1229,  1230,  1231,  1232,  1243,  1311,  1244,  1245,  1246,  1247,
    1248,  1261,  1249,  1310,   714,   552,  1303,  1314,  1262,  1211,
     777,   860,  1315,   880,  1316,  1304,  1307,   802,   433,   631,
     707,  1253,  1252,  1309,  1308,   356,     0,   634,   807,     0,
       0,     0,  1263,  1264,  1265,  1286,  1287,  1288,  1289,     0,
       0,  1290,  1291,     0,     0,  1292,  1293,     0,     0,  1294,
    1295,  1296,  1297,  1298,   639,     0,     0,   477,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   703,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   500
};

static const short int yycheck[] =
{
     344,   345,   426,   237,     1,     1,    70,     1,   235,     1,
       1,   235,   239,   235,     1,   239,   237,     8,     9,   235,
       1,     1,    13,   239,     5,   237,    23,   235,     1,    20,
       1,   239,   235,   236,     1,   237,    27,   381,    12,   383,
      31,    32,     1,   237,    25,   179,   180,    38,     1,    36,
      41,    42,    43,   397,    45,   237,    37,     1,    12,    46,
      51,   405,     1,   179,   180,   235,   237,    48,     1,   239,
     414,   415,    53,    53,    65,    66,   196,   197,    69,    60,
     424,   425,   237,   427,    75,    81,    67,    81,    79,    80,
      71,   141,    83,   141,   237,    86,    87,    15,    16,    17,
     974,   975,   976,    84,     1,    96,    97,   235,    81,   141,
     237,   239,   103,   104,    53,   106,   107,   108,   109,   116,
     235,   238,   235,   123,   239,   112,   239,   237,    81,   120,
     235,   112,   112,    11,   239,    13,   117,    76,   129,   130,
     237,   132,    81,   134,   135,   112,   143,   138,    26,     1,
     214,   143,    30,   112,   498,   136,   156,   157,   158,   159,
     160,     1,    14,   143,   237,   235,   147,   148,   112,   239,
     143,   152,   143,     1,   165,     3,   167,   110,     6,   237,
     171,    33,    34,    11,   175,   176,   177,   178,    40,    29,
     143,   182,   183,   237,   237,   237,    24,    25,    26,   190,
     238,   140,    30,   170,   137,   123,   235,   181,   238,   237,
     239,   170,    90,     1,     1,   112,   238,   235,     1,     1,
      48,   239,   238,   238,    52,    53,   170,   181,   219,   238,
     221,   223,     1,   224,     1,     4,    88,    89,   229,   236,
     236,   222,   223,   234,   236,   236,    98,    99,    76,   236,
      78,   232,   223,    36,    21,   236,   236,   235,    25,   238,
     100,   101,   102,    91,     1,   105,   118,   119,    55,    56,
      57,    53,   112,   170,   238,    44,    63,   236,    47,   223,
       1,   133,    49,   236,   112,   125,    53,    84,   238,   238,
     142,   238,   236,   238,    77,    62,     1,   236,     1,   139,
       1,    68,    39,   236,   238,   235,   238,   238,    95,   238,
     238,   237,   140,   238,   238,    36,     1,    54,    85,     4,
      23,   161,   110,   238,   152,    94,   223,   238,    84,   112,
     112,   114,   115,    70,   162,    36,    73,    74,   238,   238,
     238,   128,   220,   112,   238,    46,   113,   238,   238,   137,
      55,    56,    57,   697,   121,    92,    77,   154,    63,    44,
     237,   143,    47,     1,     1,   238,   238,   238,   151,   136,
     153,   238,   238,   225,   226,   227,   238,   144,   145,   238,
     238,   238,   238,   166,   236,    11,   179,    13,   185,   238,
      95,   112,   238,   114,   115,   238,   236,   238,   154,   238,
      26,   198,    39,   238,    30,   238,   173,   174,   236,    94,
     235,   112,   199,   116,   238,    53,   238,    54,   238,   216,
     217,   238,   238,   128,   207,   222,   238,   112,   238,   185,
     151,   238,   153,    70,   858,   232,    73,    74,    76,   238,
     143,   228,   238,    81,   238,   166,   238,   230,   231,   236,
     141,     1,   238,   236,   223,    92,   223,   238,     8,     9,
     216,   217,   238,    13,    90,   238,   222,   236,   238,   236,
      20,   831,   832,   833,   834,   835,   232,    27,   238,   238,
     238,    31,    32,   238,   238,   238,   207,   238,    38,   238,
     238,    41,    42,    43,   199,    45,   122,   238,   238,   236,
     238,    51,   140,     1,   238,   238,   850,     5,   238,   230,
     231,   238,   238,   857,   238,    65,    66,   141,   238,    69,
     238,   238,   238,   228,   238,    75,   238,    25,   238,    79,
      80,   238,   238,    83,     5,   141,    86,    87,   223,    37,
     238,   238,   238,   238,   238,   238,    96,    97,   235,   235,
      48,   123,   123,   103,   104,    53,   106,   107,   108,   109,
     238,   238,    60,   238,   238,   238,    37,   238,   238,    67,
     120,   238,   238,    71,   238,   238,   238,    48,   238,   129,
     130,   238,   132,   123,   134,   135,    84,   179,   138,    60,
     123,   123,   179,   179,   220,   179,    67,   179,   179,   179,
      71,    72,   179,     1,   200,   201,   202,   203,   204,   205,
     206,   238,   235,    84,   112,   165,    14,   167,   238,   117,
       5,   171,   238,   238,   238,   175,   176,   177,   178,   123,
     179,   179,   182,   183,   141,    33,    34,   123,   136,   123,
     190,   179,    40,   179,   179,   141,   117,   123,   179,   147,
     148,   122,    37,   123,   152,   123,   179,   179,   123,   141,
     131,     1,   179,    48,   123,   123,   123,   123,   141,   219,
     123,   221,   123,   179,   224,    60,   147,   148,   149,   229,
     238,    21,    67,   238,   234,    25,    71,    72,   179,   179,
      88,    89,   141,   123,   179,   238,   179,   238,   179,    84,
      98,    99,   179,   141,   179,   179,   235,   179,   238,    49,
     179,   238,   238,    53,   238,   235,   141,   238,   141,   238,
     118,   119,    62,   238,   222,   223,   141,   141,    68,   141,
     235,   179,   117,   141,   232,   133,   141,   238,   209,   238,
     235,   238,   235,   179,   142,    85,   131,   179,   179,     0,
       1,   222,   179,   179,     5,     1,   235,   141,   179,    10,
     141,   232,   147,   148,   149,   141,   141,   141,   141,   141,
     123,   141,    23,   113,    25,   141,   238,    28,   238,   179,
     235,   121,   141,    29,    35,   235,   238,   179,     1,   235,
       3,   235,   235,     6,   235,   141,   136,   179,    11,    50,
     179,   238,   179,   123,   144,   145,   141,    58,    59,   141,
      61,    24,    25,    26,   179,   179,   179,    30,   141,   235,
     238,   238,   235,   141,   209,   235,   235,   225,   226,   227,
     141,    82,   235,   173,   174,    48,   235,   222,   235,    52,
      53,   235,    93,    94,    21,    22,   235,   232,   235,   235,
     238,   141,   235,   141,   100,   101,   102,   235,   238,   105,
     111,   141,   123,    76,   235,    78,   112,   235,   235,    21,
      22,   179,    49,   235,  1313,   235,   127,   238,    91,   125,
     238,   238,   238,   223,   238,    62,   238,   238,   238,   238,
     238,    68,   141,   139,   238,   238,   238,    49,   141,   112,
     238,   238,   238,   154,   238,   238,   179,   238,    85,   238,
      62,   238,   163,   164,   235,   161,    68,   168,   169,   235,
     235,   238,   235,   235,   238,   235,   235,   140,   235,   235,
     235,   235,   235,    85,   235,   235,   113,   235,   235,   152,
     235,   235,   235,   235,   121,   122,   235,   238,   235,   162,
     186,   187,   188,   189,   235,   191,   235,   193,   194,   195,
     235,   113,   198,   235,   235,   235,   235,   235,   235,   121,
     235,   235,   208,   209,   210,   211,   212,   213,   155,   215,
     235,   235,   218,   186,   187,   188,   189,   235,   191,   251,
     193,   194,   195,   235,   235,   198,   235,   174,   235,   141,
     235,   235,   235,   155,   235,   208,   209,   210,   211,   212,
     213,   235,   215,   235,   235,   218,   235,   235,   235,   235,
     235,   235,   174,   235,   235,   235,   141,   235,   141,   238,
     141,   235,   238,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     141,   141,   141,   238,   238,   238,   238,   238,   238,   238,
     238,   141,   238,   238,   238,   238,   238,   238,   238,   238,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   141,   235,   235,   235,   235,   235,   141,
     235,   123,   238,   123,   238,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     123,   123,   141,   123,   235,   141,   141,   141,   179,   179,
     179,   141,   238,   141,   141,   141,   141,   123,   235,   235,
     141,   235,   141,   235,   235,   235,   235,   235,   146,   235,
     235,   235,   235,   235,   184,   179,   141,   235,   179,   141,
     141,   179,   238,   141,   141,   123,   179,   179,   179,   235,
     179,   235,   235,   235,   235,   179,   235,   235,   235,   235,
     235,   235,   179,   179,   179,   179,   286,    71,   235,   235,
     235,   235,   235,   752,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,  1275,   235,   235,   235,   235,
     235,  1166,   235,  1259,   462,   323,  1213,  1300,   235,  1078,
     488,   580,  1302,   609,  1306,  1238,  1251,   519,   172,   362,
     452,  1140,  1138,  1257,  1255,    93,    -1,   368,   527,    -1,
      -1,    -1,   235,   235,   235,   235,   235,   235,   235,    -1,
      -1,   235,   235,    -1,    -1,   235,   235,    -1,    -1,   235,
     235,   235,   235,   235,   376,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   441,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   266
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   241,     0,     1,     5,    10,    23,    25,    28,    35,
      50,    58,    59,    61,    82,    93,    94,   111,   127,   154,
     163,   164,   168,   169,   242,   247,   252,   266,   272,   283,
     311,   326,   339,   362,   369,   379,   388,   415,   421,   427,
     432,   442,   503,   519,   537,   235,   236,   237,   340,   237,
     312,   389,   422,   428,   433,   237,   504,   416,   327,   237,
     237,   284,   363,   237,   237,   370,   380,     1,    36,    46,
     112,   267,   268,   269,   270,   271,   237,     1,    14,    33,
      34,    40,    88,    89,    98,    99,   118,   119,   133,   142,
     225,   226,   227,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     141,   313,   317,   141,   390,   394,   237,   237,   237,     1,
       8,     9,    13,    20,    27,    31,    32,    38,    41,    42,
      43,    45,    51,    65,    66,    69,    75,    79,    80,    83,
      86,    87,    96,    97,   103,   104,   106,   107,   108,   109,
     120,   129,   130,   132,   134,   135,   138,   165,   167,   171,
     175,   176,   177,   178,   182,   183,   190,   219,   221,   224,
     229,   234,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     494,   498,   499,   500,   501,   502,   237,   237,   237,     1,
      55,    56,    57,    63,    95,   128,   199,   228,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,     1,   110,
     137,   248,   249,   250,   251,   141,   285,   289,   237,     1,
      39,    54,    70,    73,    74,    92,   538,   539,   540,   541,
     542,   543,   544,   545,     1,    36,    77,   112,   114,   115,
     151,   153,   166,   207,   230,   231,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   237,
     237,   235,   238,   238,   238,   236,   268,     1,    21,    25,
      49,    53,    62,    68,    85,   113,   121,   136,   144,   145,
     173,   174,   223,   341,   342,   343,   344,   345,   346,   347,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   236,   521,   237,   237,     1,
      81,   143,   423,   424,   425,   426,     1,    81,   429,   430,
     431,     1,    53,   112,   143,   434,   438,   439,   440,   441,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   495,   238,   491,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   236,   444,     1,     4,    44,    47,    94,   112,
     223,   505,   506,   507,   508,   509,   513,   514,   515,     1,
     143,   223,   417,   418,   419,   420,     1,    53,    76,    81,
     140,   328,   332,   333,   334,   337,   338,   235,   238,   238,
     238,   238,   238,   238,   238,   238,   236,   274,   235,   238,
     238,   236,   249,   237,     1,    23,   116,   143,   364,   365,
     366,   367,   368,   238,   238,   238,   238,   238,   238,   236,
     539,   235,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   236,   254,     1,   112,   170,   223,   371,
     372,   373,   374,   375,     1,   112,   170,   381,   382,   383,
     384,   141,   141,   141,   235,   235,   238,   238,   238,   348,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   236,   342,   179,   123,   123,   179,   123,   244,   244,
     123,   123,   179,   179,   179,   179,   179,   179,   179,   235,
       1,    29,   100,   101,   102,   105,   112,   125,   139,   161,
     314,   315,   316,   318,   319,   320,   321,   322,   323,   324,
     325,     1,     3,     6,    11,    24,    25,    26,    30,    48,
      52,    53,    76,    78,    91,   112,   140,   152,   162,   391,
     392,   393,   395,   396,   397,   398,   399,   400,   401,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   238,   238,
     236,   424,   238,   236,   430,   435,   238,   238,   236,   439,
     179,   244,   179,   244,   123,   141,   123,   179,   179,   179,
     123,   141,   179,   123,   123,   123,   179,   244,   179,   123,
     141,   179,   123,   123,   123,   244,   123,   141,   123,   123,
     179,   238,   179,   238,   244,   244,   179,   141,   179,   179,
     179,   180,   179,   180,   179,   179,   244,   244,   123,   246,
     244,   179,   179,   179,   179,   235,   516,   238,   238,   510,
     238,   238,   236,   506,   238,   238,   236,   418,   235,   329,
     238,   238,   238,   236,   333,   141,   141,   141,   141,   200,
     201,   202,   203,   204,   205,   206,   141,   141,   179,   235,
     141,   141,   235,     1,     5,    25,    37,    48,    53,    60,
      67,    71,    84,   112,   117,   136,   147,   148,   152,   222,
     223,   232,   286,   287,   288,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   235,   238,   238,   238,   236,   365,   179,   179,
     179,   179,   179,   244,   235,   141,   179,   141,   141,   141,
     141,   141,   141,   123,   141,   141,   235,   235,   238,   376,
     238,   236,   372,   235,   238,   385,   236,   382,   235,   235,
     235,   179,   141,   179,   238,   179,   179,   179,   179,   179,
     141,   123,   141,   141,   179,   141,   235,   235,   235,   235,
     235,   156,   157,   158,   159,   160,   243,   244,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   236,
     315,   235,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   402,   238,   238,   238,   238,   238,   238,   238,   236,
     392,   141,   141,   235,   141,   235,   238,   141,   141,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   186,   187,   188,   189,   191,   193,   194,   195,   198,
     208,   209,   210,   211,   212,   213,   215,   218,   496,   497,
     235,   186,   187,   188,   189,   191,   193,   194,   195,   198,
     208,   209,   210,   211,   212,   213,   215,   218,   492,   493,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,    15,    16,    17,   245,   246,   235,
     235,   235,   235,   235,   235,   238,   244,   179,   238,   141,
     141,   235,   141,   141,   235,   238,   141,   141,   123,   335,
     336,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   238,
     238,   238,   238,   307,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   236,   287,   141,
     141,   141,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     141,   238,   141,   235,   141,   238,   235,   235,   235,   235,
      21,    22,    49,    62,    68,    85,   113,   121,   122,   155,
     174,   349,   350,   351,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   243,   243,   243,   243,   243,
     244,   123,   123,   123,   123,   141,   123,   244,   246,   235,
     141,   196,   197,   179,   141,   141,   179,   179,   179,   141,
     238,   141,   141,   141,   141,   123,   141,   141,   235,   235,
     235,   235,   146,   436,   437,   235,   235,   235,   239,   235,
     239,   245,   245,   245,    12,   181,   517,   518,   235,   235,
      12,   181,   511,   512,   235,   235,   235,   235,    70,   214,
     330,   331,   235,   235,   184,   235,   239,   179,   141,   179,
     179,   238,   179,   179,   179,   179,   141,   179,   141,   179,
     179,   141,   179,   141,   179,   235,   235,   235,   235,   235,
      84,   154,   185,   216,   217,   222,   232,   377,   378,   235,
     235,    84,   154,   185,   198,   216,   217,   222,   232,   386,
     387,   351,   235,   239,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,    11,    13,    26,    30,    90,   122,   220,
     403,   404,   405,   235,   235,   235,   235,   235,   235,   235,
     235,   239,   497,   493,   235,   239,   235,   239,   235,   239,
     123,   336,   235,   235,   235,   235,     5,    37,    48,    60,
      67,    71,    72,    84,   117,   122,   131,   147,   148,   149,
     209,   222,   232,   308,   309,   310,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     239,   235,   239,   350,   405,   235,   239,   437,   518,   512,
     331,   310,   235,   239,   378,   387,   404,   309
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
#line 816 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 820 "ircd_parser.y"
    {
                        }
    break;

  case 98:
#line 824 "ircd_parser.y"
    {
                        }
    break;

  case 99:
#line 828 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 100:
#line 835 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 101:
#line 842 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 102:
#line 849 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 103:
#line 853 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 104:
#line 857 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 105:
#line 861 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 106:
#line 865 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 107:
#line 869 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 108:
#line 873 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 109:
#line 879 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 110:
#line 888 "ircd_parser.y"
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
#line 900 "ircd_parser.y"
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
#line 991 "ircd_parser.y"
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
#line 1003 "ircd_parser.y"
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
#line 1015 "ircd_parser.y"
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
#line 1038 "ircd_parser.y"
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
#line 1050 "ircd_parser.y"
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
#line 1061 "ircd_parser.y"
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
#line 1072 "ircd_parser.y"
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
#line 1114 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 143:
#line 1123 "ircd_parser.y"
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
#line 1134 "ircd_parser.y"
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
#line 1145 "ircd_parser.y"
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
#line 1156 "ircd_parser.y"
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
#line 1167 "ircd_parser.y"
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
#line 1178 "ircd_parser.y"
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
#line 1189 "ircd_parser.y"
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
#line 1200 "ircd_parser.y"
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
#line 1211 "ircd_parser.y"
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
#line 1222 "ircd_parser.y"
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
#line 1233 "ircd_parser.y"
    {
}
    break;

  case 157:
#line 1237 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 158:
#line 1238 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 159:
#line 1241 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 160:
#line 1248 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 161:
#line 1255 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 162:
#line 1262 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 163:
#line 1269 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 164:
#line 1276 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 165:
#line 1283 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 166:
#line 1290 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 167:
#line 1297 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 168:
#line 1304 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 169:
#line 1311 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 170:
#line 1318 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 171:
#line 1325 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 172:
#line 1332 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 173:
#line 1339 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 174:
#line 1346 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 175:
#line 1359 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 176:
#line 1366 "ircd_parser.y"
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
#line 1393 "ircd_parser.y"
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
#line 1439 "ircd_parser.y"
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
#line 1485 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 194:
#line 1491 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[-1].number);
}
    break;

  case 195:
#line 1497 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 196:
#line 1503 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 197:
#line 1509 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 198:
#line 1515 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 199:
#line 1521 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[-1].number);
}
    break;

  case 200:
#line 1527 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 201:
#line 1536 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 202:
#line 1543 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 203:
#line 1552 "ircd_parser.y"
    {
}
    break;

  case 207:
#line 1557 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 208:
#line 1561 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 219:
#line 1574 "ircd_parser.y"
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

  case 220:
#line 1589 "ircd_parser.y"
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

  case 221:
#line 1611 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 222:
#line 1620 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 223:
#line 1632 "ircd_parser.y"
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
#line 1644 "ircd_parser.y"
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
#line 1714 "ircd_parser.y"
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

  case 245:
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

  case 246:
#line 1767 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 247:
#line 1776 "ircd_parser.y"
    {
}
    break;

  case 251:
#line 1780 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 252:
#line 1781 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 253:
#line 1784 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 254:
#line 1792 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 255:
#line 1799 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 256:
#line 1806 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 257:
#line 1813 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 258:
#line 1820 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 259:
#line 1827 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 260:
#line 1834 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 261:
#line 1841 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 262:
#line 1848 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 263:
#line 1857 "ircd_parser.y"
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
#line 1868 "ircd_parser.y"
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
#line 1879 "ircd_parser.y"
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
#line 1890 "ircd_parser.y"
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
#line 1901 "ircd_parser.y"
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
#line 1912 "ircd_parser.y"
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
#line 1924 "ircd_parser.y"
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
#line 1943 "ircd_parser.y"
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
#line 1953 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[-1].number);
  }
}
    break;

  case 272:
#line 1962 "ircd_parser.y"
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
#line 1977 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 274:
#line 1981 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 281:
#line 1993 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 282:
#line 2002 "ircd_parser.y"
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
#line 2017 "ircd_parser.y"
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
#line 2035 "ircd_parser.y"
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
#line 2043 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 292:
#line 2054 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 293:
#line 2063 "ircd_parser.y"
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
#line 2078 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 298:
#line 2085 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 299:
#line 2089 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 300:
#line 2093 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 301:
#line 2097 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 302:
#line 2101 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 303:
#line 2105 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 304:
#line 2109 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 305:
#line 2118 "ircd_parser.y"
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
#line 2126 "ircd_parser.y"
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
#line 2143 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 313:
#line 2149 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 317:
#line 2156 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 318:
#line 2160 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 319:
#line 2164 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 320:
#line 2168 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 321:
#line 2172 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 322:
#line 2176 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 323:
#line 2180 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 324:
#line 2184 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 325:
#line 2193 "ircd_parser.y"
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
#line 2211 "ircd_parser.y"
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
#line 2353 "ircd_parser.y"
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
#line 2365 "ircd_parser.y"
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
#line 2377 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 352:
#line 2386 "ircd_parser.y"
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
#line 2398 "ircd_parser.y"
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
#line 2410 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[-1].number);
}
    break;

  case 355:
#line 2416 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 356:
#line 2420 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 357:
#line 2428 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 358:
#line 2437 "ircd_parser.y"
    {
}
    break;

  case 362:
#line 2441 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 363:
#line 2442 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 364:
#line 2445 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 365:
#line 2452 "ircd_parser.y"
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
#line 2463 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 367:
#line 2470 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 368:
#line 2477 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 369:
#line 2484 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 370:
#line 2494 "ircd_parser.y"
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
#line 2535 "ircd_parser.y"
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
#line 2546 "ircd_parser.y"
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
#line 2557 "ircd_parser.y"
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
#line 2572 "ircd_parser.y"
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
#line 2583 "ircd_parser.y"
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
#line 2596 "ircd_parser.y"
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
#line 2609 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 378:
#line 2618 "ircd_parser.y"
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
#line 2653 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 380:
#line 2660 "ircd_parser.y"
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
#line 2679 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 387:
#line 2688 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 388:
#line 2700 "ircd_parser.y"
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
#line 2709 "ircd_parser.y"
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
#line 2725 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 396:
#line 2734 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 397:
#line 2746 "ircd_parser.y"
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
#line 2754 "ircd_parser.y"
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
#line 2770 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 404:
#line 2782 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_flags = 0;
    gecos_reason[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 405:
#line 2789 "ircd_parser.y"
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
#line 2832 "ircd_parser.y"
    {
}
    break;

  case 410:
#line 2837 "ircd_parser.y"
    {
  if (ypass == 2)
    gecos_flags |= 1;
}
    break;

  case 417:
#line 2846 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_name, yylval.string, sizeof(gecos_reason));
  }
}
    break;

  case 418:
#line 2855 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_reason, yylval.string, sizeof(gecos_name));
  }
}
    break;

  case 475:
#line 2903 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = (yyvsp[-1].number);
}
    break;

  case 476:
#line 2909 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = (yyvsp[-1].number);
}
    break;

  case 477:
#line 2915 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 478:
#line 2921 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 479:
#line 2926 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 480:
#line 2931 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = (yyvsp[-1].number);
}
    break;

  case 481:
#line 2937 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 482:
#line 2943 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 483:
#line 2949 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 484:
#line 2955 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 485:
#line 2961 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 486:
#line 2967 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = (yyvsp[-1].number); 
}
    break;

  case 487:
#line 2973 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = (yyvsp[-1].number);
}
    break;

  case 488:
#line 2979 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = (yyvsp[-1].number);
}
    break;

  case 489:
#line 2985 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[-1].number);
}
    break;

  case 490:
#line 2991 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = (yyvsp[-1].number);
}
    break;

  case 491:
#line 2997 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[-1].number);
}
    break;

  case 492:
#line 3003 "ircd_parser.y"
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

  case 493:
#line 3014 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 494:
#line 3020 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 495:
#line 3029 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 496:
#line 3035 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 497:
#line 3041 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 498:
#line 3047 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 499:
#line 3051 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 500:
#line 3057 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 501:
#line 3061 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 502:
#line 3067 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = (yyvsp[-1].number);
}
    break;

  case 503:
#line 3073 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = (yyvsp[-1].number);
}
    break;

  case 504:
#line 3079 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = (yyvsp[-1].number);
}
    break;

  case 505:
#line 3085 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 506:
#line 3091 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 507:
#line 3097 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 508:
#line 3103 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 509:
#line 3109 "ircd_parser.y"
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
#line 3120 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = (yyvsp[-1].number);
}
    break;

  case 511:
#line 3126 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = (yyvsp[-1].number);
}
    break;

  case 512:
#line 3132 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = (yyvsp[-1].number);
}
    break;

  case 513:
#line 3138 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = (yyvsp[-1].number);
}
    break;

  case 514:
#line 3144 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 515:
#line 3153 "ircd_parser.y"
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
#line 3185 "ircd_parser.y"
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

  case 517:
#line 3203 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 518:
#line 3209 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 519:
#line 3218 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 520:
#line 3224 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 521:
#line 3229 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 522:
#line 3235 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 526:
#line 3242 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 527:
#line 3246 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 528:
#line 3250 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 529:
#line 3254 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 530:
#line 3258 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 531:
#line 3262 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 532:
#line 3266 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 533:
#line 3270 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 534:
#line 3274 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 535:
#line 3278 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 536:
#line 3282 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 537:
#line 3286 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 538:
#line 3290 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 539:
#line 3294 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 540:
#line 3298 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 541:
#line 3302 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 542:
#line 3306 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 543:
#line 3312 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 547:
#line 3319 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 548:
#line 3323 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 549:
#line 3327 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 550:
#line 3331 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 551:
#line 3335 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 552:
#line 3339 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 553:
#line 3343 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 554:
#line 3347 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 555:
#line 3351 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 556:
#line 3355 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 557:
#line 3359 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 558:
#line 3363 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 559:
#line 3367 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 560:
#line 3371 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 561:
#line 3375 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 562:
#line 3379 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 563:
#line 3383 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 564:
#line 3389 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = (yyvsp[-1].number);
}
    break;

  case 565:
#line 3395 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = (yyvsp[-1].number);
}
    break;

  case 566:
#line 3401 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = (yyvsp[-1].number);
}
    break;

  case 567:
#line 3407 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = (yyvsp[-1].number);
}
    break;

  case 568:
#line 3413 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 569:
#line 3422 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 570:
#line 3430 "ircd_parser.y"
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

  case 580:
#line 3457 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 581:
#line 3463 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[-1].number);
}
    break;

  case 582:
#line 3469 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 586:
#line 3475 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 587:
#line 3479 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 588:
#line 3485 "ircd_parser.y"
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

  case 589:
#line 3508 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 590:
#line 3517 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 591:
#line 3521 "ircd_parser.y"
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

  case 594:
#line 3561 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 595:
#line 3565 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 615:
#line 3595 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 616:
#line 3601 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 617:
#line 3607 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 618:
#line 3613 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 619:
#line 3619 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = (yyvsp[-1].number);
}
    break;

  case 620:
#line 3625 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
    break;

  case 621:
#line 3631 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 622:
#line 3637 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = (yyvsp[-1].number);
}
    break;

  case 623:
#line 3643 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 624:
#line 3649 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = (yyvsp[-1].number);
}
    break;

  case 625:
#line 3655 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = (yyvsp[-1].number);
}
    break;

  case 626:
#line 3661 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = (yyvsp[-1].number);
}
    break;

  case 627:
#line 3667 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 628:
#line 3673 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 629:
#line 3679 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 640:
#line 3699 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 641:
#line 3705 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 642:
#line 3711 "ircd_parser.y"
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

  case 643:
#line 3725 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 644:
#line 3731 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 645:
#line 3737 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 6877 "y.tab.c"

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



