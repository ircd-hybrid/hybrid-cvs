/* A Bison parser, made from ircd_parser.y, by GNU bison 1.75.  */
/* $Id: y.tab.c,v 7.30 2005/07/23 23:12:32 adx Exp $ */

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
     QSTRING = 395,
     QUIET_ON_BAN = 396,
     REASON = 397,
     REDIRPORT = 398,
     REDIRSERV = 399,
     REHASH = 400,
     REMOTE = 401,
     REMOTEBAN = 402,
     RESTRICTED = 403,
     RSA_PRIVATE_KEY_FILE = 404,
     RSA_PUBLIC_KEY_FILE = 405,
     SSL_CERTIFICATE_FILE = 406,
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
     T_DEBUG = 444,
     T_DRONE = 445,
     T_EXTERNAL = 446,
     T_FULL = 447,
     T_INVISIBLE = 448,
     T_IPV4 = 449,
     T_IPV6 = 450,
     T_LOCOPS = 451,
     T_LOGPATH = 452,
     T_L_CRIT = 453,
     T_L_DEBUG = 454,
     T_L_ERROR = 455,
     T_L_INFO = 456,
     T_L_NOTICE = 457,
     T_L_TRACE = 458,
     T_L_WARN = 459,
     T_MAX_CLIENTS = 460,
     T_NCHANGE = 461,
     T_OPERWALL = 462,
     T_REJ = 463,
     T_SERVNOTICE = 464,
     T_SKILL = 465,
     T_SPY = 466,
     T_SSL = 467,
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
     USE_WHOIS_ACTUALLY = 481,
     VHOST = 482,
     VHOST6 = 483,
     XLINE = 484,
     WARN = 485,
     WARN_NO_NLINE = 486
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
#define QSTRING 395
#define QUIET_ON_BAN 396
#define REASON 397
#define REDIRPORT 398
#define REDIRSERV 399
#define REHASH 400
#define REMOTE 401
#define REMOTEBAN 402
#define RESTRICTED 403
#define RSA_PRIVATE_KEY_FILE 404
#define RSA_PUBLIC_KEY_FILE 405
#define SSL_CERTIFICATE_FILE 406
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
#define T_DEBUG 444
#define T_DRONE 445
#define T_EXTERNAL 446
#define T_FULL 447
#define T_INVISIBLE 448
#define T_IPV4 449
#define T_IPV6 450
#define T_LOCOPS 451
#define T_LOGPATH 452
#define T_L_CRIT 453
#define T_L_DEBUG 454
#define T_L_ERROR 455
#define T_L_INFO 456
#define T_L_NOTICE 457
#define T_L_TRACE 458
#define T_L_WARN 459
#define T_MAX_CLIENTS 460
#define T_NCHANGE 461
#define T_OPERWALL 462
#define T_REJ 463
#define T_SERVNOTICE 464
#define T_SKILL 465
#define T_SPY 466
#define T_SSL 467
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
#define USE_WHOIS_ACTUALLY 481
#define VHOST 482
#define VHOST6 483
#define XLINE 484
#define WARN 485
#define WARN_NO_NLINE 486




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
static unsigned int listener_flags = 0;

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
#line 129 "ircd_parser.y"
typedef union {
  int number;
  char *string;
} yystype;
/* Line 193 of /usr/local/share/bison/yacc.c.  */
#line 644 "y.tab.c"
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
#line 665 "y.tab.c"

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
#define YYLAST   1273

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  237
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  300
/* YYNRULES -- Number of rules. */
#define YYNRULES  633
/* YYNRULES -- Number of states. */
#define YYNSTATES  1286

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   486

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   236,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   232,
       2,   235,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   234,     2,   233,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231
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
     621,   622,   629,   630,   636,   640,   642,   644,   646,   649,
     651,   653,   655,   657,   659,   661,   666,   670,   672,   674,
     678,   683,   688,   689,   696,   699,   701,   703,   705,   707,
     709,   711,   713,   715,   717,   719,   721,   723,   725,   727,
     729,   731,   733,   738,   743,   748,   753,   754,   760,   764,
     766,   769,   771,   773,   775,   777,   779,   781,   783,   785,
     787,   789,   791,   796,   801,   806,   811,   816,   821,   826,
     831,   836,   841,   842,   849,   852,   854,   856,   858,   860,
     862,   867,   872,   877,   878,   885,   888,   890,   892,   894,
     896,   898,   903,   908,   909,   915,   919,   921,   923,   925,
     927,   929,   931,   933,   935,   936,   943,   946,   948,   950,
     952,   954,   959,   960,   966,   970,   972,   974,   976,   978,
     980,   982,   984,   986,   988,   989,   997,   998,  1000,  1003,
    1005,  1007,  1009,  1011,  1013,  1015,  1017,  1019,  1021,  1023,
    1025,  1027,  1029,  1031,  1033,  1035,  1037,  1039,  1041,  1046,
    1048,  1053,  1058,  1063,  1068,  1073,  1078,  1083,  1084,  1090,
    1094,  1096,  1098,  1100,  1102,  1104,  1106,  1111,  1116,  1121,
    1126,  1131,  1136,  1141,  1146,  1151,  1152,  1159,  1162,  1164,
    1166,  1168,  1170,  1175,  1180,  1181,  1188,  1191,  1193,  1195,
    1197,  1199,  1204,  1209,  1210,  1217,  1220,  1222,  1224,  1226,
    1231,  1232,  1239,  1242,  1244,  1246,  1248,  1250,  1255,  1260,
    1266,  1269,  1271,  1273,  1275,  1277,  1279,  1281,  1283,  1285,
    1287,  1289,  1291,  1293,  1295,  1297,  1299,  1301,  1303,  1305,
    1307,  1309,  1311,  1313,  1315,  1317,  1319,  1321,  1323,  1325,
    1327,  1329,  1331,  1333,  1335,  1337,  1339,  1341,  1343,  1345,
    1347,  1349,  1351,  1353,  1355,  1357,  1359,  1361,  1363,  1365,
    1367,  1369,  1371,  1373,  1375,  1377,  1382,  1387,  1392,  1397,
    1402,  1407,  1412,  1417,  1422,  1427,  1432,  1437,  1442,  1447,
    1452,  1457,  1462,  1467,  1472,  1477,  1482,  1487,  1492,  1497,
    1502,  1507,  1512,  1517,  1522,  1527,  1532,  1537,  1542,  1547,
    1552,  1557,  1562,  1567,  1572,  1577,  1582,  1587,  1592,  1597,
    1602,  1607,  1612,  1613,  1619,  1623,  1625,  1627,  1629,  1631,
    1633,  1635,  1637,  1639,  1641,  1643,  1645,  1647,  1649,  1651,
    1653,  1655,  1657,  1659,  1660,  1666,  1670,  1672,  1674,  1676,
    1678,  1680,  1682,  1684,  1686,  1688,  1690,  1692,  1694,  1696,
    1698,  1700,  1702,  1704,  1706,  1711,  1716,  1721,  1726,  1731,
    1732,  1739,  1742,  1744,  1746,  1748,  1750,  1752,  1754,  1756,
    1758,  1763,  1768,  1769,  1775,  1779,  1781,  1783,  1785,  1790,
    1795,  1796,  1802,  1806,  1808,  1810,  1812,  1818,  1821,  1823,
    1825,  1827,  1829,  1831,  1833,  1835,  1837,  1839,  1841,  1843,
    1845,  1847,  1849,  1851,  1853,  1858,  1863,  1868,  1873,  1878,
    1883,  1888,  1893,  1898,  1903,  1908,  1913,  1918,  1923,  1929,
    1932,  1934,  1936,  1938,  1940,  1942,  1944,  1946,  1948,  1953,
    1958,  1963,  1968,  1973
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     238,     0,    -1,    -1,   238,   239,    -1,   263,    -1,   269,
      -1,   280,    -1,   511,    -1,   308,    -1,   323,    -1,   336,
      -1,   249,    -1,   528,    -1,   359,    -1,   366,    -1,   376,
      -1,   385,    -1,   411,    -1,   417,    -1,   423,    -1,   434,
      -1,   495,    -1,   428,    -1,   244,    -1,     1,   232,    -1,
       1,   233,    -1,    -1,   241,    -1,   122,   240,    -1,   122,
     154,   240,    -1,   122,   155,   240,    -1,   122,   156,   240,
      -1,   122,   157,   240,    -1,   122,   158,   240,    -1,    -1,
     243,    -1,   122,   242,    -1,   122,    14,   242,    -1,   122,
      15,   242,    -1,   122,    16,   242,    -1,   110,   234,   245,
     233,   232,    -1,   245,   246,    -1,   246,    -1,   247,    -1,
     248,    -1,     1,    -1,   109,   235,   140,   232,    -1,   136,
     235,   140,   232,    -1,   162,   234,   250,   233,   232,    -1,
     250,   251,    -1,   251,    -1,   254,    -1,   259,    -1,   262,
      -1,   256,    -1,   257,    -1,   258,    -1,   261,    -1,   253,
      -1,   260,    -1,   255,    -1,   252,    -1,     1,    -1,   151,
     235,   140,   232,    -1,   149,   235,   140,   232,    -1,   111,
     235,   140,   232,    -1,   164,   235,   140,   232,    -1,    35,
     235,   140,   232,    -1,   114,   235,   140,   232,    -1,   113,
     235,   140,   232,    -1,   227,   235,   140,   232,    -1,   228,
     235,   140,   232,    -1,   205,   235,   122,   232,    -1,    76,
     235,   177,   232,    -1,     5,   234,   264,   233,   232,    -1,
     264,   265,    -1,   265,    -1,   266,    -1,   268,    -1,   267,
      -1,     1,    -1,   111,   235,   140,   232,    -1,    45,   235,
     140,   232,    -1,    35,   235,   140,   232,    -1,    93,   234,
     270,   233,   232,    -1,   270,   271,    -1,   271,    -1,   272,
      -1,   273,    -1,   274,    -1,   278,    -1,   279,    -1,   275,
      -1,   277,    -1,   276,    -1,     1,    -1,   197,   235,   140,
     232,    -1,   127,   235,   140,   232,    -1,    62,   235,   140,
     232,    -1,    56,   235,   140,   232,    -1,    54,   235,   140,
     232,    -1,    55,   235,   140,   232,    -1,    94,   235,   198,
     232,    -1,    94,   235,   200,   232,    -1,    94,   235,   204,
     232,    -1,    94,   235,   202,   232,    -1,    94,   235,   203,
     232,    -1,    94,   235,   201,   232,    -1,    94,   235,   199,
     232,    -1,   225,   235,   177,   232,    -1,    -1,   126,   281,
     282,   234,   283,   233,   232,    -1,    -1,   286,    -1,   283,
     284,    -1,   284,    -1,   285,    -1,   287,    -1,   288,    -1,
     290,    -1,   292,    -1,   293,    -1,   294,    -1,   295,    -1,
     296,    -1,   297,    -1,   298,    -1,   299,    -1,   300,    -1,
     301,    -1,   302,    -1,   289,    -1,   291,    -1,   303,    -1,
       1,    -1,   111,   235,   140,   232,    -1,   140,    -1,   220,
     235,   140,   232,    -1,   135,   235,   140,   232,    -1,    47,
     235,   177,   232,    -1,    70,   235,   177,   232,    -1,   150,
     235,   140,   232,    -1,    24,   235,   140,   232,    -1,    66,
     235,   177,   232,    -1,   146,   235,   177,   232,    -1,    83,
     235,   177,   232,    -1,   229,   235,   177,   232,    -1,   219,
     235,   177,   232,    -1,    59,   235,   177,   232,    -1,   116,
     235,   177,   232,    -1,    36,   235,   177,   232,    -1,   145,
     235,   177,   232,    -1,     5,   235,   177,   232,    -1,    -1,
      52,   304,   235,   305,   232,    -1,   305,   236,   306,    -1,
     306,    -1,   121,   307,    -1,   307,    -1,    66,    -1,   146,
      -1,    83,    -1,   219,    -1,   229,    -1,    59,    -1,    36,
      -1,   145,    -1,     5,    -1,    70,    -1,   116,    -1,   207,
      -1,   130,    -1,    71,    -1,   147,    -1,    -1,    24,   309,
     310,   234,   311,   233,   232,    -1,    -1,   314,    -1,   311,
     312,    -1,   312,    -1,   313,    -1,   315,    -1,   316,    -1,
     317,    -1,   318,    -1,   319,    -1,   320,    -1,   321,    -1,
     322,    -1,     1,    -1,   111,   235,   140,   232,    -1,   140,
      -1,   138,   235,   241,   232,    -1,   124,   235,   122,   232,
      -1,    28,   235,   241,   232,    -1,   104,   235,   122,   232,
      -1,    99,   235,   122,   232,    -1,   101,   235,   122,   232,
      -1,   100,   235,   122,   232,    -1,   159,   235,   243,   232,
      -1,    -1,    92,   324,   234,   329,   233,   232,    -1,    -1,
      52,   326,   235,   327,   232,    -1,   327,   236,   328,    -1,
     328,    -1,   212,    -1,    69,    -1,   329,   330,    -1,   330,
      -1,   331,    -1,   325,    -1,   334,    -1,   335,    -1,     1,
      -1,   139,   235,   332,   232,    -1,   332,   236,   333,    -1,
     333,    -1,   122,    -1,   122,   182,   122,    -1,    80,   235,
     140,   232,    -1,    75,   235,   140,   232,    -1,    -1,    10,
     337,   234,   338,   233,   232,    -1,   338,   339,    -1,   339,
      -1,   340,    -1,   341,    -1,   343,    -1,   344,    -1,   349,
      -1,   350,    -1,   351,    -1,   353,    -1,   354,    -1,   355,
      -1,   342,    -1,   356,    -1,   357,    -1,   352,    -1,   358,
      -1,     1,    -1,   220,   235,   140,   232,    -1,   135,   235,
     140,   232,    -1,   172,   235,   177,   232,    -1,    24,   235,
     140,   232,    -1,    -1,    52,   345,   235,   346,   232,    -1,
     346,   236,   347,    -1,   347,    -1,   121,   348,    -1,   348,
      -1,   172,    -1,    48,    -1,    84,    -1,    67,    -1,    20,
      -1,    21,    -1,   120,    -1,    61,    -1,   153,    -1,   112,
      -1,    84,   235,   177,   232,    -1,    67,   235,   177,   232,
      -1,    48,   235,   177,   232,    -1,    20,   235,   177,   232,
      -1,   120,   235,   177,   232,    -1,    61,   235,   177,   232,
      -1,   171,   235,   140,   232,    -1,   144,   235,   140,   232,
      -1,   143,   235,   122,   232,    -1,   112,   235,   177,   232,
      -1,    -1,   152,   360,   234,   361,   233,   232,    -1,   361,
     362,    -1,   362,    -1,   363,    -1,   364,    -1,   365,    -1,
       1,    -1,   142,   235,   140,   232,    -1,    22,   235,   140,
     232,    -1,   115,   235,   140,   232,    -1,    -1,   166,   367,
     234,   368,   233,   232,    -1,   368,   369,    -1,   369,    -1,
     370,    -1,   371,    -1,   372,    -1,     1,    -1,   111,   235,
     140,   232,    -1,   220,   235,   140,   232,    -1,    -1,   168,
     373,   235,   374,   232,    -1,   374,   236,   375,    -1,   375,
      -1,    83,    -1,   219,    -1,   229,    -1,   215,    -1,   152,
      -1,   214,    -1,   183,    -1,    -1,   167,   377,   234,   378,
     233,   232,    -1,   378,   379,    -1,   379,    -1,   380,    -1,
     381,    -1,     1,    -1,   111,   235,   140,   232,    -1,    -1,
     168,   382,   235,   383,   232,    -1,   383,   236,   384,    -1,
     384,    -1,    83,    -1,   219,    -1,   229,    -1,   215,    -1,
     152,    -1,   214,    -1,   196,    -1,   183,    -1,    -1,    27,
     386,   387,   234,   388,   233,   232,    -1,    -1,   391,    -1,
     388,   389,    -1,   389,    -1,   390,    -1,   392,    -1,   393,
      -1,   394,    -1,   395,    -1,   396,    -1,   397,    -1,   398,
      -1,   407,    -1,   408,    -1,   409,    -1,   406,    -1,   403,
      -1,   405,    -1,   404,    -1,   402,    -1,   410,    -1,     1,
      -1,   111,   235,   140,   232,    -1,   140,    -1,    75,   235,
     140,   232,    -1,   160,   235,   140,   232,    -1,     3,   235,
     140,   232,    -1,   139,   235,   122,   232,    -1,     6,   235,
     194,   232,    -1,     6,   235,   195,   232,    -1,    51,   235,
     140,   232,    -1,    -1,    52,   399,   235,   400,   232,    -1,
     400,   236,   401,    -1,   401,    -1,    89,    -1,    25,    -1,
      29,    -1,    11,    -1,    13,    -1,   150,   235,   140,   232,
      -1,    47,   235,   177,   232,    -1,    29,   235,   177,   232,
      -1,    25,   235,   177,   232,    -1,    11,   235,   177,   232,
      -1,    77,   235,   140,   232,    -1,    90,   235,   140,   232,
      -1,    24,   235,   140,   232,    -1,    23,   235,   140,   232,
      -1,    -1,    81,   412,   234,   413,   233,   232,    -1,   413,
     414,    -1,   414,    -1,   415,    -1,   416,    -1,     1,    -1,
     220,   235,   140,   232,    -1,   142,   235,   140,   232,    -1,
      -1,    34,   418,   234,   419,   233,   232,    -1,   419,   420,
      -1,   420,    -1,   421,    -1,   422,    -1,     1,    -1,    80,
     235,   140,   232,    -1,   142,   235,   140,   232,    -1,    -1,
      49,   424,   234,   425,   233,   232,    -1,   425,   426,    -1,
     426,    -1,   427,    -1,     1,    -1,    80,   235,   140,   232,
      -1,    -1,    57,   429,   234,   430,   233,   232,    -1,   430,
     431,    -1,   431,    -1,   432,    -1,   433,    -1,     1,    -1,
     111,   235,   140,   232,    -1,   142,   235,   140,   232,    -1,
      58,   234,   435,   233,   232,    -1,   435,   436,    -1,   436,
      -1,   443,    -1,   444,    -1,   446,    -1,   447,    -1,   448,
      -1,   449,    -1,   450,    -1,   451,    -1,   452,    -1,   453,
      -1,   442,    -1,   455,    -1,   456,    -1,   457,    -1,   471,
      -1,   458,    -1,   460,    -1,   462,    -1,   461,    -1,   464,
      -1,   459,    -1,   465,    -1,   466,    -1,   467,    -1,   468,
      -1,   470,    -1,   472,    -1,   469,    -1,   486,    -1,   473,
      -1,   477,    -1,   478,    -1,   482,    -1,   463,    -1,   492,
      -1,   490,    -1,   491,    -1,   474,    -1,   445,    -1,   475,
      -1,   476,    -1,   493,    -1,   481,    -1,   454,    -1,   494,
      -1,   479,    -1,   480,    -1,   439,    -1,   441,    -1,   437,
      -1,   438,    -1,   440,    -1,     1,    -1,    64,   235,   122,
     232,    -1,    65,   235,   122,   232,    -1,    13,   235,   177,
     232,    -1,   226,   235,   177,   232,    -1,   165,   235,   177,
     232,    -1,    82,   235,   122,   232,    -1,    74,   235,   177,
     232,    -1,    79,   235,   177,   232,    -1,    40,   235,   177,
     232,    -1,    50,   235,   177,   232,    -1,     8,   235,   177,
     232,    -1,   103,   235,   241,   232,    -1,   102,   235,   122,
     232,    -1,    96,   235,   122,   232,    -1,     9,   235,   241,
     232,    -1,   181,   235,   241,   232,    -1,   180,   235,   241,
     232,    -1,    68,   235,   122,   232,    -1,    86,   235,   177,
     232,    -1,    85,   235,   140,   232,    -1,   231,   235,   177,
     232,    -1,   175,   235,   177,   232,    -1,   176,   235,   177,
     232,    -1,   174,   235,   177,   232,    -1,   174,   235,   178,
     232,    -1,   173,   235,   177,   232,    -1,   173,   235,   178,
     232,    -1,   133,   235,   241,   232,    -1,    19,   235,   241,
     232,    -1,   134,   235,   241,   232,    -1,   169,   235,   177,
     232,    -1,   119,   235,   177,   232,    -1,   218,   235,   177,
     232,    -1,   129,   235,   177,   232,    -1,   106,   235,   140,
     232,    -1,    78,   235,   241,   232,    -1,    42,   235,   122,
     232,    -1,    95,   235,   122,   232,    -1,   105,   235,   122,
     232,    -1,   163,   235,   140,   232,    -1,    30,   235,   140,
     232,    -1,    26,   235,   122,   232,    -1,   221,   235,   177,
     232,    -1,    44,   235,   140,   232,    -1,   137,   235,   177,
     232,    -1,    37,   235,   177,   232,    -1,   217,   235,   241,
     232,    -1,    -1,   131,   483,   235,   484,   232,    -1,   484,
     236,   485,    -1,   485,    -1,   184,    -1,   187,    -1,   189,
      -1,   192,    -1,   210,    -1,   206,    -1,   208,    -1,   213,
      -1,   211,    -1,   191,    -1,   207,    -1,   209,    -1,   193,
      -1,   216,    -1,   185,    -1,   186,    -1,   196,    -1,    -1,
     128,   487,   235,   488,   232,    -1,   488,   236,   489,    -1,
     489,    -1,   184,    -1,   187,    -1,   189,    -1,   192,    -1,
     210,    -1,   206,    -1,   208,    -1,   213,    -1,   211,    -1,
     191,    -1,   207,    -1,   209,    -1,   193,    -1,   216,    -1,
     185,    -1,   186,    -1,   196,    -1,   107,   235,   122,   232,
      -1,   108,   235,   122,   232,    -1,    31,   235,   122,   232,
      -1,   188,   235,   243,   232,    -1,    41,   235,   177,   232,
      -1,    -1,    60,   496,   234,   497,   233,   232,    -1,   497,
     498,    -1,   498,    -1,   499,    -1,   500,    -1,   501,    -1,
     505,    -1,   506,    -1,   507,    -1,     1,    -1,    46,   235,
     177,   232,    -1,    43,   235,   241,   232,    -1,    -1,    93,
     502,   235,   503,   232,    -1,   503,   236,   504,    -1,   504,
      -1,   179,    -1,    12,    -1,   220,   235,   140,   232,    -1,
     111,   235,   140,   232,    -1,    -1,     4,   508,   235,   509,
     232,    -1,   509,   236,   510,    -1,   510,    -1,   179,    -1,
      12,    -1,    22,   234,   512,   233,   232,    -1,   512,   513,
      -1,   513,    -1,   514,    -1,   515,    -1,   516,    -1,   517,
      -1,   523,    -1,   518,    -1,   519,    -1,   520,    -1,   521,
      -1,   522,    -1,   524,    -1,   525,    -1,   526,    -1,   527,
      -1,     1,    -1,    39,   235,   177,   232,    -1,   222,   235,
     177,   232,    -1,   223,   235,   177,   232,    -1,   224,   235,
     177,   232,    -1,    87,   235,   241,   232,    -1,    88,   235,
     241,   232,    -1,   132,   235,   177,   232,    -1,    98,   235,
     122,   232,    -1,   141,   235,   177,   232,    -1,    97,   235,
     122,   232,    -1,    33,   235,   122,   232,    -1,    32,   235,
     122,   232,    -1,   117,   235,   177,   232,    -1,   118,   235,
     177,   232,    -1,   161,   234,   529,   233,   232,    -1,   529,
     530,    -1,   530,    -1,   531,    -1,   532,    -1,   533,    -1,
     535,    -1,   534,    -1,   536,    -1,     1,    -1,    53,   235,
     177,   232,    -1,    73,   235,   177,   232,    -1,    91,   235,
     241,   232,    -1,    69,   235,   177,   232,    -1,    38,   235,
     177,   232,    -1,    72,   235,   177,   232,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   364,   364,   365,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   393,   393,   394,   398,
     402,   406,   410,   414,   420,   420,   421,   422,   423,   424,
     431,   434,   434,   435,   435,   435,   437,   454,   465,   468,
     468,   470,   470,   470,   471,   471,   472,   472,   473,   474,
     474,   475,   475,   478,   512,   572,   586,   604,   613,   627,
     636,   664,   694,   710,   760,   762,   762,   763,   763,   763,
     764,   766,   775,   784,   796,   798,   798,   801,   801,   801,
     802,   802,   803,   803,   804,   804,   807,   811,   815,   819,
     826,   833,   840,   844,   848,   852,   856,   860,   864,   870,
     880,   879,   972,   972,   973,   973,   974,   974,   974,   974,
     974,   975,   975,   975,   976,   976,   976,   977,   977,   978,
     978,   978,   979,   979,   980,   982,   994,  1006,  1029,  1041,
    1052,  1063,  1105,  1114,  1125,  1136,  1147,  1158,  1169,  1180,
    1191,  1202,  1213,  1225,  1224,  1228,  1228,  1229,  1230,  1232,
    1239,  1246,  1253,  1260,  1267,  1274,  1281,  1288,  1295,  1302,
    1309,  1316,  1323,  1330,  1344,  1343,  1363,  1363,  1365,  1365,
    1366,  1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,
    1377,  1423,  1469,  1475,  1481,  1487,  1493,  1499,  1505,  1511,
    1521,  1520,  1537,  1536,  1540,  1540,  1541,  1545,  1551,  1551,
    1552,  1552,  1552,  1552,  1552,  1554,  1556,  1556,  1558,  1565,
    1578,  1587,  1600,  1599,  1673,  1673,  1674,  1674,  1674,  1674,
    1674,  1675,  1675,  1676,  1676,  1676,  1677,  1677,  1678,  1678,
    1678,  1679,  1681,  1710,  1723,  1734,  1744,  1743,  1747,  1747,
    1748,  1749,  1751,  1759,  1766,  1773,  1780,  1787,  1794,  1801,
    1808,  1815,  1824,  1835,  1846,  1857,  1868,  1879,  1891,  1910,
    1920,  1929,  1945,  1944,  1957,  1957,  1958,  1958,  1958,  1958,
    1960,  1969,  1984,  2003,  2002,  2018,  2018,  2019,  2019,  2019,
    2019,  2021,  2030,  2046,  2045,  2051,  2051,  2052,  2056,  2060,
    2064,  2068,  2072,  2076,  2086,  2085,  2107,  2107,  2108,  2108,
    2108,  2110,  2117,  2116,  2122,  2122,  2123,  2127,  2131,  2135,
    2139,  2143,  2147,  2151,  2161,  2160,  2310,  2310,  2311,  2311,
    2312,  2312,  2312,  2312,  2313,  2313,  2313,  2314,  2314,  2314,
    2315,  2315,  2315,  2316,  2316,  2316,  2317,  2317,  2320,  2332,
    2344,  2353,  2365,  2377,  2383,  2387,  2395,  2405,  2404,  2408,
    2408,  2409,  2413,  2421,  2425,  2429,  2435,  2476,  2487,  2498,
    2513,  2524,  2537,  2550,  2559,  2595,  2594,  2617,  2617,  2618,
    2618,  2618,  2620,  2629,  2642,  2641,  2663,  2663,  2664,  2664,
    2664,  2666,  2675,  2688,  2687,  2708,  2708,  2709,  2709,  2711,
    2724,  2723,  2737,  2737,  2738,  2738,  2738,  2740,  2749,  2761,
    2764,  2764,  2765,  2765,  2765,  2766,  2766,  2767,  2767,  2768,
    2768,  2769,  2769,  2770,  2770,  2771,  2772,  2772,  2773,  2773,
    2774,  2774,  2775,  2775,  2776,  2776,  2777,  2777,  2778,  2778,
    2779,  2780,  2780,  2781,  2781,  2782,  2783,  2783,  2784,  2784,
    2785,  2785,  2786,  2787,  2787,  2788,  2788,  2789,  2789,  2790,
    2790,  2791,  2791,  2792,  2792,  2797,  2803,  2809,  2815,  2820,
    2825,  2831,  2837,  2843,  2849,  2855,  2861,  2867,  2873,  2879,
    2885,  2891,  2897,  2908,  2914,  2923,  2929,  2935,  2941,  2945,
    2951,  2955,  2961,  2967,  2973,  2979,  2985,  2991,  2997,  3003,
    3014,  3020,  3026,  3032,  3038,  3047,  3079,  3097,  3103,  3112,
    3118,  3123,  3130,  3129,  3135,  3135,  3136,  3140,  3144,  3148,
    3152,  3156,  3160,  3164,  3168,  3172,  3176,  3180,  3184,  3188,
    3192,  3196,  3200,  3207,  3206,  3212,  3212,  3213,  3217,  3221,
    3225,  3229,  3233,  3237,  3241,  3245,  3249,  3253,  3257,  3261,
    3265,  3269,  3273,  3277,  3283,  3289,  3295,  3301,  3307,  3317,
    3316,  3342,  3342,  3343,  3343,  3344,  3345,  3346,  3347,  3348,
    3351,  3357,  3364,  3363,  3368,  3368,  3369,  3373,  3379,  3402,
    3412,  3411,  3454,  3454,  3455,  3459,  3468,  3471,  3471,  3472,
    3472,  3473,  3474,  3475,  3476,  3477,  3478,  3479,  3480,  3481,
    3482,  3483,  3484,  3485,  3488,  3494,  3500,  3506,  3512,  3518,
    3524,  3530,  3536,  3542,  3548,  3554,  3560,  3566,  3575,  3578,
    3578,  3579,  3579,  3579,  3580,  3581,  3582,  3583,  3586,  3592,
    3598,  3612,  3618,  3624
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
  "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_SSL", "T_UNAUTH", "T_UNRESV", 
  "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", "TRUE_NO_OPER_FLOOD", 
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
  "connect_flags_items", "connect_flags_item", 
  "connect_rsa_public_key_file", "connect_encrypted", "connect_cryptlink", 
  "connect_compressed", "connect_auto", "connect_hub_mask", 
  "connect_leaf_mask", "connect_class", "connect_cipher_preference", 
  "kill_entry", "@15", "kill_items", "kill_item", "kill_user", 
  "kill_reason", "deny_entry", "@16", "deny_items", "deny_item", 
  "deny_ip", "deny_reason", "exempt_entry", "@17", "exempt_items", 
  "exempt_item", "exempt_ip", "gecos_entry", "@18", "gecos_items", 
  "gecos_item", "gecos_name", "gecos_reason", "general_entry", 
  "general_items", "general_item", "general_gline_min_cidr", 
  "general_gline_min_cidr6", "general_burst_away", 
  "general_use_whois_actually", "general_tkline_expire_notices", 
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
  "general_oper_umodes", "@19", "umode_oitems", "umode_oitem", 
  "general_oper_only_umodes", "@20", "umode_items", "umode_item", 
  "general_min_nonwildcard", "general_min_nonwildcard_simple", 
  "general_default_floodcount", "general_client_flood", 
  "general_dot_in_ip6_addr", "gline_entry", "@21", "gline_items", 
  "gline_item", "gline_enable", "gline_duration", "gline_logging", "@22", 
  "gline_logging_types", "gline_logging_type_item", "gline_user", 
  "gline_server", "gline_action", "@23", "gdeny_types", "gdeny_type_item", 
  "channel_entry", "channel_items", "channel_item", 
  "channel_disable_local_channels", "channel_use_except", 
  "channel_use_invex", "channel_use_knock", "channel_knock_delay", 
  "channel_knock_delay_channel", "channel_invite_ops_only", 
  "channel_max_chans_per_user", "channel_quiet_on_ban", 
  "channel_max_bans", "channel_default_split_user_count", 
  "channel_default_split_server_count", "channel_no_create_on_split", 
  "channel_no_join_on_split", "serverhide_entry", "serverhide_items", 
  "serverhide_item", "serverhide_flatten_links", 
  "serverhide_hide_servers", "serverhide_links_delay", 
  "serverhide_hidden", "serverhide_disable_hidden", 
  "serverhide_hide_server_ips", 0
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
     485,   486,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   237,   238,   238,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   240,   240,   241,   241,
     241,   241,   241,   241,   242,   242,   243,   243,   243,   243,
     244,   245,   245,   246,   246,   246,   247,   248,   249,   250,
     250,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   264,   265,   265,   265,
     265,   266,   267,   268,   269,   270,   270,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   272,   273,   274,   275,
     276,   277,   278,   278,   278,   278,   278,   278,   278,   279,
     281,   280,   282,   282,   283,   283,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   304,   303,   305,   305,   306,   306,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   309,   308,   310,   310,   311,   311,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     324,   323,   326,   325,   327,   327,   328,   328,   329,   329,
     330,   330,   330,   330,   330,   331,   332,   332,   333,   333,
     334,   335,   337,   336,   338,   338,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   340,   341,   342,   343,   345,   344,   346,   346,
     347,   347,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   360,   359,   361,   361,   362,   362,   362,   362,
     363,   364,   365,   367,   366,   368,   368,   369,   369,   369,
     369,   370,   371,   373,   372,   374,   374,   375,   375,   375,
     375,   375,   375,   375,   377,   376,   378,   378,   379,   379,
     379,   380,   382,   381,   383,   383,   384,   384,   384,   384,
     384,   384,   384,   384,   386,   385,   387,   387,   388,   388,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   390,   391,
     392,   393,   394,   395,   396,   396,   397,   399,   398,   400,
     400,   401,   401,   401,   401,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   412,   411,   413,   413,   414,
     414,   414,   415,   416,   418,   417,   419,   419,   420,   420,
     420,   421,   422,   424,   423,   425,   425,   426,   426,   427,
     429,   428,   430,   430,   431,   431,   431,   432,   433,   434,
     435,   435,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   460,
     461,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   483,   482,   484,   484,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   487,   486,   488,   488,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   490,   491,   492,   493,   494,   496,
     495,   497,   497,   498,   498,   498,   498,   498,   498,   498,
     499,   500,   502,   501,   503,   503,   504,   504,   505,   506,
     508,   507,   509,   509,   510,   510,   511,   512,   512,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     529,   530,   530,   530,   530,   530,   530,   530,   531,   532,
     533,   534,   535,   536
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
       0,     6,     0,     5,     3,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     1,     3,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     0,     5,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       1,     4,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     2,     1,     1,     1,
       1,     4,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       4,     4,     4,     4,     4,     4,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     4,     4,     0,     6,     2,     1,     1,     1,     4,
       0,     6,     2,     1,     1,     1,     1,     4,     4,     5,
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
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,   222,     0,   174,   324,   384,
     393,   400,     0,   559,   375,   200,     0,     0,   110,   272,
       0,     0,   283,   304,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     176,   326,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   603,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   588,   589,   590,   591,   592,   594,   595,
     596,   597,   598,   593,   599,   600,   601,   602,   191,     0,
     177,   349,     0,   327,     0,     0,     0,   464,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   533,
       0,   512,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   411,   461,   462,   459,   463,   460,   422,   412,   413,
     450,   414,   415,   416,   417,   418,   419,   420,   421,   455,
     423,   424,   425,   427,   432,   428,   430,   429,   445,   431,
     433,   434,   435,   436,   439,   437,   426,   438,   441,   449,
     451,   452,   442,   443,   457,   458,   454,   444,   440,   447,
     448,   446,   453,   456,     0,     0,     0,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    92,    94,    93,    90,    91,    45,     0,     0,     0,
      42,    43,    44,   136,     0,   113,     0,   627,     0,     0,
       0,     0,     0,     0,     0,   620,   621,   622,   623,   625,
     624,   626,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    61,    58,    51,    60,
      54,    55,    56,    52,    59,    57,    53,     0,     0,     0,
       0,     0,     0,    75,   241,     0,     0,     0,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   226,   227,   236,   228,   229,   230,   231,   232,
     239,   233,   234,   235,   237,   238,   240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   587,     0,     0,   390,     0,     0,     0,   387,
     388,   389,   398,     0,     0,   396,   397,   406,     0,     0,
       0,   403,   404,   405,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   410,   569,   580,
       0,     0,   572,     0,     0,     0,   562,   563,   564,   565,
     566,   567,   568,   381,     0,     0,     0,   378,   379,   380,
     214,   202,     0,     0,     0,   211,     0,   209,   210,   212,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,     0,    41,     0,   279,     0,     0,     0,
       0,   275,   276,   277,   278,     0,     0,     0,     0,     0,
       0,     0,   619,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,   290,     0,   293,     0,
       0,   286,   287,   288,   289,   310,     0,   312,     0,   307,
     308,   309,     0,     0,     0,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   586,   189,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     357,     0,     0,     0,     0,     0,     0,     0,     0,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   345,   342,
     344,   343,   341,   338,   339,   340,   346,     0,     0,     0,
     386,     0,     0,   395,     0,     0,     0,   402,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,   409,     0,     0,     0,     0,     0,     0,
       0,   561,     0,     0,     0,   377,     0,     0,     0,     0,
       0,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,    40,
     134,     0,     0,     0,     0,   153,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     115,   116,   117,   118,   131,   119,   132,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   133,     0,
       0,     0,     0,   274,     0,     0,     0,     0,     0,     0,
     618,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,   285,     0,     0,
       0,   306,    83,    82,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     223,   615,   614,   604,    26,    26,    26,    26,    26,    28,
      27,   608,   609,   613,   611,   616,   617,   610,   612,   605,
     606,   607,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   328,     0,     0,   385,     0,   394,     0,     0,   401,
     475,   479,   467,   493,   506,   505,   556,   510,   473,   558,
     501,   508,   474,   465,   466,   482,   471,   500,   472,   470,
     484,   483,   502,   478,   477,   476,   503,   499,   554,   555,
     496,   537,   551,   552,   538,   539,   546,   540,   549,   553,
     542,   547,   543,   548,   541,   545,   544,   550,     0,   536,
     498,   516,   530,   531,   517,   518,   525,   519,   528,   532,
     521,   526,   522,   527,   520,   524,   523,   529,     0,   515,
     492,   494,   509,   504,   469,   495,   490,   491,   488,   489,
     486,   487,   481,   480,    34,    34,    34,    36,    35,   557,
     511,   497,   507,   468,   485,     0,     0,     0,     0,     0,
       0,   560,     0,     0,   376,     0,     0,     0,   218,     0,
     217,   201,   100,   101,    99,    98,   102,   108,   103,   107,
     105,   106,   104,    97,    96,   109,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,   273,   632,   628,   631,   633,   629,   630,    67,    73,
      65,    69,    68,    64,    63,    66,    72,    70,    71,     0,
       0,     0,   284,     0,     0,   305,   265,   245,   264,   256,
     257,   253,   259,   255,   254,   261,   258,     0,   260,   252,
       0,   249,   251,   267,   263,   262,   271,   266,   243,   270,
     269,   268,   244,   242,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   325,   391,   392,
     399,   407,   408,   534,     0,   513,     0,    37,    38,    39,
     585,   584,     0,   583,   571,   570,   577,   576,     0,   575,
     579,   578,   383,   382,   207,   206,     0,   205,   221,   220,
       0,   215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   281,   282,   280,   291,   297,   301,   303,   302,
     300,   298,   299,     0,   296,   292,   311,   316,   320,   323,
     322,   321,   319,   317,   318,     0,   315,   250,   247,     0,
     194,   196,   198,   197,   195,   190,   193,   192,   199,   352,
     354,   355,   370,   374,   373,   369,   368,   367,   356,   364,
     365,   362,   363,   361,     0,   360,   350,   371,   372,   348,
     353,   366,   351,   535,   514,   581,     0,   573,     0,   203,
       0,   219,   216,   152,   142,   150,   139,   167,   165,   164,
     159,   168,   172,   161,   169,     0,   171,   166,   160,   173,
     170,   162,   163,     0,   156,   158,   148,   143,   140,   145,
     135,   149,   138,   151,   144,   141,   147,   137,   146,   294,
       0,   313,     0,   248,   358,     0,   582,   574,   204,   157,
     154,     0,   295,   314,   359,   155
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   819,   820,   957,   958,    25,   249,   250,
     251,   252,    26,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,    27,    71,    72,    73,
      74,    75,    28,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    29,    61,   254,   739,   740,   741,   255,
     742,   743,   744,   745,   746,   747,   748,   749,   750,   751,
     752,   753,   754,   755,   756,   757,   758,  1002,  1253,  1254,
    1255,    30,    50,   109,   569,   570,   571,   110,   572,   573,
     574,   575,   576,   577,   578,   579,    31,    58,   455,   696,
    1136,  1137,   456,   457,   458,   979,   980,   459,   460,    32,
      48,   320,   321,   322,   323,   324,   325,   326,   529,  1060,
    1061,  1062,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    33,    62,   480,   481,   482,   483,   484,    34,
      65,   510,   511,   512,   513,   514,   784,  1173,  1174,    35,
      66,   518,   519,   520,   521,   789,  1185,  1186,    36,    51,
     112,   598,   599,   600,   113,   601,   602,   603,   604,   605,
     606,   607,   852,  1214,  1215,   608,   609,   610,   611,   612,
     613,   614,   615,   616,    37,    57,   446,   447,   448,   449,
      38,    52,   358,   359,   360,   361,    39,    53,   364,   365,
     366,    40,    54,   370,   371,   372,   373,    41,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   407,   938,   939,   218,
     405,   918,   919,   219,   220,   221,   222,   223,    42,    56,
     435,   436,   437,   438,   439,   687,  1128,  1129,   440,   441,
     442,   684,  1122,  1123,    43,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    44,   264,   265,   266,   267,   268,   269,   270,   271
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -644
static const short yypact[] =
{
    -644,   660,  -644,  -172,  -231,  -644,  -229,  -644,  -644,  -644,
    -644,  -644,  -219,  -644,  -644,  -644,  -212,  -209,  -644,  -644,
    -203,  -193,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,    90,  -191,   540,
     -94,   -74,  -154,  -134,  -122,   374,  -116,  -106,  -103,   371,
      23,    -7,   -96,   288,   402,   -82,   -76,  -644,   -69,   -66,
     -44,    29,  -644,  -644,  -644,  -644,   616,  -644,   -36,   -33,
     -31,   -27,   -22,   -12,    -5,    13,    20,    41,    49,    50,
      58,    60,   173,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,    -6,
    -644,  -644,    63,  -644,    82,     5,     6,  -644,    65,    71,
      80,    85,    87,    88,    98,   105,   108,   109,   112,   114,
     115,   116,   118,   119,   120,   121,   127,   128,   129,   131,
     134,   139,   142,   146,   149,   157,   174,   177,   178,  -644,
     182,  -644,   184,   186,   188,   193,   197,   200,   205,   206,
     210,   211,   212,   214,   220,   223,   226,   227,   236,   237,
       8,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,   364,    61,   252,  -644,   238,   239,
     249,   259,   261,   269,   271,   275,   155,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,   277,   279,    10,
    -644,  -644,  -644,  -644,    91,  -644,   154,  -644,   282,   283,
     285,   286,   289,   290,   230,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,   291,   292,   293,   296,   297,   298,   300,
     301,   303,   309,   311,   143,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,    96,    19,   190,
     191,   218,   -72,  -644,  -644,   323,   324,   325,  -644,   329,
     330,   332,   336,   341,   342,   343,   345,   346,   347,   348,
     166,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,   256,   268,   151,
     344,   344,   401,   463,   224,   409,   411,   412,   413,   416,
     417,   365,  -644,   678,   721,  -644,   363,   366,     9,  -644,
    -644,  -644,  -644,   373,    25,  -644,  -644,  -644,   375,   379,
      12,  -644,  -644,  -644,   422,   344,   429,   344,   487,   475,
     496,   442,   444,   445,   501,   484,   449,   513,   517,   519,
     466,   344,   476,   530,   514,   479,   537,   541,   544,   344,
     545,   522,   547,   549,   498,   441,   503,   450,   344,   344,
     509,   550,   512,   515,    89,    95,   518,   520,   344,   344,
     569,   344,   521,   524,   525,   526,   464,  -644,  -644,  -644,
     469,   477,  -644,   478,   481,   231,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,   491,   494,    55,  -644,  -644,  -644,
    -644,  -644,   495,   499,   502,  -644,    46,  -644,  -644,  -644,
    -644,   559,   570,   574,   579,   643,   581,   585,   554,   506,
    -644,   599,   600,   510,  -644,   384,  -644,   508,   523,   531,
       7,  -644,  -644,  -644,  -644,   572,   578,   584,   588,   590,
     344,   542,  -644,   607,   592,   635,   636,   640,   641,   645,
     650,   661,   651,   652,   561,  -644,  -644,   560,  -644,   565,
      32,  -644,  -644,  -644,  -644,  -644,   566,  -644,    54,  -644,
    -644,  -644,   562,   573,   577,  -644,   627,   666,   633,   580,
     637,   642,   646,   647,   648,   673,   695,   688,   689,   653,
     691,   586,  -644,   601,   602,   603,   490,   606,   617,   618,
     619,   620,   621,   622,   623,   625,   626,   644,  -644,  -644,
     604,   630,   632,   639,   656,   657,   663,   665,   669,   235,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,   670,   672,   674,   675,   676,   679,   680,   690,   692,
    -644,   693,   694,   696,   697,   698,   699,   700,   169,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,   732,   735,   681,
    -644,   737,   704,  -644,   738,   739,   705,  -644,   706,   707,
     708,   709,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   733,   734,   740,   741,   742,   743,   744,   677,
     745,   710,   746,   747,   748,   749,   750,   751,   752,   753,
     754,   755,   756,   757,   758,   759,    93,   760,   761,   762,
     763,   764,   765,  -644,   766,   344,   703,   767,   772,   782,
     768,  -644,   784,   790,   771,  -644,   769,   802,   813,   842,
     773,  -644,   774,   775,   776,   777,   778,   779,   780,   781,
     783,   785,   786,   787,   788,   789,  -644,   791,   792,  -644,
    -644,   793,   794,   795,   796,  -644,   797,   798,   799,   800,
     801,   803,   804,   805,   806,   807,   808,   809,   810,    18,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,   827,
     828,   829,   814,  -644,   815,   816,   817,   818,   819,   820,
    -644,   821,   822,   823,   824,   825,   826,   830,   831,   832,
     833,   834,  -644,   858,   835,   859,   836,  -644,   874,   837,
     839,  -644,  -644,  -644,  -644,   841,   843,   844,   687,   845,
     846,   847,   848,   849,   850,   851,   852,   853,   854,   855,
    -644,  -644,  -644,  -644,   344,   344,   344,   344,   344,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,   344,   894,   900,   903,   904,   887,   915,   344,
     569,   856,  -644,   919,   123,   883,   921,   927,   892,   897,
     912,   950,   857,   951,   953,   954,   955,   974,   957,   958,
     867,  -644,   868,   869,  -644,   870,  -644,   871,   872,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -218,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -200,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,   569,   569,   569,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,     0,   873,   875,    16,   876,
     877,  -644,   878,   879,  -644,   -65,   880,   881,   924,  -192,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,   937,   975,
     939,   940,   884,   941,   943,   944,   945,   983,   947,   985,
     949,   952,   987,   956,   988,   959,   898,  -644,   899,   902,
     905,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,   906,
     215,   907,  -644,   908,   459,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,   736,  -644,  -644,
    -179,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,   909,
     910,   911,   913,   914,   916,   917,   918,   920,  -644,   922,
     923,   925,   926,   928,   929,   930,   931,   932,   933,   472,
     934,   935,   936,   938,   942,   946,   948,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,   677,  -644,   710,  -644,  -644,  -644,
    -644,  -644,  -169,  -644,  -644,  -644,  -644,  -644,  -161,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -140,  -644,  -644,  -644,
    1010,  -644,   842,   960,   961,   962,   963,   504,   964,   965,
     966,   967,   968,   969,   970,   971,   972,   973,   976,   977,
     978,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -137,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -130,  -644,  -644,  -644,   687,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -112,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,     0,  -644,    16,  -644,
     -65,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,   486,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,   -75,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
     215,  -644,   459,  -644,  -644,   472,  -644,  -644,  -644,  -644,
    -644,   504,  -644,  -644,  -644,  -644
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -644,  -644,  -644,  -328,  -340,  -643,  -418,  -644,  -644,   886,
    -644,  -644,  -644,  -644,   598,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  1073,  -644,
    -644,  -644,  -644,  -644,   979,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,   232,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -311,
     -98,  -644,  -644,  -644,  -644,   582,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,   -77,  -644,   770,  -644,  -644,    14,  -644,  -644,  -644,
    -644,  -644,   861,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
     -30,   122,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,   702,  -644,  -644,  -644,  -644,
    -644,  -644,   659,  -644,  -644,  -644,  -644,  -644,   -99,  -644,
    -644,  -644,   654,  -644,  -644,  -644,  -644,   -97,  -644,  -644,
    -644,  -644,   575,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,   -92,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,   811,  -644,  -644,
    -644,  -644,  -644,   860,  -644,  -644,  -644,  -644,  -644,   812,
    -644,  -644,  -644,  -644,   862,  -644,  -644,  -644,  -644,  1007,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,    68,  -644,
    -644,  -644,    72,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,   838,  -644,  -644,  -644,  -644,  -644,   -43,  -644,  -644,
    -644,  -644,  -644,   -39,  -644,  -644,  1096,  -644,  -644,  -644,
    -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,  -644,
    -644,  -644,  -644,   980,  -644,  -644,  -644,  -644,  -644,  -644
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     547,   548,   677,    47,  1134,    49,   362,   367,   476,   117,
     355,   246,  1120,   367,  1113,    55,   118,   119,  1114,   720,
     515,   120,    59,   721,   246,    60,   362,   121,  1126,   477,
      67,    63,  1115,   506,   122,   629,  1116,   631,   123,   124,
    1141,    64,   722,    76,  1142,   125,   108,   450,   126,   127,
     128,   645,   129,  1188,   723,   515,   443,  1189,   130,   653,
      45,    46,   443,  1225,    68,   724,   111,  1226,   662,   663,
     725,  1227,   131,   132,    69,  1228,   133,   726,   674,   675,
     114,   678,   134,   355,   727,   363,   135,   136,   728,   356,
     137,    67,  1229,   138,   139,  1269,  1230,   506,   451,  1270,
     115,   729,  1271,   140,   141,   363,  1272,   954,   955,   956,
     142,   143,   116,   144,   145,   146,   147,   368,   224,   247,
    1274,   452,   478,   368,  1275,    68,   453,   148,   225,   730,
     516,   226,   247,   253,   731,    69,   149,   150,   256,   151,
      70,   152,   153,   507,   272,   154,   248,  1135,   369,   479,
     769,   357,   297,   732,   369,   476,   227,  1280,   298,   248,
     525,  1281,   356,   733,   734,   516,   299,   304,   735,   300,
     580,   155,   581,   156,    77,   582,   477,   157,   273,  1121,
     583,   158,   159,   160,   161,   454,   305,   517,   162,   163,
     306,   301,   584,   585,   586,  1127,   164,   444,   587,   337,
     508,    70,   338,   444,   339,    78,    79,   507,   340,   228,
     229,   230,    80,   341,   307,   676,   588,   231,   308,   274,
     589,   590,   517,   342,   357,   165,   166,   309,   353,   167,
     343,   257,   428,   310,   168,   429,   559,   736,   737,   169,
     762,   426,   619,   473,   591,   626,   592,   738,   344,   232,
     311,  1016,   509,   450,   275,   345,   276,   277,   622,   593,
      81,    82,   302,   560,   508,   786,   668,   669,   258,   478,
      83,    84,   670,   671,   430,   445,   346,   431,   312,   700,
     594,   445,   233,   259,   347,   348,   313,   790,   694,   257,
      85,    86,   278,   349,   279,   350,   479,   354,  1166,   260,
     374,   314,   261,   262,   451,    87,   375,   280,   595,   315,
     316,  1117,  1118,  1119,    88,   376,   509,  1090,  1091,   596,
     377,   263,   378,   379,   432,   475,   258,   452,   545,   597,
     522,   523,   453,   380,   561,   562,   563,   317,   318,   564,
     381,   259,   433,   382,   383,   966,   565,   384,   281,   385,
     386,   387,   234,   388,   389,   390,   391,   260,   524,   566,
     261,   262,   392,   393,   394,   428,   395,  1167,   429,   396,
     282,   283,   227,   567,   397,   117,   504,   398,   543,   263,
     235,   399,   118,   119,   400,   720,   319,   120,   469,   721,
     544,   454,   401,   121,   568,    89,    90,    91,  1168,   541,
     122,   551,   860,   272,   123,   124,   351,   430,   722,   402,
     431,   125,   403,   404,   126,   127,   128,   406,   129,   408,
     723,   409,  1087,   410,   130,   228,   229,   230,   411,  1169,
    1170,   724,   412,   231,  1171,   413,   725,   273,   131,   132,
     414,   415,   133,   726,  1172,   416,   417,   418,   134,   419,
     727,   434,   135,   136,   728,   420,   137,   432,   421,   138,
     139,   422,   423,   491,   690,   232,   546,   729,   841,   140,
     141,   424,   425,   461,   462,   433,   142,   143,   274,   144,
     145,   146,   147,  1209,   463,  1210,  1074,  1075,  1076,  1077,
    1078,  1237,  1079,   148,   464,   730,   465,  1211,   233,  1086,
     731,  1212,   149,   150,   466,   151,   467,   152,   153,  1237,
     468,   154,   471,   275,   472,   276,   277,   485,   486,   732,
     487,   488,  1238,   549,   489,   490,   493,   494,   495,   733,
     734,   496,   497,   498,   735,   499,   500,   155,   501,   156,
    1238,    77,  1177,   157,   502,  1239,   503,   158,   159,   160,
     161,   278,  1240,   279,   162,   163,  1241,  1242,   526,   527,
     528,  1213,   164,  1239,   530,   531,   280,   532,   234,  1243,
    1240,   533,    78,    79,  1241,  1242,   534,   535,   536,    80,
     537,   538,   539,   540,   434,   550,   552,  1243,   553,   554,
     555,   165,   166,   556,   557,   167,   235,   558,   617,   628,
     168,   618,  1244,   736,   737,   169,   630,   281,   621,   632,
     624,  1178,   546,   738,   625,   633,  1246,   304,   634,   635,
    1244,   636,   637,   638,   639,  1245,   640,    81,    82,   282,
     283,  1247,  1248,  1249,  1246,   641,   305,    83,    84,   642,
     306,   643,  1179,   644,   814,   815,   816,   817,   818,  1247,
    1248,  1249,   647,   646,   648,  1180,   649,    85,    86,   650,
       2,     3,   655,   651,   307,     4,   652,   654,   308,   656,
       5,   657,    87,  1181,  1182,   658,   659,   309,  1183,   559,
     660,    88,     6,   310,     7,   661,   664,     8,  1184,   666,
     665,   676,   667,  1250,     9,   672,   683,   673,   679,   702,
     311,   680,   681,   682,   685,  1251,   560,  1049,  1050,    10,
     703,  1250,   686,   688,   704,  1252,   689,    11,    12,   705,
      13,   713,   580,  1251,   581,   714,   692,   582,   312,   693,
     697,   715,   583,  1252,   698,  1051,   313,   699,   716,   717,
     718,    14,   719,   759,   584,   585,   586,   771,  1052,   764,
     587,   314,    15,    16,  1053,   765,  1049,  1050,   760,   315,
     316,   766,    89,    90,    91,   767,   761,   768,   588,   772,
      17,  1054,   589,   590,   770,   773,   774,   561,   562,   563,
     775,   776,   564,   779,  1051,   777,    18,   317,   318,   565,
     778,   780,   781,   782,   792,   783,   591,  1052,   592,  1055,
     785,   788,   566,  1053,   795,   793,   796,  1056,  1057,   794,
     797,   593,    19,   804,   799,   798,   567,   805,   810,   800,
    1054,    20,    21,   801,   802,   803,    22,    23,   806,   807,
     808,   809,   594,   811,   812,   813,   319,   568,   821,   832,
    1058,   706,   707,   708,   709,   710,   711,   712,  1055,   822,
     823,   824,   825,   826,   827,   828,  1056,   829,   830,  1059,
     595,   901,   902,   903,   904,   833,   905,   834,   906,   907,
     908,   596,   862,   909,   835,   863,   831,   865,   867,   868,
     967,   597,   505,   910,   911,   912,   913,   914,   915,  1058,
     916,   836,   837,   917,   921,   922,   923,   924,   838,   925,
     839,   926,   927,   928,   840,   843,   929,   844,  1059,   845,
     846,   847,   969,   864,   848,   849,   930,   931,   932,   933,
     934,   935,   970,   936,   972,   850,   937,   851,   853,   854,
     973,   855,   856,   857,   858,   859,   866,   869,   870,   871,
     872,   873,   976,   874,   875,   876,   877,   878,   879,   880,
     881,   882,   883,   977,   884,   885,   886,   887,   888,   889,
     890,   891,   892,   893,   978,   894,   895,  1018,  1019,  1020,
    1285,  1017,   896,   897,   898,   899,   900,   920,   940,   941,
     942,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   953,   959,   960,   961,   962,   963,   964,  1039,  1041,
     971,   965,   968,   974,   975,   981,   982,   983,   984,   985,
     986,   987,   988,   989,  1043,   990,  1080,   991,   992,   993,
     994,   995,  1081,   996,   997,  1082,  1083,  1084,   998,   999,
    1000,  1001,  1003,  1004,  1005,  1006,  1007,  1085,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,  1015,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1089,
    1092,  1093,  1034,  1035,  1036,  1037,  1038,  1094,  1042,  1095,
    1040,  1045,  1044,  1046,  1096,  1047,  1048,  1063,  1064,  1065,
    1066,  1067,  1068,  1069,  1070,  1071,  1072,  1073,  1088,  1097,
    1098,  1100,  1099,  1101,  1102,  1103,  1104,  1105,  1106,  1107,
    1108,  1109,  1110,  1111,  1112,  1124,  1140,  1125,  1130,  1131,
    1132,  1133,  1138,  1139,  1143,  1144,  1145,  1146,  1148,  1147,
    1149,  1150,  1151,  1152,  1153,  1154,  1155,  1157,  1159,  1156,
    1161,  1162,  1231,  1158,  1163,   474,  1160,  1164,  1165,  1175,
    1176,  1190,  1191,  1192,   303,  1193,  1194,  1279,  1195,  1196,
    1197,   842,  1198,  1278,  1199,  1200,  1232,  1201,  1202,  1273,
    1203,  1204,  1205,  1206,  1207,  1208,  1216,  1217,  1218,   787,
    1219,  1282,   791,   861,  1220,  1283,   623,   427,  1221,  1187,
    1222,   542,   763,  1284,  1224,  1277,  1223,  1276,   352,     0,
       0,     0,  1233,  1234,  1235,  1236,  1256,  1257,  1258,  1259,
    1260,  1261,  1262,  1263,  1264,  1265,     0,     0,  1266,  1267,
    1268,     0,     0,     0,     0,   470,     0,     0,   620,     0,
       0,     0,     0,     0,     0,     0,   701,     0,     0,     0,
       0,     0,   627,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   492,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   695,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   691
};

static const short yycheck[] =
{
     340,   341,   420,   234,    69,   234,     1,     1,     1,     1,
       1,     1,    12,     1,   232,   234,     8,     9,   236,     1,
       1,    13,   234,     5,     1,   234,     1,    19,    12,    22,
       1,   234,   232,     1,    26,   375,   236,   377,    30,    31,
     232,   234,    24,   234,   236,    37,   140,     1,    40,    41,
      42,   391,    44,   232,    36,     1,     1,   236,    50,   399,
     232,   233,     1,   232,    35,    47,   140,   236,   408,   409,
      52,   232,    64,    65,    45,   236,    68,    59,   418,   419,
     234,   421,    74,     1,    66,    80,    78,    79,    70,    80,
      82,     1,   232,    85,    86,   232,   236,     1,    52,   236,
     234,    83,   232,    95,    96,    80,   236,    14,    15,    16,
     102,   103,   234,   105,   106,   107,   108,   111,   234,   109,
     232,    75,   115,   111,   236,    35,    80,   119,   234,   111,
     111,   234,   109,   140,   116,    45,   128,   129,   234,   131,
     111,   133,   134,   111,     1,   137,   136,   212,   142,   142,
     490,   142,   234,   135,   142,     1,     1,   232,   234,   136,
     232,   236,    80,   145,   146,   111,   235,     1,   150,   235,
       1,   163,     3,   165,     1,     6,    22,   169,    35,   179,
      11,   173,   174,   175,   176,   139,    20,   168,   180,   181,
      24,   235,    23,    24,    25,   179,   188,   142,    29,   235,
     168,   111,   235,   142,   235,    32,    33,   111,   235,    54,
      55,    56,    39,   235,    48,   122,    47,    62,    52,    76,
      51,    52,   168,   235,   142,   217,   218,    61,   234,   221,
     235,     1,     1,    67,   226,     4,     1,   219,   220,   231,
     233,   233,   233,   233,    75,   233,    77,   229,   235,    94,
      84,   233,   220,     1,   111,   235,   113,   114,   233,    90,
      87,    88,   233,    28,   168,   233,   177,   178,    38,   115,
      97,    98,   177,   178,    43,   220,   235,    46,   112,   233,
     111,   220,   127,    53,   235,   235,   120,   233,   233,     1,
     117,   118,   149,   235,   151,   235,   142,   234,    83,    69,
     235,   135,    72,    73,    52,   132,   235,   164,   139,   143,
     144,   954,   955,   956,   141,   235,   220,   194,   195,   150,
     235,    91,   235,   235,    93,   234,    38,    75,   177,   160,
     140,   140,    80,   235,    99,   100,   101,   171,   172,   104,
     235,    53,   111,   235,   235,   685,   111,   235,   205,   235,
     235,   235,   197,   235,   235,   235,   235,    69,   140,   124,
      72,    73,   235,   235,   235,     1,   235,   152,     4,   235,
     227,   228,     1,   138,   235,     1,   233,   235,   122,    91,
     225,   235,     8,     9,   235,     1,   220,    13,   233,     5,
     122,   139,   235,    19,   159,   222,   223,   224,   183,   233,
      26,   177,   233,     1,    30,    31,   233,    43,    24,   235,
      46,    37,   235,   235,    40,    41,    42,   235,    44,   235,
      36,   235,   840,   235,    50,    54,    55,    56,   235,   214,
     215,    47,   235,    62,   219,   235,    52,    35,    64,    65,
     235,   235,    68,    59,   229,   235,   235,   235,    74,   235,
      66,   220,    78,    79,    70,   235,    82,    93,   235,    85,
      86,   235,   235,   233,   233,    94,   122,    83,   233,    95,
      96,   235,   235,   235,   235,   111,   102,   103,    76,   105,
     106,   107,   108,    11,   235,    13,   814,   815,   816,   817,
     818,     5,   832,   119,   235,   111,   235,    25,   127,   839,
     116,    29,   128,   129,   235,   131,   235,   133,   134,     5,
     235,   137,   235,   111,   235,   113,   114,   235,   235,   135,
     235,   235,    36,   122,   235,   235,   235,   235,   235,   145,
     146,   235,   235,   235,   150,   235,   235,   163,   235,   165,
      36,     1,    83,   169,   235,    59,   235,   173,   174,   175,
     176,   149,    66,   151,   180,   181,    70,    71,   235,   235,
     235,    89,   188,    59,   235,   235,   164,   235,   197,    83,
      66,   235,    32,    33,    70,    71,   235,   235,   235,    39,
     235,   235,   235,   235,   220,   122,   177,    83,   177,   177,
     177,   217,   218,   177,   177,   221,   225,   232,   235,   177,
     226,   235,   116,   219,   220,   231,   177,   205,   235,   122,
     235,   152,   122,   229,   235,   140,   130,     1,   122,   177,
     116,   177,   177,   122,   140,   121,   177,    87,    88,   227,
     228,   145,   146,   147,   130,   122,    20,    97,    98,   122,
      24,   122,   183,   177,   154,   155,   156,   157,   158,   145,
     146,   147,   122,   177,   140,   196,   177,   117,   118,   122,
       0,     1,   140,   122,    48,     5,   122,   122,    52,   122,
      10,   122,   132,   214,   215,   177,   235,    61,   219,     1,
     177,   141,    22,    67,    24,   235,   177,    27,   229,   177,
     140,   122,   177,   207,    34,   177,   232,   177,   177,   140,
      84,   177,   177,   177,   235,   219,    28,    20,    21,    49,
     140,   207,   235,   235,   140,   229,   235,    57,    58,   140,
      60,   140,     1,   219,     3,   140,   235,     6,   112,   235,
     235,   177,    11,   229,   235,    48,   120,   235,   232,   140,
     140,    81,   232,   235,    23,    24,    25,   140,    61,   177,
      29,   135,    92,    93,    67,   177,    20,    21,   235,   143,
     144,   177,   222,   223,   224,   177,   235,   177,    47,   177,
     110,    84,    51,    52,   232,   140,   140,    99,   100,   101,
     140,   140,   104,   122,    48,   140,   126,   171,   172,   111,
     140,   140,   140,   232,   232,   235,    75,    61,    77,   112,
     235,   235,   124,    67,   177,   232,   140,   120,   121,   232,
     177,    90,   152,   140,   177,   235,   138,   122,   232,   177,
      84,   161,   162,   177,   177,   177,   166,   167,   140,   140,
     177,   140,   111,   232,   232,   232,   220,   159,   232,   235,
     153,   198,   199,   200,   201,   202,   203,   204,   112,   232,
     232,   232,   232,   232,   232,   232,   120,   232,   232,   172,
     139,   184,   185,   186,   187,   235,   189,   235,   191,   192,
     193,   150,   140,   196,   235,   140,   232,   140,   140,   140,
     177,   160,   284,   206,   207,   208,   209,   210,   211,   153,
     213,   235,   235,   216,   184,   185,   186,   187,   235,   189,
     235,   191,   192,   193,   235,   235,   196,   235,   172,   235,
     235,   235,   140,   232,   235,   235,   206,   207,   208,   209,
     210,   211,   140,   213,   140,   235,   216,   235,   235,   235,
     140,   235,   235,   235,   235,   235,   232,   232,   232,   232,
     232,   232,   140,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   140,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   122,   232,   232,   140,   140,   140,
    1281,   739,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   140,   140,
     232,   235,   235,   232,   235,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   140,   232,   122,   232,   232,   232,
     232,   232,   122,   232,   232,   122,   122,   140,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   122,   235,   235,
     235,   235,   235,   235,   235,   235,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   140,
     177,   140,   232,   232,   232,   232,   232,   140,   232,   177,
     235,   232,   235,   232,   177,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   177,
     140,   140,   235,   140,   140,   140,   122,   140,   140,   232,
     232,   232,   232,   232,   232,   232,   182,   232,   232,   232,
     232,   232,   232,   232,   177,   140,   177,   177,   177,   235,
     177,   177,   177,   140,   177,   140,   177,   140,   140,   177,
     232,   232,   122,   177,   232,   249,   177,   232,   232,   232,
     232,   232,   232,   232,    71,   232,   232,  1245,   232,   232,
     232,   569,   232,  1230,   232,   232,  1142,   232,   232,  1189,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   510,
     232,  1270,   518,   598,   232,  1272,   364,   170,   232,  1057,
     232,   320,   480,  1275,  1116,  1228,  1114,  1226,    92,    -1,
      -1,    -1,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,    -1,    -1,   232,   232,
     232,    -1,    -1,    -1,    -1,   236,    -1,    -1,   358,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,
      -1,    -1,   370,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   238,     0,     1,     5,    10,    22,    24,    27,    34,
      49,    57,    58,    60,    81,    92,    93,   110,   126,   152,
     161,   162,   166,   167,   239,   244,   249,   263,   269,   280,
     308,   323,   336,   359,   366,   376,   385,   411,   417,   423,
     428,   434,   495,   511,   528,   232,   233,   234,   337,   234,
     309,   386,   418,   424,   429,   234,   496,   412,   324,   234,
     234,   281,   360,   234,   234,   367,   377,     1,    35,    45,
     111,   264,   265,   266,   267,   268,   234,     1,    32,    33,
      39,    87,    88,    97,    98,   117,   118,   132,   141,   222,
     223,   224,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   140,   310,
     314,   140,   387,   391,   234,   234,   234,     1,     8,     9,
      13,    19,    26,    30,    31,    37,    40,    41,    42,    44,
      50,    64,    65,    68,    74,    78,    79,    82,    85,    86,
      95,    96,   102,   103,   105,   106,   107,   108,   119,   128,
     129,   131,   133,   134,   137,   163,   165,   169,   173,   174,
     175,   176,   180,   181,   188,   217,   218,   221,   226,   231,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   486,   490,
     491,   492,   493,   494,   234,   234,   234,     1,    54,    55,
      56,    62,    94,   127,   197,   225,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,     1,   109,   136,   245,
     246,   247,   248,   140,   282,   286,   234,     1,    38,    53,
      69,    72,    73,    91,   529,   530,   531,   532,   533,   534,
     535,   536,     1,    35,    76,   111,   113,   114,   149,   151,
     164,   205,   227,   228,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   234,   234,   235,
     235,   235,   233,   265,     1,    20,    24,    48,    52,    61,
      67,    84,   112,   120,   135,   143,   144,   171,   172,   220,
     338,   339,   340,   341,   342,   343,   344,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   233,   513,   234,   234,     1,    80,   142,   419,   420,
     421,   422,     1,    80,   425,   426,   427,     1,   111,   142,
     430,   431,   432,   433,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   487,   235,   483,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   233,   436,     1,     4,
      43,    46,    93,   111,   220,   497,   498,   499,   500,   501,
     505,   506,   507,     1,   142,   220,   413,   414,   415,   416,
       1,    52,    75,    80,   139,   325,   329,   330,   331,   334,
     335,   235,   235,   235,   235,   235,   235,   235,   235,   233,
     271,   235,   235,   233,   246,   234,     1,    22,   115,   142,
     361,   362,   363,   364,   365,   235,   235,   235,   235,   235,
     235,   233,   530,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   233,   251,     1,   111,   168,   220,
     368,   369,   370,   371,   372,     1,   111,   168,   378,   379,
     380,   381,   140,   140,   140,   232,   235,   235,   235,   345,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   233,   339,   122,   122,   177,   122,   241,   241,   122,
     122,   177,   177,   177,   177,   177,   177,   177,   232,     1,
      28,    99,   100,   101,   104,   111,   124,   138,   159,   311,
     312,   313,   315,   316,   317,   318,   319,   320,   321,   322,
       1,     3,     6,    11,    23,    24,    25,    29,    47,    51,
      52,    75,    77,    90,   111,   139,   150,   160,   388,   389,
     390,   392,   393,   394,   395,   396,   397,   398,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   235,   235,   233,
     420,   235,   233,   426,   235,   235,   233,   431,   177,   241,
     177,   241,   122,   140,   122,   177,   177,   177,   122,   140,
     177,   122,   122,   122,   177,   241,   177,   122,   140,   177,
     122,   122,   122,   241,   122,   140,   122,   122,   177,   235,
     177,   235,   241,   241,   177,   140,   177,   177,   177,   178,
     177,   178,   177,   177,   241,   241,   122,   243,   241,   177,
     177,   177,   177,   232,   508,   235,   235,   502,   235,   235,
     233,   498,   235,   235,   233,   414,   326,   235,   235,   235,
     233,   330,   140,   140,   140,   140,   198,   199,   200,   201,
     202,   203,   204,   140,   140,   177,   232,   140,   140,   232,
       1,     5,    24,    36,    47,    52,    59,    66,    70,    83,
     111,   116,   135,   145,   146,   150,   219,   220,   229,   283,
     284,   285,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   235,
     235,   235,   233,   362,   177,   177,   177,   177,   177,   241,
     232,   140,   177,   140,   140,   140,   140,   140,   140,   122,
     140,   140,   232,   235,   373,   235,   233,   369,   235,   382,
     233,   379,   232,   232,   232,   177,   140,   177,   235,   177,
     177,   177,   177,   177,   140,   122,   140,   140,   177,   140,
     232,   232,   232,   232,   154,   155,   156,   157,   158,   240,
     241,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   233,   312,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   399,   235,   235,   235,   235,   235,   235,   235,
     233,   389,   140,   140,   232,   140,   232,   140,   140,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   184,   185,   186,   187,   189,   191,   192,   193,   196,
     206,   207,   208,   209,   210,   211,   213,   216,   488,   489,
     232,   184,   185,   186,   187,   189,   191,   192,   193,   196,
     206,   207,   208,   209,   210,   211,   213,   216,   484,   485,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,    14,    15,    16,   242,   243,   232,
     232,   232,   232,   232,   232,   235,   241,   177,   235,   140,
     140,   232,   140,   140,   232,   235,   140,   140,   122,   332,
     333,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   235,   235,
     235,   235,   304,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   233,   284,   140,   140,
     140,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   140,
     235,   140,   232,   140,   235,   232,   232,   232,   232,    20,
      21,    48,    61,    67,    84,   112,   120,   121,   153,   172,
     346,   347,   348,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   240,   240,   240,   240,   240,   241,
     122,   122,   122,   122,   140,   122,   241,   243,   232,   140,
     194,   195,   177,   140,   140,   177,   177,   177,   140,   235,
     140,   140,   140,   140,   122,   140,   140,   232,   232,   232,
     232,   232,   232,   232,   236,   232,   236,   242,   242,   242,
      12,   179,   509,   510,   232,   232,    12,   179,   503,   504,
     232,   232,   232,   232,    69,   212,   327,   328,   232,   232,
     182,   232,   236,   177,   140,   177,   177,   235,   177,   177,
     177,   177,   140,   177,   140,   177,   177,   140,   177,   140,
     177,   232,   232,   232,   232,   232,    83,   152,   183,   214,
     215,   219,   229,   374,   375,   232,   232,    83,   152,   183,
     196,   214,   215,   219,   229,   383,   384,   348,   232,   236,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,    11,
      13,    25,    29,    89,   400,   401,   232,   232,   232,   232,
     232,   232,   232,   489,   485,   232,   236,   232,   236,   232,
     236,   122,   333,   232,   232,   232,   232,     5,    36,    59,
      66,    70,    71,    83,   116,   121,   130,   145,   146,   147,
     207,   219,   229,   305,   306,   307,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     236,   232,   236,   347,   232,   236,   510,   504,   328,   307,
     232,   236,   375,   384,   401,   306
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
#line 393 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 395 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 399 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 403 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 407 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 411 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 415 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 420 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 421 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 422 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 423 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 424 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
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

  case 63:
#line 479 "ircd_parser.y"
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
#line 513 "ircd_parser.y"
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
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 201:
#line 1528 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 202:
#line 1537 "ircd_parser.y"
    {
}
    break;

  case 206:
#line 1542 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 207:
#line 1546 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 218:
#line 1559 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    add_listener(yyvsp[0].number, listener_address, listener_flags);
    listener_flags = 0;
  }
}
    break;

  case 219:
#line 1566 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    int i;

    for (i = yyvsp[-2].number; i <= yyvsp[0].number; ++i)
      add_listener(i, listener_address, listener_flags);

    listener_flags = 0;
  }
}
    break;

  case 220:
#line 1579 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 221:
#line 1588 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 222:
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

  case 223:
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

  case 242:
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

  case 243:
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

  case 244:
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

  case 245:
#line 1735 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 246:
#line 1744 "ircd_parser.y"
    {
}
    break;

  case 250:
#line 1748 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 251:
#line 1749 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 252:
#line 1752 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 253:
#line 1760 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 254:
#line 1767 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 255:
#line 1774 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 256:
#line 1781 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 257:
#line 1788 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 258:
#line 1795 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 259:
#line 1802 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 260:
#line 1809 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 261:
#line 1816 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 262:
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

  case 263:
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

  case 264:
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

  case 265:
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

  case 266:
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

  case 267:
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

  case 268:
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

  case 269:
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

  case 270:
#line 1921 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 271:
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

  case 272:
#line 1945 "ircd_parser.y"
    {
  if (ypass == 2)
    resv_reason = NULL;
}
    break;

  case 273:
#line 1949 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 280:
#line 1961 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 281:
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

  case 282:
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

  case 283:
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

  case 284:
#line 2011 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 291:
#line 2022 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 292:
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

  case 293:
#line 2046 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 297:
#line 2053 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 298:
#line 2057 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 299:
#line 2061 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 300:
#line 2065 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 301:
#line 2069 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 302:
#line 2073 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 303:
#line 2077 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 304:
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

  case 305:
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

  case 311:
#line 2111 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 312:
#line 2117 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 316:
#line 2124 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_KLINE;
}
    break;

  case 317:
#line 2128 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNKLINE;
}
    break;

  case 318:
#line 2132 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_XLINE;
}
    break;

  case 319:
#line 2136 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNXLINE;
}
    break;

  case 320:
#line 2140 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_RESV;
}
    break;

  case 321:
#line 2144 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_UNRESV;
}
    break;

  case 322:
#line 2148 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= CLUSTER_LOCOPS;
}
    break;

  case 323:
#line 2152 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = CLUSTER_ALL;
}
    break;

  case 324:
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

  case 325:
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

  case 348:
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

  case 349:
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

  case 350:
#line 2345 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 351:
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

  case 352:
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

  case 353:
#line 2378 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 354:
#line 2384 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 355:
#line 2388 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 356:
#line 2396 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 357:
#line 2405 "ircd_parser.y"
    {
}
    break;

  case 361:
#line 2410 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_LAZY_LINK;
}
    break;

  case 362:
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

  case 363:
#line 2422 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
}
    break;

  case 364:
#line 2426 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
    break;

  case 365:
#line 2430 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= CONF_FLAGS_BURST_AWAY;
}
    break;

  case 366:
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

  case 367:
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

  case 368:
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

  case 369:
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

  case 370:
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

  case 371:
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

  case 372:
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

  case 373:
#line 2551 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 374:
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

  case 375:
#line 2595 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 376:
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

  case 382:
#line 2621 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 383:
#line 2630 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 384:
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

  case 385:
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

  case 391:
#line 2667 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 392:
#line 2676 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 393:
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

  case 394:
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

  case 399:
#line 2712 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 400:
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

  case 401:
#line 2733 "ircd_parser.y"
    {
  /* XXX */
}
    break;

  case 407:
#line 2741 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_conf->name, yylval.string);
    collapse(yy_conf->name);
  }
}
    break;

  case 408:
#line 2750 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_match_item->reason);
    DupString(yy_match_item->reason, yylval.string);
  }
}
    break;

  case 465:
#line 2798 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 466:
#line 2804 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 467:
#line 2810 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 468:
#line 2816 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 469:
#line 2821 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 470:
#line 2826 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 471:
#line 2832 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 472:
#line 2838 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 473:
#line 2844 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 474:
#line 2850 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 475:
#line 2856 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 476:
#line 2862 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 477:
#line 2868 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 478:
#line 2874 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 479:
#line 2880 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 480:
#line 2886 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 481:
#line 2892 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 482:
#line 2898 "ircd_parser.y"
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

  case 483:
#line 2909 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 484:
#line 2915 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 485:
#line 2924 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 486:
#line 2930 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 487:
#line 2936 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 488:
#line 2942 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 489:
#line 2946 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 490:
#line 2952 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 491:
#line 2956 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 492:
#line 2962 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 493:
#line 2968 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 494:
#line 2974 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 495:
#line 2980 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 496:
#line 2986 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 497:
#line 2992 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 498:
#line 2998 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 499:
#line 3004 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 500:
#line 3015 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 501:
#line 3021 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 502:
#line 3027 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 503:
#line 3033 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 504:
#line 3039 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 505:
#line 3048 "ircd_parser.y"
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

  case 506:
#line 3080 "ircd_parser.y"
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

  case 507:
#line 3098 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 508:
#line 3104 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 509:
#line 3113 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 510:
#line 3119 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 511:
#line 3124 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 512:
#line 3130 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 516:
#line 3137 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 517:
#line 3141 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 518:
#line 3145 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 519:
#line 3149 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 520:
#line 3153 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 521:
#line 3157 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 522:
#line 3161 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 523:
#line 3165 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 524:
#line 3169 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 525:
#line 3173 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 526:
#line 3177 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 527:
#line 3181 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 528:
#line 3185 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 529:
#line 3189 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 530:
#line 3193 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 531:
#line 3197 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 532:
#line 3201 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 533:
#line 3207 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 537:
#line 3214 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 538:
#line 3218 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 539:
#line 3222 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 540:
#line 3226 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 541:
#line 3230 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 542:
#line 3234 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 543:
#line 3238 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 544:
#line 3242 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 545:
#line 3246 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 546:
#line 3250 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 547:
#line 3254 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 548:
#line 3258 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 549:
#line 3262 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 550:
#line 3266 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 551:
#line 3270 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 552:
#line 3274 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 553:
#line 3278 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 554:
#line 3284 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 555:
#line 3290 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 556:
#line 3296 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 557:
#line 3302 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 558:
#line 3308 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 559:
#line 3317 "ircd_parser.y"
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
#line 3325 "ircd_parser.y"
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
#line 3352 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 571:
#line 3358 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 572:
#line 3364 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 576:
#line 3370 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 577:
#line 3374 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 578:
#line 3380 "ircd_parser.y"
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
#line 3403 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 580:
#line 3412 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 581:
#line 3416 "ircd_parser.y"
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
#line 3456 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 585:
#line 3460 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 604:
#line 3489 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 605:
#line 3495 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 606:
#line 3501 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 607:
#line 3507 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 608:
#line 3513 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 609:
#line 3519 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 610:
#line 3525 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 611:
#line 3531 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 612:
#line 3537 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 613:
#line 3543 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 614:
#line 3549 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 615:
#line 3555 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 616:
#line 3561 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 617:
#line 3567 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 628:
#line 3587 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 629:
#line 3593 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 630:
#line 3599 "ircd_parser.y"
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

  case 631:
#line 3613 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 632:
#line 3619 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 633:
#line 3625 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 6636 "y.tab.c"

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


#line 364 "ircd_parser.y"

