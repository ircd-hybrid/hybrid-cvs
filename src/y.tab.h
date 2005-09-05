/* $Id: y.tab.h,v 7.56 2005/09/05 12:03:05 db Exp $ */
#ifndef YYERRCODE
#define YYERRCODE 256
#endif

#define ACCEPT_PASSWORD 257
#define ACTION 258
#define ADMIN 259
#define AFTYPE 260
#define T_ALLOW 261
#define ANTI_NICK_FLOOD 262
#define ANTI_SPAM_EXIT_MESSAGE_TIME 263
#define IRCD_AUTH 264
#define AUTOCONN 265
#define T_BLOCK 266
#define BURST_AWAY 267
#define BURST_TOPICWHO 268
#define BYTES 269
#define KBYTES 270
#define MBYTES 271
#define GBYTES 272
#define TBYTES 273
#define CALLER_ID_WAIT 274
#define OPERS_BYPASS_CALLERID 275
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
#define FKILLLOG 311
#define FKLINELOG 312
#define FGLINELOG 313
#define FOPERLOG 314
#define FOPERSPYLOG 315
#define FUSERLOG 316
#define GECOS 317
#define GENERAL 318
#define GLINE 319
#define GLINES 320
#define GLINE_EXEMPT 321
#define GLINE_LOG 322
#define GLINE_TIME 323
#define GLINE_MIN_CIDR 324
#define GLINE_MIN_CIDR6 325
#define GLOBAL_KILL 326
#define NEED_IDENT 327
#define HAVENT_READ_CONF 328
#define HIDDEN 329
#define HIDDEN_ADMIN 330
#define HIDDEN_OPER 331
#define HIDE_SERVER_IPS 332
#define HIDE_SERVERS 333
#define HIDE_SPOOF_IPS 334
#define HOST 335
#define HUB 336
#define HUB_MASK 337
#define IDLETIME 338
#define IGNORE_BOGUS_TS 339
#define IP 340
#define KILL 341
#define KILL_CHASE_TIME_LIMIT 342
#define KLINE 343
#define KLINE_EXEMPT 344
#define KLINE_REASON 345
#define KLINE_WITH_REASON 346
#define KNOCK_DELAY 347
#define KNOCK_DELAY_CHANNEL 348
#define LAZYLINK 349
#define LEAF_MASK 350
#define LINKS_DELAY 351
#define LISTEN 352
#define T_LOG 353
#define LOGGING 354
#define LOG_LEVEL 355
#define MAXIMUM_LINKS 356
#define MAX_ACCEPT 357
#define MAX_BANS 358
#define MAX_CHANS_PER_USER 359
#define MAX_GLOBAL 360
#define MAX_IDENT 361
#define MAX_LOCAL 362
#define MAX_NICK_CHANGES 363
#define MAX_NICK_TIME 364
#define MAX_NUMBER 365
#define MAX_TARGETS 366
#define MESSAGE_LOCALE 367
#define MIN_NONWILDCARD 368
#define MIN_NONWILDCARD_SIMPLE 369
#define MODULE 370
#define MODULES 371
#define NAME 372
#define NEED_PASSWORD 373
#define NETWORK_DESC 374
#define NETWORK_NAME 375
#define NICK 376
#define NICK_CHANGES 377
#define NO_CREATE_ON_SPLIT 378
#define NO_JOIN_ON_SPLIT 379
#define NO_OPER_FLOOD 380
#define NO_TILDE 381
#define NOT 382
#define NUMBER 383
#define NUMBER_PER_IDENT 384
#define NUMBER_PER_IP 385
#define NUMBER_PER_IP_GLOBAL 386
#define OPERATOR 387
#define OPER_LOG 388
#define OPER_ONLY_UMODES 389
#define OPER_PASS_RESV 390
#define OPER_SPY_T 391
#define OPER_UMODES 392
#define INVITE_OPS_ONLY 393
#define JOIN_FLOOD_COUNT 394
#define JOIN_FLOOD_TIME 395
#define PACE_WAIT 396
#define PACE_WAIT_SIMPLE 397
#define PASSWORD 398
#define PATH 399
#define PING_COOKIE 400
#define PING_TIME 401
#define PING_WARNING 402
#define PORT 403
#define QSTRING 404
#define QUIET_ON_BAN 405
#define REASON 406
#define REDIRPORT 407
#define REDIRSERV 408
#define REGEX_T 409
#define REHASH 410
#define TREJECT_HOLD_TIME 411
#define REMOTE 412
#define REMOTEBAN 413
#define RESTRICTED 414
#define RSA_PRIVATE_KEY_FILE 415
#define RSA_PUBLIC_KEY_FILE 416
#define SSL_CERTIFICATE_FILE 417
#define RESV 418
#define RESV_EXEMPT 419
#define SECONDS 420
#define MINUTES 421
#define HOURS 422
#define DAYS 423
#define WEEKS 424
#define SENDQ 425
#define SEND_PASSWORD 426
#define SERVERHIDE 427
#define SERVERINFO 428
#define SERVLINK_PATH 429
#define IRCD_SID 430
#define TKLINE_EXPIRE_NOTICES 431
#define T_SHARED 432
#define T_CLUSTER 433
#define TYPE 434
#define SHORT_MOTD 435
#define SILENT 436
#define SPOOF 437
#define SPOOF_NOTICE 438
#define STATS_I_OPER_ONLY 439
#define STATS_K_OPER_ONLY 440
#define STATS_O_OPER_ONLY 441
#define STATS_P_OPER_ONLY 442
#define TBOOL 443
#define TMASKED 444
#define T_REJECT 445
#define TS_MAX_DELTA 446
#define TS_WARN_DELTA 447
#define TWODOTS 448
#define T_ALL 449
#define T_BOTS 450
#define T_SOFTCALLERID 451
#define T_CALLERID 452
#define T_CCONN 453
#define T_CLIENT_FLOOD 454
#define T_DEAF 455
#define T_DEBUG 456
#define T_DRONE 457
#define T_EXTERNAL 458
#define T_FULL 459
#define T_INVISIBLE 460
#define T_IPV4 461
#define T_IPV6 462
#define T_LOCOPS 463
#define T_LOGPATH 464
#define T_L_CRIT 465
#define T_L_DEBUG 466
#define T_L_ERROR 467
#define T_L_INFO 468
#define T_L_NOTICE 469
#define T_L_TRACE 470
#define T_L_WARN 471
#define T_MAX_CLIENTS 472
#define T_NCHANGE 473
#define T_OPERWALL 474
#define T_REJ 475
#define T_SERVNOTICE 476
#define T_SKILL 477
#define T_SPY 478
#define T_SSL 479
#define T_UNAUTH 480
#define T_UNRESV 481
#define T_UNXLINE 482
#define T_WALLOP 483
#define THROTTLE_TIME 484
#define TOPICBURST 485
#define TRUE_NO_OPER_FLOOD 486
#define TKLINE 487
#define TXLINE 488
#define TRESV 489
#define UNKLINE 490
#define USER 491
#define USE_EGD 492
#define USE_EXCEPT 493
#define USE_INVEX 494
#define USE_KNOCK 495
#define USE_LOGGING 496
#define USE_WHOIS_ACTUALLY 497
#define VHOST 498
#define VHOST6 499
#define XLINE 500
#define WARN 501
#define WARN_NO_NLINE 502
typedef union {
  int number;
  char *string;
} YYSTYPE;
extern YYSTYPE yylval;
