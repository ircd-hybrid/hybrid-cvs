/* A Bison parser, made from ircd_parser.y, by GNU bison 1.75.  */

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
/*  $Id: y.tab.c,v 7.51 2005/08/09 19:45:46 db Exp $ */

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

#ifndef YYSTYPE
#line 130 "ircd_parser.y"
typedef union {
  int number;
  char *string;
} yystype;
/* Line 193 of /usr/local/share/bison/yacc.c.  */
#line 653 "y.tab.c"
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
#line 674 "y.tab.c"

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
#define YYLAST   1297

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  241
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  308
/* YYNRULES -- Number of rules. */
#define YYNRULES  652
/* YYNRULES -- Number of states. */
#define YYNSTATES  1331

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
     963,   964,   971,   974,   976,   978,   980,   983,   988,   989,
     995,   999,  1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,
    1017,  1018,  1026,  1027,  1029,  1032,  1034,  1036,  1038,  1040,
    1042,  1044,  1046,  1048,  1050,  1052,  1054,  1056,  1058,  1060,
    1062,  1064,  1066,  1068,  1071,  1076,  1078,  1083,  1088,  1093,
    1098,  1103,  1108,  1113,  1114,  1120,  1124,  1126,  1129,  1131,
    1133,  1135,  1137,  1139,  1141,  1143,  1148,  1153,  1158,  1163,
    1168,  1173,  1178,  1183,  1188,  1189,  1196,  1199,  1201,  1203,
    1205,  1207,  1212,  1217,  1218,  1225,  1228,  1230,  1232,  1234,
    1236,  1241,  1246,  1247,  1254,  1257,  1259,  1261,  1263,  1268,
    1269,  1276,  1277,  1283,  1287,  1289,  1291,  1294,  1296,  1298,
    1300,  1302,  1304,  1309,  1314,  1320,  1323,  1325,  1327,  1329,
    1331,  1333,  1335,  1337,  1339,  1341,  1343,  1345,  1347,  1349,
    1351,  1353,  1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,
    1371,  1373,  1375,  1377,  1379,  1381,  1383,  1385,  1387,  1389,
    1391,  1393,  1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,
    1411,  1413,  1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,
    1431,  1436,  1441,  1446,  1451,  1456,  1461,  1466,  1471,  1476,
    1481,  1486,  1491,  1496,  1501,  1506,  1511,  1516,  1521,  1526,
    1531,  1536,  1541,  1546,  1551,  1556,  1561,  1566,  1571,  1576,
    1581,  1586,  1591,  1596,  1601,  1606,  1611,  1616,  1621,  1626,
    1631,  1636,  1641,  1646,  1651,  1656,  1661,  1666,  1667,  1673,
    1677,  1679,  1681,  1683,  1685,  1687,  1689,  1691,  1693,  1695,
    1697,  1699,  1701,  1703,  1705,  1707,  1709,  1711,  1713,  1715,
    1716,  1722,  1726,  1728,  1730,  1732,  1734,  1736,  1738,  1740,
    1742,  1744,  1746,  1748,  1750,  1752,  1754,  1756,  1758,  1760,
    1762,  1764,  1769,  1774,  1779,  1784,  1789,  1790,  1797,  1800,
    1802,  1804,  1806,  1808,  1810,  1812,  1814,  1816,  1821,  1826,
    1827,  1833,  1837,  1839,  1841,  1843,  1848,  1853,  1854,  1860,
    1864,  1866,  1868,  1870,  1876,  1879,  1881,  1883,  1885,  1887,
    1889,  1891,  1893,  1895,  1897,  1899,  1901,  1903,  1905,  1907,
    1909,  1911,  1913,  1918,  1923,  1928,  1933,  1938,  1943,  1948,
    1953,  1958,  1963,  1968,  1973,  1978,  1983,  1988,  1994,  1997,
    1999,  2001,  2003,  2005,  2007,  2009,  2011,  2013,  2018,  2023,
    2028,  2033,  2038
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     242,     0,    -1,    -1,   242,   243,    -1,   267,    -1,   273,
      -1,   284,    -1,   522,    -1,   313,    -1,   328,    -1,   341,
      -1,   253,    -1,   540,    -1,   365,    -1,   372,    -1,   382,
      -1,   391,    -1,   418,    -1,   424,    -1,   430,    -1,   445,
      -1,   506,    -1,   435,    -1,   248,    -1,     1,   236,    -1,
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
     298,    -1,   300,    -1,   301,    -1,   302,    -1,   303,    -1,
     304,    -1,   299,    -1,   305,    -1,   306,    -1,   307,    -1,
     293,    -1,   295,    -1,   308,    -1,     1,   236,    -1,   112,
     239,   141,   236,    -1,   141,    -1,   224,   239,   141,   236,
      -1,   136,   239,   141,   236,    -1,    48,   239,   179,   236,
      -1,    71,   239,   179,   236,    -1,   152,   239,   141,   236,
      -1,    25,   239,   141,   236,    -1,    67,   239,   179,   236,
      -1,   148,   239,   179,   236,    -1,   149,   239,   179,   236,
      -1,    84,   239,   179,   236,    -1,   233,   239,   179,   236,
      -1,   223,   239,   179,   236,    -1,    60,   239,   179,   236,
      -1,   117,   239,   179,   236,    -1,    37,   239,   179,   236,
      -1,   147,   239,   179,   236,    -1,     5,   239,   179,   236,
      -1,    -1,    53,   309,   239,   310,   236,    -1,   310,   240,
     311,    -1,   311,    -1,   122,   312,    -1,   312,    -1,    67,
      -1,   148,    -1,    84,    -1,   223,    -1,   233,    -1,    60,
      -1,    37,    -1,   147,    -1,     5,    -1,    71,    -1,   117,
      -1,   210,    -1,   131,    -1,    72,    -1,   149,    -1,    48,
      -1,    -1,    25,   314,   315,   238,   316,   237,   236,    -1,
      -1,   319,    -1,   316,   317,    -1,   317,    -1,   318,    -1,
     320,    -1,   321,    -1,   322,    -1,   323,    -1,   324,    -1,
     325,    -1,   326,    -1,   327,    -1,     1,   236,    -1,   112,
     239,   141,   236,    -1,   141,    -1,   139,   239,   245,   236,
      -1,   125,   239,   123,   236,    -1,    29,   239,   245,   236,
      -1,   105,   239,   123,   236,    -1,   100,   239,   123,   236,
      -1,   102,   239,   123,   236,    -1,   101,   239,   123,   236,
      -1,   161,   239,   247,   236,    -1,    -1,    93,   329,   238,
     334,   237,   236,    -1,    -1,    53,   331,   239,   332,   236,
      -1,   332,   240,   333,    -1,   333,    -1,   215,    -1,    70,
      -1,   334,   335,    -1,   335,    -1,   336,    -1,   330,    -1,
     339,    -1,   340,    -1,     1,   236,    -1,   140,   239,   337,
     236,    -1,   337,   240,   338,    -1,   338,    -1,   123,    -1,
     123,   184,   123,    -1,    81,   239,   141,   236,    -1,    76,
     239,   141,   236,    -1,    -1,    10,   342,   238,   343,   237,
     236,    -1,   343,   344,    -1,   344,    -1,   345,    -1,   346,
      -1,   348,    -1,   350,    -1,   355,    -1,   356,    -1,   357,
      -1,   359,    -1,   360,    -1,   361,    -1,   347,    -1,   362,
      -1,   363,    -1,   358,    -1,   364,    -1,   349,    -1,     1,
     236,    -1,   224,   239,   141,   236,    -1,   136,   239,   141,
     236,    -1,   174,   239,   179,   236,    -1,    25,   239,   141,
     236,    -1,    48,   239,   179,   236,    -1,    -1,    53,   351,
     239,   352,   236,    -1,   352,   240,   353,    -1,   353,    -1,
     122,   354,    -1,   354,    -1,   174,    -1,    49,    -1,    85,
      -1,    68,    -1,    21,    -1,    22,    -1,   121,    -1,    62,
      -1,   155,    -1,   113,    -1,    85,   239,   179,   236,    -1,
      68,   239,   179,   236,    -1,    49,   239,   179,   236,    -1,
      21,   239,   179,   236,    -1,   121,   239,   179,   236,    -1,
      62,   239,   179,   236,    -1,   173,   239,   141,   236,    -1,
     145,   239,   141,   236,    -1,   144,   239,   123,   236,    -1,
     113,   239,   179,   236,    -1,    -1,   154,   366,   238,   367,
     237,   236,    -1,   367,   368,    -1,   368,    -1,   369,    -1,
     370,    -1,   371,    -1,     1,   236,    -1,   143,   239,   141,
     236,    -1,    23,   239,   141,   236,    -1,   116,   239,   141,
     236,    -1,    -1,   168,   373,   238,   374,   237,   236,    -1,
     374,   375,    -1,   375,    -1,   376,    -1,   377,    -1,   378,
      -1,     1,   236,    -1,   112,   239,   141,   236,    -1,   224,
     239,   141,   236,    -1,    -1,   170,   379,   239,   380,   236,
      -1,   380,   240,   381,    -1,   381,    -1,    84,    -1,   223,
      -1,   233,    -1,   218,    -1,   154,    -1,   217,    -1,   199,
      -1,   185,    -1,    -1,   169,   383,   238,   384,   237,   236,
      -1,   384,   385,    -1,   385,    -1,   386,    -1,   387,    -1,
       1,   236,    -1,   112,   239,   141,   236,    -1,    -1,   170,
     388,   239,   389,   236,    -1,   389,   240,   390,    -1,   390,
      -1,    84,    -1,   223,    -1,   233,    -1,   218,    -1,   154,
      -1,   217,    -1,   199,    -1,   185,    -1,    -1,    28,   392,
     393,   238,   394,   237,   236,    -1,    -1,   397,    -1,   394,
     395,    -1,   395,    -1,   396,    -1,   398,    -1,   399,    -1,
     400,    -1,   401,    -1,   402,    -1,   403,    -1,   404,    -1,
     414,    -1,   415,    -1,   416,    -1,   413,    -1,   410,    -1,
     412,    -1,   411,    -1,   409,    -1,   417,    -1,     1,   236,
      -1,   112,   239,   141,   236,    -1,   141,    -1,    76,   239,
     141,   236,    -1,   162,   239,   141,   236,    -1,     3,   239,
     141,   236,    -1,   140,   239,   123,   236,    -1,     6,   239,
     197,   236,    -1,     6,   239,   198,   236,    -1,    52,   239,
     141,   236,    -1,    -1,    53,   405,   239,   406,   236,    -1,
     406,   240,   407,    -1,   407,    -1,   122,   408,    -1,   408,
      -1,    90,    -1,    26,    -1,    30,    -1,    11,    -1,    13,
      -1,   221,    -1,   152,   239,   141,   236,    -1,    48,   239,
     179,   236,    -1,    30,   239,   179,   236,    -1,    26,   239,
     179,   236,    -1,    11,   239,   179,   236,    -1,    78,   239,
     141,   236,    -1,    91,   239,   141,   236,    -1,    25,   239,
     141,   236,    -1,    24,   239,   141,   236,    -1,    -1,    82,
     419,   238,   420,   237,   236,    -1,   420,   421,    -1,   421,
      -1,   422,    -1,   423,    -1,     1,    -1,   224,   239,   141,
     236,    -1,   143,   239,   141,   236,    -1,    -1,    35,   425,
     238,   426,   237,   236,    -1,   426,   427,    -1,   427,    -1,
     428,    -1,   429,    -1,     1,    -1,    81,   239,   141,   236,
      -1,   143,   239,   141,   236,    -1,    -1,    50,   431,   238,
     432,   237,   236,    -1,   432,   433,    -1,   433,    -1,   434,
      -1,     1,    -1,    81,   239,   141,   236,    -1,    -1,    58,
     436,   238,   441,   237,   236,    -1,    -1,    53,   438,   239,
     439,   236,    -1,   439,   240,   440,    -1,   440,    -1,   146,
      -1,   441,   442,    -1,   442,    -1,   443,    -1,   444,    -1,
     437,    -1,     1,    -1,   112,   239,   141,   236,    -1,   143,
     239,   141,   236,    -1,    59,   238,   446,   237,   236,    -1,
     446,   447,    -1,   447,    -1,   454,    -1,   455,    -1,   457,
      -1,   458,    -1,   459,    -1,   460,    -1,   461,    -1,   462,
      -1,   463,    -1,   464,    -1,   453,    -1,   466,    -1,   467,
      -1,   468,    -1,   482,    -1,   469,    -1,   471,    -1,   473,
      -1,   472,    -1,   475,    -1,   470,    -1,   476,    -1,   477,
      -1,   478,    -1,   479,    -1,   481,    -1,   483,    -1,   480,
      -1,   497,    -1,   484,    -1,   488,    -1,   489,    -1,   493,
      -1,   474,    -1,   503,    -1,   501,    -1,   502,    -1,   485,
      -1,   456,    -1,   486,    -1,   487,    -1,   504,    -1,   492,
      -1,   465,    -1,   505,    -1,   490,    -1,   491,    -1,   450,
      -1,   452,    -1,   448,    -1,   449,    -1,   451,    -1,     1,
      -1,    65,   239,   123,   236,    -1,    66,   239,   123,   236,
      -1,    13,   239,   179,   236,    -1,   230,   239,   179,   236,
      -1,   167,   239,   179,   236,    -1,    83,   239,   123,   236,
      -1,    75,   239,   179,   236,    -1,    80,   239,   179,   236,
      -1,    41,   239,   179,   236,    -1,    51,   239,   179,   236,
      -1,     8,   239,   179,   236,    -1,   104,   239,   245,   236,
      -1,   103,   239,   123,   236,    -1,    97,   239,   123,   236,
      -1,     9,   239,   245,   236,    -1,   183,   239,   245,   236,
      -1,   182,   239,   245,   236,    -1,    69,   239,   123,   236,
      -1,    87,   239,   179,   236,    -1,    86,   239,   141,   236,
      -1,   235,   239,   179,   236,    -1,   177,   239,   179,   236,
      -1,   178,   239,   179,   236,    -1,   176,   239,   179,   236,
      -1,   176,   239,   180,   236,    -1,   175,   239,   179,   236,
      -1,   175,   239,   180,   236,    -1,   134,   239,   245,   236,
      -1,    20,   239,   245,   236,    -1,   135,   239,   245,   236,
      -1,   171,   239,   179,   236,    -1,   120,   239,   179,   236,
      -1,   222,   239,   179,   236,    -1,   130,   239,   179,   236,
      -1,   107,   239,   141,   236,    -1,    79,   239,   245,   236,
      -1,    43,   239,   123,   236,    -1,    96,   239,   123,   236,
      -1,   106,   239,   123,   236,    -1,   165,   239,   141,   236,
      -1,    31,   239,   141,   236,    -1,    27,   239,   123,   236,
      -1,   225,   239,   179,   236,    -1,    45,   239,   141,   236,
      -1,   138,   239,   179,   236,    -1,    38,   239,   179,   236,
      -1,   220,   239,   245,   236,    -1,    -1,   132,   494,   239,
     495,   236,    -1,   495,   240,   496,    -1,   496,    -1,   186,
      -1,   189,    -1,   191,    -1,   192,    -1,   195,    -1,   213,
      -1,   209,    -1,   211,    -1,   216,    -1,   214,    -1,   194,
      -1,   210,    -1,   212,    -1,   196,    -1,   219,    -1,   187,
      -1,   188,    -1,   199,    -1,    -1,   129,   498,   239,   499,
     236,    -1,   499,   240,   500,    -1,   500,    -1,   186,    -1,
     189,    -1,   191,    -1,   192,    -1,   195,    -1,   213,    -1,
     209,    -1,   211,    -1,   216,    -1,   214,    -1,   194,    -1,
     210,    -1,   212,    -1,   196,    -1,   219,    -1,   187,    -1,
     188,    -1,   199,    -1,   108,   239,   123,   236,    -1,   109,
     239,   123,   236,    -1,    32,   239,   123,   236,    -1,   190,
     239,   247,   236,    -1,    42,   239,   179,   236,    -1,    -1,
      61,   507,   238,   508,   237,   236,    -1,   508,   509,    -1,
     509,    -1,   510,    -1,   511,    -1,   512,    -1,   516,    -1,
     517,    -1,   518,    -1,     1,    -1,    47,   239,   179,   236,
      -1,    44,   239,   245,   236,    -1,    -1,    94,   513,   239,
     514,   236,    -1,   514,   240,   515,    -1,   515,    -1,   181,
      -1,    12,    -1,   224,   239,   141,   236,    -1,   112,   239,
     141,   236,    -1,    -1,     4,   519,   239,   520,   236,    -1,
     520,   240,   521,    -1,   521,    -1,   181,    -1,    12,    -1,
      23,   238,   523,   237,   236,    -1,   523,   524,    -1,   524,
      -1,   525,    -1,   526,    -1,   527,    -1,   528,    -1,   534,
      -1,   529,    -1,   530,    -1,   531,    -1,   532,    -1,   533,
      -1,   535,    -1,   536,    -1,   537,    -1,   538,    -1,   539,
      -1,     1,    -1,    40,   239,   179,   236,    -1,   226,   239,
     179,   236,    -1,   227,   239,   179,   236,    -1,   228,   239,
     179,   236,    -1,    88,   239,   245,   236,    -1,    89,   239,
     245,   236,    -1,   133,   239,   179,   236,    -1,    99,   239,
     123,   236,    -1,   142,   239,   179,   236,    -1,    98,   239,
     123,   236,    -1,    34,   239,   123,   236,    -1,    33,   239,
     123,   236,    -1,   118,   239,   179,   236,    -1,   119,   239,
     179,   236,    -1,    14,   239,   179,   236,    -1,   163,   238,
     541,   237,   236,    -1,   541,   542,    -1,   542,    -1,   543,
      -1,   544,    -1,   545,    -1,   547,    -1,   546,    -1,   548,
      -1,     1,    -1,    54,   239,   179,   236,    -1,    74,   239,
     179,   236,    -1,    92,   239,   245,   236,    -1,    70,   239,
     179,   236,    -1,    39,   239,   179,   236,    -1,    73,   239,
     179,   236,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   369,   369,   370,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   398,   398,   399,   403,
     407,   411,   415,   419,   425,   425,   426,   427,   428,   429,
     436,   439,   439,   440,   440,   440,   442,   459,   470,   473,
     473,   475,   475,   475,   476,   476,   477,   477,   478,   479,
     479,   480,   480,   483,   517,   577,   591,   609,   618,   632,
     641,   669,   699,   715,   765,   767,   767,   768,   768,   768,
     769,   771,   780,   789,   802,   804,   804,   807,   807,   807,
     808,   808,   809,   809,   810,   810,   813,   817,   821,   825,
     832,   839,   846,   850,   854,   858,   862,   866,   870,   876,
     886,   885,   978,   978,   979,   979,   980,   980,   980,   980,
     980,   981,   981,   981,   982,   982,   982,   983,   983,   983,
     984,   984,   984,   985,   985,   986,   988,  1000,  1012,  1035,
    1047,  1058,  1069,  1111,  1120,  1131,  1142,  1153,  1164,  1175,
    1186,  1197,  1208,  1219,  1230,  1242,  1241,  1245,  1245,  1246,
    1247,  1249,  1256,  1263,  1270,  1277,  1284,  1291,  1298,  1305,
    1312,  1319,  1326,  1333,  1340,  1347,  1354,  1368,  1367,  1387,
    1387,  1389,  1389,  1390,  1390,  1391,  1392,  1393,  1394,  1395,
    1396,  1397,  1398,  1401,  1447,  1493,  1499,  1505,  1511,  1517,
    1523,  1529,  1535,  1545,  1544,  1561,  1560,  1564,  1564,  1565,
    1569,  1575,  1575,  1576,  1576,  1576,  1576,  1576,  1578,  1580,
    1580,  1582,  1597,  1619,  1628,  1641,  1640,  1714,  1714,  1715,
    1715,  1715,  1715,  1715,  1716,  1716,  1717,  1717,  1717,  1718,
    1718,  1719,  1719,  1719,  1720,  1720,  1722,  1751,  1764,  1775,
    1784,  1796,  1795,  1799,  1799,  1800,  1801,  1803,  1811,  1818,
    1825,  1832,  1839,  1846,  1853,  1860,  1867,  1876,  1887,  1898,
    1909,  1920,  1931,  1943,  1962,  1972,  1981,  1997,  1996,  2012,
    2012,  2013,  2013,  2013,  2013,  2015,  2024,  2039,  2058,  2057,
    2073,  2073,  2074,  2074,  2074,  2074,  2076,  2085,  2101,  2100,
    2106,  2106,  2107,  2111,  2115,  2119,  2123,  2127,  2131,  2135,
    2145,  2144,  2161,  2161,  2162,  2162,  2162,  2164,  2171,  2170,
    2176,  2176,  2177,  2181,  2185,  2189,  2193,  2197,  2201,  2205,
    2215,  2214,  2364,  2364,  2365,  2365,  2366,  2366,  2366,  2366,
    2367,  2367,  2367,  2368,  2368,  2368,  2369,  2369,  2369,  2370,
    2370,  2370,  2371,  2371,  2374,  2386,  2398,  2407,  2419,  2431,
    2437,  2441,  2449,  2459,  2458,  2462,  2462,  2463,  2464,  2466,
    2473,  2484,  2491,  2498,  2505,  2515,  2556,  2567,  2578,  2593,
    2604,  2617,  2630,  2639,  2675,  2674,  2697,  2697,  2698,  2698,
    2698,  2700,  2709,  2722,  2721,  2743,  2743,  2744,  2744,  2744,
    2746,  2755,  2768,  2767,  2788,  2788,  2789,  2789,  2791,  2804,
    2803,  2854,  2853,  2857,  2857,  2858,  2864,  2864,  2865,  2865,
    2865,  2865,  2867,  2876,  2888,  2891,  2891,  2892,  2892,  2892,
    2893,  2893,  2894,  2894,  2895,  2895,  2896,  2896,  2897,  2897,
    2898,  2899,  2899,  2900,  2900,  2901,  2901,  2902,  2902,  2903,
    2903,  2904,  2904,  2905,  2905,  2906,  2907,  2907,  2908,  2908,
    2909,  2910,  2910,  2911,  2911,  2912,  2912,  2913,  2914,  2914,
    2915,  2915,  2916,  2916,  2917,  2917,  2918,  2918,  2919,  2919,
    2924,  2930,  2936,  2942,  2947,  2952,  2958,  2964,  2970,  2976,
    2982,  2988,  2994,  3000,  3006,  3012,  3018,  3024,  3035,  3041,
    3050,  3056,  3062,  3068,  3072,  3078,  3082,  3088,  3094,  3100,
    3106,  3112,  3118,  3124,  3130,  3141,  3147,  3153,  3159,  3165,
    3174,  3206,  3224,  3230,  3239,  3245,  3250,  3257,  3256,  3262,
    3262,  3263,  3267,  3271,  3275,  3279,  3283,  3287,  3291,  3295,
    3299,  3303,  3307,  3311,  3315,  3319,  3323,  3327,  3331,  3338,
    3337,  3343,  3343,  3344,  3348,  3352,  3356,  3360,  3364,  3368,
    3372,  3376,  3380,  3384,  3388,  3392,  3396,  3400,  3404,  3408,
    3412,  3418,  3424,  3430,  3436,  3442,  3452,  3451,  3477,  3477,
    3478,  3478,  3479,  3480,  3481,  3482,  3483,  3486,  3492,  3499,
    3498,  3503,  3503,  3504,  3508,  3514,  3537,  3547,  3546,  3589,
    3589,  3590,  3594,  3603,  3606,  3606,  3607,  3607,  3608,  3609,
    3610,  3611,  3612,  3613,  3614,  3615,  3616,  3617,  3618,  3619,
    3620,  3621,  3624,  3630,  3636,  3642,  3648,  3654,  3660,  3666,
    3672,  3678,  3684,  3690,  3696,  3702,  3708,  3717,  3720,  3720,
    3721,  3721,  3721,  3722,  3723,  3724,  3725,  3728,  3734,  3740,
    3754,  3760,  3766
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
  "oper_remote", "oper_remoteban", "oper_kline", "oper_xline", 
  "oper_unkline", "oper_gline", "oper_nick_changes", "oper_die", 
  "oper_rehash", "oper_admin", "oper_flags", "@2", "oper_flags_items", 
  "oper_flags_item", "oper_flags_item_atom", "class_entry", "@3", 
  "class_name_b", "class_items", "class_item", "class_name", 
  "class_name_t", "class_ping_time", "class_number_per_ip", 
  "class_connectfreq", "class_max_number", "class_max_global", 
  "class_max_local", "class_max_ident", "class_sendq", "listen_entry", 
  "@4", "listen_flags", "@5", "listen_flags_items", "listen_flags_item", 
  "listen_items", "listen_item", "listen_port", "port_items", "port_item", 
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
     288,   288,   288,   288,   288,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   309,   308,   310,   310,   311,
     311,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   314,   313,   315,
     315,   316,   316,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   329,   328,   331,   330,   332,   332,   333,
     333,   334,   334,   335,   335,   335,   335,   335,   336,   337,
     337,   338,   338,   339,   340,   342,   341,   343,   343,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   345,   346,   347,   348,
     349,   351,   350,   352,   352,   353,   353,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   366,   365,   367,
     367,   368,   368,   368,   368,   369,   370,   371,   373,   372,
     374,   374,   375,   375,   375,   375,   376,   377,   379,   378,
     380,   380,   381,   381,   381,   381,   381,   381,   381,   381,
     383,   382,   384,   384,   385,   385,   385,   386,   388,   387,
     389,   389,   390,   390,   390,   390,   390,   390,   390,   390,
     392,   391,   393,   393,   394,   394,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   396,   397,   398,   399,   400,   401,
     402,   402,   403,   405,   404,   406,   406,   407,   407,   408,
     408,   408,   408,   408,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   419,   418,   420,   420,   421,   421,
     421,   422,   423,   425,   424,   426,   426,   427,   427,   427,
     428,   429,   431,   430,   432,   432,   433,   433,   434,   436,
     435,   438,   437,   439,   439,   440,   441,   441,   442,   442,
     442,   442,   443,   444,   445,   446,   446,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   471,   472,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   494,   493,   495,
     495,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   498,
     497,   499,   499,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   501,   502,   503,   504,   505,   507,   506,   508,   508,
     509,   509,   509,   509,   509,   509,   509,   510,   511,   513,
     512,   514,   514,   515,   515,   516,   517,   519,   518,   520,
     520,   521,   521,   522,   523,   523,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   541,
     542,   542,   542,   542,   542,   542,   542,   543,   544,   545,
     546,   547,   548
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
       0,     6,     2,     1,     1,     1,     2,     4,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     1,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       4,     4,     0,     6,     2,     1,     1,     1,     4,     0,
       6,     0,     5,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     0,
       5,     3,     1,     1,     1,     4,     4,     0,     5,     3,
       1,     1,     1,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     1,     0,     0,   225,     0,   177,   330,   393,
     402,   409,     0,   576,   384,   203,     0,     0,   110,   277,
       0,     0,   288,   310,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,     0,
     179,   332,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,     0,   621,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   605,   606,   607,   608,   609,   611,
     612,   613,   614,   615,   610,   616,   617,   618,   619,   620,
     194,     0,   180,   355,     0,   333,     0,     0,     0,   479,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   549,     0,   527,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   426,   476,   477,   474,   478,   475,   437,
     427,   428,   465,   429,   430,   431,   432,   433,   434,   435,
     436,   470,   438,   439,   440,   442,   447,   443,   445,   444,
     460,   446,   448,   449,   450,   451,   454,   452,   441,   453,
     456,   464,   466,   467,   457,   458,   472,   473,   469,   459,
     455,   462,   463,   461,   468,   471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    92,    94,    93,    90,    91,     0,     0,
       0,     0,    42,    43,    44,   137,     0,   113,     0,   646,
       0,     0,     0,     0,     0,     0,     0,   639,   640,   641,
     642,   644,   643,   645,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    61,    58,
      51,    60,    54,    55,    56,    52,    59,    57,    53,     0,
       0,    80,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,   229,   230,   239,   231,
     244,   232,   233,   234,   235,   242,   236,   237,   238,   240,
     241,   243,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   604,     0,
       0,   399,     0,     0,     0,   396,   397,   398,   407,     0,
       0,   405,   406,   421,   411,     0,     0,   420,     0,   417,
     418,   419,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   425,   586,   597,     0,     0,
     589,     0,     0,     0,   579,   580,   581,   582,   583,   584,
     585,   390,     0,     0,     0,   387,   388,   389,     0,   205,
       0,     0,     0,   214,     0,   212,   213,   215,   216,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      45,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,   280,   281,   282,   283,     0,     0,     0,     0,     0,
       0,     0,   638,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,   298,
       0,     0,   291,   292,   293,   294,     0,     0,   318,     0,
     313,   314,   315,     0,     0,     0,    74,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   603,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   363,     0,     0,     0,     0,     0,
       0,     0,     0,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   351,   348,   350,   349,   347,   344,   345,   346,
     352,     0,     0,     0,   395,     0,     0,   404,     0,     0,
       0,     0,   416,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,   424,     0,
       0,     0,     0,     0,     0,     0,   578,     0,     0,     0,
     386,   217,     0,     0,     0,     0,     0,   211,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,    40,     0,     0,     0,     0,
       0,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,   116,   117,
     118,   132,   119,   133,   120,   121,   122,   128,   123,   124,
     125,   126,   127,   129,   130,   131,   134,   284,     0,     0,
       0,     0,   279,     0,     0,     0,     0,     0,     0,   637,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,   295,     0,     0,     0,     0,   290,   316,     0,
       0,     0,   312,    83,    82,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   226,   636,   633,   632,   622,    26,    26,    26,
      26,    26,    28,    27,   626,   627,   631,   629,   634,   635,
     628,   630,   623,   624,   625,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   353,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   334,     0,     0,   394,
       0,   403,     0,     0,     0,   410,   490,   494,   482,   508,
     521,   520,   573,   525,   488,   575,   516,   523,   489,   480,
     481,   497,   486,   515,   487,   485,   499,   498,   517,   493,
     492,   491,   518,   514,   571,   572,   511,   553,   568,   569,
     554,   555,   556,   563,   557,   566,   570,   559,   564,   560,
     565,   558,   562,   561,   567,     0,   552,   513,   531,   546,
     547,   532,   533,   534,   541,   535,   544,   548,   537,   542,
     538,   543,   536,   540,   539,   545,     0,   530,   507,   509,
     524,   519,   484,   510,   505,   506,   503,   504,   501,   502,
     496,   495,    34,    34,    34,    36,    35,   574,   526,   512,
     522,   483,   500,     0,     0,     0,     0,     0,     0,   577,
       0,     0,   385,     0,     0,     0,   221,     0,   220,   204,
     100,   101,    99,    98,   102,   108,   103,   107,   105,   106,
     104,    97,    96,   109,    46,    47,   135,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,   278,   651,   647,   650,   652,   648,   649,    67,    73,
      65,    69,    68,    64,    63,    66,    72,    70,    71,     0,
       0,     0,   289,     0,     0,   311,   270,   249,   250,   269,
     261,   262,   258,   264,   260,   259,   266,   263,     0,   265,
     257,     0,   254,   256,   272,   268,   267,   276,   271,   247,
     275,   274,   273,   248,   246,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   178,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   331,   400,
     401,   408,   415,     0,   414,   422,   423,   550,     0,   528,
       0,    37,    38,    39,   602,   601,     0,   600,   588,   587,
     594,   593,     0,   592,   596,   595,   392,   391,   210,   209,
       0,   208,   224,   223,     0,   218,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,   286,   287,   285,
     296,   302,   306,   309,   308,   307,   305,   303,   304,     0,
     301,   297,   317,   322,   326,   329,   328,   327,   325,   323,
     324,     0,   321,   255,   252,     0,   197,   199,   201,   200,
     198,   193,   196,   195,   202,   358,   360,   361,   379,   383,
     382,   378,   377,   376,   362,   372,   373,   370,   371,   369,
       0,   374,     0,   366,   368,   356,   380,   381,   354,   359,
     375,   357,   412,     0,   551,   529,   598,     0,   590,     0,
     206,     0,   222,   219,   154,   143,   152,   140,   169,   167,
     176,   166,   161,   170,   174,   163,   171,     0,   173,   168,
     162,   175,   172,   164,   165,     0,   158,   160,   150,   144,
     141,   147,   136,   151,   139,   153,   145,   146,   142,   149,
     138,   148,   299,     0,   319,     0,   253,   367,   364,     0,
     413,   599,   591,   207,   159,   156,     0,   300,   320,   365,
     157
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    24,   842,   843,   985,   986,    25,   251,   252,
     253,   254,    26,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,    27,    71,    72,    73,
      74,    75,    28,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,    29,    61,   256,   756,   757,   758,   257,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,   776,  1031,  1295,
    1296,  1297,    30,    50,   111,   583,   584,   585,   112,   586,
     587,   588,   589,   590,   591,   592,   593,    31,    58,   463,
     712,  1170,  1171,   464,   465,   466,  1007,  1008,   467,   468,
      32,    48,   324,   325,   326,   327,   328,   329,   330,   331,
     542,  1091,  1092,  1093,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    33,    62,   490,   491,   492,   493,
     494,    34,    65,   521,   522,   523,   524,   525,   804,  1209,
    1210,    35,    66,   529,   530,   531,   532,   810,  1221,  1222,
      36,    51,   114,   612,   613,   614,   115,   615,   616,   617,
     618,   619,   620,   621,   877,  1252,  1253,  1254,   622,   623,
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
#define YYPACT_NINF -920
static const short yypact[] =
{
    -920,   732,  -920,   -31,  -231,  -920,  -229,  -920,  -920,  -920,
    -920,  -920,  -219,  -920,  -920,  -920,  -217,  -211,  -920,  -920,
    -205,  -203,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,   253,  -195,   689,
     -95,   -93,  -183,  -181,  -156,   419,  -151,  -140,  -137,   416,
     192,   -32,  -127,   371,   447,  -124,  -118,  -113,  -109,  -106,
    -104,    30,  -920,  -920,  -920,  -920,   659,  -920,   -99,   -70,
     -50,   -36,   -16,    27,    34,    71,    77,    87,    88,    89,
      94,    97,    99,   176,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,   114,  -920,  -920,   119,  -920,    13,     4,    15,  -920,
     105,   117,   123,   124,   128,   129,   131,   132,   134,   135,
     136,   139,   141,   142,   147,   155,   157,   159,   160,   161,
     166,   167,   168,   173,   175,   177,   179,   180,   182,   183,
     184,  -920,   194,  -920,   196,   197,   198,   201,   203,   208,
     210,   213,   214,   216,   217,   219,   226,   228,   229,   230,
     235,   236,     9,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,   257,     2,   244,  -111,
     237,   239,   241,   247,   248,   251,   252,   254,   158,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,   109,   256,
     258,    14,  -920,  -920,  -920,  -920,   188,  -920,     5,  -920,
     262,   264,   268,   269,   270,   273,   267,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,   149,   275,   279,   280,   281,   282,
     290,   294,   295,   297,   298,   299,   145,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,    58,
     107,  -920,   288,   351,   399,   307,  -920,   309,   308,   311,
     313,   319,  -920,   321,   324,   325,   327,   328,   329,   331,
     333,   334,   336,   340,   187,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,   218,   457,   459,   404,   462,   462,   464,   466,
     413,   414,   425,   426,   427,   428,   431,   372,  -920,   430,
     812,  -920,   373,   376,    68,  -920,  -920,  -920,  -920,   378,
      10,  -920,  -920,  -920,  -920,   381,   382,  -920,   164,  -920,
    -920,  -920,   445,   462,   446,   462,   504,   487,   506,   451,
     452,   453,   511,   495,   461,   519,   520,   523,   472,   462,
     477,   534,   517,   480,   538,   540,   541,   462,   542,   525,
     544,   546,   491,   432,   493,   435,   462,   462,   497,   536,
     502,   507,    91,   113,   508,   512,   462,   462,   562,   462,
     513,   514,   516,   522,   460,  -920,  -920,  -920,   463,   465,
    -920,   467,   470,   106,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,   471,   478,    98,  -920,  -920,  -920,   469,  -920,
     479,   485,   486,  -920,   151,  -920,  -920,  -920,  -920,  -920,
     575,   578,   585,   587,   643,   589,   590,   556,   500,  -920,
    -920,   597,   600,   509,  -920,   429,   510,   515,   524,   526,
     171,  -920,  -920,  -920,  -920,   564,   570,   571,   572,   577,
     462,   528,  -920,  -920,   618,   583,   625,   628,   632,   634,
     638,   642,   662,   645,   651,   558,  -920,   560,   563,  -920,
     567,   118,  -920,  -920,  -920,  -920,   561,   573,  -920,    25,
    -920,  -920,  -920,   565,   569,   580,  -920,  -920,   630,   678,
     641,   648,   582,   649,   650,   660,   661,   672,   683,   707,
     694,   711,   674,   713,   620,  -920,   621,   622,   627,   631,
     190,   633,   635,   636,   639,   640,   644,   646,   655,   657,
     658,   663,  -920,   666,   629,   653,   667,   668,   669,   670,
     671,   673,   675,   178,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,   677,   679,   680,   681,   682,   686,
     687,   688,   690,   695,  -920,   698,   702,   703,   705,   706,
     708,   709,   172,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,   720,   725,   692,  -920,   736,   710,  -920,   712,   737,
     740,   714,  -920,   723,   726,   729,   730,   735,   742,   743,
     745,   746,   747,   748,   750,   751,   752,   753,   760,   762,
     763,   765,   766,   767,   768,   769,   770,   771,   772,   773,
     774,   775,   776,   777,   744,   778,   781,   779,   780,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   146,   794,   795,   796,   797,   798,   799,  -920,   722,
     462,   718,   800,   757,   764,   801,  -920,   808,   844,   802,
    -920,  -920,   803,   876,   895,   761,   804,  -920,   805,   807,
     809,   810,   811,   813,   814,   815,   816,   817,   818,   819,
     820,   821,  -920,   822,   823,  -920,   824,   825,   826,   827,
     828,  -920,   829,   830,   831,   832,   833,   834,   835,   836,
     837,   838,   839,   840,   841,   842,    19,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,   903,   907,
     920,   846,  -920,   847,   848,   849,   850,   851,   852,  -920,
     853,   854,   855,   856,   857,   858,   859,   860,   861,   862,
     863,  -920,  -920,   921,   864,   922,   865,  -920,  -920,   959,
     866,   868,  -920,  -920,  -920,  -920,   870,   871,   872,   873,
     626,   874,   875,   877,   878,   879,   880,   881,   882,   883,
     884,   885,  -920,  -920,  -920,  -920,  -920,   462,   462,   462,
     462,   462,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,   462,   979,   989,   999,
    1000,   983,  1002,   462,   562,   890,  -920,  -920,   986,    40,
     949,   988,   990,   951,   953,   954,   993,   896,   995,   996,
     997,   998,  1017,  1001,  1003,   905,  -920,   909,   910,  -920,
     911,  -920,   739,   912,   913,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -232,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -206,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,   562,   562,   562,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,     1,   914,   915,    20,   916,   917,  -920,
     918,   919,  -920,   -58,   923,   924,   727,  -191,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,   964,  1015,   978,
     982,   925,   984,   987,   991,   992,  1021,   994,  1024,  1004,
    1005,  1006,  1026,  1007,  1027,  1008,   933,  -920,   936,   938,
     939,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,   940,
     535,   941,  -920,   942,   656,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,   749,  -920,
    -920,  -178,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
     943,   944,   945,   946,   952,   955,   956,   957,   958,  -920,
     960,   961,   962,   963,   965,   966,   967,   968,   969,   970,
      12,   971,   972,   973,   974,   975,   976,   977,  -920,  -920,
    -920,  -920,  -920,  -163,  -920,  -920,  -920,  -920,   744,  -920,
     781,  -920,  -920,  -920,  -920,  -920,  -143,  -920,  -920,  -920,
    -920,  -920,  -136,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -114,  -920,  -920,  -920,  1035,  -920,   761,   980,   981,   985,
    1009,   551,  1010,  1011,  1012,  1013,  1014,  1016,  1018,  1019,
    1020,  1022,  1023,  1025,  1028,  1029,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -108,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,   -76,  -920,  -920,  -920,   626,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
     353,  -920,    45,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,   739,  -920,  -920,  -920,     1,  -920,    20,
    -920,   -58,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,   566,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,    79,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,   535,  -920,   656,  -920,  -920,  -920,    12,
    -920,  -920,  -920,  -920,  -920,  -920,   551,  -920,  -920,  -920,
    -920
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -920,  -920,  -920,  -448,  -346,  -919,  -426,  -920,  -920,  1030,
    -920,  -920,  -920,  -920,   601,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  1118,  -920,
    -920,  -920,  -920,  -920,   684,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,   434,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -131,   -87,  -920,  -920,  -920,  -920,   637,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,   -57,  -920,   754,  -920,  -920,    39,  -920,  -920,
    -920,  -920,  -920,   898,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,    -6,   137,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,   733,  -920,  -920,
    -920,  -920,  -920,  -920,   715,  -920,  -920,  -920,  -920,  -920,
     -89,  -920,  -920,  -920,   697,  -920,  -920,  -920,  -920,   -88,
    -920,  -920,  -920,  -920,   616,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,   -90,   -20,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
     806,  -920,  -920,  -920,  -920,  -920,   867,  -920,  -920,  -920,
    -920,  -920,   869,  -920,  -920,  -920,  -920,  -920,  -920,   -30,
    -920,   888,  -920,  -920,  -920,  -920,  1060,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,    84,  -920,  -920,  -920,    90,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,   843,  -920,
    -920,  -920,  -920,  -920,   -34,  -920,  -920,  -920,  -920,  -920,
     -27,  -920,  -920,  1144,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,  -920,
    -920,  1031,  -920,  -920,  -920,  -920,  -920,  -920
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     561,   562,   692,   451,  1147,   368,   486,    47,  1148,    49,
     119,   368,  1168,  1154,   361,   248,   373,   120,   121,    55,
     736,    59,   122,  1245,   737,  1246,   526,    60,   487,   123,
    1149,    67,  1160,    63,  1150,    64,   124,   644,  1247,   646,
     125,   126,  1248,    76,   738,  1175,   110,   127,   113,  1176,
     128,   129,   130,   660,   131,   116,   739,   117,  1224,   517,
     132,   668,  1225,  1151,  1152,  1153,    68,   740,   374,   361,
     677,   678,   741,  1262,   133,   134,    69,  1263,   135,   742,
     689,   690,   118,   693,   136,   369,   743,   226,   137,   138,
     744,   369,   139,  1266,   362,   140,   141,  1267,   227,   451,
    1268,   228,  1249,   745,  1269,   142,   143,   436,   526,   255,
     437,   258,   144,   145,   299,   146,   147,   148,   149,   517,
     300,   488,  1270,   301,   249,   469,  1271,   375,  1312,   150,
     302,   746,  1313,   303,  1250,   304,   747,   527,   151,   152,
     342,   153,    70,   154,   155,   452,   274,   156,   489,   362,
     438,   250,   458,   439,   788,   748,   363,  1169,   376,   229,
    1314,   982,   983,   984,  1315,   373,   749,   750,   751,   343,
     518,   752,   486,   594,   157,   595,   158,    77,   596,   573,
     159,   275,  1155,   597,   160,   161,   162,   163,   307,   344,
      78,   164,   165,   248,   487,   528,   598,   599,   600,   166,
     440,  1161,   601,   345,   459,    45,    46,   574,   308,    79,
      80,   363,   309,   230,   231,   232,    81,   374,   441,   527,
     602,   233,   276,   346,   603,   604,   453,   460,   519,   167,
     518,   168,   461,  1251,   169,   310,   311,  1121,  1122,   170,
     312,   452,   753,   754,   171,   458,   434,   636,   605,   313,
     606,   483,   755,   234,    67,   314,  1046,   277,   436,   278,
     279,   437,   811,   607,    82,    83,   347,   305,   259,   691,
     683,   684,   315,   348,    84,    85,   375,   528,   575,   576,
     577,  1318,   520,   578,   608,  1319,   235,   488,   519,    68,
     579,   462,   685,   686,    86,    87,   280,   459,   281,    69,
     316,   438,   249,   580,   439,   633,   260,   376,   317,    88,
     349,   282,   609,   560,   489,  1325,   350,   581,    89,  1326,
     460,   261,   453,   318,   610,   461,   351,   352,   353,   250,
     442,   319,   320,   354,   611,   709,   355,   262,   356,   582,
     263,   264,   520,   705,   382,   480,   837,   838,   839,   840,
     841,   440,   359,   283,   994,   806,   383,   360,   236,   265,
     321,   322,   384,   385,  1245,    70,  1246,   386,   387,   441,
     388,   389,   259,   390,   391,   392,   284,   285,   393,  1247,
     394,   395,   515,  1248,   462,   503,   396,   237,   716,  1105,
    1106,  1107,  1108,  1109,   397,   478,   398,   556,   399,   400,
     401,   641,    90,    91,    92,   402,   403,   404,   781,   885,
     260,   323,   405,   357,   406,   865,   407,   229,   408,   409,
     119,   410,   411,   412,   554,   261,   485,   120,   121,   533,
     736,   573,   122,   414,   737,   416,   417,   418,  1118,   123,
     419,   262,   420,  1249,   263,   264,   124,   421,   274,   422,
     125,   126,   423,   424,   738,   425,   426,   127,   427,   574,
     128,   129,   130,   265,   131,   428,   739,   429,   430,   431,
     132,   230,   231,   232,   432,   433,   470,   740,   471,   233,
     472,   442,   741,   275,   133,   134,   473,   474,   135,   742,
     475,   476,   534,   477,   136,   481,   743,   482,   137,   138,
     744,   495,   139,   496,   501,   140,   141,   497,   498,   499,
    1110,   234,   500,   745,   504,   142,   143,  1117,   505,   506,
     507,   508,   144,   145,   276,   146,   147,   148,   149,   509,
     575,   576,   577,   510,   511,   578,   512,   513,   514,   150,
     535,   746,   579,   536,   235,   537,   747,   538,   151,   152,
     539,   153,   540,   154,   155,   580,  1278,   156,   541,   277,
     543,   278,   279,   544,   545,   748,   546,   547,   548,   581,
     549,  1278,   550,   551,  1251,   552,   749,   750,   751,   553,
     557,   752,   558,   559,   157,   560,   158,   563,  1279,   564,
     159,   582,   565,   566,   160,   161,   162,   163,   280,  1280,
     281,   164,   165,  1279,   567,   568,   569,   570,   572,   166,
     571,  1281,   631,   282,  1280,   632,   236,   635,  1282,  1201,
     639,   640,  1283,  1284,   643,   645,  1281,   647,   648,   649,
     650,   651,   652,  1282,   653,  1285,   654,  1283,  1284,   167,
     655,   168,   656,   657,   169,   237,   658,  1080,  1081,   170,
    1285,   659,   753,   754,   171,   283,   661,   662,   663,   664,
     307,   665,   755,   666,   667,   669,   670,   671,  1286,   672,
     673,   674,   675,  1287,   676,  1082,   679,   680,   284,   285,
     308,   681,  1288,  1286,   309,   691,   682,   687,  1083,  1202,
      77,   688,   694,   695,  1084,   696,   698,  1288,  1289,  1290,
    1291,   697,   700,    78,   701,   711,   703,   310,   311,   704,
     707,  1085,   312,  1289,  1290,  1291,   718,   708,   713,   719,
    1203,   313,    79,    80,   714,   715,   720,   314,   721,    81,
     729,   730,     2,     3,  1204,   731,   732,     4,   733,  1086,
    1213,   734,     5,   783,   315,   735,   777,  1087,  1088,   784,
     785,   786,  1205,  1206,   778,     6,   787,     7,  1207,   790,
       8,  1292,   791,   779,   789,   780,   792,     9,  1208,   793,
    1080,  1081,   316,   794,  1293,   795,  1292,    82,    83,   796,
     317,  1089,    10,   797,  1294,   798,   799,    84,    85,  1293,
      11,    12,   800,    13,   801,   318,   802,   808,  1082,  1294,
    1090,   813,   803,   319,   320,   814,   805,    86,    87,   816,
    1214,  1083,   809,   594,    14,   595,   815,  1084,   596,   817,
     818,   820,    88,   597,   826,    15,    16,   819,   821,   822,
     827,    89,   321,   322,  1085,   828,   598,   599,   600,   823,
     824,  1215,   601,    17,   722,   723,   724,   725,   726,   727,
     728,   825,   829,   830,   831,  1216,   832,   833,   834,    18,
     602,   887,  1086,   835,   603,   604,   888,   836,   856,   844,
    1087,   845,   846,  1217,  1218,   847,   848,   890,   893,  1219,
     849,   894,   850,   323,  1006,  1142,    19,   516,   605,  1220,
     606,   851,   857,   852,   853,    20,    21,   995,   997,   854,
      22,    23,   855,   607,  1089,   998,   858,   859,   860,   861,
     862,  1174,   863,   867,   864,    90,    91,    92,   868,   869,
     870,   871,   479,  1090,   608,   872,   873,   874,   889,   875,
     927,   928,   929,   930,   876,   931,   932,   878,   933,   934,
     935,   879,   880,   936,   881,   882,   891,   883,   884,  1000,
     895,   892,   609,   937,   938,   939,   940,   941,   942,   896,
     943,   993,   897,   944,   610,   898,   899,   948,   949,   950,
     951,   900,   952,   953,   611,   954,   955,   956,   901,   902,
     957,   903,   904,   905,   906,  1001,   907,   908,   909,   910,
     958,   959,   960,   961,   962,   963,   911,   964,   912,   913,
     965,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   924,   925,   926,   947,   968,   969,  1004,   970,   971,
     972,   973,   974,   975,   976,   977,   978,   979,   980,   981,
     987,   988,   989,   990,   991,   992,  1005,   999,  1002,   996,
    1009,  1010,  1003,  1011,  1048,  1012,  1013,  1014,  1049,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,  1050,  1069,  1071,  1027,  1028,  1029,  1030,  1032,  1033,
    1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,
    1044,  1045,  1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,
    1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,  1068,
    1073,  1072,  1111,  1070,  1075,  1074,  1076,  1077,  1078,  1079,
    1094,  1095,  1112,  1096,  1097,  1098,  1099,  1100,  1101,  1102,
    1103,  1104,  1113,  1114,  1115,  1116,  1119,  1120,  1123,  1124,
    1126,  1125,  1127,  1128,  1129,  1130,  1131,  1132,  1133,  1134,
    1135,  1138,  1136,  1177,  1137,  1139,  1140,  1141,  1145,  1146,
    1158,  1159,  1164,  1165,  1166,  1167,  1178,  1179,  1272,  1172,
    1173,  1180,  1186,  1182,  1181,  1188,  1183,  1192,  1194,  1196,
    1184,  1185,  1197,  1187,  1198,  1199,  1200,  1211,  1212,  1226,
    1227,  1228,  1229,  1189,  1190,  1191,  1193,  1195,  1230,   306,
    1047,  1231,  1232,  1233,  1234,  1330,  1235,  1236,  1237,  1238,
    1324,  1239,  1240,  1241,  1242,  1243,  1244,  1255,  1256,  1257,
    1258,  1259,  1260,  1261,  1323,  1273,  1274,  1275,   717,  1316,
     866,  1276,   555,   782,  1327,  1223,   812,  1328,   886,  1329,
    1317,   634,   435,  1320,  1265,  1322,   807,   358,  1264,   637,
    1321,     0,     0,     0,     0,  1277,  1298,  1299,  1300,  1301,
    1302,     0,  1303,     0,  1304,  1305,  1306,     0,  1307,  1308,
     710,  1309,     0,     0,  1310,  1311,   642,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   484,     0,     0,     0,     0,   706,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   502
};

static const short yycheck[] =
{
     346,   347,   428,     1,   236,     1,     1,   238,   240,   238,
       1,     1,    70,    12,     1,     1,     1,     8,     9,   238,
       1,   238,    13,    11,     5,    13,     1,   238,    23,    20,
     236,     1,    12,   238,   240,   238,    27,   383,    26,   385,
      31,    32,    30,   238,    25,   236,   141,    38,   141,   240,
      41,    42,    43,   399,    45,   238,    37,   238,   236,     1,
      51,   407,   240,   982,   983,   984,    36,    48,    53,     1,
     416,   417,    53,   236,    65,    66,    46,   240,    69,    60,
     426,   427,   238,   429,    75,    81,    67,   238,    79,    80,
      71,    81,    83,   236,    81,    86,    87,   240,   238,     1,
     236,   238,    90,    84,   240,    96,    97,     1,     1,   141,
       4,   238,   103,   104,   238,   106,   107,   108,   109,     1,
     238,   116,   236,   236,   110,   236,   240,   112,   236,   120,
     239,   112,   240,   239,   122,   239,   117,   112,   129,   130,
     239,   132,   112,   134,   135,   143,     1,   138,   143,    81,
      44,   137,     1,    47,   500,   136,   143,   215,   143,     1,
     236,    15,    16,    17,   240,     1,   147,   148,   149,   239,
     112,   152,     1,     1,   165,     3,   167,     1,     6,     1,
     171,    36,   181,    11,   175,   176,   177,   178,     1,   239,
      14,   182,   183,     1,    23,   170,    24,    25,    26,   190,
      94,   181,    30,   239,    53,   236,   237,    29,    21,    33,
      34,   143,    25,    55,    56,    57,    40,    53,   112,   112,
      48,    63,    77,   239,    52,    53,   224,    76,   170,   220,
     112,   222,    81,   221,   225,    48,    49,   197,   198,   230,
      53,   143,   223,   224,   235,     1,   237,   237,    76,    62,
      78,   237,   233,    95,     1,    68,   237,   112,     1,   114,
     115,     4,   237,    91,    88,    89,   239,   237,     1,   123,
     179,   180,    85,   239,    98,    99,   112,   170,   100,   101,
     102,   236,   224,   105,   112,   240,   128,   116,   170,    36,
     112,   140,   179,   180,   118,   119,   151,    53,   153,    46,
     113,    44,   110,   125,    47,   237,    39,   143,   121,   133,
     239,   166,   140,   123,   143,   236,   239,   139,   142,   240,
      76,    54,   224,   136,   152,    81,   239,   239,   239,   137,
     224,   144,   145,   239,   162,   237,   239,    70,   239,   161,
      73,    74,   224,   237,   239,   236,   156,   157,   158,   159,
     160,    94,   238,   208,   700,   237,   239,   238,   200,    92,
     173,   174,   239,   239,    11,   112,    13,   239,   239,   112,
     239,   239,     1,   239,   239,   239,   231,   232,   239,    26,
     239,   239,   237,    30,   140,   236,   239,   229,   237,   837,
     838,   839,   840,   841,   239,   237,   239,   179,   239,   239,
     239,   237,   226,   227,   228,   239,   239,   239,   237,   237,
      39,   224,   239,   237,   239,   237,   239,     1,   239,   239,
       1,   239,   239,   239,   237,    54,   238,     8,     9,   141,
       1,     1,    13,   239,     5,   239,   239,   239,   864,    20,
     239,    70,   239,    90,    73,    74,    27,   239,     1,   239,
      31,    32,   239,   239,    25,   239,   239,    38,   239,    29,
      41,    42,    43,    92,    45,   239,    37,   239,   239,   239,
      51,    55,    56,    57,   239,   239,   239,    48,   239,    63,
     239,   224,    53,    36,    65,    66,   239,   239,    69,    60,
     239,   239,   141,   239,    75,   239,    67,   239,    79,    80,
      71,   239,    83,   239,   237,    86,    87,   239,   239,   239,
     856,    95,   239,    84,   239,    96,    97,   863,   239,   239,
     239,   239,   103,   104,    77,   106,   107,   108,   109,   239,
     100,   101,   102,   239,   239,   105,   239,   239,   239,   120,
     141,   112,   112,   236,   128,   236,   117,   239,   129,   130,
     239,   132,   239,   134,   135,   125,     5,   138,   239,   112,
     239,   114,   115,   239,   239,   136,   239,   239,   239,   139,
     239,     5,   239,   239,   221,   239,   147,   148,   149,   239,
     123,   152,   123,   179,   165,   123,   167,   123,    37,   123,
     171,   161,   179,   179,   175,   176,   177,   178,   151,    48,
     153,   182,   183,    37,   179,   179,   179,   179,   236,   190,
     179,    60,   239,   166,    48,   239,   200,   239,    67,    84,
     239,   239,    71,    72,   179,   179,    60,   123,   141,   123,
     179,   179,   179,    67,   123,    84,   141,    71,    72,   220,
     179,   222,   123,   123,   225,   229,   123,    21,    22,   230,
      84,   179,   223,   224,   235,   208,   179,   123,   141,   179,
       1,   123,   233,   123,   123,   123,   141,   123,   117,   123,
     179,   239,   179,   122,   239,    49,   179,   141,   231,   232,
      21,   179,   131,   117,    25,   123,   179,   179,    62,   154,
       1,   179,   179,   179,    68,   179,   236,   131,   147,   148,
     149,   179,   239,    14,   239,   236,   239,    48,    49,   239,
     239,    85,    53,   147,   148,   149,   141,   239,   239,   141,
     185,    62,    33,    34,   239,   239,   141,    68,   141,    40,
     141,   141,     0,     1,   199,   179,   236,     5,   141,   113,
      84,   141,    10,   179,    85,   236,   236,   121,   122,   179,
     179,   179,   217,   218,   239,    23,   179,    25,   223,   141,
      28,   210,   179,   239,   236,   239,   141,    35,   233,   141,
      21,    22,   113,   141,   223,   141,   210,    88,    89,   141,
     121,   155,    50,   141,   233,   123,   141,    98,    99,   223,
      58,    59,   141,    61,   236,   136,   236,   236,    49,   233,
     174,   236,   239,   144,   145,   236,   239,   118,   119,   179,
     154,    62,   239,     1,    82,     3,   236,    68,     6,   141,
     179,   239,   133,    11,   141,    93,    94,   179,   179,   179,
     123,   142,   173,   174,    85,   141,    24,    25,    26,   179,
     179,   185,    30,   111,   201,   202,   203,   204,   205,   206,
     207,   179,   141,   179,   141,   199,   236,   236,   236,   127,
      48,   141,   113,   236,    52,    53,   141,   236,   239,   236,
     121,   236,   236,   217,   218,   236,   236,   141,   141,   223,
     236,   141,   236,   224,   123,   146,   154,   286,    76,   233,
      78,   236,   239,   236,   236,   163,   164,   179,   141,   236,
     168,   169,   236,    91,   155,   141,   239,   239,   239,   239,
     239,   184,   239,   236,   239,   226,   227,   228,   239,   239,
     239,   239,   238,   174,   112,   239,   239,   239,   236,   239,
     186,   187,   188,   189,   239,   191,   192,   239,   194,   195,
     196,   239,   239,   199,   239,   239,   236,   239,   239,   141,
     236,   239,   140,   209,   210,   211,   212,   213,   214,   236,
     216,   239,   236,   219,   152,   236,   236,   186,   187,   188,
     189,   236,   191,   192,   162,   194,   195,   196,   236,   236,
     199,   236,   236,   236,   236,   141,   236,   236,   236,   236,
     209,   210,   211,   212,   213,   214,   236,   216,   236,   236,
     219,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   141,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   141,   236,   236,   239,
     236,   236,   239,   236,   141,   236,   236,   236,   141,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   141,   141,   141,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     141,   236,   123,   239,   236,   239,   236,   236,   236,   236,
     236,   236,   123,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   123,   123,   141,   123,   236,   141,   179,   141,
     179,   141,   179,   179,   141,   239,   141,   141,   141,   141,
     123,   236,   141,   179,   141,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   141,   179,   123,   236,
     236,   179,   141,   179,   239,   141,   179,   141,   141,   236,
     179,   179,   236,   179,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   179,   179,   179,   179,   179,   236,    71,
     756,   236,   236,   236,   236,  1326,   236,   236,   236,   236,
    1287,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,  1271,  1176,   236,   236,   464,  1225,
     583,   236,   324,   490,  1313,  1088,   529,  1315,   612,  1319,
    1250,   364,   172,  1263,  1150,  1269,   521,    93,  1148,   370,
    1267,    -1,    -1,    -1,    -1,   236,   236,   236,   236,   236,
     236,    -1,   236,    -1,   236,   236,   236,    -1,   236,   236,
     454,   236,    -1,    -1,   236,   236,   378,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   251,    -1,    -1,    -1,    -1,   443,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   266
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   242,     0,     1,     5,    10,    23,    25,    28,    35,
      50,    58,    59,    61,    82,    93,    94,   111,   127,   154,
     163,   164,   168,   169,   243,   248,   253,   267,   273,   284,
     313,   328,   341,   365,   372,   382,   391,   418,   424,   430,
     435,   445,   506,   522,   540,   236,   237,   238,   342,   238,
     314,   392,   425,   431,   436,   238,   507,   419,   329,   238,
     238,   285,   366,   238,   238,   373,   383,     1,    36,    46,
     112,   268,   269,   270,   271,   272,   238,     1,    14,    33,
      34,    40,    88,    89,    98,    99,   118,   119,   133,   142,
     226,   227,   228,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     141,   315,   319,   141,   393,   397,   238,   238,   238,     1,
       8,     9,    13,    20,    27,    31,    32,    38,    41,    42,
      43,    45,    51,    65,    66,    69,    75,    79,    80,    83,
      86,    87,    96,    97,   103,   104,   106,   107,   108,   109,
     120,   129,   130,   132,   134,   135,   138,   165,   167,   171,
     175,   176,   177,   178,   182,   183,   190,   220,   222,   225,
     230,   235,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     497,   501,   502,   503,   504,   505,   238,   238,   238,     1,
      55,    56,    57,    63,    95,   128,   200,   229,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,     1,   110,
     137,   249,   250,   251,   252,   141,   286,   290,   238,     1,
      39,    54,    70,    73,    74,    92,   541,   542,   543,   544,
     545,   546,   547,   548,     1,    36,    77,   112,   114,   115,
     151,   153,   166,   208,   231,   232,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   238,
     238,   236,   239,   239,   239,   237,   269,     1,    21,    25,
      48,    49,    53,    62,    68,    85,   113,   121,   136,   144,
     145,   173,   174,   224,   343,   344,   345,   346,   347,   348,
     349,   350,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   237,   524,   238,
     238,     1,    81,   143,   426,   427,   428,   429,     1,    81,
     432,   433,   434,     1,    53,   112,   143,   437,   441,   442,
     443,   444,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   498,   239,   494,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   237,   447,     1,     4,    44,    47,
      94,   112,   224,   508,   509,   510,   511,   512,   516,   517,
     518,     1,   143,   224,   420,   421,   422,   423,     1,    53,
      76,    81,   140,   330,   334,   335,   336,   339,   340,   236,
     239,   239,   239,   239,   239,   239,   239,   239,   237,   275,
     236,   239,   239,   237,   250,   238,     1,    23,   116,   143,
     367,   368,   369,   370,   371,   239,   239,   239,   239,   239,
     239,   237,   542,   236,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   237,   255,     1,   112,   170,
     224,   374,   375,   376,   377,   378,     1,   112,   170,   384,
     385,   386,   387,   141,   141,   141,   236,   236,   239,   239,
     239,   239,   351,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   237,   344,   179,   123,   123,   179,
     123,   245,   245,   123,   123,   179,   179,   179,   179,   179,
     179,   179,   236,     1,    29,   100,   101,   102,   105,   112,
     125,   139,   161,   316,   317,   318,   320,   321,   322,   323,
     324,   325,   326,   327,     1,     3,     6,    11,    24,    25,
      26,    30,    48,    52,    53,    76,    78,    91,   112,   140,
     152,   162,   394,   395,   396,   398,   399,   400,   401,   402,
     403,   404,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   239,   239,   237,   427,   239,   237,   433,   438,   239,
     239,   237,   442,   179,   245,   179,   245,   123,   141,   123,
     179,   179,   179,   123,   141,   179,   123,   123,   123,   179,
     245,   179,   123,   141,   179,   123,   123,   123,   245,   123,
     141,   123,   123,   179,   239,   179,   239,   245,   245,   179,
     141,   179,   179,   179,   180,   179,   180,   179,   179,   245,
     245,   123,   247,   245,   179,   179,   179,   179,   236,   519,
     239,   239,   513,   239,   239,   237,   509,   239,   239,   237,
     421,   236,   331,   239,   239,   239,   237,   335,   141,   141,
     141,   141,   201,   202,   203,   204,   205,   206,   207,   141,
     141,   179,   236,   141,   141,   236,     1,     5,    25,    37,
      48,    53,    60,    67,    71,    84,   112,   117,   136,   147,
     148,   149,   152,   223,   224,   233,   287,   288,   289,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   236,   239,   239,
     239,   237,   368,   179,   179,   179,   179,   179,   245,   236,
     141,   179,   141,   141,   141,   141,   141,   141,   123,   141,
     141,   236,   236,   239,   379,   239,   237,   375,   236,   239,
     388,   237,   385,   236,   236,   236,   179,   141,   179,   179,
     239,   179,   179,   179,   179,   179,   141,   123,   141,   141,
     179,   141,   236,   236,   236,   236,   236,   156,   157,   158,
     159,   160,   244,   245,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   237,   317,   236,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   405,   239,   239,
     239,   239,   239,   239,   239,   237,   395,   141,   141,   236,
     141,   236,   239,   141,   141,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   186,   187,   188,
     189,   191,   192,   194,   195,   196,   199,   209,   210,   211,
     212,   213,   214,   216,   219,   499,   500,   236,   186,   187,
     188,   189,   191,   192,   194,   195,   196,   199,   209,   210,
     211,   212,   213,   214,   216,   219,   495,   496,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,    15,    16,    17,   246,   247,   236,   236,   236,
     236,   236,   236,   239,   245,   179,   239,   141,   141,   236,
     141,   141,   236,   239,   141,   141,   123,   337,   338,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   239,   239,   239,
     239,   309,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   237,   288,   141,   141,
     141,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   141,
     239,   141,   236,   141,   239,   236,   236,   236,   236,   236,
      21,    22,    49,    62,    68,    85,   113,   121,   122,   155,
     174,   352,   353,   354,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   244,   244,   244,   244,   244,
     245,   123,   123,   123,   123,   141,   123,   245,   247,   236,
     141,   197,   198,   179,   141,   141,   179,   179,   179,   141,
     239,   141,   141,   141,   141,   123,   141,   141,   236,   236,
     236,   236,   146,   439,   440,   236,   236,   236,   240,   236,
     240,   246,   246,   246,    12,   181,   520,   521,   236,   236,
      12,   181,   514,   515,   236,   236,   236,   236,    70,   215,
     332,   333,   236,   236,   184,   236,   240,   179,   141,   179,
     179,   239,   179,   179,   179,   179,   141,   179,   141,   179,
     179,   179,   141,   179,   141,   179,   236,   236,   236,   236,
     236,    84,   154,   185,   199,   217,   218,   223,   233,   380,
     381,   236,   236,    84,   154,   185,   199,   217,   218,   223,
     233,   389,   390,   354,   236,   240,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,    11,    13,    26,    30,    90,
     122,   221,   406,   407,   408,   236,   236,   236,   236,   236,
     236,   236,   236,   240,   500,   496,   236,   240,   236,   240,
     236,   240,   123,   338,   236,   236,   236,   236,     5,    37,
      48,    60,    67,    71,    72,    84,   117,   122,   131,   147,
     148,   149,   210,   223,   233,   310,   311,   312,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   240,   236,   240,   353,   408,   236,   240,
     440,   521,   515,   333,   312,   236,   240,   381,   390,   407,
     311
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
#line 398 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 28:
#line 400 "ircd_parser.y"
    {
			yyval.number = yyvsp[-1].number + yyvsp[0].number;
		}
    break;

  case 29:
#line 404 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number + yyvsp[0].number;
		}
    break;

  case 30:
#line 408 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 + yyvsp[0].number;
		}
    break;

  case 31:
#line 412 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 + yyvsp[0].number;
		}
    break;

  case 32:
#line 416 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 + yyvsp[0].number;
		}
    break;

  case 33:
#line 420 "ircd_parser.y"
    {
			yyval.number = yyvsp[-2].number * 60 * 60 * 24 * 7 + yyvsp[0].number;
		}
    break;

  case 34:
#line 425 "ircd_parser.y"
    { yyval.number = 0; }
    break;

  case 36:
#line 426 "ircd_parser.y"
    { yyval.number = yyvsp[-1].number + yyvsp[0].number; }
    break;

  case 37:
#line 427 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number + yyvsp[0].number; }
    break;

  case 38:
#line 428 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 + yyvsp[0].number; }
    break;

  case 39:
#line 429 "ircd_parser.y"
    { yyval.number = yyvsp[-2].number * 1024 * 1024 + yyvsp[0].number; }
    break;

  case 46:
#line 443 "ircd_parser.y"
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
#line 460 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 63:
#line 484 "ircd_parser.y"
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
#line 578 "ircd_parser.y"
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
#line 592 "ircd_parser.y"
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
#line 610 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 68:
#line 619 "ircd_parser.y"
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
#line 633 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 70:
#line 642 "ircd_parser.y"
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
#line 670 "ircd_parser.y"
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
#line 700 "ircd_parser.y"
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
#line 716 "ircd_parser.y"
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
#line 772 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 82:
#line 781 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 83:
#line 790 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 96:
#line 814 "ircd_parser.y"
    {
                        }
    break;

  case 97:
#line 818 "ircd_parser.y"
    {
                        }
    break;

  case 98:
#line 822 "ircd_parser.y"
    {
                        }
    break;

  case 99:
#line 826 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 100:
#line 833 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 101:
#line 840 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 102:
#line 847 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 103:
#line 851 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 104:
#line 855 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 105:
#line 859 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 106:
#line 863 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 107:
#line 867 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 108:
#line 871 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 109:
#line 877 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 110:
#line 886 "ircd_parser.y"
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
#line 898 "ircd_parser.y"
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
#line 989 "ircd_parser.y"
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
#line 1001 "ircd_parser.y"
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
#line 1013 "ircd_parser.y"
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

  case 139:
#line 1036 "ircd_parser.y"
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
#line 1048 "ircd_parser.y"
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
#line 1059 "ircd_parser.y"
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
#line 1070 "ircd_parser.y"
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
#line 1112 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 144:
#line 1121 "ircd_parser.y"
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
#line 1132 "ircd_parser.y"
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
#line 1143 "ircd_parser.y"
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
#line 1154 "ircd_parser.y"
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
#line 1165 "ircd_parser.y"
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
#line 1176 "ircd_parser.y"
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
#line 1187 "ircd_parser.y"
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
#line 1198 "ircd_parser.y"
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
#line 1209 "ircd_parser.y"
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
#line 1220 "ircd_parser.y"
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
#line 1231 "ircd_parser.y"
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
#line 1242 "ircd_parser.y"
    {
}
    break;

  case 159:
#line 1246 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 160:
#line 1247 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 161:
#line 1250 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 162:
#line 1257 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 163:
#line 1264 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 164:
#line 1271 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 165:
#line 1278 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 166:
#line 1285 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 167:
#line 1292 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 168:
#line 1299 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 169:
#line 1306 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 170:
#line 1313 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 171:
#line 1320 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 172:
#line 1327 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 173:
#line 1334 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 174:
#line 1341 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 175:
#line 1348 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 176:
#line 1355 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 177:
#line 1368 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = (struct ClassItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 178:
#line 1375 "ircd_parser.y"
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
#line 1402 "ircd_parser.y"
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
#line 1448 "ircd_parser.y"
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
#line 1494 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 196:
#line 1500 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = yyvsp[-1].number;
}
    break;

  case 197:
#line 1506 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = yyvsp[-1].number;
}
    break;

  case 198:
#line 1512 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = yyvsp[-1].number;
}
    break;

  case 199:
#line 1518 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = yyvsp[-1].number;
}
    break;

  case 200:
#line 1524 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = yyvsp[-1].number;
}
    break;

  case 201:
#line 1530 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = yyvsp[-1].number;
}
    break;

  case 202:
#line 1536 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = yyvsp[-1].number;
}
    break;

  case 203:
#line 1545 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 204:
#line 1552 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 205:
#line 1561 "ircd_parser.y"
    {
}
    break;

  case 209:
#line 1566 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 210:
#line 1570 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 221:
#line 1583 "ircd_parser.y"
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

  case 222:
#line 1598 "ircd_parser.y"
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

  case 223:
#line 1620 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 224:
#line 1629 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 225:
#line 1641 "ircd_parser.y"
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
#line 1653 "ircd_parser.y"
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
#line 1723 "ircd_parser.y"
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

  case 247:
#line 1752 "ircd_parser.y"
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
#line 1765 "ircd_parser.y"
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
#line 1776 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 250:
#line 1785 "ircd_parser.y"
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
#line 1796 "ircd_parser.y"
    {
}
    break;

  case 255:
#line 1800 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 256:
#line 1801 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 257:
#line 1804 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 258:
#line 1812 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 259:
#line 1819 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 260:
#line 1826 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 261:
#line 1833 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 262:
#line 1840 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 263:
#line 1847 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 264:
#line 1854 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 265:
#line 1861 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 266:
#line 1868 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 267:
#line 1877 "ircd_parser.y"
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
#line 1888 "ircd_parser.y"
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
#line 1899 "ircd_parser.y"
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
#line 1910 "ircd_parser.y"
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
#line 1921 "ircd_parser.y"
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
#line 1932 "ircd_parser.y"
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
#line 1944 "ircd_parser.y"
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
#line 1963 "ircd_parser.y"
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
#line 1973 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = yyvsp[-1].number;
  }
}
    break;

  case 276:
#line 1982 "ircd_parser.y"
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
#line 1997 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 278:
#line 2004 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 285:
#line 2016 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 286:
#line 2025 "ircd_parser.y"
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
#line 2040 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (clean_resv_nick(yylval.string))
    {
      char def_reason[] = "No reason";

      create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }

  /* otherwise its erroneous, but ignore it for now */
}
    break;

  case 288:
#line 2058 "ircd_parser.y"
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
#line 2066 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 296:
#line 2077 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 297:
#line 2086 "ircd_parser.y"
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

  case 298:
#line 2101 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 302:
#line 2108 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 303:
#line 2112 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 304:
#line 2116 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 305:
#line 2120 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 306:
#line 2124 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 307:
#line 2128 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 308:
#line 2132 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 309:
#line 2136 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 310:
#line 2145 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = CLUSTER_ALL;
  }
}
    break;

  case 311:
#line 2152 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 317:
#line 2165 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 318:
#line 2171 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 322:
#line 2178 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= CLUSTER_KLINE;
}
    break;

  case 323:
#line 2182 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= CLUSTER_UNKLINE;
}
    break;

  case 324:
#line 2186 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= CLUSTER_XLINE;
}
    break;

  case 325:
#line 2190 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= CLUSTER_UNXLINE;
}
    break;

  case 326:
#line 2194 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= CLUSTER_RESV;
}
    break;

  case 327:
#line 2198 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= CLUSTER_UNRESV;
}
    break;

  case 328:
#line 2202 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= CLUSTER_LOCOPS;
}
    break;

  case 329:
#line 2206 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = CLUSTER_ALL;
}
    break;

  case 330:
#line 2215 "ircd_parser.y"
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

  case 331:
#line 2233 "ircd_parser.y"
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

  case 354:
#line 2375 "ircd_parser.y"
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

  case 355:
#line 2387 "ircd_parser.y"
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

  case 356:
#line 2399 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 357:
#line 2408 "ircd_parser.y"
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

  case 358:
#line 2420 "ircd_parser.y"
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

  case 359:
#line 2432 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = yyvsp[-1].number;
}
    break;

  case 360:
#line 2438 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 361:
#line 2442 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 362:
#line 2450 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 363:
#line 2459 "ircd_parser.y"
    {
}
    break;

  case 367:
#line 2463 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 368:
#line 2464 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 369:
#line 2467 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 370:
#line 2474 "ircd_parser.y"
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

  case 371:
#line 2485 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 372:
#line 2492 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 373:
#line 2499 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 374:
#line 2506 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 375:
#line 2516 "ircd_parser.y"
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

  case 376:
#line 2557 "ircd_parser.y"
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

  case 377:
#line 2568 "ircd_parser.y"
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

  case 378:
#line 2579 "ircd_parser.y"
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

  case 379:
#line 2594 "ircd_parser.y"
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

  case 380:
#line 2605 "ircd_parser.y"
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

  case 381:
#line 2618 "ircd_parser.y"
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

  case 382:
#line 2631 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 383:
#line 2640 "ircd_parser.y"
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

  case 384:
#line 2675 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(KLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
  }
}
    break;

  case 385:
#line 2682 "ircd_parser.y"
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

  case 391:
#line 2701 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    DupString(yy_aconf->host, yylval.string);
    split_user_host(yy_aconf->host, &yy_aconf->user, &yy_aconf->host);
  }
}
    break;

  case 392:
#line 2710 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 393:
#line 2722 "ircd_parser.y"
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

  case 394:
#line 2731 "ircd_parser.y"
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

  case 400:
#line 2747 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 401:
#line 2756 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 402:
#line 2768 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    DupString(yy_aconf->passwd, "*");
  }
}
    break;

  case 403:
#line 2776 "ircd_parser.y"
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

  case 408:
#line 2792 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 409:
#line 2804 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_flags = 0;
    gecos_reason[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 410:
#line 2811 "ircd_parser.y"
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

  case 411:
#line 2854 "ircd_parser.y"
    {
}
    break;

  case 415:
#line 2859 "ircd_parser.y"
    {
  if (ypass == 2)
    gecos_flags |= 1;
}
    break;

  case 422:
#line 2868 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_name, yylval.string, sizeof(gecos_reason));
  }
}
    break;

  case 423:
#line 2877 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    gecos_name[0] = '\0';
    strlcpy(gecos_reason, yylval.string, sizeof(gecos_name));
  }
}
    break;

  case 480:
#line 2925 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr = yyvsp[-1].number;
}
    break;

  case 481:
#line 2931 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_min_cidr6 = yyvsp[-1].number;
}
    break;

  case 482:
#line 2937 "ircd_parser.y"
    {
  if (ypass == 1) /* must be set in the 1st pass */
    ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 483:
#line 2943 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 484:
#line 2948 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 485:
#line 2953 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kill_chase_time_limit = yyvsp[-1].number;
}
    break;

  case 486:
#line 2959 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 487:
#line 2965 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 488:
#line 2971 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 489:
#line 2977 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 490:
#line 2983 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 491:
#line 2989 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_time = yyvsp[-1].number; 
}
    break;

  case 492:
#line 2995 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_nick_changes = yyvsp[-1].number;
}
    break;

  case 493:
#line 3001 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_accept = yyvsp[-1].number;
}
    break;

  case 494:
#line 3007 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.anti_spam_exit_message_time = yyvsp[-1].number;
}
    break;

  case 495:
#line 3013 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_warn_delta = yyvsp[-1].number;
}
    break;

  case 496:
#line 3019 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = yyvsp[-1].number;
}
    break;

  case 497:
#line 3025 "ircd_parser.y"
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

  case 498:
#line 3036 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 499:
#line 3042 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 500:
#line 3051 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 501:
#line 3057 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 502:
#line 3063 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 503:
#line 3069 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 504:
#line 3073 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 505:
#line 3079 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 506:
#line 3083 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 507:
#line 3089 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait = yyvsp[-1].number;
}
    break;

  case 508:
#line 3095 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.caller_id_wait = yyvsp[-1].number;
}
    break;

  case 509:
#line 3101 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.pace_wait_simple = yyvsp[-1].number;
}
    break;

  case 510:
#line 3107 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 511:
#line 3113 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 512:
#line 3119 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 513:
#line 3125 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 514:
#line 3131 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 515:
#line 3142 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.idletime = yyvsp[-1].number;
}
    break;

  case 516:
#line 3148 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dots_in_ident = yyvsp[-1].number;
}
    break;

  case 517:
#line 3154 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.maximum_links = yyvsp[-1].number;
}
    break;

  case 518:
#line 3160 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.max_targets = yyvsp[-1].number;
}
    break;

  case 519:
#line 3166 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 520:
#line 3175 "ircd_parser.y"
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

  case 521:
#line 3207 "ircd_parser.y"
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

  case 522:
#line 3225 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 523:
#line 3231 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 524:
#line 3240 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 525:
#line 3246 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 526:
#line 3251 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 527:
#line 3257 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 531:
#line 3264 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 532:
#line 3268 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 533:
#line 3272 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 534:
#line 3276 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 535:
#line 3280 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 536:
#line 3284 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 537:
#line 3288 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 538:
#line 3292 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 539:
#line 3296 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 540:
#line 3300 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 541:
#line 3304 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 542:
#line 3308 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 543:
#line 3312 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 544:
#line 3316 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 545:
#line 3320 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 546:
#line 3324 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 547:
#line 3328 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 548:
#line 3332 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 549:
#line 3338 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 553:
#line 3345 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 554:
#line 3349 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 555:
#line 3353 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 556:
#line 3357 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 557:
#line 3361 "ircd_parser.y"
    { 
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 558:
#line 3365 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 559:
#line 3369 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 560:
#line 3373 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 561:
#line 3377 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 562:
#line 3381 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 563:
#line 3385 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 564:
#line 3389 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 565:
#line 3393 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 566:
#line 3397 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 567:
#line 3401 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 568:
#line 3405 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 569:
#line 3409 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 570:
#line 3413 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 571:
#line 3419 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard = yyvsp[-1].number;
}
    break;

  case 572:
#line 3425 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.min_nonwildcard_simple = yyvsp[-1].number;
}
    break;

  case 573:
#line 3431 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.default_floodcount = yyvsp[-1].number;
}
    break;

  case 574:
#line 3437 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.client_flood = yyvsp[-1].number;
}
    break;

  case 575:
#line 3443 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 576:
#line 3452 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->flags = 0;
  }
}
    break;

  case 577:
#line 3460 "ircd_parser.y"
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

  case 587:
#line 3487 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 588:
#line 3493 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = yyvsp[-1].number;
}
    break;

  case 589:
#line 3499 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 593:
#line 3505 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 594:
#line 3509 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 595:
#line 3515 "ircd_parser.y"
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

  case 596:
#line 3538 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 597:
#line 3547 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 598:
#line 3551 "ircd_parser.y"
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

  case 601:
#line 3591 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 602:
#line 3595 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 622:
#line 3625 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 623:
#line 3631 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_except = yylval.number;
}
    break;

  case 624:
#line 3637 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_invex = yylval.number;
}
    break;

  case 625:
#line 3643 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.use_knock = yylval.number;
}
    break;

  case 626:
#line 3649 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay = yyvsp[-1].number;
}
    break;

  case 627:
#line 3655 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.knock_delay_channel = yyvsp[-1].number;
}
    break;

  case 628:
#line 3661 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.invite_ops_only = yylval.number;
}
    break;

  case 629:
#line 3667 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_chans_per_user = yyvsp[-1].number;
}
    break;

  case 630:
#line 3673 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 631:
#line 3679 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.max_bans = yyvsp[-1].number;
}
    break;

  case 632:
#line 3685 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_user_count = yyvsp[-1].number;
}
    break;

  case 633:
#line 3691 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.default_split_server_count = yyvsp[-1].number;
}
    break;

  case 634:
#line 3697 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 635:
#line 3703 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 636:
#line 3709 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 647:
#line 3729 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 648:
#line 3735 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 649:
#line 3741 "ircd_parser.y"
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

  case 650:
#line 3755 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 651:
#line 3761 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 652:
#line 3767 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 6855 "y.tab.c"

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


#line 369 "ircd_parser.y"

