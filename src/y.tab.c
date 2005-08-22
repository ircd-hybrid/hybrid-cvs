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
/*  $Id: y.tab.c,v 7.21.2.7 2005/08/22 13:47:38 michael Exp $ */
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
     REHASH = 401,
     REMOTE = 402,
     REMOTEBAN = 403,
     RESTRICTED = 404,
     RSA_PRIVATE_KEY_FILE = 405,
     RSA_PUBLIC_KEY_FILE = 406,
     RESV = 407,
     RESV_EXEMPT = 408,
     SECONDS = 409,
     MINUTES = 410,
     HOURS = 411,
     DAYS = 412,
     WEEKS = 413,
     SENDQ = 414,
     SEND_PASSWORD = 415,
     SERVERHIDE = 416,
     SERVERINFO = 417,
     SERVLINK_PATH = 418,
     SID = 419,
     TKLINE_EXPIRE_NOTICES = 420,
     T_SHARED = 421,
     T_CLUSTER = 422,
     TYPE = 423,
     SHORT_MOTD = 424,
     SILENT = 425,
     SPOOF = 426,
     SPOOF_NOTICE = 427,
     STATS_I_OPER_ONLY = 428,
     STATS_K_OPER_ONLY = 429,
     STATS_O_OPER_ONLY = 430,
     STATS_P_OPER_ONLY = 431,
     TBOOL = 432,
     TMASKED = 433,
     T_REJECT = 434,
     TS_MAX_DELTA = 435,
     TS_WARN_DELTA = 436,
     TWODOTS = 437,
     T_ALL = 438,
     T_BOTS = 439,
     T_SOFTCALLERID = 440,
     T_CALLERID = 441,
     T_CCONN = 442,
     T_CLIENT_FLOOD = 443,
     T_DEAF = 444,
     T_DEBUG = 445,
     T_DRONE = 446,
     T_EXTERNAL = 447,
     T_FULL = 448,
     T_INVISIBLE = 449,
     T_IPV4 = 450,
     T_IPV6 = 451,
     T_LOCOPS = 452,
     T_LOGPATH = 453,
     T_L_CRIT = 454,
     T_L_DEBUG = 455,
     T_L_ERROR = 456,
     T_L_INFO = 457,
     T_L_NOTICE = 458,
     T_L_TRACE = 459,
     T_L_WARN = 460,
     T_MAX_CLIENTS = 461,
     T_NCHANGE = 462,
     T_OPERWALL = 463,
     T_REJ = 464,
     T_SERVNOTICE = 465,
     T_SKILL = 466,
     T_SPY = 467,
     T_UNAUTH = 468,
     T_UNRESV = 469,
     T_UNXLINE = 470,
     T_WALLOP = 471,
     THROTTLE_TIME = 472,
     TOPICBURST = 473,
     TRUE_NO_OPER_FLOOD = 474,
     UNKLINE = 475,
     USER = 476,
     USE_EGD = 477,
     USE_EXCEPT = 478,
     USE_INVEX = 479,
     USE_KNOCK = 480,
     USE_LOGGING = 481,
     USE_WHOIS_ACTUALLY = 482,
     VHOST = 483,
     VHOST6 = 484,
     XLINE = 485,
     WARN = 486,
     WARN_NO_NLINE = 487
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
#define REHASH 401
#define REMOTE 402
#define REMOTEBAN 403
#define RESTRICTED 404
#define RSA_PRIVATE_KEY_FILE 405
#define RSA_PUBLIC_KEY_FILE 406
#define RESV 407
#define RESV_EXEMPT 408
#define SECONDS 409
#define MINUTES 410
#define HOURS 411
#define DAYS 412
#define WEEKS 413
#define SENDQ 414
#define SEND_PASSWORD 415
#define SERVERHIDE 416
#define SERVERINFO 417
#define SERVLINK_PATH 418
#define SID 419
#define TKLINE_EXPIRE_NOTICES 420
#define T_SHARED 421
#define T_CLUSTER 422
#define TYPE 423
#define SHORT_MOTD 424
#define SILENT 425
#define SPOOF 426
#define SPOOF_NOTICE 427
#define STATS_I_OPER_ONLY 428
#define STATS_K_OPER_ONLY 429
#define STATS_O_OPER_ONLY 430
#define STATS_P_OPER_ONLY 431
#define TBOOL 432
#define TMASKED 433
#define T_REJECT 434
#define TS_MAX_DELTA 435
#define TS_WARN_DELTA 436
#define TWODOTS 437
#define T_ALL 438
#define T_BOTS 439
#define T_SOFTCALLERID 440
#define T_CALLERID 441
#define T_CCONN 442
#define T_CLIENT_FLOOD 443
#define T_DEAF 444
#define T_DEBUG 445
#define T_DRONE 446
#define T_EXTERNAL 447
#define T_FULL 448
#define T_INVISIBLE 449
#define T_IPV4 450
#define T_IPV6 451
#define T_LOCOPS 452
#define T_LOGPATH 453
#define T_L_CRIT 454
#define T_L_DEBUG 455
#define T_L_ERROR 456
#define T_L_INFO 457
#define T_L_NOTICE 458
#define T_L_TRACE 459
#define T_L_WARN 460
#define T_MAX_CLIENTS 461
#define T_NCHANGE 462
#define T_OPERWALL 463
#define T_REJ 464
#define T_SERVNOTICE 465
#define T_SKILL 466
#define T_SPY 467
#define T_UNAUTH 468
#define T_UNRESV 469
#define T_UNXLINE 470
#define T_WALLOP 471
#define THROTTLE_TIME 472
#define TOPICBURST 473
#define TRUE_NO_OPER_FLOOD 474
#define UNKLINE 475
#define USER 476
#define USE_EGD 477
#define USE_EXCEPT 478
#define USE_INVEX 479
#define USE_KNOCK 480
#define USE_LOGGING 481
#define USE_WHOIS_ACTUALLY 482
#define VHOST 483
#define VHOST6 484
#define XLINE 485
#define WARN 486
#define WARN_NO_NLINE 487




/* Copy the first part of user declarations.  */
#line 25 "ircd_parser.y"


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
#line 128 "ircd_parser.y"
typedef union YYSTYPE {
  int number;
  char *string;
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 648 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 660 "y.tab.c"

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
#define YYLAST   1263

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  238
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  298
/* YYNRULES -- Number of rules. */
#define YYNRULES  635
/* YYNRULES -- Number of states. */
#define YYNSTATES  1288

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   487

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   237,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   233,
       2,   236,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   235,     2,   234,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232
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
      97,   103,   106,   108,   110,   112,   114,   119,   124,   130,
     133,   135,   137,   139,   141,   143,   145,   147,   149,   151,
     153,   155,   157,   162,   167,   172,   177,   182,   187,   192,
     197,   202,   207,   213,   216,   218,   220,   222,   224,   226,
     231,   236,   241,   247,   250,   252,   254,   256,   258,   260,
     262,   264,   266,   268,   270,   275,   280,   285,   290,   295,
     300,   305,   310,   315,   320,   325,   330,   335,   340,   341,
     349,   350,   352,   355,   357,   359,   361,   363,   365,   367,
     369,   371,   373,   375,   377,   379,   381,   383,   385,   387,
     389,   391,   393,   395,   397,   402,   404,   409,   414,   419,
     424,   429,   434,   439,   444,   449,   454,   459,   464,   469,
     474,   479,   484,   489,   490,   496,   500,   502,   505,   507,
     509,   511,   513,   515,   517,   519,   521,   523,   525,   527,
     529,   531,   533,   535,   537,   539,   540,   548,   549,   551,
     554,   556,   558,   560,   562,   564,   566,   568,   570,   572,
     574,   576,   581,   583,   588,   593,   598,   603,   608,   613,
     618,   623,   624,   631,   634,   636,   638,   640,   642,   644,
     649,   653,   655,   657,   661,   666,   671,   672,   679,   682,
     684,   686,   688,   690,   692,   694,   696,   698,   700,   702,
     704,   706,   708,   710,   712,   714,   716,   721,   726,   731,
     736,   737,   743,   747,   749,   752,   754,   756,   758,   760,
     762,   764,   766,   768,   770,   772,   774,   779,   784,   789,
     794,   799,   804,   809,   814,   819,   824,   825,   832,   835,
     837,   839,   841,   843,   845,   850,   855,   860,   861,   868,
     871,   873,   875,   877,   879,   881,   886,   891,   892,   898,
     902,   904,   906,   908,   910,   912,   914,   916,   918,   920,
     921,   928,   931,   933,   935,   937,   939,   944,   945,   951,
     955,   957,   959,   961,   963,   965,   967,   969,   971,   973,
     974,   982,   983,   985,   988,   990,   992,   994,   996,   998,
    1000,  1002,  1004,  1006,  1008,  1010,  1012,  1014,  1016,  1018,
    1020,  1022,  1024,  1026,  1031,  1033,  1038,  1043,  1048,  1053,
    1058,  1063,  1068,  1069,  1075,  1079,  1081,  1084,  1086,  1088,
    1090,  1092,  1094,  1096,  1098,  1103,  1108,  1113,  1118,  1123,
    1128,  1133,  1138,  1143,  1144,  1151,  1154,  1156,  1158,  1160,
    1162,  1167,  1172,  1173,  1180,  1183,  1185,  1187,  1189,  1191,
    1196,  1201,  1202,  1209,  1212,  1214,  1216,  1218,  1223,  1224,
    1231,  1234,  1236,  1238,  1240,  1242,  1247,  1252,  1258,  1261,
    1263,  1265,  1267,  1269,  1271,  1273,  1275,  1277,  1279,  1281,
    1283,  1285,  1287,  1289,  1291,  1293,  1295,  1297,  1299,  1301,
    1303,  1305,  1307,  1309,  1311,  1313,  1315,  1317,  1319,  1321,
    1323,  1325,  1327,  1329,  1331,  1333,  1335,  1337,  1339,  1341,
    1343,  1345,  1347,  1349,  1351,  1353,  1355,  1357,  1359,  1361,
    1363,  1365,  1367,  1369,  1374,  1379,  1384,  1389,  1394,  1399,
    1404,  1409,  1414,  1419,  1424,  1429,  1434,  1439,  1444,  1449,
    1454,  1459,  1464,  1469,  1474,  1479,  1484,  1489,  1494,  1499,
    1504,  1509,  1514,  1519,  1524,  1529,  1534,  1539,  1544,  1549,
    1554,  1559,  1564,  1569,  1574,  1579,  1584,  1589,  1594,  1599,
    1604,  1605,  1611,  1615,  1617,  1619,  1621,  1623,  1625,  1627,
    1629,  1631,  1633,  1635,  1637,  1639,  1641,  1643,  1645,  1647,
    1649,  1651,  1653,  1654,  1660,  1664,  1666,  1668,  1670,  1672,
    1674,  1676,  1678,  1680,  1682,  1684,  1686,  1688,  1690,  1692,
    1694,  1696,  1698,  1700,  1702,  1707,  1712,  1717,  1722,  1727,
    1728,  1735,  1738,  1740,  1742,  1744,  1746,  1748,  1750,  1752,
    1754,  1759,  1764,  1765,  1771,  1775,  1777,  1779,  1781,  1786,
    1791,  1792,  1798,  1802,  1804,  1806,  1808,  1814,  1817,  1819,
    1821,  1823,  1825,  1827,  1829,  1831,  1833,  1835,  1837,  1839,
    1841,  1843,  1845,  1847,  1849,  1851,  1856,  1861,  1866,  1871,
    1876,  1881,  1886,  1891,  1896,  1901,  1906,  1911,  1916,  1921,
    1926,  1932,  1935,  1937,  1939,  1941,  1943,  1945,  1947,  1949,
    1951,  1956,  1961,  1966,  1971,  1976
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     239,     0,    -1,    -1,   239,   240,    -1,   263,    -1,   269,
      -1,   280,    -1,   509,    -1,   309,    -1,   324,    -1,   333,
      -1,   250,    -1,   527,    -1,   356,    -1,   363,    -1,   373,
      -1,   382,    -1,   409,    -1,   415,    -1,   421,    -1,   432,
      -1,   493,    -1,   426,    -1,   245,    -1,     1,   233,    -1,
       1,   234,    -1,    -1,   242,    -1,   123,   241,    -1,   123,
     154,   241,    -1,   123,   155,   241,    -1,   123,   156,   241,
      -1,   123,   157,   241,    -1,   123,   158,   241,    -1,    -1,
     244,    -1,   123,   243,    -1,   123,    15,   243,    -1,   123,
      16,   243,    -1,   123,    17,   243,    -1,   111,   235,   246,
     234,   233,    -1,   246,   247,    -1,   247,    -1,   248,    -1,
     249,    -1,     1,    -1,   110,   236,   141,   233,    -1,   137,
     236,   141,   233,    -1,   162,   235,   251,   234,   233,    -1,
     251,   252,    -1,   252,    -1,   254,    -1,   259,    -1,   262,
      -1,   256,    -1,   257,    -1,   258,    -1,   261,    -1,   253,
      -1,   260,    -1,   255,    -1,     1,    -1,   150,   236,   141,
     233,    -1,   112,   236,   141,   233,    -1,   164,   236,   141,
     233,    -1,    36,   236,   141,   233,    -1,   115,   236,   141,
     233,    -1,   114,   236,   141,   233,    -1,   228,   236,   141,
     233,    -1,   229,   236,   141,   233,    -1,   206,   236,   123,
     233,    -1,    77,   236,   177,   233,    -1,     5,   235,   264,
     234,   233,    -1,   264,   265,    -1,   265,    -1,   266,    -1,
     268,    -1,   267,    -1,     1,    -1,   112,   236,   141,   233,
      -1,    46,   236,   141,   233,    -1,    36,   236,   141,   233,
      -1,    94,   235,   270,   234,   233,    -1,   270,   271,    -1,
     271,    -1,   272,    -1,   273,    -1,   274,    -1,   278,    -1,
     279,    -1,   275,    -1,   277,    -1,   276,    -1,     1,    -1,
     198,   236,   141,   233,    -1,   128,   236,   141,   233,    -1,
      63,   236,   141,   233,    -1,    57,   236,   141,   233,    -1,
      55,   236,   141,   233,    -1,    56,   236,   141,   233,    -1,
      95,   236,   199,   233,    -1,    95,   236,   201,   233,    -1,
      95,   236,   205,   233,    -1,    95,   236,   203,   233,    -1,
      95,   236,   204,   233,    -1,    95,   236,   202,   233,    -1,
      95,   236,   200,   233,    -1,   226,   236,   177,   233,    -1,
      -1,   127,   281,   282,   235,   283,   234,   233,    -1,    -1,
     286,    -1,   283,   284,    -1,   284,    -1,   285,    -1,   287,
      -1,   288,    -1,   290,    -1,   292,    -1,   293,    -1,   294,
      -1,   295,    -1,   296,    -1,   297,    -1,   298,    -1,   299,
      -1,   301,    -1,   300,    -1,   302,    -1,   303,    -1,   289,
      -1,   291,    -1,   304,    -1,     1,    -1,   112,   236,   141,
     233,    -1,   141,    -1,   221,   236,   141,   233,    -1,   136,
     236,   141,   233,    -1,    48,   236,   177,   233,    -1,    71,
     236,   177,   233,    -1,   151,   236,   141,   233,    -1,    25,
     236,   141,   233,    -1,    67,   236,   177,   233,    -1,   147,
     236,   177,   233,    -1,    84,   236,   177,   233,    -1,   230,
     236,   177,   233,    -1,   220,   236,   177,   233,    -1,    60,
     236,   177,   233,    -1,   117,   236,   177,   233,    -1,    37,
     236,   177,   233,    -1,   148,   236,   177,   233,    -1,   146,
     236,   177,   233,    -1,     5,   236,   177,   233,    -1,    -1,
      53,   305,   236,   306,   233,    -1,   306,   237,   307,    -1,
     307,    -1,   122,   308,    -1,   308,    -1,    67,    -1,   147,
      -1,    84,    -1,   220,    -1,   230,    -1,    60,    -1,    37,
      -1,   146,    -1,     5,    -1,    71,    -1,   117,    -1,   208,
      -1,   131,    -1,    72,    -1,   148,    -1,    48,    -1,    -1,
      25,   310,   311,   235,   312,   234,   233,    -1,    -1,   315,
      -1,   312,   313,    -1,   313,    -1,   314,    -1,   316,    -1,
     317,    -1,   318,    -1,   319,    -1,   320,    -1,   321,    -1,
     322,    -1,   323,    -1,     1,    -1,   112,   236,   141,   233,
      -1,   141,    -1,   139,   236,   242,   233,    -1,   125,   236,
     123,   233,    -1,    29,   236,   242,   233,    -1,   105,   236,
     123,   233,    -1,   100,   236,   123,   233,    -1,   102,   236,
     123,   233,    -1,   101,   236,   123,   233,    -1,   159,   236,
     244,   233,    -1,    -1,    93,   325,   235,   326,   234,   233,
      -1,   326,   327,    -1,   327,    -1,   328,    -1,   331,    -1,
     332,    -1,     1,    -1,   140,   236,   329,   233,    -1,   329,
     237,   330,    -1,   330,    -1,   123,    -1,   123,   182,   123,
      -1,    81,   236,   141,   233,    -1,    76,   236,   141,   233,
      -1,    -1,    10,   334,   235,   335,   234,   233,    -1,   335,
     336,    -1,   336,    -1,   337,    -1,   338,    -1,   340,    -1,
     341,    -1,   346,    -1,   347,    -1,   348,    -1,   350,    -1,
     351,    -1,   352,    -1,   339,    -1,   353,    -1,   354,    -1,
     349,    -1,   355,    -1,     1,    -1,   221,   236,   141,   233,
      -1,   136,   236,   141,   233,    -1,   172,   236,   177,   233,
      -1,    25,   236,   141,   233,    -1,    -1,    53,   342,   236,
     343,   233,    -1,   343,   237,   344,    -1,   344,    -1,   122,
     345,    -1,   345,    -1,   172,    -1,    49,    -1,    85,    -1,
      68,    -1,    21,    -1,    22,    -1,   121,    -1,    62,    -1,
     153,    -1,   113,    -1,    85,   236,   177,   233,    -1,    68,
     236,   177,   233,    -1,    49,   236,   177,   233,    -1,    21,
     236,   177,   233,    -1,   121,   236,   177,   233,    -1,    62,
     236,   177,   233,    -1,   171,   236,   141,   233,    -1,   145,
     236,   141,   233,    -1,   144,   236,   123,   233,    -1,   113,
     236,   177,   233,    -1,    -1,   152,   357,   235,   358,   234,
     233,    -1,   358,   359,    -1,   359,    -1,   360,    -1,   361,
      -1,   362,    -1,     1,    -1,   143,   236,   141,   233,    -1,
      23,   236,   141,   233,    -1,   116,   236,   141,   233,    -1,
      -1,   166,   364,   235,   365,   234,   233,    -1,   365,   366,
      -1,   366,    -1,   367,    -1,   368,    -1,   369,    -1,     1,
      -1,   112,   236,   141,   233,    -1,   221,   236,   141,   233,
      -1,    -1,   168,   370,   236,   371,   233,    -1,   371,   237,
     372,    -1,   372,    -1,    84,    -1,   220,    -1,   230,    -1,
     215,    -1,   152,    -1,   214,    -1,   197,    -1,   183,    -1,
      -1,   167,   374,   235,   375,   234,   233,    -1,   375,   376,
      -1,   376,    -1,   377,    -1,   378,    -1,     1,    -1,   112,
     236,   141,   233,    -1,    -1,   168,   379,   236,   380,   233,
      -1,   380,   237,   381,    -1,   381,    -1,    84,    -1,   220,
      -1,   230,    -1,   215,    -1,   152,    -1,   214,    -1,   197,
      -1,   183,    -1,    -1,    28,   383,   384,   235,   385,   234,
     233,    -1,    -1,   388,    -1,   385,   386,    -1,   386,    -1,
     387,    -1,   389,    -1,   390,    -1,   391,    -1,   392,    -1,
     393,    -1,   394,    -1,   395,    -1,   405,    -1,   406,    -1,
     407,    -1,   404,    -1,   401,    -1,   403,    -1,   402,    -1,
     400,    -1,   408,    -1,     1,    -1,   112,   236,   141,   233,
      -1,   141,    -1,    76,   236,   141,   233,    -1,   160,   236,
     141,   233,    -1,     3,   236,   141,   233,    -1,   140,   236,
     123,   233,    -1,     6,   236,   195,   233,    -1,     6,   236,
     196,   233,    -1,    52,   236,   141,   233,    -1,    -1,    53,
     396,   236,   397,   233,    -1,   397,   237,   398,    -1,   398,
      -1,   122,   399,    -1,   399,    -1,    90,    -1,    26,    -1,
      30,    -1,    11,    -1,    13,    -1,   218,    -1,   151,   236,
     141,   233,    -1,    48,   236,   177,   233,    -1,    30,   236,
     177,   233,    -1,    26,   236,   177,   233,    -1,    11,   236,
     177,   233,    -1,    78,   236,   141,   233,    -1,    91,   236,
     141,   233,    -1,    25,   236,   141,   233,    -1,    24,   236,
     141,   233,    -1,    -1,    82,   410,   235,   411,   234,   233,
      -1,   411,   412,    -1,   412,    -1,   413,    -1,   414,    -1,
       1,    -1,   221,   236,   141,   233,    -1,   143,   236,   141,
     233,    -1,    -1,    35,   416,   235,   417,   234,   233,    -1,
     417,   418,    -1,   418,    -1,   419,    -1,   420,    -1,     1,
      -1,    81,   236,   141,   233,    -1,   143,   236,   141,   233,
      -1,    -1,    50,   422,   235,   423,   234,   233,    -1,   423,
     424,    -1,   424,    -1,   425,    -1,     1,    -1,    81,   236,
     141,   233,    -1,    -1,    58,   427,   235,   428,   234,   233,
      -1,   428,   429,    -1,   429,    -1,   430,    -1,   431,    -1,
       1,    -1,   112,   236,   141,   233,    -1,   143,   236,   141,
     233,    -1,    59,   235,   433,   234,   233,    -1,   433,   434,
      -1,   434,    -1,   441,    -1,   442,    -1,   444,    -1,   445,
      -1,   446,    -1,   447,    -1,   448,    -1,   449,    -1,   450,
      -1,   451,    -1,   440,    -1,   453,    -1,   454,    -1,   455,
      -1,   469,    -1,   456,    -1,   458,    -1,   460,    -1,   459,
      -1,   462,    -1,   457,    -1,   463,    -1,   464,    -1,   465,
      -1,   466,    -1,   468,    -1,   470,    -1,   467,    -1,   484,
      -1,   471,    -1,   475,    -1,   476,    -1,   480,    -1,   461,
      -1,   490,    -1,   488,    -1,   489,    -1,   472,    -1,   443,
      -1,   473,    -1,   474,    -1,   491,    -1,   479,    -1,   452,
      -1,   492,    -1,   477,    -1,   478,    -1,   437,    -1,   439,
      -1,   435,    -1,   436,    -1,   438,    -1,     1,    -1,    65,
     236,   123,   233,    -1,    66,   236,   123,   233,    -1,    13,
     236,   177,   233,    -1,   227,   236,   177,   233,    -1,   165,
     236,   177,   233,    -1,    83,   236,   123,   233,    -1,    75,
     236,   177,   233,    -1,    80,   236,   177,   233,    -1,    41,
     236,   177,   233,    -1,    51,   236,   177,   233,    -1,     8,
     236,   177,   233,    -1,   104,   236,   242,   233,    -1,   103,
     236,   123,   233,    -1,    97,   236,   123,   233,    -1,     9,
     236,   242,   233,    -1,   181,   236,   242,   233,    -1,   180,
     236,   242,   233,    -1,    69,   236,   123,   233,    -1,    87,
     236,   177,   233,    -1,    86,   236,   141,   233,    -1,   232,
     236,   177,   233,    -1,   175,   236,   177,   233,    -1,   176,
     236,   177,   233,    -1,   174,   236,   177,   233,    -1,   174,
     236,   178,   233,    -1,   173,   236,   177,   233,    -1,   173,
     236,   178,   233,    -1,   134,   236,   242,   233,    -1,    20,
     236,   242,   233,    -1,   135,   236,   242,   233,    -1,   169,
     236,   177,   233,    -1,   120,   236,   177,   233,    -1,   219,
     236,   177,   233,    -1,   130,   236,   177,   233,    -1,   107,
     236,   141,   233,    -1,    79,   236,   242,   233,    -1,    43,
     236,   123,   233,    -1,    96,   236,   123,   233,    -1,   106,
     236,   123,   233,    -1,   163,   236,   141,   233,    -1,    31,
     236,   141,   233,    -1,    27,   236,   123,   233,    -1,   222,
     236,   177,   233,    -1,    45,   236,   141,   233,    -1,   138,
     236,   177,   233,    -1,    38,   236,   177,   233,    -1,   217,
     236,   242,   233,    -1,    -1,   132,   481,   236,   482,   233,
      -1,   482,   237,   483,    -1,   483,    -1,   184,    -1,   187,
      -1,   189,    -1,   190,    -1,   193,    -1,   211,    -1,   207,
      -1,   209,    -1,   213,    -1,   212,    -1,   192,    -1,   208,
      -1,   210,    -1,   194,    -1,   216,    -1,   185,    -1,   186,
      -1,   197,    -1,    -1,   129,   485,   236,   486,   233,    -1,
     486,   237,   487,    -1,   487,    -1,   184,    -1,   187,    -1,
     189,    -1,   190,    -1,   193,    -1,   211,    -1,   207,    -1,
     209,    -1,   213,    -1,   212,    -1,   192,    -1,   208,    -1,
     210,    -1,   194,    -1,   216,    -1,   185,    -1,   186,    -1,
     197,    -1,   108,   236,   123,   233,    -1,   109,   236,   123,
     233,    -1,    32,   236,   123,   233,    -1,   188,   236,   244,
     233,    -1,    42,   236,   177,   233,    -1,    -1,    61,   494,
     235,   495,   234,   233,    -1,   495,   496,    -1,   496,    -1,
     497,    -1,   498,    -1,   499,    -1,   503,    -1,   504,    -1,
     505,    -1,     1,    -1,    47,   236,   177,   233,    -1,    44,
     236,   242,   233,    -1,    -1,    94,   500,   236,   501,   233,
      -1,   501,   237,   502,    -1,   502,    -1,   179,    -1,    12,
      -1,   221,   236,   141,   233,    -1,   112,   236,   141,   233,
      -1,    -1,     4,   506,   236,   507,   233,    -1,   507,   237,
     508,    -1,   508,    -1,   179,    -1,    12,    -1,    23,   235,
     510,   234,   233,    -1,   510,   511,    -1,   511,    -1,   512,
      -1,   513,    -1,   514,    -1,   515,    -1,   521,    -1,   516,
      -1,   517,    -1,   518,    -1,   519,    -1,   520,    -1,   522,
      -1,   523,    -1,   524,    -1,   525,    -1,   526,    -1,     1,
      -1,    40,   236,   177,   233,    -1,   223,   236,   177,   233,
      -1,   224,   236,   177,   233,    -1,   225,   236,   177,   233,
      -1,    88,   236,   242,   233,    -1,    89,   236,   242,   233,
      -1,   133,   236,   177,   233,    -1,    99,   236,   123,   233,
      -1,   142,   236,   177,   233,    -1,    98,   236,   123,   233,
      -1,    34,   236,   123,   233,    -1,    33,   236,   123,   233,
      -1,   118,   236,   177,   233,    -1,   119,   236,   177,   233,
      -1,    14,   236,   177,   233,    -1,   161,   235,   528,   234,
     233,    -1,   528,   529,    -1,   529,    -1,   530,    -1,   531,
      -1,   532,    -1,   534,    -1,   533,    -1,   535,    -1,     1,
      -1,    54,   236,   177,   233,    -1,    74,   236,   177,   233,
      -1,    92,   236,   242,   233,    -1,    70,   236,   177,   233,
      -1,    39,   236,   177,   233,    -1,    73,   236,   177,   233,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   364,   364,   365,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   393,   393,   394,   398,
     402,   406,   410,   414,   420,   420,   421,   422,   423,   424,
     431,   434,   434,   435,   435,   435,   437,   454,   465,   468,
     469,   470,   470,   471,   471,   472,   472,   473,   474,   474,
     475,   476,   478,   533,   547,   565,   574,   588,   597,   625,
     655,   671,   721,   723,   723,   724,   724,   725,   725,   727,
     736,   745,   757,   759,   760,   762,   762,   763,   763,   764,
     764,   765,   765,   766,   768,   772,   776,   780,   787,   794,
     801,   805,   809,   813,   817,   821,   825,   831,   841,   840,
     933,   933,   934,   934,   935,   935,   935,   935,   936,   936,
     936,   937,   937,   937,   938,   938,   938,   939,   939,   939,
     940,   940,   941,   941,   943,   955,   967,   990,  1002,  1013,
    1024,  1066,  1075,  1086,  1097,  1108,  1119,  1130,  1141,  1152,
    1163,  1174,  1185,  1197,  1196,  1200,  1200,  1201,  1202,  1204,
    1211,  1218,  1225,  1232,  1239,  1246,  1253,  1260,  1267,  1274,
    1281,  1288,  1295,  1302,  1309,  1323,  1322,  1342,  1342,  1344,
    1344,  1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,  1353,
    1354,  1356,  1402,  1448,  1454,  1460,  1466,  1472,  1478,  1484,
    1490,  1500,  1499,  1512,  1512,  1513,  1513,  1513,  1513,  1515,
    1517,  1517,  1519,  1523,  1536,  1545,  1558,  1557,  1631,  1631,
    1632,  1632,  1632,  1632,  1633,  1633,  1634,  1634,  1634,  1635,
    1635,  1636,  1636,  1636,  1637,  1637,  1639,  1668,  1681,  1692,
    1702,  1701,  1705,  1705,  1706,  1707,  1709,  1717,  1724,  1731,
    1738,  1745,  1752,  1759,  1766,  1773,  1782,  1793,  1804,  1815,
    1826,  1837,  1849,  1868,  1878,  1887,  1903,  1902,  1915,  1915,
    1916,  1916,  1916,  1916,  1918,  1927,  1942,  1956,  1955,  1971,
    1971,  1972,  1972,  1972,  1972,  1974,  1983,  1999,  1998,  2004,
    2004,  2005,  2009,  2013,  2017,  2021,  2025,  2029,  2033,  2043,
    2042,  2064,  2064,  2065,  2065,  2065,  2067,  2074,  2073,  2079,
    2079,  2080,  2084,  2088,  2092,  2096,  2100,  2104,  2108,  2118,
    2117,  2267,  2267,  2268,  2268,  2269,  2269,  2269,  2270,  2270,
    2270,  2271,  2271,  2271,  2272,  2272,  2272,  2273,  2273,  2273,
    2274,  2274,  2275,  2277,  2289,  2301,  2310,  2322,  2334,  2340,
    2344,  2352,  2362,  2361,  2365,  2365,  2366,  2367,  2369,  2376,
    2387,  2394,  2401,  2408,  2417,  2458,  2469,  2480,  2495,  2506,
    2519,  2532,  2541,  2577,  2576,  2599,  2599,  2600,  2600,  2600,
    2602,  2611,  2624,  2623,  2645,  2645,  2646,  2646,  2646,  2648,
    2657,  2670,  2669,  2690,  2690,  2691,  2691,  2693,  2706,  2705,
    2719,  2719,  2720,  2720,  2720,  2722,  2731,  2743,  2746,  2746,
    2747,  2747,  2748,  2748,  2749,  2749,  2750,  2750,  2751,  2751,
    2752,  2752,  2753,  2754,  2754,  2755,  2755,  2756,  2756,  2757,
    2757,  2758,  2758,  2759,  2759,  2760,  2760,  2761,  2762,  2762,
    2763,  2763,  2764,  2765,  2765,  2766,  2766,  2767,  2767,  2768,
    2769,  2769,  2770,  2770,  2771,  2771,  2772,  2772,  2773,  2773,
    2774,  2774,  2775,  2779,  2785,  2791,  2797,  2802,  2807,  2813,
    2819,  2825,  2831,  2837,  2843,  2849,  2855,  2861,  2867,  2873,
    2879,  2890,  2896,  2905,  2911,  2917,  2923,  2927,  2933,  2937,
    2943,  2949,  2955,  2961,  2967,  2973,  2979,  2985,  2996,  3002,
    3008,  3014,  3020,  3029,  3061,  3079,  3085,  3094,  3100,  3105,
    3112,  3111,  3117,  3117,  3118,  3122,  3126,  3130,  3134,  3138,
    3142,  3146,  3150,  3154,  3158,  3162,  3166,  3170,  3174,  3178,
    3182,  3186,  3193,  3192,  3198,  3198,  3199,  3203,  3207,  3211,
    3215,  3219,  3223,  3227,  3231,  3235,  3239,  3243,  3247,  3251,
    3255,  3259,  3263,  3267,  3273,  3279,  3285,  3291,  3297,  3307,
    3306,  3332,  3332,  3333,  3334,  3335,  3336,  3337,  3338,  3339,
    3341,  3347,  3354,  3353,  3358,  3358,  3359,  3363,  3369,  3392,
    3402,  3401,  3444,  3444,  3445,  3449,  3458,  3461,  3461,  3462,
    3463,  3464,  3465,  3466,  3467,  3468,  3469,  3470,  3471,  3472,
    3473,  3474,  3475,  3476,  3477,  3479,  3485,  3491,  3497,  3503,
    3509,  3515,  3521,  3527,  3533,  3539,  3545,  3551,  3557,  3563,
    3572,  3575,  3575,  3576,  3576,  3577,  3578,  3579,  3580,  3581,
    3583,  3589,  3595,  3609,  3615,  3621
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
  "REDIRSERV", "REHASH", "REMOTE", "REMOTEBAN", "RESTRICTED",
  "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE", "RESV", "RESV_EXEMPT",
  "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "SENDQ", "SEND_PASSWORD",
  "SERVERHIDE", "SERVERINFO", "SERVLINK_PATH", "SID",
  "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE", "SHORT_MOTD",
  "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_I_OPER_ONLY",
  "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL",
  "TMASKED", "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS",
  "T_ALL", "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN",
  "T_CLIENT_FLOOD", "T_DEAF", "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL",
  "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT",
  "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE",
  "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ",
  "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_UNAUTH", "T_UNRESV", "T_UNXLINE",
  "T_WALLOP", "THROTTLE_TIME", "TOPICBURST", "TRUE_NO_OPER_FLOOD",
  "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT", "USE_INVEX", "USE_KNOCK",
  "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST", "VHOST6", "XLINE", "WARN",
  "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='", "','", "$accept", "conf",
  "conf_item", "timespec_", "timespec", "sizespec_", "sizespec",
  "modules_entry", "modules_items", "modules_item", "modules_module",
  "modules_path", "serverinfo_entry", "serverinfo_items",
  "serverinfo_item", "serverinfo_rsa_private_key_file", "serverinfo_name",
  "serverinfo_sid", "serverinfo_description", "serverinfo_network_name",
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
  "oper_die", "oper_remoteban", "oper_rehash", "oper_admin", "oper_flags",
  "@2", "oper_flags_items", "oper_flags_item", "oper_flags_item_atom",
  "class_entry", "@3", "class_name_b", "class_items", "class_item",
  "class_name", "class_name_t", "class_ping_time", "class_number_per_ip",
  "class_connectfreq", "class_max_number", "class_max_global",
  "class_max_local", "class_max_ident", "class_sendq", "listen_entry",
  "@4", "listen_items", "listen_item", "listen_port", "port_items",
  "port_item", "listen_address", "listen_host", "auth_entry", "@5",
  "auth_items", "auth_item", "auth_user", "auth_passwd",
  "auth_spoof_notice", "auth_class", "auth_flags", "@6",
  "auth_flags_items", "auth_flags_item", "auth_flags_item_atom",
  "auth_kline_exempt", "auth_need_ident", "auth_exceed_limit",
  "auth_can_flood", "auth_no_tilde", "auth_gline_exempt", "auth_spoof",
  "auth_redir_serv", "auth_redir_port", "auth_need_password", "resv_entry",
  "@7", "resv_items", "resv_item", "resv_creason", "resv_channel",
  "resv_nick", "shared_entry", "@8", "shared_items", "shared_item",
  "shared_name", "shared_user", "shared_type", "@9", "shared_types",
  "shared_type_item", "cluster_entry", "@10", "cluster_items",
  "cluster_item", "cluster_name", "cluster_type", "@11", "cluster_types",
  "cluster_type_item", "connect_entry", "@12", "connect_name_b",
  "connect_items", "connect_item", "connect_name", "connect_name_t",
  "connect_host", "connect_send_password", "connect_accept_password",
  "connect_port", "connect_aftype", "connect_fakename", "connect_flags",
  "@13", "connect_flags_items", "connect_flags_item",
  "connect_flags_item_atom", "connect_rsa_public_key_file",
  "connect_encrypted", "connect_cryptlink", "connect_compressed",
  "connect_auto", "connect_hub_mask", "connect_leaf_mask", "connect_class",
  "connect_cipher_preference", "kill_entry", "@14", "kill_items",
  "kill_item", "kill_user", "kill_reason", "deny_entry", "@15",
  "deny_items", "deny_item", "deny_ip", "deny_reason", "exempt_entry",
  "@16", "exempt_items", "exempt_item", "exempt_ip", "gecos_entry", "@17",
  "gecos_items", "gecos_item", "gecos_name", "gecos_reason",
  "general_entry", "general_items", "general_item",
  "general_gline_min_cidr", "general_gline_min_cidr6",
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
  "@18", "umode_oitems", "umode_oitem", "general_oper_only_umodes", "@19",
  "umode_items", "umode_item", "general_min_nonwildcard",
  "general_min_nonwildcard_simple", "general_default_floodcount",
  "general_client_flood", "general_dot_in_ip6_addr", "gline_entry", "@20",
  "gline_items", "gline_item", "gline_enable", "gline_duration",
  "gline_logging", "@21", "gline_logging_types", "gline_logging_type_item",
  "gline_user", "gline_server", "gline_action", "@22", "gdeny_types",
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
     485,   486,   487,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   238,   239,   239,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   241,   241,   242,   242,
     242,   242,   242,   242,   243,   243,   244,   244,   244,   244,
     245,   246,   246,   247,   247,   247,   248,   249,   250,   251,
     251,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   264,   265,   265,   265,   265,   266,
     267,   268,   269,   270,   270,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   272,   273,   274,   275,   276,   277,
     278,   278,   278,   278,   278,   278,   278,   279,   281,   280,
     282,   282,   283,   283,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   305,   304,   306,   306,   307,   307,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   310,   309,   311,   311,   312,
     312,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   325,   324,   326,   326,   327,   327,   327,   327,   328,
     329,   329,   330,   330,   331,   332,   334,   333,   335,   335,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   337,   338,   339,   340,
     342,   341,   343,   343,   344,   344,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   357,   356,   358,   358,
     359,   359,   359,   359,   360,   361,   362,   364,   363,   365,
     365,   366,   366,   366,   366,   367,   368,   370,   369,   371,
     371,   372,   372,   372,   372,   372,   372,   372,   372,   374,
     373,   375,   375,   376,   376,   376,   377,   379,   378,   380,
     380,   381,   381,   381,   381,   381,   381,   381,   381,   383,
     382,   384,   384,   385,   385,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   387,   388,   389,   390,   391,   392,   393,
     393,   394,   396,   395,   397,   397,   398,   398,   399,   399,
     399,   399,   399,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   410,   409,   411,   411,   412,   412,   412,
     413,   414,   416,   415,   417,   417,   418,   418,   418,   419,
     420,   422,   421,   423,   423,   424,   424,   425,   427,   426,
     428,   428,   429,   429,   429,   430,   431,   432,   433,   433,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   458,   459,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     481,   480,   482,   482,   483,   483,   483,   483,   483,   483,
     483,   483,   483,   483,   483,   483,   483,   483,   483,   483,
     483,   483,   485,   484,   486,   486,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   488,   489,   490,   491,   492,   494,
     493,   495,   495,   496,   496,   496,   496,   496,   496,   496,
     497,   498,   500,   499,   501,   501,   502,   502,   503,   504,
     506,   505,   507,   507,   508,   508,   509,   510,   510,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   528,   529,   529,   529,   529,   529,   529,   529,
     530,   531,   532,   533,   534,   535
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     1,     2,     3,
       3,     3,     3,     3,     0,     1,     2,     3,     3,     3,
       5,     2,     1,     1,     1,     1,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     7,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     1,     4,
       3,     1,     1,     3,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       0,     5,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     1,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     1,     4,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       6,     2,     1,     1,     1,     1,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       7,     0,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     4,     4,     4,     4,     4,
       4,     4,     0,     5,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     4,
       4,     0,     6,     2,     1,     1,     1,     4,     0,     6,
       2,     1,     1,     1,     1,     4,     4,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     3,     1,     1,     1,     1,     1,
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
       2,     0,     1,     0,     0,   216,     0,   175,   319,   382,
     391,   398,     0,   559,   373,   201,     0,     0,   108,   266,
       0,     0,   277,   299,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     177,   321,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    74,    75,    77,    76,     0,   604,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   588,   589,   590,   591,   592,   594,
     595,   596,   597,   598,   593,   599,   600,   601,   602,   603,
     192,     0,   178,   344,     0,   322,     0,     0,     0,   462,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   532,     0,   510,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   409,   459,   460,   457,   461,   458,   420,
     410,   411,   448,   412,   413,   414,   415,   416,   417,   418,
     419,   453,   421,   422,   423,   425,   430,   426,   428,   427,
     443,   429,   431,   432,   433,   434,   437,   435,   424,   436,
     439,   447,   449,   450,   440,   441,   455,   456,   452,   442,
     438,   445,   446,   444,   451,   454,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    90,    92,    91,    88,    89,    45,     0,
       0,     0,    42,    43,    44,   135,     0,   111,     0,   629,
       0,     0,     0,     0,     0,     0,     0,   622,   623,   624,
     625,   627,   626,   628,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    58,    51,    60,
      54,    55,    56,    52,    59,    57,    53,     0,     0,     0,
       0,     0,     0,    73,   235,     0,     0,     0,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   220,   221,   230,   222,   223,   224,   225,   226,
     233,   227,   228,   229,   231,   232,   234,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   587,     0,     0,   388,     0,     0,     0,
     385,   386,   387,   396,     0,     0,   394,   395,   404,     0,
       0,     0,   401,   402,   403,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   408,   569,
     580,     0,     0,   572,     0,     0,     0,   562,   563,   564,
     565,   566,   567,   568,   379,     0,     0,     0,   376,   377,
     378,   208,     0,     0,     0,     0,   204,   205,   206,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,    41,     0,   273,     0,     0,     0,     0,
     269,   270,   271,   272,     0,     0,     0,     0,     0,     0,
       0,   621,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,   284,     0,   287,     0,     0,   280,
     281,   282,   283,   305,     0,   307,     0,   302,   303,   304,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   586,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
       0,     0,     0,     0,     0,     0,     0,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   340,   337,   339,
     338,   336,   333,   334,   335,   341,     0,     0,     0,   384,
       0,     0,   393,     0,     0,     0,   400,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,   407,     0,     0,     0,     0,     0,     0,     0,
     561,     0,     0,     0,   375,     0,     0,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,     0,    40,   133,     0,
       0,     0,     0,   153,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
     114,   115,   116,   130,   117,   131,   118,   119,   120,   121,
     122,   123,   124,   125,   127,   126,   128,   129,   132,     0,
       0,     0,     0,   268,     0,     0,     0,     0,     0,     0,
     620,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,   279,     0,     0,     0,
     301,    81,    80,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
     619,   616,   615,   605,    26,    26,    26,    26,    26,    28,
      27,   609,   610,   614,   612,   617,   618,   611,   613,   606,
     607,   608,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   323,     0,     0,   383,     0,   392,     0,     0,   399,
     473,   477,   465,   491,   504,   503,   556,   508,   471,   558,
     499,   506,   472,   463,   464,   480,   469,   498,   470,   468,
     482,   481,   500,   476,   475,   474,   501,   497,   554,   555,
     494,   536,   551,   552,   537,   538,   539,   546,   540,   549,
     553,   542,   547,   543,   548,   541,   545,   544,   550,     0,
     535,   496,   514,   529,   530,   515,   516,   517,   524,   518,
     527,   531,   520,   525,   521,   526,   519,   523,   522,   528,
       0,   513,   490,   492,   507,   502,   467,   493,   488,   489,
     486,   487,   484,   485,   479,   478,    34,    34,    34,    36,
      35,   557,   509,   495,   505,   466,   483,     0,     0,     0,
       0,     0,     0,   560,     0,     0,   374,     0,     0,   212,
       0,   211,   202,    98,    99,    97,    96,   100,   106,   101,
     105,   103,   104,   102,    95,    94,   107,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,   267,   634,   630,   633,   635,   631,   632,
      65,    71,    63,    67,    66,    62,    64,    70,    68,    69,
       0,     0,     0,   278,     0,     0,   300,   259,   239,   258,
     250,   251,   247,   253,   249,   248,   255,   252,     0,   254,
     246,     0,   243,   245,   261,   257,   256,   265,   260,   237,
     264,   263,   262,   238,   236,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   320,   389,
     390,   397,   405,   406,   533,     0,   511,     0,    37,    38,
      39,   585,   584,     0,   583,   571,   570,   577,   576,     0,
     575,   579,   578,   381,   380,   215,   214,     0,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     275,   276,   274,   285,   291,   295,   298,   297,   296,   294,
     292,   293,     0,   290,   286,   306,   311,   315,   318,   317,
     316,   314,   312,   313,     0,   310,   244,   241,     0,   195,
     197,   199,   198,   196,   191,   194,   193,   200,   347,   349,
     350,   368,   372,   371,   367,   366,   365,   351,   361,   362,
     359,   360,   358,     0,   363,     0,   355,   357,   345,   369,
     370,   343,   348,   364,   346,   534,   512,   581,     0,   573,
       0,   213,   210,   152,   141,   149,   138,   167,   165,   174,
     164,   159,   168,   172,   161,   169,     0,   171,   166,   160,
     173,   170,   162,   163,     0,   156,   158,   147,   142,   139,
     144,   134,   148,   137,   151,   143,   150,   140,   146,   136,
     145,   288,     0,   308,     0,   242,   356,   353,     0,   582,
     574,   157,   154,     0,   289,   309,   354,   155
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   819,   820,   959,   960,    25,   251,   252,
     253,   254,    26,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,    27,    71,    72,    73,    74,
      75,    28,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,    29,    61,   256,   738,   739,   740,   257,   741,
     742,   743,   744,   745,   746,   747,   748,   749,   750,   751,
     752,   753,   754,   755,   756,   757,   758,  1003,  1254,  1255,
    1256,    30,    50,   111,   568,   569,   570,   112,   571,   572,
     573,   574,   575,   576,   577,   578,    31,    58,   455,   456,
     457,   980,   981,   458,   459,    32,    48,   320,   321,   322,
     323,   324,   325,   326,   527,  1061,  1062,  1063,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,    33,    62,
     479,   480,   481,   482,   483,    34,    65,   508,   509,   510,
     511,   512,   783,  1172,  1173,    35,    66,   516,   517,   518,
     519,   788,  1184,  1185,    36,    51,   114,   597,   598,   599,
     115,   600,   601,   602,   603,   604,   605,   606,   852,  1215,
    1216,  1217,   607,   608,   609,   610,   611,   612,   613,   614,
     615,    37,    57,   447,   448,   449,   450,    38,    52,   359,
     360,   361,   362,    39,    53,   365,   366,   367,    40,    54,
     371,   372,   373,   374,    41,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   408,   940,   941,   220,   406,   919,   920,
     221,   222,   223,   224,   225,    42,    56,   436,   437,   438,
     439,   440,   686,  1129,  1130,   441,   442,   443,   683,  1123,
    1124,    43,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    44,
     266,   267,   268,   269,   270,   271,   272,   273
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -839
static const short int yypact[] =
{
    -839,   715,  -839,  -190,  -231,  -839,  -229,  -839,  -839,  -839,
    -839,  -839,  -221,  -839,  -839,  -839,  -212,  -189,  -839,  -839,
    -180,  -178,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,   341,  -155,   577,
     -79,   -50,  -129,  -112,  -100,   414,   -89,   -68,   -51,   278,
     189,    44,   -49,   305,   449,   -41,   -36,  -839,   -21,   -17,
     -15,    20,  -839,  -839,  -839,  -839,   668,  -839,   -14,   -13,
      10,    13,    26,    37,    51,    54,    56,    57,    61,    62,
      66,    67,    71,   177,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,    25,  -839,  -839,    53,  -839,     4,     2,    46,  -839,
      75,    76,    85,    87,    93,   109,   111,   115,   117,   118,
     120,   122,   125,   126,   129,   132,   133,   134,   135,   138,
     144,   145,   152,   153,   154,   155,   157,   159,   160,   167,
     169,  -839,   171,  -839,   172,   173,   176,   178,   181,   182,
     183,   184,   188,   190,   194,   196,   197,   206,   207,   208,
     212,   215,     7,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,   316,    11,    52,  -839,
     218,   222,   225,   226,   227,   228,   232,   233,   150,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,   234,
     235,    94,  -839,  -839,  -839,  -839,    89,  -839,   282,  -839,
     237,   239,   241,   248,   250,   251,    70,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,   254,   259,   260,   266,   269,
     270,   272,   273,   283,   288,   121,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,   116,   106,   216,
     244,   253,    97,  -839,  -839,   289,   292,   293,  -839,   294,
     295,   296,   297,   299,   300,   302,   304,   309,   311,   315,
     195,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,   236,   308,   355,
     364,   365,   365,   369,   430,   377,   379,   380,   381,   382,
     388,   389,   335,  -839,   761,   758,  -839,   334,   336,    18,
    -839,  -839,  -839,  -839,   339,    24,  -839,  -839,  -839,   340,
     344,   158,  -839,  -839,  -839,   394,   365,   404,   365,   459,
     443,   470,   419,   423,   424,   482,   465,   439,   484,   495,
     497,   446,   365,   447,   505,   491,   448,   511,   514,   517,
     365,   519,   503,   520,   524,   474,   416,   479,   421,   365,
     365,   481,   521,   483,   486,  -103,   -52,   487,   490,   365,
     365,   538,   365,   493,   494,   496,   504,   441,  -839,  -839,
    -839,   444,   451,  -839,   452,   454,   165,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,   455,   456,    60,  -839,  -839,
    -839,  -839,   458,   461,   462,    16,  -839,  -839,  -839,  -839,
     541,   558,   559,   563,   617,   564,   565,   530,   475,  -839,
     568,   570,   480,  -839,   502,  -839,   476,   478,   488,   148,
    -839,  -839,  -839,  -839,   549,   550,   551,   552,   554,   365,
     485,  -839,   592,   557,   594,   596,   598,   600,   601,   556,
     603,   605,   515,  -839,  -839,   513,  -839,   518,     9,  -839,
    -839,  -839,  -839,  -839,   522,  -839,    88,  -839,  -839,  -839,
     523,   527,   533,  -839,   578,   606,   591,   534,   595,   609,
     610,   614,   616,   630,   654,   637,   639,   618,   653,   566,
    -839,   572,   574,   581,   590,   358,   597,   599,   602,   604,
     608,   611,   612,   613,   615,   620,   621,  -839,  -839,   560,
     567,   588,   589,   593,   622,   623,   624,   628,   213,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
     629,   633,   635,   636,   642,   643,   644,   648,   649,  -839,
     651,   652,   656,   657,   658,   659,   660,   149,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,   690,   692,   664,  -839,
     697,   666,  -839,   706,   709,   670,  -839,   671,   672,   673,
     674,   675,   677,   678,   679,   680,   681,   682,   683,   684,
     688,   689,   701,   702,   704,   705,   707,   708,   710,   711,
     712,   720,   721,   723,   724,   725,   731,   734,   739,   738,
     776,   741,   742,   743,   744,   746,   747,   748,   749,   757,
     760,   762,   763,   764,   765,    15,   766,   767,   768,   769,
     770,   771,  -839,   665,   365,   698,   694,   716,   798,   772,
    -839,   801,   831,   773,  -839,   850,   853,   733,   774,  -839,
     775,   777,   778,   779,   780,   781,   782,   783,   784,   785,
     786,   787,   788,   789,  -839,   790,   791,  -839,  -839,   792,
     793,   794,   795,  -839,   796,   797,   799,   800,   802,   803,
     804,   805,   807,   808,   809,   810,   811,   812,    17,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,   868,
     884,   885,   816,  -839,   817,   818,   819,   820,   821,   822,
    -839,   823,   824,   825,   826,   827,   828,   829,   830,   832,
     833,  -839,   886,   834,   893,   835,  -839,   896,   836,   838,
    -839,  -839,  -839,  -839,   840,   841,   842,   730,   843,   844,
     845,   846,   847,   848,   849,   851,   852,   854,   855,  -839,
    -839,  -839,  -839,  -839,   365,   365,   365,   365,   365,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,   365,   919,   941,   944,   946,   942,   963,   365,
     538,   856,  -839,   949,   -65,   713,   950,   951,   916,   917,
     918,   955,   861,   957,   958,   959,   960,   979,   962,   964,
     871,  -839,   873,   874,  -839,   875,  -839,   876,   877,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -226,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -224,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,   538,   538,   538,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,    14,   878,   879,
      29,   880,   881,  -839,   882,   883,  -839,   887,   888,   935,
    -209,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,   945,
     977,   947,   948,   890,   952,   953,   954,   956,   978,   961,
     982,   965,   966,   967,   986,   968,   987,   969,   899,  -839,
     901,   902,   903,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
     904,   252,   906,  -839,   907,   415,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,   806,  -839,
    -839,  -204,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
     908,   914,   915,   920,   921,   922,   923,   924,   925,  -839,
     926,   927,   928,   929,   930,   931,   932,   933,   934,   936,
     242,   937,   938,   939,   940,   943,   970,   971,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,   739,  -839,   776,  -839,  -839,
    -839,  -839,  -839,  -197,  -839,  -839,  -839,  -839,  -839,  -173,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  1026,  -839,   733,
     972,   973,   974,   975,   537,   976,   980,   981,   983,   984,
     985,   988,   989,   990,   991,   992,   993,   994,   995,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -170,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -137,  -839,  -839,  -839,   730,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,   256,  -839,  -135,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,    14,  -839,
      29,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,   555,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -125,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,   252,  -839,   415,  -839,  -839,  -839,   242,  -839,
    -839,  -839,  -839,   537,  -839,  -839,  -839,  -839
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -839,  -839,  -839,  -378,  -341,  -838,  -419,  -839,  -839,   900,
    -839,  -839,  -839,  -839,   865,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  1081,  -839,  -839,
    -839,  -839,  -839,   996,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,   436,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -115,
     -71,  -839,  -839,  -839,  -839,   619,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,   722,
    -839,  -839,    39,  -839,  -839,  -839,  -839,  -839,   859,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,    -8,   123,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,   703,  -839,  -839,  -839,  -839,  -839,  -839,   676,  -839,
    -839,  -839,  -839,  -839,   -87,  -839,  -839,  -839,   667,  -839,
    -839,  -839,  -839,   -88,  -839,  -839,  -839,  -839,   632,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
     -90,   -24,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,   745,  -839,  -839,  -839,  -839,  -839,
     837,  -839,  -839,  -839,  -839,  -839,   866,  -839,  -839,  -839,
    -839,   839,  -839,  -839,  -839,  -839,  1018,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,    74,  -839,  -839,  -839,    78,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,   759,  -839,
    -839,  -839,  -839,  -839,   -33,  -839,  -839,  -839,  -839,  -839,
     -34,  -839,  -839,  1105,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,  -839,
    -839,   997,  -839,  -839,  -839,  -839,  -839,  -839
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     546,   547,   676,   363,    47,   356,    49,  1114,   119,  1116,
     504,  1115,   444,  1117,    55,   120,   121,   451,   718,   356,
     122,    67,   719,    59,  1138,   363,  1121,   123,  1139,  1187,
     956,   957,   958,  1188,   124,   628,  1227,   630,   125,   126,
    1228,  1127,   720,    45,    46,   127,    60,   368,   128,   129,
     130,   644,   131,   451,   721,    63,    68,    64,   132,   652,
    1229,   444,   110,  1271,  1230,   722,    69,  1272,   661,   662,
     723,   259,   133,   134,   667,   668,   135,   724,   673,   674,
      76,   677,   136,   364,   725,   357,   137,   138,   726,   513,
     139,   113,   452,   140,   141,   248,  1273,   453,  1277,   357,
    1274,   727,  1278,   142,   143,   364,   116,   513,  1282,   260,
     144,   145,  1283,   146,   147,   148,   149,   504,  1118,  1119,
    1120,   505,   274,   117,   261,   669,   670,   150,   452,   728,
    1091,  1092,    70,   453,   729,   118,   151,   152,   675,   153,
     262,   154,   155,   263,   264,   156,   226,   358,   769,   475,
     579,   229,   580,   730,   445,   581,   454,   275,   369,   368,
     582,   358,   265,   731,   732,   733,   429,   227,   734,   430,
     157,   476,   158,   583,   584,   585,   159,   506,    77,   586,
     160,   161,   162,   163,   228,   255,   258,   164,   165,   370,
     248,    78,   454,  1122,   297,   166,   304,   587,   276,   298,
     514,   588,   589,   445,   249,   230,   231,   232,  1128,   431,
      79,    80,   432,   233,   558,   299,   305,    81,   514,   300,
     306,   301,   337,   338,   167,   590,   168,   591,   505,   169,
     507,   250,   446,   277,   170,   278,   279,   735,   736,   171,
     592,   427,   559,   785,   307,   234,   339,   737,   308,   340,
     698,  1018,   618,  1208,   302,  1209,   515,   309,   621,   433,
     354,   593,   341,   310,   477,    82,    83,  1208,  1210,  1209,
     369,   280,  1211,   342,   515,    84,    85,   434,   235,   229,
     311,   446,  1210,   475,   506,   281,  1211,   343,   355,   594,
     344,   478,   345,   346,   693,    86,    87,   347,   348,   249,
     595,   370,   349,   350,   490,   476,   259,   351,   312,   596,
      88,   375,   376,   560,   561,   562,   313,   429,   563,    89,
     430,   377,   789,   378,   474,   564,   250,   282,   472,   379,
     523,   314,  1212,   230,   231,   232,  1164,   507,   565,   315,
     316,   233,    67,   968,   260,   380,  1212,   381,   236,   283,
     284,   382,   566,   383,   384,   502,   385,   520,   386,   261,
     431,   387,   388,   432,  1213,   389,   317,   318,   390,   391,
     392,   393,   567,   234,   394,   262,   237,    68,   263,   264,
     395,   396,   762,   860,   468,   521,   435,    69,   397,   398,
     399,   400,   625,   401,   522,   402,   403,   265,   477,   689,
      90,    91,    92,   404,  1165,   405,   235,   407,   409,   410,
     433,   352,   411,   541,   412,   119,   319,   413,   414,   415,
     416,  1088,   120,   121,   417,   478,   418,   122,   434,   539,
     419,   542,   420,   421,   123,  1166,  1075,  1076,  1077,  1078,
    1079,   124,   422,   423,   424,   125,   126,   841,   425,  1167,
     274,   426,   127,    70,   460,   128,   129,   130,   461,   131,
    1214,   462,   463,   464,   465,   132,  1168,  1169,   466,   467,
     470,   471,  1170,   484,  1214,   485,   236,   486,   543,   133,
     134,   545,  1171,   135,   487,   275,   488,   489,   545,   136,
     492,  1080,   548,   137,   138,   493,   494,   139,  1087,  1176,
     140,   141,   495,   718,   237,   496,   497,   719,   498,   499,
     142,   143,   814,   815,   816,   817,   818,   144,   145,   500,
     146,   147,   148,   149,   501,   524,   276,   720,   525,   526,
     528,   529,   530,   531,   150,   532,   533,   435,   534,   721,
     535,   544,  1237,   151,   152,   536,   153,   537,   154,   155,
     722,   538,   156,   549,   550,   723,   551,   552,   553,   554,
    1237,   277,   724,   278,   279,   555,   556,  1177,   557,   725,
     616,   627,   617,   726,  1238,   620,   623,   157,    77,   158,
     624,   629,   631,   159,   632,  1239,   727,   160,   161,   162,
     163,    78,  1238,   633,   164,   165,   634,  1240,  1178,   280,
     635,   636,   166,  1239,  1241,   637,   638,   640,  1242,  1243,
      79,    80,  1179,   281,   728,  1240,   639,    81,   641,   729,
     642,  1244,  1241,   643,   645,   648,  1242,  1243,   646,  1180,
    1181,   167,   647,   168,   649,  1182,   169,   650,   730,  1244,
     651,   170,   653,   655,   654,  1183,   171,   656,   731,   732,
     733,   657,   658,   734,  1245,   282,   659,   660,   663,  1246,
     665,   675,   664,   666,   671,    82,    83,   672,  1247,   304,
     678,   679,  1245,   680,   682,    84,    85,   283,   284,   778,
     684,   681,   700,  1248,  1249,  1250,  1247,   685,   687,   305,
     688,   691,   692,   306,   695,    86,    87,   696,   697,   701,
     702,  1248,  1249,  1250,   703,   711,   712,   713,   714,   715,
      88,   716,   759,   717,   760,     2,     3,   307,   770,    89,
       4,   308,   735,   736,   761,     5,   764,   765,   766,   767,
     309,   768,   737,   771,   772,   773,   310,   774,     6,   775,
       7,   776,   777,     8,   779,  1251,   780,   795,   781,   782,
       9,  1050,  1051,   311,   784,   794,   791,  1252,   787,   579,
     792,   580,   558,  1251,   581,    10,   793,  1253,   796,   582,
     797,   803,   798,    11,    12,  1252,    13,   804,   805,  1052,
     806,   312,   583,   584,   585,  1253,   799,   800,   586,   313,
     559,   801,  1053,   802,   808,   807,   832,    14,  1054,   809,
      90,    91,    92,   833,   314,   810,   587,   811,    15,    16,
     588,   589,   315,   316,   812,  1055,   704,   705,   706,   707,
     708,   709,   710,   813,   834,   835,    17,  1050,  1051,   836,
     821,   862,   822,   863,   590,   823,   591,   824,   865,   317,
     318,   825,    18,  1056,   826,   827,   828,   867,   829,   592,
     868,  1057,  1058,   830,   831,  1052,   979,   971,   837,   838,
     839,   560,   561,   562,   840,   843,   563,    19,  1053,   844,
     593,   845,   846,   564,  1054,   969,    20,    21,   847,   848,
     849,    22,    23,  1059,   850,   851,   565,   853,   854,   319,
    1093,  1055,   855,   856,   857,   858,   859,   864,   594,   866,
     566,   967,  1060,   869,   870,   871,   872,   873,   874,   595,
     875,   876,   877,   878,   879,   880,   881,   882,   596,  1056,
     567,   883,   884,   901,   902,   903,   904,  1057,   905,   906,
     970,   907,   908,   909,   885,   886,   910,   887,   888,   972,
     889,   890,   974,   891,   892,   893,   911,   912,   913,   914,
     915,   916,   917,   894,   895,   918,   896,   897,   898,  1059,
     922,   923,   924,   925,   899,   926,   927,   900,   928,   929,
     930,   921,   975,   931,   942,   943,   944,   945,  1060,   946,
     947,   948,   949,   932,   933,   934,   935,   936,   937,   938,
     950,   977,   939,   951,   978,   952,   953,   954,   955,   961,
     962,   963,   964,   965,   966,   973,   976,   982,   983,  1020,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,   997,   998,  1021,  1022,  1040,   999,  1000,
    1001,  1002,  1004,  1005,  1042,  1006,  1007,  1044,  1008,  1009,
    1010,  1011,  1081,  1012,  1013,  1014,  1015,  1016,  1017,  1023,
    1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,
    1034,  1035,  1036,  1037,  1082,  1038,  1039,  1083,  1043,  1084,
    1041,  1046,  1045,  1047,  1048,  1049,  1064,  1065,  1066,  1067,
    1068,  1069,  1070,  1085,  1071,  1072,  1086,  1073,  1074,  1089,
    1090,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,  1102,
    1103,  1104,  1105,  1106,  1108,  1107,  1109,  1110,  1111,  1112,
    1113,  1125,  1126,  1131,  1132,  1133,  1134,  1137,  1141,  1149,
    1135,  1136,  1140,  1151,  1142,  1143,  1144,  1155,  1157,  1145,
    1146,  1147,  1159,  1148,  1160,  1161,  1162,  1163,  1150,  1174,
    1175,  1189,  1152,  1153,  1154,  1156,  1158,  1190,  1191,  1231,
     503,   473,   303,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1202,  1203,  1204,  1205,  1206,  1287,  1207,
    1218,  1219,  1220,  1221,  1019,  1281,  1222,   699,  1232,   540,
    1275,  1186,   763,   790,   786,  1284,  1285,   842,  1286,  1276,
     428,  1226,   694,  1225,  1279,   690,   619,  1280,   353,     0,
       0,     0,     0,  1223,  1224,  1233,  1234,  1235,  1236,  1257,
     626,     0,     0,  1258,  1259,     0,  1260,  1261,  1262,     0,
       0,  1263,  1264,  1265,  1266,  1267,  1268,  1269,  1270,   861,
       0,   622,     0,     0,   469,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   491
};

static const short int yycheck[] =
{
     341,   342,   421,     1,   235,     1,   235,   233,     1,   233,
       1,   237,     1,   237,   235,     8,     9,     1,     1,     1,
      13,     1,     5,   235,   233,     1,    12,    20,   237,   233,
      15,    16,    17,   237,    27,   376,   233,   378,    31,    32,
     237,    12,    25,   233,   234,    38,   235,     1,    41,    42,
      43,   392,    45,     1,    37,   235,    36,   235,    51,   400,
     233,     1,   141,   233,   237,    48,    46,   237,   409,   410,
      53,     1,    65,    66,   177,   178,    69,    60,   419,   420,
     235,   422,    75,    81,    67,    81,    79,    80,    71,     1,
      83,   141,    76,    86,    87,     1,   233,    81,   233,    81,
     237,    84,   237,    96,    97,    81,   235,     1,   233,    39,
     103,   104,   237,   106,   107,   108,   109,     1,   956,   957,
     958,   112,     1,   235,    54,   177,   178,   120,    76,   112,
     195,   196,   112,    81,   117,   235,   129,   130,   123,   132,
      70,   134,   135,    73,    74,   138,   235,   143,   489,     1,
       1,     1,     3,   136,   143,     6,   140,    36,   112,     1,
      11,   143,    92,   146,   147,   148,     1,   235,   151,     4,
     163,    23,   165,    24,    25,    26,   169,   168,     1,    30,
     173,   174,   175,   176,   235,   141,   235,   180,   181,   143,
       1,    14,   140,   179,   235,   188,     1,    48,    77,   235,
     112,    52,    53,   143,   110,    55,    56,    57,   179,    44,
      33,    34,    47,    63,     1,   236,    21,    40,   112,   236,
      25,   236,   236,   236,   217,    76,   219,    78,   112,   222,
     221,   137,   221,   112,   227,   114,   115,   220,   221,   232,
      91,   234,    29,   234,    49,    95,   236,   230,    53,   236,
     234,   234,   234,    11,   234,    13,   168,    62,   234,    94,
     235,   112,   236,    68,   116,    88,    89,    11,    26,    13,
     112,   150,    30,   236,   168,    98,    99,   112,   128,     1,
      85,   221,    26,     1,   168,   164,    30,   236,   235,   140,
     236,   143,   236,   236,   234,   118,   119,   236,   236,   110,
     151,   143,   236,   236,   234,    23,     1,   236,   113,   160,
     133,   236,   236,   100,   101,   102,   121,     1,   105,   142,
       4,   236,   234,   236,   235,   112,   137,   206,   234,   236,
     233,   136,    90,    55,    56,    57,    84,   221,   125,   144,
     145,    63,     1,   684,    39,   236,    90,   236,   198,   228,
     229,   236,   139,   236,   236,   234,   236,   141,   236,    54,
      44,   236,   236,    47,   122,   236,   171,   172,   236,   236,
     236,   236,   159,    95,   236,    70,   226,    36,    73,    74,
     236,   236,   234,   234,   234,   141,   221,    46,   236,   236,
     236,   236,   234,   236,   141,   236,   236,    92,   116,   234,
     223,   224,   225,   236,   152,   236,   128,   236,   236,   236,
      94,   234,   236,   177,   236,     1,   221,   236,   236,   236,
     236,   840,     8,     9,   236,   143,   236,    13,   112,   234,
     236,   123,   236,   236,    20,   183,   814,   815,   816,   817,
     818,    27,   236,   236,   236,    31,    32,   234,   236,   197,
       1,   236,    38,   112,   236,    41,    42,    43,   236,    45,
     218,   236,   236,   236,   236,    51,   214,   215,   236,   236,
     236,   236,   220,   236,   218,   236,   198,   236,   123,    65,
      66,   123,   230,    69,   236,    36,   236,   236,   123,    75,
     236,   832,   123,    79,    80,   236,   236,    83,   839,    84,
      86,    87,   236,     1,   226,   236,   236,     5,   236,   236,
      96,    97,   154,   155,   156,   157,   158,   103,   104,   236,
     106,   107,   108,   109,   236,   236,    77,    25,   236,   236,
     236,   236,   236,   236,   120,   236,   236,   221,   236,    37,
     236,   177,     5,   129,   130,   236,   132,   236,   134,   135,
      48,   236,   138,   123,   177,    53,   177,   177,   177,   177,
       5,   112,    60,   114,   115,   177,   177,   152,   233,    67,
     236,   177,   236,    71,    37,   236,   236,   163,     1,   165,
     236,   177,   123,   169,   141,    48,    84,   173,   174,   175,
     176,    14,    37,   123,   180,   181,   177,    60,   183,   150,
     177,   177,   188,    48,    67,   123,   141,   123,    71,    72,
      33,    34,   197,   164,   112,    60,   177,    40,   123,   117,
     123,    84,    67,   177,   177,   177,    71,    72,   123,   214,
     215,   217,   141,   219,   123,   220,   222,   123,   136,    84,
     123,   227,   123,   123,   141,   230,   232,   123,   146,   147,
     148,   177,   236,   151,   117,   206,   177,   236,   177,   122,
     177,   123,   141,   177,   177,    88,    89,   177,   131,     1,
     177,   177,   117,   177,   233,    98,    99,   228,   229,   123,
     236,   177,   141,   146,   147,   148,   131,   236,   236,    21,
     236,   236,   236,    25,   236,   118,   119,   236,   236,   141,
     141,   146,   147,   148,   141,   141,   141,   177,   233,   141,
     133,   141,   236,   233,   236,     0,     1,    49,   233,   142,
       5,    53,   220,   221,   236,    10,   177,   177,   177,   177,
      62,   177,   230,   141,   177,   141,    68,   141,    23,   141,
      25,   141,   141,    28,   141,   208,   141,   141,   233,   236,
      35,    21,    22,    85,   236,   177,   233,   220,   236,     1,
     233,     3,     1,   208,     6,    50,   233,   230,   177,    11,
     236,   141,   177,    58,    59,   220,    61,   123,   141,    49,
     141,   113,    24,    25,    26,   230,   177,   177,    30,   121,
      29,   177,    62,   177,   141,   177,   236,    82,    68,   233,
     223,   224,   225,   236,   136,   233,    48,   233,    93,    94,
      52,    53,   144,   145,   233,    85,   199,   200,   201,   202,
     203,   204,   205,   233,   236,   236,   111,    21,    22,   236,
     233,   141,   233,   141,    76,   233,    78,   233,   141,   171,
     172,   233,   127,   113,   233,   233,   233,   141,   233,    91,
     141,   121,   122,   233,   233,    49,   123,   141,   236,   236,
     236,   100,   101,   102,   236,   236,   105,   152,    62,   236,
     112,   236,   236,   112,    68,   177,   161,   162,   236,   236,
     236,   166,   167,   153,   236,   236,   125,   236,   236,   221,
     177,    85,   236,   236,   236,   236,   236,   233,   140,   233,
     139,   236,   172,   233,   233,   233,   233,   233,   233,   151,
     233,   233,   233,   233,   233,   233,   233,   233,   160,   113,
     159,   233,   233,   184,   185,   186,   187,   121,   189,   190,
     236,   192,   193,   194,   233,   233,   197,   233,   233,   141,
     233,   233,   141,   233,   233,   233,   207,   208,   209,   210,
     211,   212,   213,   233,   233,   216,   233,   233,   233,   153,
     184,   185,   186,   187,   233,   189,   190,   233,   192,   193,
     194,   233,   141,   197,   233,   233,   233,   233,   172,   233,
     233,   233,   233,   207,   208,   209,   210,   211,   212,   213,
     233,   141,   216,   233,   141,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   141,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   141,   141,   141,   236,   236,
     236,   236,   236,   236,   141,   236,   236,   141,   236,   236,
     236,   236,   123,   236,   236,   236,   236,   236,   236,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   123,   233,   233,   123,   233,   123,
     236,   233,   236,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   141,   233,   233,   123,   233,   233,   233,
     141,   141,   141,   177,   177,   177,   141,   236,   141,   141,
     141,   141,   123,   141,   233,   141,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   182,   141,   141,
     233,   233,   177,   141,   177,   177,   236,   141,   141,   177,
     177,   177,   233,   177,   233,   233,   233,   233,   177,   233,
     233,   233,   177,   177,   177,   177,   177,   233,   233,   123,
     285,   251,    71,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,  1283,   233,
     233,   233,   233,   233,   738,  1246,   233,   455,  1139,   320,
    1188,  1058,   479,   516,   508,  1272,  1274,   568,  1278,  1213,
     172,  1117,   447,  1115,  1228,   436,   359,  1230,    93,    -1,
      -1,    -1,    -1,   233,   233,   233,   233,   233,   233,   233,
     371,    -1,    -1,   233,   233,    -1,   233,   233,   233,    -1,
      -1,   233,   233,   233,   233,   233,   233,   233,   233,   597,
      -1,   365,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   239,     0,     1,     5,    10,    23,    25,    28,    35,
      50,    58,    59,    61,    82,    93,    94,   111,   127,   152,
     161,   162,   166,   167,   240,   245,   250,   263,   269,   280,
     309,   324,   333,   356,   363,   373,   382,   409,   415,   421,
     426,   432,   493,   509,   527,   233,   234,   235,   334,   235,
     310,   383,   416,   422,   427,   235,   494,   410,   325,   235,
     235,   281,   357,   235,   235,   364,   374,     1,    36,    46,
     112,   264,   265,   266,   267,   268,   235,     1,    14,    33,
      34,    40,    88,    89,    98,    99,   118,   119,   133,   142,
     223,   224,   225,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     141,   311,   315,   141,   384,   388,   235,   235,   235,     1,
       8,     9,    13,    20,    27,    31,    32,    38,    41,    42,
      43,    45,    51,    65,    66,    69,    75,    79,    80,    83,
      86,    87,    96,    97,   103,   104,   106,   107,   108,   109,
     120,   129,   130,   132,   134,   135,   138,   163,   165,   169,
     173,   174,   175,   176,   180,   181,   188,   217,   219,   222,
     227,   232,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     484,   488,   489,   490,   491,   492,   235,   235,   235,     1,
      55,    56,    57,    63,    95,   128,   198,   226,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,     1,   110,
     137,   246,   247,   248,   249,   141,   282,   286,   235,     1,
      39,    54,    70,    73,    74,    92,   528,   529,   530,   531,
     532,   533,   534,   535,     1,    36,    77,   112,   114,   115,
     150,   164,   206,   228,   229,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   235,   235,   236,
     236,   236,   234,   265,     1,    21,    25,    49,    53,    62,
      68,    85,   113,   121,   136,   144,   145,   171,   172,   221,
     335,   336,   337,   338,   339,   340,   341,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   234,   511,   235,   235,     1,    81,   143,   417,
     418,   419,   420,     1,    81,   423,   424,   425,     1,   112,
     143,   428,   429,   430,   431,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   485,   236,   481,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   234,   434,     1,
       4,    44,    47,    94,   112,   221,   495,   496,   497,   498,
     499,   503,   504,   505,     1,   143,   221,   411,   412,   413,
     414,     1,    76,    81,   140,   326,   327,   328,   331,   332,
     236,   236,   236,   236,   236,   236,   236,   236,   234,   271,
     236,   236,   234,   247,   235,     1,    23,   116,   143,   358,
     359,   360,   361,   362,   236,   236,   236,   236,   236,   236,
     234,   529,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   234,   252,     1,   112,   168,   221,   365,   366,
     367,   368,   369,     1,   112,   168,   375,   376,   377,   378,
     141,   141,   141,   233,   236,   236,   236,   342,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   234,
     336,   177,   123,   123,   177,   123,   242,   242,   123,   123,
     177,   177,   177,   177,   177,   177,   177,   233,     1,    29,
     100,   101,   102,   105,   112,   125,   139,   159,   312,   313,
     314,   316,   317,   318,   319,   320,   321,   322,   323,     1,
       3,     6,    11,    24,    25,    26,    30,    48,    52,    53,
      76,    78,    91,   112,   140,   151,   160,   385,   386,   387,
     389,   390,   391,   392,   393,   394,   395,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   236,   236,   234,   418,
     236,   234,   424,   236,   236,   234,   429,   177,   242,   177,
     242,   123,   141,   123,   177,   177,   177,   123,   141,   177,
     123,   123,   123,   177,   242,   177,   123,   141,   177,   123,
     123,   123,   242,   123,   141,   123,   123,   177,   236,   177,
     236,   242,   242,   177,   141,   177,   177,   177,   178,   177,
     178,   177,   177,   242,   242,   123,   244,   242,   177,   177,
     177,   177,   233,   506,   236,   236,   500,   236,   236,   234,
     496,   236,   236,   234,   412,   236,   236,   236,   234,   327,
     141,   141,   141,   141,   199,   200,   201,   202,   203,   204,
     205,   141,   141,   177,   233,   141,   141,   233,     1,     5,
      25,    37,    48,    53,    60,    67,    71,    84,   112,   117,
     136,   146,   147,   148,   151,   220,   221,   230,   283,   284,
     285,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   236,
     236,   236,   234,   359,   177,   177,   177,   177,   177,   242,
     233,   141,   177,   141,   141,   141,   141,   141,   123,   141,
     141,   233,   236,   370,   236,   234,   366,   236,   379,   234,
     376,   233,   233,   233,   177,   141,   177,   236,   177,   177,
     177,   177,   177,   141,   123,   141,   141,   177,   141,   233,
     233,   233,   233,   233,   154,   155,   156,   157,   158,   241,
     242,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   234,   313,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   396,   236,   236,   236,   236,   236,   236,   236,
     234,   386,   141,   141,   233,   141,   233,   141,   141,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   184,   185,   186,   187,   189,   190,   192,   193,   194,
     197,   207,   208,   209,   210,   211,   212,   213,   216,   486,
     487,   233,   184,   185,   186,   187,   189,   190,   192,   193,
     194,   197,   207,   208,   209,   210,   211,   212,   213,   216,
     482,   483,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,    15,    16,    17,   243,
     244,   233,   233,   233,   233,   233,   233,   236,   242,   177,
     236,   141,   141,   233,   141,   141,   233,   141,   141,   123,
     329,   330,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   236,
     236,   236,   236,   305,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   234,   284,
     141,   141,   141,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     141,   236,   141,   233,   141,   236,   233,   233,   233,   233,
      21,    22,    49,    62,    68,    85,   113,   121,   122,   153,
     172,   343,   344,   345,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   241,   241,   241,   241,   241,
     242,   123,   123,   123,   123,   141,   123,   242,   244,   233,
     141,   195,   196,   177,   141,   141,   177,   177,   177,   141,
     236,   141,   141,   141,   141,   123,   141,   141,   233,   233,
     233,   233,   233,   233,   233,   237,   233,   237,   243,   243,
     243,    12,   179,   507,   508,   233,   233,    12,   179,   501,
     502,   233,   233,   233,   233,   233,   233,   182,   233,   237,
     177,   141,   177,   177,   236,   177,   177,   177,   177,   141,
     177,   141,   177,   177,   177,   141,   177,   141,   177,   233,
     233,   233,   233,   233,    84,   152,   183,   197,   214,   215,
     220,   230,   371,   372,   233,   233,    84,   152,   183,   197,
     214,   215,   220,   230,   380,   381,   345,   233,   237,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,    11,    13,
      26,    30,    90,   122,   218,   397,   398,   399,   233,   233,
     233,   233,   233,   233,   233,   487,   483,   233,   237,   233,
     237,   123,   330,   233,   233,   233,   233,     5,    37,    48,
      60,    67,    71,    72,    84,   117,   122,   131,   146,   147,
     148,   208,   220,   230,   306,   307,   308,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   237,   233,   237,   344,   399,   233,   237,   508,
     502,   308,   233,   237,   372,   381,   398,   307
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
#line 393 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 28:
#line 395 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number);
		}
    break;

  case 29:
#line 399 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number);
		}
    break;

  case 30:
#line 403 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number);
		}
    break;

  case 31:
#line 407 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number);
		}
    break;

  case 32:
#line 411 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number);
		}
    break;

  case 33:
#line 415 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number);
		}
    break;

  case 34:
#line 420 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 36:
#line 421 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
    break;

  case 37:
#line 422 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
    break;

  case 38:
#line 423 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
    break;

  case 39:
#line 424 "ircd_parser.y"
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
    break;

  case 46:
#line 438 "ircd_parser.y"
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
#line 455 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 62:
#line 479 "ircd_parser.y"
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
      yyerror("Ignoring config file entry rsa_private_key -- file open failed");
      break;
    }

    ServerInfo.rsa_private_key = (RSA *)PEM_read_bio_RSAPrivateKey(file, NULL, 0, NULL);

    if (ServerInfo.rsa_private_key == NULL)
    {
      yyerror("Ignoring config file entry rsa_private_key -- "
              "couldn't extract key");
      break;
    }

    if (!RSA_check_key(ServerInfo.rsa_private_key))
    {
      yyerror("Ignoring config file entry rsa_private_key -- invalid key");
      break;
    }

    /* require 2048 bit (256 byte) key */
    if (RSA_size(ServerInfo.rsa_private_key) != 256)
    {
      yyerror("Ignoring config file entry rsa_private_key -- not 2048 bit");
      break;
    }

    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif
}
    break;

  case 63:
#line 534 "ircd_parser.y"
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

  case 64:
#line 548 "ircd_parser.y"
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

  case 65:
#line 566 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 66:
#line 575 "ircd_parser.y"
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

  case 67:
#line 589 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 68:
#line 598 "ircd_parser.y"
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

  case 69:
#line 626 "ircd_parser.y"
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
}
    break;

  case 70:
#line 656 "ircd_parser.y"
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

  case 71:
#line 672 "ircd_parser.y"
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

  case 79:
#line 728 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 80:
#line 737 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 81:
#line 746 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 94:
#line 769 "ircd_parser.y"
    {
                        }
    break;

  case 95:
#line 773 "ircd_parser.y"
    {
                        }
    break;

  case 96:
#line 777 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 781 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 98:
#line 788 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 99:
#line 795 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 100:
#line 802 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 101:
#line 806 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 102:
#line 810 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 103:
#line 814 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 104:
#line 818 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 105:
#line 822 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 106:
#line 826 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 107:
#line 832 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 108:
#line 841 "ircd_parser.y"
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

  case 109:
#line 853 "ircd_parser.y"
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

  case 134:
#line 944 "ircd_parser.y"
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

  case 135:
#line 956 "ircd_parser.y"
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
#line 968 "ircd_parser.y"
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

  case 137:
#line 991 "ircd_parser.y"
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

  case 138:
#line 1003 "ircd_parser.y"
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

  case 139:
#line 1014 "ircd_parser.y"
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

  case 140:
#line 1025 "ircd_parser.y"
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

  case 141:
#line 1067 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 142:
#line 1076 "ircd_parser.y"
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

  case 143:
#line 1087 "ircd_parser.y"
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

  case 144:
#line 1098 "ircd_parser.y"
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

  case 145:
#line 1109 "ircd_parser.y"
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

  case 146:
#line 1120 "ircd_parser.y"
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

  case 147:
#line 1131 "ircd_parser.y"
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

  case 148:
#line 1142 "ircd_parser.y"
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

  case 149:
#line 1153 "ircd_parser.y"
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

  case 150:
#line 1164 "ircd_parser.y"
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

  case 151:
#line 1175 "ircd_parser.y"
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
#line 1186 "ircd_parser.y"
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
#line 1197 "ircd_parser.y"
    {
}
    break;

  case 157:
#line 1201 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 158:
#line 1202 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 159:
#line 1205 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 160:
#line 1212 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 161:
#line 1219 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 162:
#line 1226 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 163:
#line 1233 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 164:
#line 1240 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 165:
#line 1247 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 166:
#line 1254 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 167:
#line 1261 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 168:
#line 1268 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 169:
#line 1275 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 170:
#line 1282 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 171:
#line 1289 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 172:
#line 1296 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 173:
#line 1303 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 174:
#line 1310 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 175:
#line 1323 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 176:
#line 1330 "ircd_parser.y"
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
#line 1357 "ircd_parser.y"
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
#line 1403 "ircd_parser.y"
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
#line 1449 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 194:
#line 1455 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[-1].number);
}
    break;

  case 195:
#line 1461 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 196:
#line 1467 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 197:
#line 1473 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 198:
#line 1479 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[-1].number);
}
    break;

  case 199:
#line 1485 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[-1].number);
}
    break;

  case 200:
#line 1491 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[-1].number);
}
    break;

  case 201:
#line 1500 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_address = NULL;
}
    break;

  case 202:
#line 1504 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 212:
#line 1520 "ircd_parser.y"
    {
  if (ypass == 2)
    add_listener((yyvsp[0].number), listener_address);
}
    break;

  case 213:
#line 1524 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    int i;

    for (i = (yyvsp[-2].number); i <= (yyvsp[0].number); i++)
    {
      add_listener(i, listener_address);
    }
  }
}
    break;

  case 214:
#line 1537 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 215:
#line 1546 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 216:
#line 1558 "ircd_parser.y"
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

  case 217:
#line 1570 "ircd_parser.y"
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

  case 236:
#line 1640 "ircd_parser.y"
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

  case 237:
#line 1669 "ircd_parser.y"
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

  case 238:
#line 1682 "ircd_parser.y"
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

  case 239:
#line 1693 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 240:
#line 1702 "ircd_parser.y"
    {
}
    break;

  case 244:
#line 1706 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 245:
#line 1707 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 246:
#line 1710 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 247:
#line 1718 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 248:
#line 1725 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 249:
#line 1732 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 250:
#line 1739 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 251:
#line 1746 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 252:
#line 1753 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 253:
#line 1760 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 254:
#line 1767 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 255:
#line 1774 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 256:
#line 1783 "ircd_parser.y"
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

  case 257:
#line 1794 "ircd_parser.y"
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

  case 258:
#line 1805 "ircd_parser.y"
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

  case 259:
#line 1816 "ircd_parser.y"
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

  case 260:
#line 1827 "ircd_parser.y"
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

  case 261:
#line 1838 "ircd_parser.y"
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

  case 262:
#line 1850 "ircd_parser.y"
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

  case 263:
#line 1869 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 264:
#line 1879 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[-1].number);
  }
}
    break;

  case 265:
#line 1888 "ircd_parser.y"
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

  case 266:
#line 1903 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 267:
#line 1907 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 274:
#line 1919 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 275:
#line 1928 "ircd_parser.y"
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

  case 276:
#line 1943 "ircd_parser.y"
    {
  if (ypass == 2)
  {
      char def_reason[] = "No reason specified";

      create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 277:
#line 1956 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 278:
#line 1964 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 285:
#line 1975 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 286:
#line 1984 "ircd_parser.y"
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

  case 287:
#line 1999 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 291:
#line 2006 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 292:
#line 2010 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 293:
#line 2014 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 294:
#line 2018 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 295:
#line 2022 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 296:
#line 2026 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 297:
#line 2030 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 298:
#line 2034 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 299:
#line 2043 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    yy_match_item->action = CLUSTER_ALL;
  }
}
    break;

  case 300:
#line 2051 "ircd_parser.y"
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

  case 306:
#line 2068 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 307:
#line 2074 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 311:
#line 2081 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 312:
#line 2085 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 313:
#line 2089 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 314:
#line 2093 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 315:
#line 2097 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 316:
#line 2101 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 317:
#line 2105 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 318:
#line 2109 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 319:
#line 2118 "ircd_parser.y"
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

  case 320:
#line 2136 "ircd_parser.y"
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

  case 343:
#line 2278 "ircd_parser.y"
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

  case 344:
#line 2290 "ircd_parser.y"
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

  case 345:
#line 2302 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 346:
#line 2311 "ircd_parser.y"
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

  case 347:
#line 2323 "ircd_parser.y"
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

  case 348:
#line 2335 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[-1].number);
}
    break;

  case 349:
#line 2341 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 350:
#line 2345 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 351:
#line 2353 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 352:
#line 2362 "ircd_parser.y"
    {
}
    break;

  case 356:
#line 2366 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 357:
#line 2367 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 358:
#line 2370 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 359:
#line 2377 "ircd_parser.y"
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

  case 360:
#line 2388 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 361:
#line 2395 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 362:
#line 2402 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 363:
#line 2409 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 364:
#line 2418 "ircd_parser.y"
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

  case 365:
#line 2459 "ircd_parser.y"
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

  case 366:
#line 2470 "ircd_parser.y"
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

  case 367:
#line 2481 "ircd_parser.y"
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

  case 368:
#line 2496 "ircd_parser.y"
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

  case 369:
#line 2507 "ircd_parser.y"
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

  case 370:
#line 2520 "ircd_parser.y"
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

  case 371:
#line 2533 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 372:
#line 2542 "ircd_parser.y"
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

  case 373:
#line 2577 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 374:
#line 2584 "ircd_parser.y"
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

  case 380:
#line 2603 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 381:
#line 2612 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 382:
#line 2624 "ircd_parser.y"
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

  case 383:
#line 2633 "ircd_parser.y"
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

  case 389:
#line 2649 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 390:
#line 2658 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 391:
#line 2670 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 392:
#line 2678 "ircd_parser.y"
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

  case 397:
#line 2694 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 398:
#line 2706 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(XLINE_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_match_item->reason,"Something about your name");
  }
}
    break;

  case 399:
#line 2715 "ircd_parser.y"
    {
  /* XXX */
}
    break;

  case 405:
#line 2723 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_conf->name, yylval.string);
    collapse(yy_conf->name);
  }
}
    break;

  case 406:
#line 2732 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_match_item->reason);
    DupString(yy_match_item->reason, yylval.string);
  }
}
    break;

  case 463:
#line 2780 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = (yyvsp[-1].number);
}
    break;

  case 464:
#line 2786 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = (yyvsp[-1].number);
}
    break;

  case 465:
#line 2792 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 466:
#line 2798 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 467:
#line 2803 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 468:
#line 2808 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = (yyvsp[-1].number);
}
    break;

  case 469:
#line 2814 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 470:
#line 2820 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 471:
#line 2826 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 472:
#line 2832 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 473:
#line 2838 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 474:
#line 2844 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = (yyvsp[-1].number); 
}
    break;

  case 475:
#line 2850 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = (yyvsp[-1].number);
}
    break;

  case 476:
#line 2856 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = (yyvsp[-1].number);
}
    break;

  case 477:
#line 2862 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[-1].number);
}
    break;

  case 478:
#line 2868 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = (yyvsp[-1].number);
}
    break;

  case 479:
#line 2874 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[-1].number);
}
    break;

  case 480:
#line 2880 "ircd_parser.y"
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

  case 481:
#line 2891 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 482:
#line 2897 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 483:
#line 2906 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 484:
#line 2912 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 485:
#line 2918 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 486:
#line 2924 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 487:
#line 2928 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 488:
#line 2934 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 489:
#line 2938 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 490:
#line 2944 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = (yyvsp[-1].number);
}
    break;

  case 491:
#line 2950 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = (yyvsp[-1].number);
}
    break;

  case 492:
#line 2956 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = (yyvsp[-1].number);
}
    break;

  case 493:
#line 2962 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 494:
#line 2968 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 495:
#line 2974 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 496:
#line 2980 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 497:
#line 2986 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 498:
#line 2997 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = (yyvsp[-1].number);
}
    break;

  case 499:
#line 3003 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = (yyvsp[-1].number);
}
    break;

  case 500:
#line 3009 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = (yyvsp[-1].number);
}
    break;

  case 501:
#line 3015 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = (yyvsp[-1].number);
}
    break;

  case 502:
#line 3021 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 503:
#line 3030 "ircd_parser.y"
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

  case 504:
#line 3062 "ircd_parser.y"
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

  case 505:
#line 3080 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 506:
#line 3086 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 507:
#line 3095 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 508:
#line 3101 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 509:
#line 3106 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 510:
#line 3112 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 514:
#line 3119 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 515:
#line 3123 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 516:
#line 3127 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 517:
#line 3131 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 518:
#line 3135 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 519:
#line 3139 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 520:
#line 3143 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 521:
#line 3147 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 522:
#line 3151 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 523:
#line 3155 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 524:
#line 3159 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 525:
#line 3163 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 526:
#line 3167 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 527:
#line 3171 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 528:
#line 3175 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 529:
#line 3179 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 530:
#line 3183 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 531:
#line 3187 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 532:
#line 3193 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 536:
#line 3200 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 537:
#line 3204 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 538:
#line 3208 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 539:
#line 3212 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 540:
#line 3216 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 541:
#line 3220 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 542:
#line 3224 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 543:
#line 3228 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 544:
#line 3232 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 545:
#line 3236 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 546:
#line 3240 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 547:
#line 3244 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 548:
#line 3248 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 549:
#line 3252 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 550:
#line 3256 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 551:
#line 3260 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 552:
#line 3264 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 553:
#line 3268 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 554:
#line 3274 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = (yyvsp[-1].number);
}
    break;

  case 555:
#line 3280 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = (yyvsp[-1].number);
}
    break;

  case 556:
#line 3286 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = (yyvsp[-1].number);
}
    break;

  case 557:
#line 3292 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = (yyvsp[-1].number);
}
    break;

  case 558:
#line 3298 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 559:
#line 3307 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 560:
#line 3315 "ircd_parser.y"
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

  case 570:
#line 3342 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 571:
#line 3348 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[-1].number);
}
    break;

  case 572:
#line 3354 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 576:
#line 3360 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 577:
#line 3364 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 578:
#line 3370 "ircd_parser.y"
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

  case 579:
#line 3393 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 580:
#line 3402 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 581:
#line 3406 "ircd_parser.y"
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

  case 584:
#line 3446 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 585:
#line 3450 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 605:
#line 3480 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 606:
#line 3486 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 607:
#line 3492 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 608:
#line 3498 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 609:
#line 3504 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = (yyvsp[-1].number);
}
    break;

  case 610:
#line 3510 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
    break;

  case 611:
#line 3516 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 612:
#line 3522 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = (yyvsp[-1].number);
}
    break;

  case 613:
#line 3528 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 614:
#line 3534 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = (yyvsp[-1].number);
}
    break;

  case 615:
#line 3540 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = (yyvsp[-1].number);
}
    break;

  case 616:
#line 3546 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = (yyvsp[-1].number);
}
    break;

  case 617:
#line 3552 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 618:
#line 3558 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 619:
#line 3564 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 630:
#line 3584 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 631:
#line 3590 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 632:
#line 3596 "ircd_parser.y"
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

  case 633:
#line 3610 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 634:
#line 3616 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 635:
#line 3622 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1037 of yacc.c.  */
#line 6738 "y.tab.c"

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



