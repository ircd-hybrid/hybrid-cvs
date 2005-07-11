/* A Bison parser, made by GNU Bison 1.875d.  */

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
/* $Id: y.tab.c,v 7.24 2005/07/11 05:00:25 metalrock Exp $*/

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
     BYTES = 269,
     KBYTES = 270,
     MBYTES = 271,
     GBYTES = 272,
     TBYTES = 273,
     CALLER_ID_WAIT = 274,
     CAN_FLOOD = 275,
     CAN_IDLE = 276,
     CHANNEL = 277,
     CIPHER_PREFERENCE = 278,
     CLASS = 279,
     COMPRESSED = 280,
     COMPRESSION_LEVEL = 281,
     CONNECT = 282,
     CONNECTFREQ = 283,
     CRYPTLINK = 284,
     DEFAULT_CIPHER_PREFERENCE = 285,
     DEFAULT_FLOODCOUNT = 286,
     DEFAULT_SPLIT_SERVER_COUNT = 287,
     DEFAULT_SPLIT_USER_COUNT = 288,
     DENY = 289,
     DESCRIPTION = 290,
     DIE = 291,
     DISABLE_AUTH = 292,
     DISABLE_HIDDEN = 293,
     DISABLE_LOCAL_CHANNELS = 294,
     DISABLE_REMOTE_COMMANDS = 295,
     DOT_IN_IP6_ADDR = 296,
     DOTS_IN_IDENT = 297,
     DURATION = 298,
     EGDPOOL_PATH = 299,
     EMAIL = 300,
     ENABLE = 301,
     ENCRYPTED = 302,
     EXCEED_LIMIT = 303,
     EXEMPT = 304,
     FAILED_OPER_NOTICE = 305,
     FAKENAME = 306,
     IRCD_FLAGS = 307,
     FLATTEN_LINKS = 308,
     FFAILED_OPERLOG = 309,
     FOPERLOG = 310,
     FUSERLOG = 311,
     GECOS = 312,
     GENERAL = 313,
     GLINE = 314,
     GLINES = 315,
     GLINE_EXEMPT = 316,
     GLINE_LOG = 317,
     GLINE_TIME = 318,
     GLINE_MIN_CIDR = 319,
     GLINE_MIN_CIDR6 = 320,
     GLOBAL_KILL = 321,
     NEED_IDENT = 322,
     HAVENT_READ_CONF = 323,
     HIDDEN = 324,
     HIDDEN_ADMIN = 325,
     HIDDEN_OPER = 326,
     HIDE_SERVER_IPS = 327,
     HIDE_SERVERS = 328,
     HIDE_SPOOF_IPS = 329,
     HOST = 330,
     HUB = 331,
     HUB_MASK = 332,
     IDLETIME = 333,
     IGNORE_BOGUS_TS = 334,
     IP = 335,
     KILL = 336,
     KILL_CHASE_TIME_LIMIT = 337,
     KLINE = 338,
     KLINE_EXEMPT = 339,
     KLINE_REASON = 340,
     KLINE_WITH_REASON = 341,
     KNOCK_DELAY = 342,
     KNOCK_DELAY_CHANNEL = 343,
     LAZYLINK = 344,
     LEAF_MASK = 345,
     LINKS_DELAY = 346,
     LISTEN = 347,
     LOGGING = 348,
     LOG_LEVEL = 349,
     MAXIMUM_LINKS = 350,
     MAX_ACCEPT = 351,
     MAX_BANS = 352,
     MAX_CHANS_PER_USER = 353,
     MAX_GLOBAL = 354,
     MAX_IDENT = 355,
     MAX_LOCAL = 356,
     MAX_NICK_CHANGES = 357,
     MAX_NICK_TIME = 358,
     MAX_NUMBER = 359,
     MAX_TARGETS = 360,
     MESSAGE_LOCALE = 361,
     MIN_NONWILDCARD = 362,
     MIN_NONWILDCARD_SIMPLE = 363,
     MODULE = 364,
     MODULES = 365,
     NAME = 366,
     NEED_PASSWORD = 367,
     NETWORK_DESC = 368,
     NETWORK_NAME = 369,
     NICK = 370,
     NICK_CHANGES = 371,
     NO_CREATE_ON_SPLIT = 372,
     NO_JOIN_ON_SPLIT = 373,
     NO_OPER_FLOOD = 374,
     NO_TILDE = 375,
     NOT = 376,
     NUMBER = 377,
     NUMBER_PER_IDENT = 378,
     NUMBER_PER_IP = 379,
     NUMBER_PER_IP_GLOBAL = 380,
     OPERATOR = 381,
     OPER_LOG = 382,
     OPER_ONLY_UMODES = 383,
     OPER_PASS_RESV = 384,
     OPER_SPY_T = 385,
     OPER_UMODES = 386,
     INVITE_OPS_ONLY = 387,
     PACE_WAIT = 388,
     PACE_WAIT_SIMPLE = 389,
     PASSWORD = 390,
     PATH = 391,
     PING_COOKIE = 392,
     PING_TIME = 393,
     PORT = 394,
     SSLPORT = 395,
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
     SSL_CERTIFICATE_FILE = 407,
     RESV = 408,
     RESV_EXEMPT = 409,
     SECONDS = 410,
     MINUTES = 411,
     HOURS = 412,
     DAYS = 413,
     WEEKS = 414,
     SENDQ = 415,
     SEND_PASSWORD = 416,
     SERVERHIDE = 417,
     SERVERINFO = 418,
     SERVLINK_PATH = 419,
     SID = 420,
     TKLINE_EXPIRE_NOTICES = 421,
     T_SHARED = 422,
     T_CLUSTER = 423,
     TYPE = 424,
     SHORT_MOTD = 425,
     SILENT = 426,
     SPOOF = 427,
     SPOOF_NOTICE = 428,
     STATS_I_OPER_ONLY = 429,
     STATS_K_OPER_ONLY = 430,
     STATS_O_OPER_ONLY = 431,
     STATS_P_OPER_ONLY = 432,
     TBOOL = 433,
     TMASKED = 434,
     T_REJECT = 435,
     TS_MAX_DELTA = 436,
     TS_WARN_DELTA = 437,
     TWODOTS = 438,
     T_ALL = 439,
     T_BOTS = 440,
     T_SOFTCALLERID = 441,
     T_CALLERID = 442,
     T_CCONN = 443,
     T_CLIENT_FLOOD = 444,
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
     TRUE_NO_OPER_FLOOD = 473,
     UNKLINE = 474,
     USER = 475,
     USE_EGD = 476,
     USE_EXCEPT = 477,
     USE_INVEX = 478,
     USE_KNOCK = 479,
     USE_LOGGING = 480,
     VHOST = 481,
     VHOST6 = 482,
     XLINE = 483,
     WARN = 484,
     WARN_NO_NLINE = 485
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
#define BYTES 269
#define KBYTES 270
#define MBYTES 271
#define GBYTES 272
#define TBYTES 273
#define CALLER_ID_WAIT 274
#define CAN_FLOOD 275
#define CAN_IDLE 276
#define CHANNEL 277
#define CIPHER_PREFERENCE 278
#define CLASS 279
#define COMPRESSED 280
#define COMPRESSION_LEVEL 281
#define CONNECT 282
#define CONNECTFREQ 283
#define CRYPTLINK 284
#define DEFAULT_CIPHER_PREFERENCE 285
#define DEFAULT_FLOODCOUNT 286
#define DEFAULT_SPLIT_SERVER_COUNT 287
#define DEFAULT_SPLIT_USER_COUNT 288
#define DENY 289
#define DESCRIPTION 290
#define DIE 291
#define DISABLE_AUTH 292
#define DISABLE_HIDDEN 293
#define DISABLE_LOCAL_CHANNELS 294
#define DISABLE_REMOTE_COMMANDS 295
#define DOT_IN_IP6_ADDR 296
#define DOTS_IN_IDENT 297
#define DURATION 298
#define EGDPOOL_PATH 299
#define EMAIL 300
#define ENABLE 301
#define ENCRYPTED 302
#define EXCEED_LIMIT 303
#define EXEMPT 304
#define FAILED_OPER_NOTICE 305
#define FAKENAME 306
#define IRCD_FLAGS 307
#define FLATTEN_LINKS 308
#define FFAILED_OPERLOG 309
#define FOPERLOG 310
#define FUSERLOG 311
#define GECOS 312
#define GENERAL 313
#define GLINE 314
#define GLINES 315
#define GLINE_EXEMPT 316
#define GLINE_LOG 317
#define GLINE_TIME 318
#define GLINE_MIN_CIDR 319
#define GLINE_MIN_CIDR6 320
#define GLOBAL_KILL 321
#define NEED_IDENT 322
#define HAVENT_READ_CONF 323
#define HIDDEN 324
#define HIDDEN_ADMIN 325
#define HIDDEN_OPER 326
#define HIDE_SERVER_IPS 327
#define HIDE_SERVERS 328
#define HIDE_SPOOF_IPS 329
#define HOST 330
#define HUB 331
#define HUB_MASK 332
#define IDLETIME 333
#define IGNORE_BOGUS_TS 334
#define IP 335
#define KILL 336
#define KILL_CHASE_TIME_LIMIT 337
#define KLINE 338
#define KLINE_EXEMPT 339
#define KLINE_REASON 340
#define KLINE_WITH_REASON 341
#define KNOCK_DELAY 342
#define KNOCK_DELAY_CHANNEL 343
#define LAZYLINK 344
#define LEAF_MASK 345
#define LINKS_DELAY 346
#define LISTEN 347
#define LOGGING 348
#define LOG_LEVEL 349
#define MAXIMUM_LINKS 350
#define MAX_ACCEPT 351
#define MAX_BANS 352
#define MAX_CHANS_PER_USER 353
#define MAX_GLOBAL 354
#define MAX_IDENT 355
#define MAX_LOCAL 356
#define MAX_NICK_CHANGES 357
#define MAX_NICK_TIME 358
#define MAX_NUMBER 359
#define MAX_TARGETS 360
#define MESSAGE_LOCALE 361
#define MIN_NONWILDCARD 362
#define MIN_NONWILDCARD_SIMPLE 363
#define MODULE 364
#define MODULES 365
#define NAME 366
#define NEED_PASSWORD 367
#define NETWORK_DESC 368
#define NETWORK_NAME 369
#define NICK 370
#define NICK_CHANGES 371
#define NO_CREATE_ON_SPLIT 372
#define NO_JOIN_ON_SPLIT 373
#define NO_OPER_FLOOD 374
#define NO_TILDE 375
#define NOT 376
#define NUMBER 377
#define NUMBER_PER_IDENT 378
#define NUMBER_PER_IP 379
#define NUMBER_PER_IP_GLOBAL 380
#define OPERATOR 381
#define OPER_LOG 382
#define OPER_ONLY_UMODES 383
#define OPER_PASS_RESV 384
#define OPER_SPY_T 385
#define OPER_UMODES 386
#define INVITE_OPS_ONLY 387
#define PACE_WAIT 388
#define PACE_WAIT_SIMPLE 389
#define PASSWORD 390
#define PATH 391
#define PING_COOKIE 392
#define PING_TIME 393
#define PORT 394
#define SSLPORT 395
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
#define SSL_CERTIFICATE_FILE 407
#define RESV 408
#define RESV_EXEMPT 409
#define SECONDS 410
#define MINUTES 411
#define HOURS 412
#define DAYS 413
#define WEEKS 414
#define SENDQ 415
#define SEND_PASSWORD 416
#define SERVERHIDE 417
#define SERVERINFO 418
#define SERVLINK_PATH 419
#define SID 420
#define TKLINE_EXPIRE_NOTICES 421
#define T_SHARED 422
#define T_CLUSTER 423
#define TYPE 424
#define SHORT_MOTD 425
#define SILENT 426
#define SPOOF 427
#define SPOOF_NOTICE 428
#define STATS_I_OPER_ONLY 429
#define STATS_K_OPER_ONLY 430
#define STATS_O_OPER_ONLY 431
#define STATS_P_OPER_ONLY 432
#define TBOOL 433
#define TMASKED 434
#define T_REJECT 435
#define TS_MAX_DELTA 436
#define TS_WARN_DELTA 437
#define TWODOTS 438
#define T_ALL 439
#define T_BOTS 440
#define T_SOFTCALLERID 441
#define T_CALLERID 442
#define T_CCONN 443
#define T_CLIENT_FLOOD 444
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
#define TRUE_NO_OPER_FLOOD 473
#define UNKLINE 474
#define USER 475
#define USE_EGD 476
#define USE_EXCEPT 477
#define USE_INVEX 478
#define USE_KNOCK 479
#define USE_LOGGING 480
#define VHOST 481
#define VHOST6 482
#define XLINE 483
#define WARN 484
#define WARN_NO_NLINE 485




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
/* Line 191 of yacc.c.  */
#line 644 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 656 "y.tab.c"

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
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
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
#define YYLAST   1247

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  236
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  298
/* YYNRULES -- Number of rules. */
#define YYNRULES  630
/* YYNRULES -- Number of states. */
#define YYNSTATES  1281

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   485

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   235,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   231,
       2,   234,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   233,     2,   232,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230
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
     153,   155,   157,   159,   164,   169,   174,   179,   184,   189,
     194,   199,   204,   209,   214,   220,   223,   225,   227,   229,
     231,   233,   238,   243,   248,   254,   257,   259,   261,   263,
     265,   267,   269,   271,   273,   275,   277,   282,   287,   292,
     297,   302,   307,   312,   317,   322,   327,   332,   337,   342,
     347,   348,   356,   357,   359,   362,   364,   366,   368,   370,
     372,   374,   376,   378,   380,   382,   384,   386,   388,   390,
     392,   394,   396,   398,   400,   402,   407,   409,   414,   419,
     424,   429,   434,   439,   444,   449,   454,   459,   464,   469,
     474,   479,   484,   489,   490,   496,   500,   502,   505,   507,
     509,   511,   513,   515,   517,   519,   521,   523,   525,   527,
     529,   531,   533,   535,   537,   538,   546,   547,   549,   552,
     554,   556,   558,   560,   562,   564,   566,   568,   570,   572,
     574,   579,   581,   586,   591,   596,   601,   606,   611,   616,
     621,   622,   629,   632,   634,   636,   638,   640,   642,   644,
     649,   653,   655,   657,   661,   666,   670,   672,   674,   678,
     683,   688,   689,   696,   699,   701,   703,   705,   707,   709,
     711,   713,   715,   717,   719,   721,   723,   725,   727,   729,
     731,   733,   738,   743,   748,   753,   754,   760,   764,   766,
     769,   771,   773,   775,   777,   779,   781,   783,   785,   787,
     789,   791,   796,   801,   806,   811,   816,   821,   826,   831,
     836,   841,   842,   849,   852,   854,   856,   858,   860,   862,
     867,   872,   877,   878,   885,   888,   890,   892,   894,   896,
     898,   903,   908,   909,   915,   919,   921,   923,   925,   927,
     929,   931,   933,   935,   936,   943,   946,   948,   950,   952,
     954,   959,   960,   966,   970,   972,   974,   976,   978,   980,
     982,   984,   986,   988,   989,   997,   998,  1000,  1003,  1005,
    1007,  1009,  1011,  1013,  1015,  1017,  1019,  1021,  1023,  1025,
    1027,  1029,  1031,  1033,  1035,  1037,  1039,  1041,  1046,  1048,
    1053,  1058,  1063,  1068,  1073,  1078,  1083,  1084,  1090,  1094,
    1096,  1098,  1100,  1102,  1104,  1106,  1111,  1116,  1121,  1126,
    1131,  1136,  1141,  1146,  1151,  1152,  1159,  1162,  1164,  1166,
    1168,  1170,  1175,  1180,  1181,  1188,  1191,  1193,  1195,  1197,
    1199,  1204,  1209,  1210,  1217,  1220,  1222,  1224,  1226,  1231,
    1232,  1239,  1242,  1244,  1246,  1248,  1250,  1255,  1260,  1266,
    1269,  1271,  1273,  1275,  1277,  1279,  1281,  1283,  1285,  1287,
    1289,  1291,  1293,  1295,  1297,  1299,  1301,  1303,  1305,  1307,
    1309,  1311,  1313,  1315,  1317,  1319,  1321,  1323,  1325,  1327,
    1329,  1331,  1333,  1335,  1337,  1339,  1341,  1343,  1345,  1347,
    1349,  1351,  1353,  1355,  1357,  1359,  1361,  1363,  1365,  1367,
    1369,  1371,  1373,  1375,  1380,  1385,  1390,  1395,  1400,  1405,
    1410,  1415,  1420,  1425,  1430,  1435,  1440,  1445,  1450,  1455,
    1460,  1465,  1470,  1475,  1480,  1485,  1490,  1495,  1500,  1505,
    1510,  1515,  1520,  1525,  1530,  1535,  1540,  1545,  1550,  1555,
    1560,  1565,  1570,  1575,  1580,  1585,  1590,  1595,  1600,  1605,
    1606,  1612,  1616,  1618,  1620,  1622,  1624,  1626,  1628,  1630,
    1632,  1634,  1636,  1638,  1640,  1642,  1644,  1646,  1648,  1650,
    1652,  1653,  1659,  1663,  1665,  1667,  1669,  1671,  1673,  1675,
    1677,  1679,  1681,  1683,  1685,  1687,  1689,  1691,  1693,  1695,
    1697,  1699,  1704,  1709,  1714,  1719,  1724,  1725,  1732,  1735,
    1737,  1739,  1741,  1743,  1745,  1747,  1749,  1751,  1756,  1761,
    1762,  1768,  1772,  1774,  1776,  1778,  1783,  1788,  1789,  1795,
    1799,  1801,  1803,  1805,  1811,  1814,  1816,  1818,  1820,  1822,
    1824,  1826,  1828,  1830,  1832,  1834,  1836,  1838,  1840,  1842,
    1844,  1846,  1851,  1856,  1861,  1866,  1871,  1876,  1881,  1886,
    1891,  1896,  1901,  1906,  1911,  1916,  1922,  1925,  1927,  1929,
    1931,  1933,  1935,  1937,  1939,  1941,  1946,  1951,  1956,  1961,
    1966
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     237,     0,    -1,    -1,   237,   238,    -1,   262,    -1,   268,
      -1,   279,    -1,   508,    -1,   307,    -1,   322,    -1,   334,
      -1,   248,    -1,   525,    -1,   357,    -1,   364,    -1,   374,
      -1,   383,    -1,   409,    -1,   415,    -1,   421,    -1,   432,
      -1,   492,    -1,   426,    -1,   243,    -1,     1,   231,    -1,
       1,   232,    -1,    -1,   240,    -1,   122,   239,    -1,   122,
     155,   239,    -1,   122,   156,   239,    -1,   122,   157,   239,
      -1,   122,   158,   239,    -1,   122,   159,   239,    -1,    -1,
     242,    -1,   122,   241,    -1,   122,    14,   241,    -1,   122,
      15,   241,    -1,   122,    16,   241,    -1,   110,   233,   244,
     232,   231,    -1,   244,   245,    -1,   245,    -1,   246,    -1,
     247,    -1,     1,    -1,   109,   234,   141,   231,    -1,   136,
     234,   141,   231,    -1,   163,   233,   249,   232,   231,    -1,
     249,   250,    -1,   250,    -1,   253,    -1,   258,    -1,   261,
      -1,   255,    -1,   256,    -1,   257,    -1,   260,    -1,   252,
      -1,   259,    -1,   254,    -1,   251,    -1,     1,    -1,   152,
     234,   141,   231,    -1,   150,   234,   141,   231,    -1,   111,
     234,   141,   231,    -1,   165,   234,   141,   231,    -1,    35,
     234,   141,   231,    -1,   114,   234,   141,   231,    -1,   113,
     234,   141,   231,    -1,   226,   234,   141,   231,    -1,   227,
     234,   141,   231,    -1,   206,   234,   122,   231,    -1,    76,
     234,   178,   231,    -1,     5,   233,   263,   232,   231,    -1,
     263,   264,    -1,   264,    -1,   265,    -1,   267,    -1,   266,
      -1,     1,    -1,   111,   234,   141,   231,    -1,    45,   234,
     141,   231,    -1,    35,   234,   141,   231,    -1,    93,   233,
     269,   232,   231,    -1,   269,   270,    -1,   270,    -1,   271,
      -1,   272,    -1,   273,    -1,   277,    -1,   278,    -1,   274,
      -1,   276,    -1,   275,    -1,     1,    -1,   198,   234,   141,
     231,    -1,   127,   234,   141,   231,    -1,    62,   234,   141,
     231,    -1,    56,   234,   141,   231,    -1,    54,   234,   141,
     231,    -1,    55,   234,   141,   231,    -1,    94,   234,   199,
     231,    -1,    94,   234,   201,   231,    -1,    94,   234,   205,
     231,    -1,    94,   234,   203,   231,    -1,    94,   234,   204,
     231,    -1,    94,   234,   202,   231,    -1,    94,   234,   200,
     231,    -1,   225,   234,   178,   231,    -1,    -1,   126,   280,
     281,   233,   282,   232,   231,    -1,    -1,   285,    -1,   282,
     283,    -1,   283,    -1,   284,    -1,   286,    -1,   287,    -1,
     289,    -1,   291,    -1,   292,    -1,   293,    -1,   294,    -1,
     295,    -1,   296,    -1,   297,    -1,   298,    -1,   299,    -1,
     300,    -1,   301,    -1,   288,    -1,   290,    -1,   302,    -1,
       1,    -1,   111,   234,   141,   231,    -1,   141,    -1,   220,
     234,   141,   231,    -1,   135,   234,   141,   231,    -1,    47,
     234,   178,   231,    -1,    70,   234,   178,   231,    -1,   151,
     234,   141,   231,    -1,    24,   234,   141,   231,    -1,    66,
     234,   178,   231,    -1,   147,   234,   178,   231,    -1,    83,
     234,   178,   231,    -1,   228,   234,   178,   231,    -1,   219,
     234,   178,   231,    -1,    59,   234,   178,   231,    -1,   116,
     234,   178,   231,    -1,    36,   234,   178,   231,    -1,   146,
     234,   178,   231,    -1,     5,   234,   178,   231,    -1,    -1,
      52,   303,   234,   304,   231,    -1,   304,   235,   305,    -1,
     305,    -1,   121,   306,    -1,   306,    -1,    66,    -1,   147,
      -1,    83,    -1,   219,    -1,   228,    -1,    59,    -1,    36,
      -1,   146,    -1,     5,    -1,    70,    -1,   116,    -1,   208,
      -1,   130,    -1,    71,    -1,   148,    -1,    -1,    24,   308,
     309,   233,   310,   232,   231,    -1,    -1,   313,    -1,   310,
     311,    -1,   311,    -1,   312,    -1,   314,    -1,   315,    -1,
     316,    -1,   317,    -1,   318,    -1,   319,    -1,   320,    -1,
     321,    -1,     1,    -1,   111,   234,   141,   231,    -1,   141,
      -1,   138,   234,   240,   231,    -1,   124,   234,   122,   231,
      -1,    28,   234,   240,   231,    -1,   104,   234,   122,   231,
      -1,    99,   234,   122,   231,    -1,   101,   234,   122,   231,
      -1,   100,   234,   122,   231,    -1,   160,   234,   242,   231,
      -1,    -1,    92,   323,   233,   324,   232,   231,    -1,   324,
     325,    -1,   325,    -1,   326,    -1,   329,    -1,   332,    -1,
     333,    -1,     1,    -1,   139,   234,   327,   231,    -1,   327,
     235,   328,    -1,   328,    -1,   122,    -1,   122,   183,   122,
      -1,   140,   234,   330,   231,    -1,   330,   235,   331,    -1,
     331,    -1,   122,    -1,   122,   183,   122,    -1,    80,   234,
     141,   231,    -1,    75,   234,   141,   231,    -1,    -1,    10,
     335,   233,   336,   232,   231,    -1,   336,   337,    -1,   337,
      -1,   338,    -1,   339,    -1,   341,    -1,   342,    -1,   347,
      -1,   348,    -1,   349,    -1,   351,    -1,   352,    -1,   353,
      -1,   340,    -1,   354,    -1,   355,    -1,   350,    -1,   356,
      -1,     1,    -1,   220,   234,   141,   231,    -1,   135,   234,
     141,   231,    -1,   173,   234,   178,   231,    -1,    24,   234,
     141,   231,    -1,    -1,    52,   343,   234,   344,   231,    -1,
     344,   235,   345,    -1,   345,    -1,   121,   346,    -1,   346,
      -1,   173,    -1,    48,    -1,    84,    -1,    67,    -1,    20,
      -1,    21,    -1,   120,    -1,    61,    -1,   154,    -1,   112,
      -1,    84,   234,   178,   231,    -1,    67,   234,   178,   231,
      -1,    48,   234,   178,   231,    -1,    20,   234,   178,   231,
      -1,   120,   234,   178,   231,    -1,    61,   234,   178,   231,
      -1,   172,   234,   141,   231,    -1,   145,   234,   141,   231,
      -1,   144,   234,   122,   231,    -1,   112,   234,   178,   231,
      -1,    -1,   153,   358,   233,   359,   232,   231,    -1,   359,
     360,    -1,   360,    -1,   361,    -1,   362,    -1,   363,    -1,
       1,    -1,   143,   234,   141,   231,    -1,    22,   234,   141,
     231,    -1,   115,   234,   141,   231,    -1,    -1,   167,   365,
     233,   366,   232,   231,    -1,   366,   367,    -1,   367,    -1,
     368,    -1,   369,    -1,   370,    -1,     1,    -1,   111,   234,
     141,   231,    -1,   220,   234,   141,   231,    -1,    -1,   169,
     371,   234,   372,   231,    -1,   372,   235,   373,    -1,   373,
      -1,    83,    -1,   219,    -1,   228,    -1,   215,    -1,   153,
      -1,   214,    -1,   184,    -1,    -1,   168,   375,   233,   376,
     232,   231,    -1,   376,   377,    -1,   377,    -1,   378,    -1,
     379,    -1,     1,    -1,   111,   234,   141,   231,    -1,    -1,
     169,   380,   234,   381,   231,    -1,   381,   235,   382,    -1,
     382,    -1,    83,    -1,   219,    -1,   228,    -1,   215,    -1,
     153,    -1,   214,    -1,   197,    -1,   184,    -1,    -1,    27,
     384,   385,   233,   386,   232,   231,    -1,    -1,   389,    -1,
     386,   387,    -1,   387,    -1,   388,    -1,   390,    -1,   391,
      -1,   392,    -1,   393,    -1,   394,    -1,   395,    -1,   396,
      -1,   405,    -1,   406,    -1,   407,    -1,   404,    -1,   401,
      -1,   403,    -1,   402,    -1,   400,    -1,   408,    -1,     1,
      -1,   111,   234,   141,   231,    -1,   141,    -1,    75,   234,
     141,   231,    -1,   161,   234,   141,   231,    -1,     3,   234,
     141,   231,    -1,   139,   234,   122,   231,    -1,     6,   234,
     195,   231,    -1,     6,   234,   196,   231,    -1,    51,   234,
     141,   231,    -1,    -1,    52,   397,   234,   398,   231,    -1,
     398,   235,   399,    -1,   399,    -1,    89,    -1,    25,    -1,
      29,    -1,    11,    -1,    13,    -1,   151,   234,   141,   231,
      -1,    47,   234,   178,   231,    -1,    29,   234,   178,   231,
      -1,    25,   234,   178,   231,    -1,    11,   234,   178,   231,
      -1,    77,   234,   141,   231,    -1,    90,   234,   141,   231,
      -1,    24,   234,   141,   231,    -1,    23,   234,   141,   231,
      -1,    -1,    81,   410,   233,   411,   232,   231,    -1,   411,
     412,    -1,   412,    -1,   413,    -1,   414,    -1,     1,    -1,
     220,   234,   141,   231,    -1,   143,   234,   141,   231,    -1,
      -1,    34,   416,   233,   417,   232,   231,    -1,   417,   418,
      -1,   418,    -1,   419,    -1,   420,    -1,     1,    -1,    80,
     234,   141,   231,    -1,   143,   234,   141,   231,    -1,    -1,
      49,   422,   233,   423,   232,   231,    -1,   423,   424,    -1,
     424,    -1,   425,    -1,     1,    -1,    80,   234,   141,   231,
      -1,    -1,    57,   427,   233,   428,   232,   231,    -1,   428,
     429,    -1,   429,    -1,   430,    -1,   431,    -1,     1,    -1,
     111,   234,   141,   231,    -1,   143,   234,   141,   231,    -1,
      58,   233,   433,   232,   231,    -1,   433,   434,    -1,   434,
      -1,   440,    -1,   441,    -1,   443,    -1,   444,    -1,   445,
      -1,   446,    -1,   447,    -1,   448,    -1,   449,    -1,   450,
      -1,   439,    -1,   452,    -1,   453,    -1,   454,    -1,   468,
      -1,   455,    -1,   457,    -1,   459,    -1,   458,    -1,   461,
      -1,   456,    -1,   462,    -1,   463,    -1,   464,    -1,   465,
      -1,   467,    -1,   469,    -1,   466,    -1,   483,    -1,   470,
      -1,   474,    -1,   475,    -1,   479,    -1,   460,    -1,   489,
      -1,   487,    -1,   488,    -1,   471,    -1,   442,    -1,   472,
      -1,   473,    -1,   490,    -1,   478,    -1,   451,    -1,   491,
      -1,   476,    -1,   477,    -1,   437,    -1,   438,    -1,   435,
      -1,   436,    -1,     1,    -1,    64,   234,   122,   231,    -1,
      65,   234,   122,   231,    -1,    13,   234,   178,   231,    -1,
     166,   234,   178,   231,    -1,    82,   234,   122,   231,    -1,
      74,   234,   178,   231,    -1,    79,   234,   178,   231,    -1,
      40,   234,   178,   231,    -1,    50,   234,   178,   231,    -1,
       8,   234,   178,   231,    -1,   103,   234,   240,   231,    -1,
     102,   234,   122,   231,    -1,    96,   234,   122,   231,    -1,
       9,   234,   240,   231,    -1,   182,   234,   240,   231,    -1,
     181,   234,   240,   231,    -1,    68,   234,   122,   231,    -1,
      86,   234,   178,   231,    -1,    85,   234,   141,   231,    -1,
     230,   234,   178,   231,    -1,   176,   234,   178,   231,    -1,
     177,   234,   178,   231,    -1,   175,   234,   178,   231,    -1,
     175,   234,   179,   231,    -1,   174,   234,   178,   231,    -1,
     174,   234,   179,   231,    -1,   133,   234,   240,   231,    -1,
      19,   234,   240,   231,    -1,   134,   234,   240,   231,    -1,
     170,   234,   178,   231,    -1,   119,   234,   178,   231,    -1,
     218,   234,   178,   231,    -1,   129,   234,   178,   231,    -1,
     106,   234,   141,   231,    -1,    78,   234,   240,   231,    -1,
      42,   234,   122,   231,    -1,    95,   234,   122,   231,    -1,
     105,   234,   122,   231,    -1,   164,   234,   141,   231,    -1,
      30,   234,   141,   231,    -1,    26,   234,   122,   231,    -1,
     221,   234,   178,   231,    -1,    44,   234,   141,   231,    -1,
     137,   234,   178,   231,    -1,    37,   234,   178,   231,    -1,
     217,   234,   240,   231,    -1,    -1,   131,   480,   234,   481,
     231,    -1,   481,   235,   482,    -1,   482,    -1,   185,    -1,
     188,    -1,   190,    -1,   193,    -1,   211,    -1,   207,    -1,
     209,    -1,   213,    -1,   212,    -1,   192,    -1,   208,    -1,
     210,    -1,   194,    -1,   216,    -1,   186,    -1,   187,    -1,
     197,    -1,    -1,   128,   484,   234,   485,   231,    -1,   485,
     235,   486,    -1,   486,    -1,   185,    -1,   188,    -1,   190,
      -1,   193,    -1,   211,    -1,   207,    -1,   209,    -1,   213,
      -1,   212,    -1,   192,    -1,   208,    -1,   210,    -1,   194,
      -1,   216,    -1,   186,    -1,   187,    -1,   197,    -1,   107,
     234,   122,   231,    -1,   108,   234,   122,   231,    -1,    31,
     234,   122,   231,    -1,   189,   234,   242,   231,    -1,    41,
     234,   178,   231,    -1,    -1,    60,   493,   233,   494,   232,
     231,    -1,   494,   495,    -1,   495,    -1,   496,    -1,   497,
      -1,   498,    -1,   502,    -1,   503,    -1,   504,    -1,     1,
      -1,    46,   234,   178,   231,    -1,    43,   234,   240,   231,
      -1,    -1,    93,   499,   234,   500,   231,    -1,   500,   235,
     501,    -1,   501,    -1,   180,    -1,    12,    -1,   220,   234,
     141,   231,    -1,   111,   234,   141,   231,    -1,    -1,     4,
     505,   234,   506,   231,    -1,   506,   235,   507,    -1,   507,
      -1,   180,    -1,    12,    -1,    22,   233,   509,   232,   231,
      -1,   509,   510,    -1,   510,    -1,   511,    -1,   512,    -1,
     513,    -1,   514,    -1,   520,    -1,   515,    -1,   516,    -1,
     517,    -1,   518,    -1,   519,    -1,   521,    -1,   522,    -1,
     523,    -1,   524,    -1,     1,    -1,    39,   234,   178,   231,
      -1,   222,   234,   178,   231,    -1,   223,   234,   178,   231,
      -1,   224,   234,   178,   231,    -1,    87,   234,   240,   231,
      -1,    88,   234,   240,   231,    -1,   132,   234,   178,   231,
      -1,    98,   234,   122,   231,    -1,   142,   234,   178,   231,
      -1,    97,   234,   122,   231,    -1,    33,   234,   122,   231,
      -1,    32,   234,   122,   231,    -1,   117,   234,   178,   231,
      -1,   118,   234,   178,   231,    -1,   162,   233,   526,   232,
     231,    -1,   526,   527,    -1,   527,    -1,   528,    -1,   529,
      -1,   530,    -1,   532,    -1,   531,    -1,   533,    -1,     1,
      -1,    53,   234,   178,   231,    -1,    73,   234,   178,   231,
      -1,    91,   234,   240,   231,    -1,    69,   234,   178,   231,
      -1,    38,   234,   178,   231,    -1,    72,   234,   178,   231,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   362,   362,   363,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   391,   391,   392,   396,
     400,   404,   408,   412,   418,   418,   419,   420,   421,   422,
     429,   432,   432,   433,   433,   433,   435,   454,   465,   468,
     469,   470,   470,   471,   471,   472,   472,   473,   474,   474,
     475,   475,   476,   478,   517,   572,   586,   604,   613,   627,
     636,   664,   694,   710,   760,   762,   762,   763,   763,   764,
     764,   766,   775,   784,   796,   798,   799,   801,   801,   802,
     802,   803,   803,   804,   804,   805,   807,   811,   815,   819,
     826,   833,   840,   844,   848,   852,   856,   860,   864,   870,
     880,   879,   972,   972,   973,   973,   974,   974,   974,   974,
     975,   975,   975,   976,   976,   976,   977,   977,   978,   978,
     978,   979,   979,   980,   980,   982,   994,  1006,  1029,  1041,
    1052,  1063,  1105,  1114,  1125,  1136,  1147,  1158,  1169,  1180,
    1191,  1202,  1213,  1225,  1224,  1228,  1228,  1229,  1230,  1232,
    1239,  1246,  1253,  1260,  1267,  1274,  1281,  1288,  1295,  1302,
    1309,  1316,  1323,  1330,  1344,  1343,  1363,  1363,  1365,  1365,
    1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,  1375,
    1377,  1423,  1469,  1475,  1481,  1487,  1493,  1499,  1505,  1511,
    1521,  1520,  1533,  1533,  1534,  1534,  1534,  1534,  1534,  1536,
    1538,  1538,  1540,  1544,  1557,  1559,  1559,  1561,  1565,  1578,
    1587,  1600,  1599,  1673,  1673,  1674,  1674,  1674,  1674,  1675,
    1675,  1676,  1676,  1676,  1677,  1677,  1678,  1678,  1678,  1679,
    1679,  1681,  1710,  1723,  1734,  1744,  1743,  1747,  1747,  1748,
    1749,  1751,  1759,  1766,  1773,  1780,  1787,  1794,  1801,  1808,
    1815,  1824,  1835,  1846,  1857,  1868,  1879,  1891,  1910,  1920,
    1929,  1945,  1944,  1957,  1957,  1958,  1958,  1958,  1958,  1960,
    1969,  1984,  2003,  2002,  2018,  2018,  2019,  2019,  2019,  2019,
    2021,  2030,  2046,  2045,  2051,  2051,  2052,  2056,  2060,  2064,
    2068,  2072,  2076,  2086,  2085,  2107,  2107,  2108,  2108,  2108,
    2110,  2117,  2116,  2122,  2122,  2123,  2127,  2131,  2135,  2139,
    2143,  2147,  2151,  2161,  2160,  2310,  2310,  2311,  2311,  2312,
    2312,  2312,  2313,  2313,  2313,  2314,  2314,  2314,  2315,  2315,
    2315,  2316,  2316,  2316,  2317,  2317,  2318,  2320,  2332,  2344,
    2353,  2365,  2377,  2383,  2387,  2395,  2405,  2404,  2408,  2408,
    2409,  2413,  2421,  2425,  2429,  2435,  2476,  2487,  2498,  2513,
    2524,  2537,  2550,  2559,  2595,  2594,  2617,  2617,  2618,  2618,
    2618,  2620,  2629,  2642,  2641,  2663,  2663,  2664,  2664,  2664,
    2666,  2675,  2688,  2687,  2708,  2708,  2709,  2709,  2711,  2724,
    2723,  2737,  2737,  2738,  2738,  2738,  2740,  2749,  2761,  2764,
    2764,  2765,  2765,  2766,  2766,  2767,  2767,  2768,  2768,  2769,
    2769,  2770,  2770,  2771,  2772,  2772,  2773,  2773,  2774,  2774,
    2775,  2775,  2776,  2776,  2777,  2777,  2778,  2778,  2779,  2780,
    2780,  2781,  2781,  2782,  2783,  2783,  2784,  2784,  2785,  2785,
    2786,  2787,  2787,  2788,  2788,  2789,  2789,  2790,  2790,  2791,
    2791,  2792,  2793,  2797,  2803,  2809,  2815,  2820,  2826,  2832,
    2838,  2844,  2850,  2856,  2862,  2868,  2874,  2880,  2886,  2892,
    2903,  2909,  2918,  2924,  2930,  2936,  2940,  2946,  2950,  2956,
    2962,  2968,  2974,  2980,  2986,  2992,  2998,  3009,  3015,  3021,
    3027,  3033,  3042,  3074,  3092,  3098,  3107,  3113,  3118,  3125,
    3124,  3130,  3130,  3131,  3135,  3139,  3143,  3147,  3151,  3155,
    3159,  3163,  3167,  3171,  3175,  3179,  3183,  3187,  3191,  3195,
    3202,  3201,  3207,  3207,  3208,  3212,  3216,  3220,  3224,  3228,
    3232,  3236,  3240,  3244,  3248,  3252,  3256,  3260,  3264,  3268,
    3272,  3278,  3284,  3290,  3296,  3302,  3312,  3311,  3337,  3337,
    3338,  3339,  3340,  3341,  3342,  3343,  3344,  3346,  3352,  3359,
    3358,  3363,  3363,  3364,  3368,  3374,  3397,  3407,  3406,  3449,
    3449,  3450,  3454,  3463,  3466,  3466,  3467,  3468,  3469,  3470,
    3471,  3472,  3473,  3474,  3475,  3476,  3477,  3478,  3479,  3480,
    3481,  3483,  3489,  3495,  3501,  3507,  3513,  3519,  3525,  3531,
    3537,  3543,  3549,  3555,  3561,  3570,  3573,  3573,  3574,  3574,
    3575,  3576,  3577,  3578,  3579,  3581,  3587,  3593,  3607,  3613,
    3619
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT_PASSWORD", "ACTION", "ADMIN",
  "AFTYPE", "T_ALLOW", "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME",
  "IRCD_AUTH", "AUTOCONN", "T_BLOCK", "BURST_AWAY", "BYTES", "KBYTES",
  "MBYTES", "GBYTES", "TBYTES", "CALLER_ID_WAIT", "CAN_FLOOD", "CAN_IDLE",
  "CHANNEL", "CIPHER_PREFERENCE", "CLASS", "COMPRESSED",
  "COMPRESSION_LEVEL", "CONNECT", "CONNECTFREQ", "CRYPTLINK",
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
  "PING_TIME", "PORT", "SSLPORT", "QSTRING", "QUIET_ON_BAN", "REASON",
  "REDIRPORT", "REDIRSERV", "REHASH", "REMOTE", "REMOTEBAN", "RESTRICTED",
  "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE", "SSL_CERTIFICATE_FILE",
  "RESV", "RESV_EXEMPT", "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS",
  "SENDQ", "SEND_PASSWORD", "SERVERHIDE", "SERVERINFO", "SERVLINK_PATH",
  "SID", "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE",
  "SHORT_MOTD", "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_I_OPER_ONLY",
  "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY", "STATS_P_OPER_ONLY", "TBOOL",
  "TMASKED", "T_REJECT", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS",
  "T_ALL", "T_BOTS", "T_SOFTCALLERID", "T_CALLERID", "T_CCONN",
  "T_CLIENT_FLOOD", "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL",
  "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT",
  "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE",
  "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ",
  "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_UNAUTH", "T_UNRESV", "T_UNXLINE",
  "T_WALLOP", "THROTTLE_TIME", "TRUE_NO_OPER_FLOOD", "UNKLINE", "USER",
  "USE_EGD", "USE_EXCEPT", "USE_INVEX", "USE_KNOCK", "USE_LOGGING",
  "VHOST", "VHOST6", "XLINE", "WARN", "WARN_NO_NLINE", "';'", "'}'", "'{'",
  "'='", "','", "$accept", "conf", "conf_item", "timespec_", "timespec",
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
  "@4", "listen_items", "listen_item", "listen_port", "port_items",
  "port_item", "listen_sslport", "sslport_items", "sslport_item",
  "listen_address", "listen_host", "auth_entry", "@5", "auth_items",
  "auth_item", "auth_user", "auth_passwd", "auth_spoof_notice",
  "auth_class", "auth_flags", "@6", "auth_flags_items", "auth_flags_item",
  "auth_flags_item_atom", "auth_kline_exempt", "auth_need_ident",
  "auth_exceed_limit", "auth_can_flood", "auth_no_tilde",
  "auth_gline_exempt", "auth_spoof", "auth_redir_serv", "auth_redir_port",
  "auth_need_password", "resv_entry", "@7", "resv_items", "resv_item",
  "resv_creason", "resv_channel", "resv_nick", "shared_entry", "@8",
  "shared_items", "shared_item", "shared_name", "shared_user",
  "shared_type", "@9", "shared_types", "shared_type_item", "cluster_entry",
  "@10", "cluster_items", "cluster_item", "cluster_name", "cluster_type",
  "@11", "cluster_types", "cluster_type_item", "connect_entry", "@12",
  "connect_name_b", "connect_items", "connect_item", "connect_name",
  "connect_name_t", "connect_host", "connect_send_password",
  "connect_accept_password", "connect_port", "connect_aftype",
  "connect_fakename", "connect_flags", "@13", "connect_flags_items",
  "connect_flags_item", "connect_rsa_public_key_file", "connect_encrypted",
  "connect_cryptlink", "connect_compressed", "connect_auto",
  "connect_hub_mask", "connect_leaf_mask", "connect_class",
  "connect_cipher_preference", "kill_entry", "@14", "kill_items",
  "kill_item", "kill_user", "kill_reason", "deny_entry", "@15",
  "deny_items", "deny_item", "deny_ip", "deny_reason", "exempt_entry",
  "@16", "exempt_items", "exempt_item", "exempt_ip", "gecos_entry", "@17",
  "gecos_items", "gecos_item", "gecos_name", "gecos_reason",
  "general_entry", "general_items", "general_item",
  "general_gline_min_cidr", "general_gline_min_cidr6",
  "general_burst_away", "general_tkline_expire_notices",
  "general_kill_chase_time_limit", "general_hide_spoof_ips",
  "general_ignore_bogus_ts", "general_disable_remote_commands",
  "general_failed_oper_notice", "general_anti_nick_flood",
  "general_max_nick_time", "general_max_nick_changes",
  "general_max_accept", "general_anti_spam_exit_message_time",
  "general_ts_warn_delta", "general_ts_max_delta",
  "general_havent_read_conf", "general_kline_with_reason",
  "general_kline_reason", "general_warn_no_nline",
  "general_stats_o_oper_only", "general_stats_P_oper_only",
  "general_stats_k_oper_only", "general_stats_i_oper_only",
  "general_pace_wait", "general_caller_id_wait",
  "general_pace_wait_simple", "general_short_motd",
  "general_no_oper_flood", "general_true_no_oper_flood",
  "general_oper_pass_resv", "general_message_locale", "general_idletime",
  "general_dots_in_ident", "general_maximum_links", "general_max_targets",
  "general_servlink_path", "general_default_cipher_preference",
  "general_compression_level", "general_use_egd", "general_egdpool_path",
  "general_ping_cookie", "general_disable_auth", "general_throttle_time",
  "general_oper_umodes", "@18", "umode_oitems", "umode_oitem",
  "general_oper_only_umodes", "@19", "umode_items", "umode_item",
  "general_min_nonwildcard", "general_min_nonwildcard_simple",
  "general_default_floodcount", "general_client_flood",
  "general_dot_in_ip6_addr", "gline_entry", "@20", "gline_items",
  "gline_item", "gline_enable", "gline_duration", "gline_logging", "@21",
  "gline_logging_types", "gline_logging_type_item", "gline_user",
  "gline_server", "gline_action", "@22", "gdeny_types", "gdeny_type_item",
  "channel_entry", "channel_items", "channel_item",
  "channel_disable_local_channels", "channel_use_except",
  "channel_use_invex", "channel_use_knock", "channel_knock_delay",
  "channel_knock_delay_channel", "channel_invite_ops_only",
  "channel_max_chans_per_user", "channel_quiet_on_ban", "channel_max_bans",
  "channel_default_split_user_count", "channel_default_split_server_count",
  "channel_no_create_on_split", "channel_no_join_on_split",
  "serverhide_entry", "serverhide_items", "serverhide_item",
  "serverhide_flatten_links", "serverhide_hide_servers",
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
     485,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   236,   237,   237,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   239,   239,   240,   240,
     240,   240,   240,   240,   241,   241,   242,   242,   242,   242,
     243,   244,   244,   245,   245,   245,   246,   247,   248,   249,
     249,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   263,   264,   264,   264,
     264,   265,   266,   267,   268,   269,   269,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   271,   272,   273,   274,
     275,   276,   277,   277,   277,   277,   277,   277,   277,   278,
     280,   279,   281,   281,   282,   282,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   303,   302,   304,   304,   305,   305,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   308,   307,   309,   309,   310,   310,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     323,   322,   324,   324,   325,   325,   325,   325,   325,   326,
     327,   327,   328,   328,   329,   330,   330,   331,   331,   332,
     333,   335,   334,   336,   336,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   338,   339,   340,   341,   343,   342,   344,   344,   345,
     345,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   358,   357,   359,   359,   360,   360,   360,   360,   361,
     362,   363,   365,   364,   366,   366,   367,   367,   367,   367,
     368,   369,   371,   370,   372,   372,   373,   373,   373,   373,
     373,   373,   373,   375,   374,   376,   376,   377,   377,   377,
     378,   380,   379,   381,   381,   382,   382,   382,   382,   382,
     382,   382,   382,   384,   383,   385,   385,   386,   386,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   388,   389,   390,
     391,   392,   393,   394,   394,   395,   397,   396,   398,   398,
     399,   399,   399,   399,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   410,   409,   411,   411,   412,   412,
     412,   413,   414,   416,   415,   417,   417,   418,   418,   418,
     419,   420,   422,   421,   423,   423,   424,   424,   425,   427,
     426,   428,   428,   429,   429,   429,   430,   431,   432,   433,
     433,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   457,   458,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   480,
     479,   481,   481,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     484,   483,   485,   485,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   487,   488,   489,   490,   491,   493,   492,   494,   494,
     495,   495,   495,   495,   495,   495,   495,   496,   497,   499,
     498,   500,   500,   501,   501,   502,   503,   505,   504,   506,
     506,   507,   507,   508,   509,   509,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   526,   527,   527,
     527,   527,   527,   527,   527,   528,   529,   530,   531,   532,
     533
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
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     1,     1,     4,
       3,     1,     1,     3,     4,     3,     1,     1,     3,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     0,     5,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     1,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       4,     4,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     2,     1,     1,     1,     1,
       4,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     7,     0,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     4,
       4,     4,     4,     4,     4,     4,     0,     5,     3,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       4,     4,     0,     6,     2,     1,     1,     1,     4,     0,
       6,     2,     1,     1,     1,     1,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     0,
       5,     3,     1,     1,     1,     4,     4,     0,     5,     3,
       1,     1,     1,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       2,     0,     1,     0,     0,   221,     0,   174,   323,   383,
     392,   399,     0,   556,   374,   200,     0,     0,   110,   271,
       0,     0,   282,   303,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     176,   325,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   600,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   585,   586,   587,   588,   589,   591,   592,
     593,   594,   595,   590,   596,   597,   598,   599,   191,     0,
     177,   348,     0,   326,     0,     0,     0,   462,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   530,
       0,   509,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     410,   460,   461,   458,   459,   421,   411,   412,   449,   413,
     414,   415,   416,   417,   418,   419,   420,   454,   422,   423,
     424,   426,   431,   427,   429,   428,   444,   430,   432,   433,
     434,   435,   438,   436,   425,   437,   440,   448,   450,   451,
     441,   442,   456,   457,   453,   443,   439,   446,   447,   445,
     452,   455,     0,     0,     0,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    92,
      94,    93,    90,    91,    45,     0,     0,     0,    42,    43,
      44,   136,     0,   113,     0,   624,     0,     0,     0,     0,
       0,     0,     0,   617,   618,   619,   620,   622,   621,   623,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    61,    58,    51,    60,    54,    55,
      56,    52,    59,    57,    53,     0,     0,     0,     0,     0,
       0,    75,   240,     0,     0,     0,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     225,   226,   235,   227,   228,   229,   230,   231,   238,   232,
     233,   234,   236,   237,   239,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     584,     0,     0,   389,     0,     0,     0,   386,   387,   388,
     397,     0,     0,   395,   396,   405,     0,     0,     0,   402,
     403,   404,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   409,   566,   577,     0,     0,   569,
       0,     0,     0,   559,   560,   561,   562,   563,   564,   565,
     380,     0,     0,     0,   377,   378,   379,   208,     0,     0,
       0,     0,     0,   203,   204,   205,   206,   207,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,    41,     0,   278,     0,     0,     0,     0,   274,   275,
     276,   277,     0,     0,     0,     0,     0,     0,     0,   616,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,   289,     0,   292,     0,     0,   285,   286,
     287,   288,   309,     0,   311,     0,   306,   307,   308,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   583,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   346,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   356,     0,     0,
       0,     0,     0,     0,     0,     0,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   344,   341,   343,   342,   340,
     337,   338,   339,   345,     0,     0,     0,   385,     0,     0,
     394,     0,     0,     0,   401,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,   408,
       0,     0,     0,     0,     0,     0,     0,   558,     0,     0,
       0,   376,     0,     0,     0,     0,     0,   202,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,    40,   134,     0,     0,     0,
       0,   153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,   116,   117,   118,
     131,   119,   132,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   133,     0,     0,     0,     0,   273,
       0,     0,     0,     0,     0,     0,   615,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,   284,     0,     0,     0,   305,    83,    82,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   222,   612,   611,   601,
      26,    26,    26,    26,    26,    28,    27,   605,   606,   610,
     608,   613,   614,   607,   609,   602,   603,   604,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   327,     0,     0,
     384,     0,   393,     0,     0,   400,   472,   476,   465,   490,
     503,   502,   553,   507,   470,   555,   498,   505,   471,   463,
     464,   479,   468,   497,   469,   467,   481,   480,   499,   475,
     474,   473,   500,   496,   551,   552,   493,   534,   548,   549,
     535,   536,   543,   537,   546,   550,   539,   544,   540,   545,
     538,   542,   541,   547,     0,   533,   495,   513,   527,   528,
     514,   515,   522,   516,   525,   529,   518,   523,   519,   524,
     517,   521,   520,   526,     0,   512,   489,   491,   506,   501,
     466,   492,   487,   488,   485,   486,   483,   484,   478,   477,
      34,    34,    34,    36,    35,   554,   508,   494,   504,   482,
       0,     0,     0,     0,     0,     0,   557,     0,     0,   375,
       0,     0,   212,     0,   211,   217,     0,   216,   201,   100,
     101,    99,    98,   102,   108,   103,   107,   105,   106,   104,
      97,    96,   109,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,   272,   629,
     625,   628,   630,   626,   627,    67,    73,    65,    69,    68,
      64,    63,    66,    72,    70,    71,     0,     0,     0,   283,
       0,     0,   304,   264,   244,   263,   255,   256,   252,   258,
     254,   253,   260,   257,     0,   259,   251,     0,   248,   250,
     266,   262,   261,   270,   265,   242,   269,   268,   267,   243,
     241,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   324,   390,   391,   398,   406,   407,
     531,     0,   510,     0,    37,    38,    39,   582,   581,     0,
     580,   568,   567,   574,   573,     0,   572,   576,   575,   382,
     381,   220,   219,     0,   209,     0,     0,   214,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,   280,   281,
     279,   290,   296,   300,   302,   301,   299,   297,   298,     0,
     295,   291,   310,   315,   319,   322,   321,   320,   318,   316,
     317,     0,   314,   249,   246,     0,   194,   196,   198,   197,
     195,   190,   193,   192,   199,   351,   353,   354,   369,   373,
     372,   368,   367,   366,   355,   363,   364,   361,   362,   360,
       0,   359,   349,   370,   371,   347,   352,   365,   350,   532,
     511,   578,     0,   570,     0,   213,   210,   218,   215,   152,
     142,   150,   139,   167,   165,   164,   159,   168,   172,   161,
     169,     0,   171,   166,   160,   173,   170,   162,   163,     0,
     156,   158,   148,   143,   140,   145,   135,   149,   138,   151,
     144,   141,   147,   137,   146,   293,     0,   312,     0,   247,
     357,     0,   579,   571,   157,   154,     0,   294,   313,   358,
     155
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    24,   815,   816,   953,   954,    25,   247,   248,
     249,   250,    26,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,    27,    71,    72,    73,
      74,    75,    28,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,    29,    61,   252,   735,   736,   737,   253,
     738,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   999,  1249,  1250,
    1251,    30,    50,   109,   566,   567,   568,   110,   569,   570,
     571,   572,   573,   574,   575,   576,    31,    58,   452,   453,
     454,   973,   974,   455,   976,   977,   456,   457,    32,    48,
     318,   319,   320,   321,   322,   323,   324,   526,  1057,  1058,
    1059,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,    33,    62,   477,   478,   479,   480,   481,    34,    65,
     507,   508,   509,   510,   511,   780,  1169,  1170,    35,    66,
     515,   516,   517,   518,   785,  1181,  1182,    36,    51,   112,
     595,   596,   597,   113,   598,   599,   600,   601,   602,   603,
     604,   848,  1210,  1211,   605,   606,   607,   608,   609,   610,
     611,   612,   613,    37,    57,   443,   444,   445,   446,    38,
      52,   356,   357,   358,   359,    39,    53,   362,   363,   364,
      40,    54,   368,   369,   370,   371,    41,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   405,   934,   935,   216,   403,   914,
     915,   217,   218,   219,   220,   221,    42,    56,   432,   433,
     434,   435,   436,   683,  1125,  1126,   437,   438,   439,   680,
    1119,  1120,    43,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    44,
     262,   263,   264,   265,   266,   267,   268,   269
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -771
static const short int yypact[] =
{
    -771,   706,  -771,  -217,  -230,  -771,  -213,  -771,  -771,  -771,
    -771,  -771,  -205,  -771,  -771,  -771,  -203,  -200,  -771,  -771,
    -197,  -180,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,    12,  -178,   522,
     -66,   -64,  -153,  -145,  -131,   400,  -128,  -125,  -113,   300,
      23,    -6,   -73,   352,   380,   -56,   -53,  -771,   -36,   -33,
     -19,    11,  -771,  -771,  -771,  -771,   564,  -771,   -16,   -12,
      13,    25,    37,    47,    50,    52,    55,    61,    65,    74,
      75,    80,   180,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,   -13,
    -771,  -771,    15,  -771,     5,     3,     7,  -771,    82,    85,
      87,    91,    92,    94,    97,   100,   107,   110,   111,   115,
     117,   118,   123,   135,   136,   138,   139,   140,   146,   149,
     153,   154,   155,   157,   158,   162,   164,   165,   172,  -771,
     176,  -771,   182,   184,   195,   199,   200,   204,   205,   211,
     212,   213,   214,   215,   217,   218,   220,   221,   227,     8,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,   289,     4,    17,  -771,   228,   232,   233,   235,
     239,   241,   246,   247,   108,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,   249,   250,    22,  -771,  -771,
    -771,  -771,    19,  -771,   317,  -771,   253,   258,   266,   267,
     276,   278,   238,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,   279,   280,   281,   282,   283,   286,   287,   290,   292,
     293,   312,   152,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,   202,     6,   116,   131,   201,
     -77,  -771,  -771,   313,   314,   315,  -771,   316,   318,   319,
     323,   324,   325,   326,   328,   335,   337,   338,   203,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,   263,   264,   236,   429,   429,
     451,   456,   401,   405,   407,   413,   414,   415,   416,   364,
    -771,   719,   750,  -771,   362,   366,    18,  -771,  -771,  -771,
    -771,   370,    21,  -771,  -771,  -771,   371,   374,    88,  -771,
    -771,  -771,   435,   429,   437,   429,   500,   295,   501,   446,
     449,   450,   507,   491,   455,   513,   514,   515,   460,   429,
     464,   521,   503,   471,   528,   529,   533,   429,   534,   512,
     537,   538,   484,   431,   485,   432,   429,   429,   489,   527,
     495,   496,   -79,   -10,   497,   504,   429,   429,   547,   429,
     505,   508,   511,   454,  -771,  -771,  -771,   447,   459,  -771,
     461,   462,   257,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,   463,   466,    62,  -771,  -771,  -771,  -771,   468,   469,
     470,   476,    53,  -771,  -771,  -771,  -771,  -771,   549,   553,
     557,   571,   339,   574,   576,   540,   488,  -771,   583,   584,
     498,  -771,   452,  -771,   492,   493,   509,     9,  -771,  -771,
    -771,  -771,   554,   556,   560,   570,   579,   429,   518,  -771,
     590,   580,   594,   601,   611,   621,   624,   626,   646,   628,
     629,   541,  -771,  -771,   542,  -771,   544,    10,  -771,  -771,
    -771,  -771,  -771,   546,  -771,   105,  -771,  -771,  -771,   550,
     551,   555,  -771,   593,   644,   610,   558,   612,   613,   615,
     617,   618,   648,   678,   663,   665,   631,   669,   581,  -771,
     586,   591,   595,   208,   597,   598,   600,   602,   603,   605,
     606,   607,   608,   614,   619,  -771,  -771,   577,   587,   622,
     630,   633,   636,   638,   641,   642,   145,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,   643,   647,
     649,   650,   651,   652,   653,   654,   656,  -771,   657,   658,
     659,   660,   661,   662,   664,   185,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,   674,   683,   620,  -771,   700,   627,
    -771,   701,   703,   632,  -771,   634,   666,   671,   672,   673,
     675,   677,   679,   685,   687,   691,   692,   694,   695,   696,
     697,   698,   699,   702,   711,   717,   723,   724,   726,   728,
     730,   731,   732,   733,   734,   742,   727,   743,   759,   745,
     746,   747,   748,   749,   751,   752,   753,   754,   755,   756,
     757,   758,   760,   151,   761,   762,   763,   764,   765,  -771,
     716,   429,   668,   766,   708,   712,   767,  -771,   714,   721,
     768,  -771,   737,   739,   738,   778,   770,  -771,   771,   772,
     773,   774,   775,   776,   777,   779,   780,   781,   782,   783,
     784,   785,  -771,   786,   788,  -771,  -771,   789,   790,   791,
     792,  -771,   793,   794,   795,   796,   797,   798,   799,   800,
     801,   802,   803,   804,   805,    60,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,   741,   817,   840,   809,  -771,
     810,   811,   812,   813,   814,   815,  -771,   816,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,  -771,   849,
     828,   856,   829,  -771,   868,   830,   832,  -771,  -771,  -771,
    -771,   834,   835,   836,   693,   837,   838,   839,   841,   842,
     843,   844,   845,   846,   847,   848,  -771,  -771,  -771,  -771,
     429,   429,   429,   429,   429,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,   429,   896,
     898,   899,   900,   907,   937,   429,   547,   850,  -771,   920,
      38,   893,   939,   941,   905,   906,   908,   944,   853,   947,
     948,   949,   950,   970,   952,   953,   864,  -771,   865,   866,
    -771,   867,  -771,   869,   870,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -206,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -171,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
     547,   547,   547,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
      14,   871,   872,    20,   873,   874,  -771,   875,   876,  -771,
     877,   878,   722,  -169,  -771,   916,  -164,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,   932,   971,   933,   935,   880,
     938,   940,   942,   943,   974,   945,   976,   946,   951,   978,
     954,   981,   955,   894,  -771,   895,   897,   903,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,   904,   244,   909,  -771,
     910,   473,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,   787,  -771,  -771,  -161,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,   911,   912,   913,   914,
     915,   917,   918,   919,   921,  -771,   922,   923,   924,   925,
     926,   927,   928,   929,   930,   931,   382,   934,   936,   956,
     957,   958,   959,   960,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,   727,  -771,   759,  -771,  -771,  -771,  -771,  -771,  -140,
    -771,  -771,  -771,  -771,  -771,  -106,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  1005,  -771,   738,  1008,  -771,   778,   961,
     962,   963,   964,   531,   965,   966,   967,   968,   969,   972,
     973,   975,   977,   979,   980,   982,   983,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,   -97,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,   -91,  -771,  -771,  -771,   693,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
     -80,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,    14,  -771,    20,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,   575,  -771,  -771,  -771,  -771,  -771,  -771,  -771,   -14,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,   244,  -771,   473,  -771,
    -771,   382,  -771,  -771,  -771,  -771,   531,  -771,  -771,  -771,
    -771
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -771,  -771,  -771,  -770,  -338,  -591,  -416,  -771,  -771,   684,
    -771,  -771,  -771,  -771,   854,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,   861,  -771,
    -771,  -771,  -771,  -771,   984,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,   174,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -424,
    -110,  -771,  -771,  -771,  -771,   572,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,   718,
    -771,  -771,     2,  -771,  -771,     1,  -771,  -771,  -771,  -771,
    -771,   833,  -771,  -771,  -771,  -771,  -771,  -771,  -771,   -38,
     109,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,   689,  -771,  -771,  -771,  -771,  -771,
    -771,   667,  -771,  -771,  -771,  -771,  -771,  -102,  -771,  -771,
    -771,   670,  -771,  -771,  -771,  -771,  -100,  -771,  -771,  -771,
    -771,   578,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,   -99,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,   735,  -771,  -771,  -771,
    -771,  -771,   851,  -771,  -771,  -771,  -771,  -771,   807,  -771,
    -771,  -771,  -771,   808,  -771,  -771,  -771,  -771,  1002,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,    64,  -771,  -771,  -771,
      68,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,   769,
    -771,  -771,  -771,  -771,  -771,   -49,  -771,  -771,  -771,  -771,
    -771,   -42,  -771,  -771,  1089,  -771,  -771,  -771,  -771,  -771,
    -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,  -771,
    -771,   985,  -771,  -771,  -771,  -771,  -771,  -771
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     544,   545,   674,    47,   360,   440,   353,   512,   365,   117,
     473,   503,    67,    67,    45,    46,   118,   119,   447,   353,
      49,   120,   360,   244,   244,  1110,  1117,   121,    55,  1111,
      59,   474,  1123,    60,   122,   626,    63,   628,   123,   124,
    1071,  1072,  1073,  1074,  1075,   125,    68,    68,   126,   127,
     128,   642,   129,    64,   447,    76,    69,    69,   130,   650,
    1112,   716,  1134,   440,  1113,   717,  1135,  1137,   659,   660,
    1184,  1138,   131,   132,  1185,   108,   133,   111,   671,   672,
     114,   675,   134,   361,   718,   354,   135,   136,   115,   365,
     137,  1221,   448,   138,   139,  1222,   719,   449,   354,   665,
     666,   361,   116,   140,   141,   222,   512,   720,   223,   225,
     142,   143,   721,   144,   145,   146,   147,   513,   366,   722,
     224,   504,    70,    70,   475,  1223,   723,   148,   448,  1224,
     724,   245,   245,   449,  1265,   251,   149,   150,  1266,   151,
    1267,   152,   153,   725,  1268,   154,   556,   441,   355,   765,
     367,  1270,   476,   270,   522,  1271,   450,   451,   246,   246,
     254,   355,   226,   227,   228,   950,   951,   952,   667,   668,
     229,   726,   155,   557,   156,   514,   727,   295,   157,   505,
     296,    77,   158,   159,   160,   161,   577,   271,   578,   162,
     163,   579,   450,   451,  1118,   728,   580,   164,   297,   366,
    1124,   298,   230,   503,   302,   441,   729,   730,   581,   582,
     583,   731,    78,    79,   584,   299,   513,  1275,   335,    80,
     351,  1276,   336,   303,   442,   165,   166,   304,   272,   167,
     506,   367,   585,  1087,  1088,   231,   586,   587,   168,   255,
     423,   758,   782,   300,   558,   559,   560,   337,   352,   561,
     616,   305,   472,   619,   470,   306,   562,   519,   425,   338,
     588,   426,   589,   273,   307,   274,   275,    81,    82,   563,
     308,   339,   520,   673,   514,   590,   256,    83,    84,   732,
     733,   340,   442,   564,   341,   696,   342,   309,   734,   343,
     425,   257,  1013,   426,   690,   344,   591,    85,    86,   345,
     427,   225,   276,   428,   277,   565,   232,   258,   346,   347,
     259,   260,    87,   504,   348,   310,   372,   278,   473,   373,
     623,   374,    88,   311,   592,   375,   376,  1162,   377,   261,
     543,   378,   427,   233,   379,   428,   593,   786,   312,   474,
     466,   380,   521,   961,   381,   382,   594,   313,   314,   383,
     429,   384,   385,   255,   226,   227,   228,   386,   279,  1114,
    1115,  1116,   229,   810,   811,   812,   813,   814,   430,   387,
     388,   505,   389,   390,   391,   315,   316,   837,   280,   281,
     392,   270,   429,   393,   501,   540,   541,   394,   395,   396,
     256,   397,   398,  1205,   230,  1206,   399,  1163,   400,   401,
     430,   117,    89,    90,    91,   257,   402,  1207,   118,   119,
     404,  1208,   349,   120,   542,   271,   406,   856,   407,   121,
    1084,   258,   506,   317,   259,   260,   122,   231,  1164,   408,
     123,   124,   475,   409,   410,   538,   630,   125,   411,   412,
     126,   127,   128,   261,   129,   413,   414,   415,   416,   417,
     130,   418,   419,   716,   420,   421,   272,   717,  1165,  1166,
     476,   422,   458,  1167,   131,   132,   459,   460,   133,   461,
     488,  1209,  1168,   462,   134,   463,   718,   431,   135,   136,
     464,   465,   137,   468,   469,   138,   139,   482,   719,   686,
    1076,   273,   483,   274,   275,   140,   141,  1083,   232,   720,
     484,   485,   142,   143,   721,   144,   145,   146,   147,   431,
     486,   722,   487,   490,   491,   492,   493,   494,   723,   148,
     495,   496,   724,    77,   497,   233,   498,   499,   149,   150,
     276,   151,   277,   152,   153,   725,  1233,   154,   702,   703,
     704,   705,   706,   707,   708,   278,   500,   523,   524,   525,
     527,   543,   528,   529,    78,    79,  1173,   530,   531,   532,
     533,    80,   534,   726,   155,   302,   156,  1234,   727,   535,
     157,   536,   537,   546,   158,   159,   160,   161,   547,   548,
    1233,   162,   163,   549,   303,   550,   279,   728,   304,   164,
    1235,   551,   552,   553,   554,   555,   614,  1236,   729,   730,
     615,  1237,  1238,   731,   618,   621,   280,   281,   622,    81,
      82,  1234,   305,   625,  1239,   627,   306,   165,   166,    83,
      84,   167,   629,   631,   632,   307,  1174,   633,   634,   635,
     168,   308,   636,   637,  1235,   638,   639,   640,   641,    85,
      86,  1236,   643,   644,   645,  1237,  1238,  1240,   309,   646,
     647,   648,  1241,   652,    87,   649,   651,  1175,  1239,   653,
     654,  1242,   655,   657,    88,   656,   658,   661,   662,   673,
    1176,   732,   733,   663,   664,   669,   310,  1243,  1244,  1245,
     734,   681,   670,   676,   311,   679,   677,  1177,  1178,   678,
     698,  1240,  1179,   682,   699,   684,   685,   688,   700,   312,
     689,  1180,   692,   693,   694,  1242,     2,     3,   313,   314,
     695,     4,   701,  1046,  1047,   709,     5,   710,   711,   712,
     556,  1243,  1244,  1245,   713,   714,   755,   756,     6,   715,
       7,   767,   760,     8,   761,   769,   315,   316,   762,  1246,
       9,  1048,   770,   757,    89,    90,    91,   557,   763,   766,
    1247,   577,   771,   578,  1049,    10,   579,   764,   768,  1248,
    1050,   580,   772,    11,    12,   773,    13,   774,   775,   776,
     777,   791,   778,   581,   582,   583,   779,  1051,   781,   584,
     784,   788,   789,  1246,   317,   792,   790,    14,   793,   800,
     795,   796,   794,   797,  1247,   798,   799,   585,    15,    16,
     801,   586,   587,  1248,   802,  1052,   803,  1046,  1047,   804,
     805,   828,   806,  1053,  1054,   858,    17,   807,   558,   559,
     560,   829,   808,   561,   859,   588,   809,   589,   817,   818,
     562,   819,    18,   820,   821,  1048,   822,   823,   824,   825,
     590,   861,   863,   563,   864,   826,   962,  1055,  1049,   964,
     827,   860,  1280,   965,  1050,   967,   830,   564,   862,    19,
     972,   591,   968,   865,   831,   866,  1056,   832,    20,    21,
     833,  1051,   834,    22,    23,   835,   836,   839,   970,   565,
     971,   840,  1015,   841,   842,   843,   844,   845,   846,   592,
     847,   849,   850,   851,   852,   853,   854,   867,   855,  1052,
     975,   593,   868,   869,   870,  1133,   871,  1053,   872,  1014,
     873,   594,   897,   898,   899,   900,   874,   901,   875,   902,
     903,   904,   876,   877,   905,   878,   879,   880,   881,   882,
     883,   471,   301,   884,   906,   907,   908,   909,   910,   911,
     912,  1055,   885,   913,   917,   918,   919,   920,   886,   921,
     960,   922,   923,   924,   887,   888,   925,   889,  1016,   890,
    1056,   891,   892,   893,   894,   895,   926,   927,   928,   929,
     930,   931,   932,   896,   916,   933,   936,   937,   938,   939,
     940,  1017,   941,   942,   943,   944,   945,   946,   947,   948,
    1036,   949,   955,   956,   957,   958,   959,  1038,   966,   969,
     963,   978,   979,   980,   981,   982,   983,   984,   985,  1040,
     986,   987,   988,   989,   990,   991,   992,   993,  1077,   994,
    1078,  1079,  1080,   995,   996,   997,   998,  1000,  1001,  1002,
    1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1081,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1082,
    1039,  1086,  1037,  1042,  1041,  1043,  1044,  1045,  1060,  1061,
    1062,  1089,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,
    1090,  1085,  1091,  1092,  1093,  1095,  1094,  1096,  1097,  1098,
    1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1136,
    1108,  1109,  1121,  1122,  1127,  1128,  1129,  1130,  1131,  1132,
    1139,  1141,  1140,  1142,  1143,  1148,  1144,  1150,  1145,  1153,
    1146,  1147,  1155,  1149,  1151,  1157,  1158,  1225,  1159,  1152,
    1227,  1274,  1154,  1156,  1160,  1161,   502,  1226,   838,  1228,
    1171,  1172,  1186,  1187,  1188,  1189,  1190,  1269,  1191,  1192,
    1193,   539,  1194,  1195,  1196,  1197,  1198,  1199,  1200,  1201,
    1202,  1203,  1204,  1183,  1277,  1212,   759,  1213,  1278,   620,
     697,   424,  1279,   857,   783,  1273,   624,  1220,   691,  1219,
    1272,   350,     0,     0,     0,   787,     0,  1214,  1215,  1216,
    1217,  1218,  1229,  1230,  1231,  1232,  1252,  1253,  1254,  1255,
    1256,   687,     0,  1257,  1258,     0,  1259,   617,  1260,     0,
    1261,  1262,     0,  1263,  1264,     0,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   489
};

static const short int yycheck[] =
{
     338,   339,   418,   233,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,   231,   232,     8,     9,     1,     1,
     233,    13,     1,     1,     1,   231,    12,    19,   233,   235,
     233,    22,    12,   233,    26,   373,   233,   375,    30,    31,
     810,   811,   812,   813,   814,    37,    35,    35,    40,    41,
      42,   389,    44,   233,     1,   233,    45,    45,    50,   397,
     231,     1,   231,     1,   235,     5,   235,   231,   406,   407,
     231,   235,    64,    65,   235,   141,    68,   141,   416,   417,
     233,   419,    74,    80,    24,    80,    78,    79,   233,     1,
      82,   231,    75,    85,    86,   235,    36,    80,    80,   178,
     179,    80,   233,    95,    96,   233,     1,    47,   233,     1,
     102,   103,    52,   105,   106,   107,   108,   111,   111,    59,
     233,   111,   111,   111,   115,   231,    66,   119,    75,   235,
      70,   109,   109,    80,   231,   141,   128,   129,   235,   131,
     231,   133,   134,    83,   235,   137,     1,   143,   143,   487,
     143,   231,   143,     1,   231,   235,   139,   140,   136,   136,
     233,   143,    54,    55,    56,    14,    15,    16,   178,   179,
      62,   111,   164,    28,   166,   169,   116,   233,   170,   169,
     233,     1,   174,   175,   176,   177,     1,    35,     3,   181,
     182,     6,   139,   140,   180,   135,    11,   189,   234,   111,
     180,   234,    94,     1,     1,   143,   146,   147,    23,    24,
      25,   151,    32,    33,    29,   234,   111,   231,   234,    39,
     233,   235,   234,    20,   220,   217,   218,    24,    76,   221,
     220,   143,    47,   195,   196,   127,    51,    52,   230,     1,
     232,   232,   232,   232,    99,   100,   101,   234,   233,   104,
     232,    48,   233,   232,   232,    52,   111,   141,     1,   234,
      75,     4,    77,   111,    61,   113,   114,    87,    88,   124,
      67,   234,   141,   122,   169,    90,    38,    97,    98,   219,
     220,   234,   220,   138,   234,   232,   234,    84,   228,   234,
       1,    53,   232,     4,   232,   234,   111,   117,   118,   234,
      43,     1,   150,    46,   152,   160,   198,    69,   234,   234,
      72,    73,   132,   111,   234,   112,   234,   165,     1,   234,
     232,   234,   142,   120,   139,   234,   234,    83,   234,    91,
     122,   234,    43,   225,   234,    46,   151,   232,   135,    22,
     232,   234,   141,   681,   234,   234,   161,   144,   145,   234,
      93,   234,   234,     1,    54,    55,    56,   234,   206,   950,
     951,   952,    62,   155,   156,   157,   158,   159,   111,   234,
     234,   169,   234,   234,   234,   172,   173,   232,   226,   227,
     234,     1,    93,   234,   232,   122,   122,   234,   234,   234,
      38,   234,   234,    11,    94,    13,   234,   153,   234,   234,
     111,     1,   222,   223,   224,    53,   234,    25,     8,     9,
     234,    29,   232,    13,   178,    35,   234,   232,   234,    19,
     836,    69,   220,   220,    72,    73,    26,   127,   184,   234,
      30,    31,   115,   234,   234,   232,   141,    37,   234,   234,
      40,    41,    42,    91,    44,   234,   234,   234,   234,   234,
      50,   234,   234,     1,   234,   234,    76,     5,   214,   215,
     143,   234,   234,   219,    64,    65,   234,   234,    68,   234,
     232,    89,   228,   234,    74,   234,    24,   220,    78,    79,
     234,   234,    82,   234,   234,    85,    86,   234,    36,   232,
     828,   111,   234,   113,   114,    95,    96,   835,   198,    47,
     234,   234,   102,   103,    52,   105,   106,   107,   108,   220,
     234,    59,   234,   234,   234,   234,   234,   234,    66,   119,
     234,   234,    70,     1,   234,   225,   234,   234,   128,   129,
     150,   131,   152,   133,   134,    83,     5,   137,   199,   200,
     201,   202,   203,   204,   205,   165,   234,   234,   234,   234,
     234,   122,   234,   234,    32,    33,    83,   234,   234,   234,
     234,    39,   234,   111,   164,     1,   166,    36,   116,   234,
     170,   234,   234,   122,   174,   175,   176,   177,   122,   178,
       5,   181,   182,   178,    20,   178,   206,   135,    24,   189,
      59,   178,   178,   178,   178,   231,   234,    66,   146,   147,
     234,    70,    71,   151,   234,   234,   226,   227,   234,    87,
      88,    36,    48,   178,    83,   178,    52,   217,   218,    97,
      98,   221,   122,   122,   178,    61,   153,   178,   178,   122,
     230,    67,   141,   178,    59,   122,   122,   122,   178,   117,
     118,    66,   178,   122,   141,    70,    71,   116,    84,   178,
     122,   122,   121,   141,   132,   122,   122,   184,    83,   122,
     122,   130,   178,   178,   142,   234,   234,   178,   141,   122,
     197,   219,   220,   178,   178,   178,   112,   146,   147,   148,
     228,   234,   178,   178,   120,   231,   178,   214,   215,   178,
     141,   116,   219,   234,   141,   234,   234,   234,   141,   135,
     234,   228,   234,   234,   234,   130,     0,     1,   144,   145,
     234,     5,   141,    20,    21,   141,    10,   141,   178,   231,
       1,   146,   147,   148,   141,   141,   234,   234,    22,   231,
      24,   141,   178,    27,   178,   141,   172,   173,   178,   208,
      34,    48,   141,   234,   222,   223,   224,    28,   178,   231,
     219,     1,   141,     3,    61,    49,     6,   178,   178,   228,
      67,    11,   141,    57,    58,   141,    60,   141,   122,   141,
     141,   178,   231,    23,    24,    25,   234,    84,   234,    29,
     234,   231,   231,   208,   220,   141,   231,    81,   178,   141,
     178,   178,   234,   178,   219,   178,   178,    47,    92,    93,
     122,    51,    52,   228,   141,   112,   141,    20,    21,   178,
     141,   234,   231,   120,   121,   141,   110,   231,    99,   100,
     101,   234,   231,   104,   141,    75,   231,    77,   231,   231,
     111,   231,   126,   231,   231,    48,   231,   231,   231,   231,
      90,   141,   141,   124,   141,   231,   178,   154,    61,   141,
     231,   231,  1276,   141,    67,   141,   234,   138,   231,   153,
     122,   111,   141,   231,   234,   231,   173,   234,   162,   163,
     234,    84,   234,   167,   168,   234,   234,   234,   141,   160,
     141,   234,   141,   234,   234,   234,   234,   234,   234,   139,
     234,   234,   234,   234,   234,   234,   234,   231,   234,   112,
     122,   151,   231,   231,   231,   183,   231,   120,   231,   735,
     231,   161,   185,   186,   187,   188,   231,   190,   231,   192,
     193,   194,   231,   231,   197,   231,   231,   231,   231,   231,
     231,   247,    71,   231,   207,   208,   209,   210,   211,   212,
     213,   154,   231,   216,   185,   186,   187,   188,   231,   190,
     234,   192,   193,   194,   231,   231,   197,   231,   141,   231,
     173,   231,   231,   231,   231,   231,   207,   208,   209,   210,
     211,   212,   213,   231,   231,   216,   231,   231,   231,   231,
     231,   141,   231,   231,   231,   231,   231,   231,   231,   231,
     141,   231,   231,   231,   231,   231,   231,   141,   231,   231,
     234,   231,   231,   231,   231,   231,   231,   231,   231,   141,
     231,   231,   231,   231,   231,   231,   231,   231,   122,   231,
     122,   122,   122,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     231,   231,   231,   231,   231,   231,   231,   231,   141,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   122,
     231,   141,   234,   231,   234,   231,   231,   231,   231,   231,
     231,   178,   231,   231,   231,   231,   231,   231,   231,   231,
     141,   231,   141,   178,   178,   141,   178,   234,   141,   141,
     141,   141,   122,   141,   141,   231,   231,   231,   231,   183,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     178,   178,   141,   178,   234,   141,   178,   141,   178,   141,
     178,   178,   141,   178,   178,   231,   231,   122,   231,   178,
     122,  1241,   178,   178,   231,   231,   282,  1135,   566,  1138,
     231,   231,   231,   231,   231,   231,   231,  1185,   231,   231,
     231,   318,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,  1054,  1266,   231,   477,   231,  1268,   362,
     452,   169,  1271,   595,   507,  1224,   368,  1113,   443,  1111,
    1222,    92,    -1,    -1,    -1,   515,    -1,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   432,    -1,   231,   231,    -1,   231,   356,   231,    -1,
     231,   231,    -1,   231,   231,    -1,    -1,    -1,   234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   262
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   237,     0,     1,     5,    10,    22,    24,    27,    34,
      49,    57,    58,    60,    81,    92,    93,   110,   126,   153,
     162,   163,   167,   168,   238,   243,   248,   262,   268,   279,
     307,   322,   334,   357,   364,   374,   383,   409,   415,   421,
     426,   432,   492,   508,   525,   231,   232,   233,   335,   233,
     308,   384,   416,   422,   427,   233,   493,   410,   323,   233,
     233,   280,   358,   233,   233,   365,   375,     1,    35,    45,
     111,   263,   264,   265,   266,   267,   233,     1,    32,    33,
      39,    87,    88,    97,    98,   117,   118,   132,   142,   222,
     223,   224,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   141,   309,
     313,   141,   385,   389,   233,   233,   233,     1,     8,     9,
      13,    19,    26,    30,    31,    37,    40,    41,    42,    44,
      50,    64,    65,    68,    74,    78,    79,    82,    85,    86,
      95,    96,   102,   103,   105,   106,   107,   108,   119,   128,
     129,   131,   133,   134,   137,   164,   166,   170,   174,   175,
     176,   177,   181,   182,   189,   217,   218,   221,   230,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   483,   487,   488,   489,
     490,   491,   233,   233,   233,     1,    54,    55,    56,    62,
      94,   127,   198,   225,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     1,   109,   136,   244,   245,   246,
     247,   141,   281,   285,   233,     1,    38,    53,    69,    72,
      73,    91,   526,   527,   528,   529,   530,   531,   532,   533,
       1,    35,    76,   111,   113,   114,   150,   152,   165,   206,
     226,   227,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   233,   233,   234,   234,   234,
     232,   264,     1,    20,    24,    48,    52,    61,    67,    84,
     112,   120,   135,   144,   145,   172,   173,   220,   336,   337,
     338,   339,   340,   341,   342,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   232,
     510,   233,   233,     1,    80,   143,   417,   418,   419,   420,
       1,    80,   423,   424,   425,     1,   111,   143,   428,   429,
     430,   431,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   484,   234,   480,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   232,   434,     1,     4,    43,    46,    93,
     111,   220,   494,   495,   496,   497,   498,   502,   503,   504,
       1,   143,   220,   411,   412,   413,   414,     1,    75,    80,
     139,   140,   324,   325,   326,   329,   332,   333,   234,   234,
     234,   234,   234,   234,   234,   234,   232,   270,   234,   234,
     232,   245,   233,     1,    22,   115,   143,   359,   360,   361,
     362,   363,   234,   234,   234,   234,   234,   234,   232,   527,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   232,   250,     1,   111,   169,   220,   366,   367,   368,
     369,   370,     1,   111,   169,   376,   377,   378,   379,   141,
     141,   141,   231,   234,   234,   234,   343,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   232,   337,
     122,   122,   178,   122,   240,   240,   122,   122,   178,   178,
     178,   178,   178,   178,   178,   231,     1,    28,    99,   100,
     101,   104,   111,   124,   138,   160,   310,   311,   312,   314,
     315,   316,   317,   318,   319,   320,   321,     1,     3,     6,
      11,    23,    24,    25,    29,    47,    51,    52,    75,    77,
      90,   111,   139,   151,   161,   386,   387,   388,   390,   391,
     392,   393,   394,   395,   396,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   234,   234,   232,   418,   234,   232,
     424,   234,   234,   232,   429,   178,   240,   178,   240,   122,
     141,   122,   178,   178,   178,   122,   141,   178,   122,   122,
     122,   178,   240,   178,   122,   141,   178,   122,   122,   122,
     240,   122,   141,   122,   122,   178,   234,   178,   234,   240,
     240,   178,   141,   178,   178,   178,   179,   178,   179,   178,
     178,   240,   240,   122,   242,   240,   178,   178,   178,   231,
     505,   234,   234,   499,   234,   234,   232,   495,   234,   234,
     232,   412,   234,   234,   234,   234,   232,   325,   141,   141,
     141,   141,   199,   200,   201,   202,   203,   204,   205,   141,
     141,   178,   231,   141,   141,   231,     1,     5,    24,    36,
      47,    52,    59,    66,    70,    83,   111,   116,   135,   146,
     147,   151,   219,   220,   228,   282,   283,   284,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   234,   234,   234,   232,   360,
     178,   178,   178,   178,   178,   240,   231,   141,   178,   141,
     141,   141,   141,   141,   141,   122,   141,   141,   231,   234,
     371,   234,   232,   367,   234,   380,   232,   377,   231,   231,
     231,   178,   141,   178,   234,   178,   178,   178,   178,   178,
     141,   122,   141,   141,   178,   141,   231,   231,   231,   231,
     155,   156,   157,   158,   159,   239,   240,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   232,   311,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   397,   234,
     234,   234,   234,   234,   234,   234,   232,   387,   141,   141,
     231,   141,   231,   141,   141,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   185,   186,   187,
     188,   190,   192,   193,   194,   197,   207,   208,   209,   210,
     211,   212,   213,   216,   485,   486,   231,   185,   186,   187,
     188,   190,   192,   193,   194,   197,   207,   208,   209,   210,
     211,   212,   213,   216,   481,   482,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
      14,    15,    16,   241,   242,   231,   231,   231,   231,   231,
     234,   240,   178,   234,   141,   141,   231,   141,   141,   231,
     141,   141,   122,   327,   328,   122,   330,   331,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   234,   234,   234,   234,   303,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   232,   283,   141,   141,   141,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   141,   234,   141,   231,
     141,   234,   231,   231,   231,   231,    20,    21,    48,    61,
      67,    84,   112,   120,   121,   154,   173,   344,   345,   346,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   239,   239,   239,   239,   239,   240,   122,   122,   122,
     122,   141,   122,   240,   242,   231,   141,   195,   196,   178,
     141,   141,   178,   178,   178,   141,   234,   141,   141,   141,
     141,   122,   141,   141,   231,   231,   231,   231,   231,   231,
     231,   235,   231,   235,   241,   241,   241,    12,   180,   506,
     507,   231,   231,    12,   180,   500,   501,   231,   231,   231,
     231,   231,   231,   183,   231,   235,   183,   231,   235,   178,
     141,   178,   178,   234,   178,   178,   178,   178,   141,   178,
     141,   178,   178,   141,   178,   141,   178,   231,   231,   231,
     231,   231,    83,   153,   184,   214,   215,   219,   228,   372,
     373,   231,   231,    83,   153,   184,   197,   214,   215,   219,
     228,   381,   382,   346,   231,   235,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,    11,    13,    25,    29,    89,
     398,   399,   231,   231,   231,   231,   231,   231,   231,   486,
     482,   231,   235,   231,   235,   122,   328,   122,   331,   231,
     231,   231,   231,     5,    36,    59,    66,    70,    71,    83,
     116,   121,   130,   146,   147,   148,   208,   219,   228,   304,
     305,   306,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   235,   231,   235,   345,
     231,   235,   507,   501,   306,   231,   235,   373,   382,   399,
     305
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

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
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

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
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
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
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
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

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
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
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
  /* Lookahead token as an internal (translated) token number.  */
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
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

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
#line 391 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 393 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 397 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 401 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 405 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 409 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 413 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 418 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 419 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 420 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 421 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 422 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 436 "ircd_parser.y"
    {
#ifndef STATIC_MODULES /* NOOP in the static case */
  if (ypass == 2)
  {
    char *m_bn;

    m_bn = basename(yylval.string);

    /* I suppose we should just ignore it if it is already loaded(since
     * otherwise we would flood the opers on rehash) -A1kmm.
     */
    if (findmodule_byname(m_bn) == NULL)
      /* XXX - should we unload this module on /rehash, if it isn't listed? */
      load_one_module(yylval.string, 0);
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

  case 63:
#line 479 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2 && ServerInfo.ctx) 
  {
    if (!ServerInfo.rsa_private_key_file)
    {
      yyerror("Ignoring config file entry ssl_certificate "
              "-- no rsa_private_key");
      break;
    }

    if (SSL_CTX_use_certificate_file(ServerInfo.ctx,
      yylval.string, SSL_FILETYPE_PEM) <= 0)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
            "Error using config file entry ssl_certificate -- %s",
            ERR_error_string(ERR_get_error(), NULL));
      break;
    }

    if (SSL_CTX_use_PrivateKey_file(ServerInfo.ctx,
      ServerInfo.rsa_private_key_file, SSL_FILETYPE_PEM) <= 0)
    {
      sendto_realops_flags(UMODE_ALL, L_ALL,
            "Error using config file entry rsa_private_key -- %s",
            ERR_error_string(ERR_get_error(), NULL));
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
#line 518 "ircd_parser.y"
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

  case 65:
#line 573 "ircd_parser.y"
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
#line 587 "ircd_parser.y"
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
#line 605 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 614 "ircd_parser.y"
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
#line 628 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 637 "ircd_parser.y"
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

  case 71:
#line 665 "ircd_parser.y"
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

  case 72:
#line 695 "ircd_parser.y"
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
#line 711 "ircd_parser.y"
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
#line 767 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 776 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 785 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 96:
#line 808 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 812 "ircd_parser.y"
    {
                        }
    break;

  case 98:
#line 816 "ircd_parser.y"
    {
                        }
    break;

  case 99:
#line 820 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 100:
#line 827 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 101:
#line 834 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 102:
#line 841 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 103:
#line 845 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 104:
#line 849 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 105:
#line 853 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 106:
#line 857 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 107:
#line 861 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 108:
#line 865 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 109:
#line 871 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 110:
#line 880 "ircd_parser.y"
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
#line 892 "ircd_parser.y"
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
#line 983 "ircd_parser.y"
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
#line 995 "ircd_parser.y"
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
#line 1007 "ircd_parser.y"
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
#line 1030 "ircd_parser.y"
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
#line 1042 "ircd_parser.y"
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

  case 140:
#line 1053 "ircd_parser.y"
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
#line 1064 "ircd_parser.y"
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
#line 1106 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 143:
#line 1115 "ircd_parser.y"
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
#line 1126 "ircd_parser.y"
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
#line 1137 "ircd_parser.y"
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
#line 1148 "ircd_parser.y"
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
#line 1159 "ircd_parser.y"
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
#line 1170 "ircd_parser.y"
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
#line 1181 "ircd_parser.y"
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
#line 1192 "ircd_parser.y"
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
#line 1203 "ircd_parser.y"
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
#line 1214 "ircd_parser.y"
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
#line 1225 "ircd_parser.y"
    {
}
    break;

  case 157:
#line 1229 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 158:
#line 1230 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 159:
#line 1233 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 160:
#line 1240 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 161:
#line 1247 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 162:
#line 1254 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 163:
#line 1261 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 164:
#line 1268 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 165:
#line 1275 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 166:
#line 1282 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 167:
#line 1289 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 168:
#line 1296 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 169:
#line 1303 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 170:
#line 1310 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 171:
#line 1317 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 172:
#line 1324 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 173:
#line 1331 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 174:
#line 1344 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 175:
#line 1351 "ircd_parser.y"
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

  case 190:
#line 1378 "ircd_parser.y"
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

  case 191:
#line 1424 "ircd_parser.y"
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
#line 1470 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 193:
#line 1476 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 194:
#line 1482 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 195:
#line 1488 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 196:
#line 1494 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 197:
#line 1500 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 198:
#line 1506 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 199:
#line 1512 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 200:
#line 1521 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_address = NULL;
}
    break;

  case 201:
#line 1525 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 212:
#line 1541 "ircd_parser.y"
    {
  if (ypass == 2)
    add_listener(yyvsp[0].number, listener_address, 0);
}
    break;

  case 213:
#line 1545 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    int i;

    for (i = yyvsp[-2].number; i <= yyvsp[0].number; i++)
    {
      add_listener(i, listener_address, 0);
    }
  }
}
    break;

  case 217:
#line 1562 "ircd_parser.y"
    {
  if (ypass == 2)
    add_listener(yyvsp[0].number, listener_address, 1);
}
    break;

  case 218:
#line 1566 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    int i;

    for (i = yyvsp[-2].number; i <= yyvsp[0].number; i++)
    {
      add_listener(i, listener_address, 1);
    }
  }
}
    break;

  case 219:
#line 1579 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 220:
#line 1588 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 221:
#line 1600 "ircd_parser.y"
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

  case 222:
#line 1612 "ircd_parser.y"
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

  case 241:
#line 1682 "ircd_parser.y"
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

  case 242:
#line 1711 "ircd_parser.y"
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

  case 243:
#line 1724 "ircd_parser.y"
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

  case 244:
#line 1735 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 245:
#line 1744 "ircd_parser.y"
    {
}
    break;

  case 249:
#line 1748 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 250:
#line 1749 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 251:
#line 1752 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 252:
#line 1760 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 253:
#line 1767 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 254:
#line 1774 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 255:
#line 1781 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 256:
#line 1788 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 257:
#line 1795 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 258:
#line 1802 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 259:
#line 1809 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 260:
#line 1816 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 261:
#line 1825 "ircd_parser.y"
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

  case 262:
#line 1836 "ircd_parser.y"
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

  case 263:
#line 1847 "ircd_parser.y"
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

  case 264:
#line 1858 "ircd_parser.y"
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

  case 265:
#line 1869 "ircd_parser.y"
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

  case 266:
#line 1880 "ircd_parser.y"
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

  case 267:
#line 1892 "ircd_parser.y"
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

  case 268:
#line 1911 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 269:
#line 1921 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 270:
#line 1930 "ircd_parser.y"
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

  case 271:
#line 1945 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 272:
#line 1949 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 279:
#line 1961 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 280:
#line 1970 "ircd_parser.y"
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

  case 281:
#line 1985 "ircd_parser.y"
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

  case 282:
#line 2003 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 283:
#line 2011 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 290:
#line 2022 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 291:
#line 2031 "ircd_parser.y"
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

  case 292:
#line 2046 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 296:
#line 2053 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 297:
#line 2057 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 298:
#line 2061 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 299:
#line 2065 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 300:
#line 2069 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 301:
#line 2073 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 302:
#line 2077 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 303:
#line 2086 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_match_item = (struct MatchItem *)map_to_conf(yy_conf);
    yy_match_item->action = CLUSTER_ALL;
  }
}
    break;

  case 304:
#line 2094 "ircd_parser.y"
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

  case 310:
#line 2111 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 311:
#line 2117 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 315:
#line 2124 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 316:
#line 2128 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 317:
#line 2132 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 318:
#line 2136 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 319:
#line 2140 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 320:
#line 2144 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 321:
#line 2148 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 322:
#line 2152 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 323:
#line 2161 "ircd_parser.y"
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

  case 324:
#line 2179 "ircd_parser.y"
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

  case 347:
#line 2321 "ircd_parser.y"
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

  case 348:
#line 2333 "ircd_parser.y"
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

  case 349:
#line 2345 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 350:
#line 2354 "ircd_parser.y"
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

  case 351:
#line 2366 "ircd_parser.y"
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

  case 352:
#line 2378 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 353:
#line 2384 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 354:
#line 2388 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 355:
#line 2396 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 356:
#line 2405 "ircd_parser.y"
    {
}
    break;

  case 360:
#line 2410 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_LAZY_LINK;
}
    break;

  case 361:
#line 2414 "ircd_parser.y"
    {
  if (ypass == 2)
#ifndef HAVE_LIBZ
    yyerror("Ignoring flags = compressed; -- no zlib support");
#else
    yy_aconf->flags |= CONF_FLAGS_COMPRESSED;
#endif
}
    break;

  case 362:
#line 2422 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
}
    break;

  case 363:
#line 2426 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
    break;

  case 364:
#line 2430 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_BURST_AWAY;
}
    break;

  case 365:
#line 2436 "ircd_parser.y"
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

  case 366:
#line 2477 "ircd_parser.y"
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

  case 367:
#line 2488 "ircd_parser.y"
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

  case 368:
#line 2499 "ircd_parser.y"
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

  case 369:
#line 2514 "ircd_parser.y"
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

  case 370:
#line 2525 "ircd_parser.y"
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

  case 371:
#line 2538 "ircd_parser.y"
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

  case 372:
#line 2551 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 373:
#line 2560 "ircd_parser.y"
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

  case 374:
#line 2595 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 375:
#line 2602 "ircd_parser.y"
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

  case 381:
#line 2621 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 382:
#line 2630 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 383:
#line 2642 "ircd_parser.y"
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

  case 384:
#line 2651 "ircd_parser.y"
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

  case 390:
#line 2667 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 391:
#line 2676 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 392:
#line 2688 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 393:
#line 2696 "ircd_parser.y"
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

  case 398:
#line 2712 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 399:
#line 2724 "ircd_parser.y"
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

  case 400:
#line 2733 "ircd_parser.y"
    {
  /* XXX */
}
    break;

  case 406:
#line 2741 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_conf->name, yylval.string);
    collapse(yy_conf->name);
  }
}
    break;

  case 407:
#line 2750 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_match_item->reason);
    DupString(yy_match_item->reason, yylval.string);
  }
}
    break;

  case 463:
#line 2798 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 464:
#line 2804 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 465:
#line 2810 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 466:
#line 2816 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 467:
#line 2821 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 468:
#line 2827 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 469:
#line 2833 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 470:
#line 2839 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 471:
#line 2845 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 472:
#line 2851 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 473:
#line 2857 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 474:
#line 2863 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 475:
#line 2869 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 476:
#line 2875 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 477:
#line 2881 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 478:
#line 2887 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 479:
#line 2893 "ircd_parser.y"
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

  case 480:
#line 2904 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 481:
#line 2910 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 482:
#line 2919 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 483:
#line 2925 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 484:
#line 2931 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 485:
#line 2937 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 486:
#line 2941 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 487:
#line 2947 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 488:
#line 2951 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 489:
#line 2957 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 490:
#line 2963 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 491:
#line 2969 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 492:
#line 2975 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 493:
#line 2981 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 494:
#line 2987 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 495:
#line 2993 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 496:
#line 2999 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 497:
#line 3010 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 498:
#line 3016 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 499:
#line 3022 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 500:
#line 3028 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 501:
#line 3034 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 502:
#line 3043 "ircd_parser.y"
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

  case 503:
#line 3075 "ircd_parser.y"
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

  case 504:
#line 3093 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 505:
#line 3099 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 506:
#line 3108 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 507:
#line 3114 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 508:
#line 3119 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 509:
#line 3125 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 513:
#line 3132 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 514:
#line 3136 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 515:
#line 3140 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 516:
#line 3144 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 517:
#line 3148 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 518:
#line 3152 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 519:
#line 3156 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 520:
#line 3160 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 521:
#line 3164 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 522:
#line 3168 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 523:
#line 3172 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 524:
#line 3176 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 525:
#line 3180 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 526:
#line 3184 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 527:
#line 3188 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 528:
#line 3192 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 529:
#line 3196 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 530:
#line 3202 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 534:
#line 3209 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 535:
#line 3213 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 536:
#line 3217 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 537:
#line 3221 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 538:
#line 3225 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 539:
#line 3229 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 540:
#line 3233 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 541:
#line 3237 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 542:
#line 3241 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 543:
#line 3245 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 544:
#line 3249 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 545:
#line 3253 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 546:
#line 3257 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 547:
#line 3261 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 548:
#line 3265 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 549:
#line 3269 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 550:
#line 3273 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 551:
#line 3279 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 552:
#line 3285 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 553:
#line 3291 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 554:
#line 3297 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 555:
#line 3303 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 556:
#line 3312 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 557:
#line 3320 "ircd_parser.y"
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

  case 567:
#line 3347 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 568:
#line 3353 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 569:
#line 3359 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 573:
#line 3365 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 574:
#line 3369 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 575:
#line 3375 "ircd_parser.y"
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

  case 576:
#line 3398 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 577:
#line 3407 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 578:
#line 3411 "ircd_parser.y"
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

  case 581:
#line 3451 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 582:
#line 3455 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 601:
#line 3484 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 602:
#line 3490 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 603:
#line 3496 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 604:
#line 3502 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 605:
#line 3508 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 606:
#line 3514 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 607:
#line 3520 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 608:
#line 3526 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 609:
#line 3532 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 610:
#line 3538 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 611:
#line 3544 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 612:
#line 3550 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 613:
#line 3556 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 614:
#line 3562 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 625:
#line 3582 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 626:
#line 3588 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 627:
#line 3594 "ircd_parser.y"
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

  case 628:
#line 3608 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 629:
#line 3614 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 630:
#line 3620 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1010 of yacc.c.  */
#line 6676 "y.tab.c"

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
      /* If just tried and failed to reuse lookahead token after an
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
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
	  yychar = YYEMPTY;

	}
    }

  /* Else will try to reuse lookahead token after shifting the error
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
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



