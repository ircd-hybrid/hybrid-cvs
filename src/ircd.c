/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  ircd.c: Starts up and runs the ircd.
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
 *  $Id: ircd.c,v 7.269 2003/04/23 15:04:41 adx Exp $
 */

#include "stdinc.h"
#include "setup.h"
#include "config.h"

#ifdef VMS
# include descrip
# include starlet
#endif

#include "tools.h"
#include "ircd.h"
#include "channel.h"
#include "channel_mode.h"
#include "class.h"
#include "client.h"
#include "common.h"
#include "event.h"
#include "fdlist.h"
#include "hash.h"
#include "irc_string.h"
#include "ircdauth.h"
#include "ircd_signal.h"
#include "list.h"
#include "s_gline.h"
#include "motd.h"
#include "ircd_handler.h"
#include "md5.h"
#include "msg.h"         /* msgtab */
#include "hostmask.h"
#include "numeric.h"
#include "parse.h"
#include "res.h"
#include "restart.h"
#include "s_auth.h"
#include "s_bsd.h"
#include "s_conf.h"
#include "s_debug.h"
#include "s_log.h"
#include "s_misc.h"
#include "s_serv.h"      /* try_connections */
#include "s_stats.h"
#include "scache.h"
#include "send.h"
#include "whowas.h"
#include "modules.h"
#include "memory.h"
#include "hook.h"
#include "ircd_getopt.h"
#include "balloc.h"
/*
 * Try and find the correct name to use with getrlimit() for setting the max.
 * number of files allowed to be open by this process.
 */

/* /quote set variables */
struct SetOptions GlobalSetOptions;

/* configuration set from ircd.conf */
struct config_file_entry ConfigFileEntry; 
/* server info set from ircd.conf */
struct server_info ServerInfo;
/* admin info set from ircd.conf */
struct admin_info AdminInfo;

struct  Counter Count;
struct  ServerState_t server_state;

struct timeval SystemTime;
int    ServerRunning;           /* GLOBAL - server execution state */
struct Client me;               /* That's me */
struct LocalUser meLocalUser;	/* That's also part of me */

int callbacks_called;          /* A measure of server load... */

static unsigned long       initialVMTop = 0;   /* top of virtual memory at init */
const char * logFileName = LPATH;
const char * pidFileName = PPATH;

char**  myargv;
int     dorehash   = 0;
int     doremotd   = 0;
int     debuglevel = -1;        /* Server debug level */
char*   debugmode  = "";        /*  -"-    -"-   -"-  */
time_t  nextconnect = 1;        /* time for next try_connections call */

/* Set to zero because it should be initialized later using
 * initialize_server_capabs
 */
int     default_server_capabs = CAP_MASK;

int splitmode;
int splitchecking;
int split_users;
int split_servers;

static int irc_sleep(unsigned long useconds)
{
#ifdef HAVE_NANOSLEEP
	struct timespec t;
	t.tv_sec = useconds / (unsigned long)  1000000;
	t.tv_nsec = (useconds % (unsigned long) 1000000) * 1000 ;
	return nanosleep(&t, NULL);
#else
	struct timeval t;
	t.tv_sec = 0;
	t.tv_usec = useconds;
	return select(0, NULL, NULL, NULL, &t);
#endif
}

/*
 * get_vm_top - get the operating systems notion of the resident set size
 */
static unsigned long get_vm_top(void)
{
  /*
   * NOTE: sbrk is not part of the ANSI C library or the POSIX.1 standard
   * however it seems that everyone defines it. Calling sbrk with a 0
   * argument will return a pointer to the top of the process virtual
   * memory without changing the process size, so this call should be
   * reasonably safe (sbrk returns the new value for the top of memory).
   * This code relies on the notion that the address returned will be an 
   * offset from 0 (NULL), so the result of sbrk is cast to a size_t and 
   * returned. We really shouldn't be using it here but...
   */
#ifndef VMS
  void *vptr = sbrk(0);
  return((unsigned long)vptr);
#else
  return(0);
#endif
}

/*
 * get_maxrss - get the operating systems notion of the resident set size
 */
unsigned long
get_maxrss(void)
{
  return(get_vm_top() - initialVMTop);
}

/*
 * print_startup - print startup information
 */
static void
print_startup(int pid)
{
  printf("ircd: version %s\n", ircd_version);
  printf("ircd: pid %d\n", pid);
  printf("ircd: running in %s mode from %s\n", !server_state.foreground ? "background"
         : "foreground", ConfigFileEntry.dpath);
}

/* init_sys()
 *
 * inputs	- boot_daemon flag
 * output	- none
 * side effects	- if boot_daemon flag is not set, don't daemonize
 */
static void 
init_sys(void)
{
#if defined(RLIMIT_FD_MAX) && !defined(VMS) && defined(HAVE_SYS_RLIMIT_H)
  struct rlimit limit;

  if (!getrlimit(RLIMIT_FD_MAX, &limit))
  {
    if (limit.rlim_max < MAXCONNECTIONS)
    {
      fprintf(stderr, "ircd fd table too big\n");
      fprintf(stderr, "Hard Limit: %ld IRC max: %d\n",
              (long)limit.rlim_max, MAXCONNECTIONS);
      fprintf(stderr, "Fix MAXCONNECTIONS\n");
      exit(-1);
    }

    limit.rlim_cur = limit.rlim_max; /* make soft limit the max */

    if (setrlimit(RLIMIT_FD_MAX, &limit) == -1)
    {
      fprintf(stderr, "error setting max fd's to %ld\n",
              (long)limit.rlim_cur);
      exit(EXIT_FAILURE);
    }
  }
#endif
}

static int
make_daemon(void)
{
#ifndef VMS
  int pid;
  
  if ((pid = fork()) < 0)
  {
    perror("fork");
    exit(EXIT_FAILURE);
  }
  else if (pid > 0)
  {
    print_startup(pid);
    exit(EXIT_SUCCESS);
  }

  setsid();
/*fclose(stdin);
  fclose(stdout);
  fclose(stderr); */
#else
  /* if we get here, assume we've been detached.
   * better set a process name.
   */
  $DESCRIPTOR(myname, "IRCD-HYBRID-7");
  SYS$SETPRN(&myname);
#endif
  return(0);
}

static int printVersion = 0;

struct lgetopt myopts[] = {
  {"dlinefile",  &ConfigFileEntry.dlinefile, 
   STRING, "File to use for dlines.conf"},
  {"configfile", &ConfigFileEntry.configfile, 
   STRING, "File to use for ircd.conf"},
  {"klinefile",  &ConfigFileEntry.klinefile, 
   STRING, "File to use for klines.conf"},
  {"logfile",    &logFileName, 
   STRING, "File to use for ircd.log"},
  {"pidfile",    &pidFileName,
   STRING, "File to use for process ID"},
  {"foreground", &server_state.foreground, 
   YESNO, "Run in foreground (don't detach)"},
  {"version",    &printVersion, 
   YESNO, "Print version and exit"},
  {"help", NULL, USAGE, "Print this text"},
  {NULL, NULL, STRING, NULL},
};

void
set_time(void)
{
  static char to_send[200];
  struct timeval newtime;
  newtime.tv_sec  = 0;
  newtime.tv_usec = 0;

  if (gettimeofday(&newtime, NULL) == -1)
  {
    ilog(L_ERROR, "Clock Failure (%d)", errno);
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "Clock Failure (%d), TS can be corrupted", errno);
    restart("Clock Failure");
  }

  if (newtime.tv_sec < CurrentTime)
  {
    ircsprintf(to_send, "System clock is running backwards - (%lu < %lu)",
               (unsigned long)newtime.tv_sec, (unsigned long)CurrentTime);
    report_error(L_ALL, to_send, me.name, 0);
    set_back_events(CurrentTime - newtime.tv_sec);
  }

  SystemTime.tv_sec  = newtime.tv_sec;
  SystemTime.tv_usec = newtime.tv_usec;
}

static void
io_loop(void)
{
  unsigned long empty_cycles=0, st=0, delay;

  while (ServerRunning)
  {
    /* Run pending events, then get the number of seconds to the next
     * event
     */
    delay = eventNextTime();

    if (delay <= CurrentTime)
      eventRun();

    if (callbacks_called > 0)
      empty_cycles = 0;
    else
      empty_cycles++;

    /* Reset the callback counter... */
    callbacks_called = 0;
    st = (empty_cycles+1) * 15000;

    if (st > 250000)
      st = 250000;

    irc_sleep(st);
    comm_select(0);
    exit_aborted_clients();
    free_exited_clients();
    send_queued_all();

    /* Check to see whether we have to rehash the configuration ..
     */
    if (dorehash)
    {
      rehash(1);
      dorehash = 0;
    }
    if (doremotd)
    {
      ReadMessageFile(&ConfigFileEntry.motd);
      sendto_realops_flags(UMODE_ALL, L_ALL,
                           "Got signal SIGUSR1, reloading ircd motd file");
      doremotd = 0;
    }
  }
}

/* initalialize_global_set_options()
 *
 * inputs       - none
 * output       - none
 * side effects - This sets all global set options needed 
 */
static void initialize_global_set_options(void)
{
  memset(&GlobalSetOptions, 0, sizeof(GlobalSetOptions));

  GlobalSetOptions.maxclients = MAX_CLIENTS;
  GlobalSetOptions.autoconn   = 1;

  GlobalSetOptions.spam_time = MIN_JOIN_LEAVE_TIME;
  GlobalSetOptions.spam_num  = MAX_JOIN_LEAVE_COUNT;

  if (ConfigFileEntry.default_floodcount)
    GlobalSetOptions.floodcount = ConfigFileEntry.default_floodcount;
  else
    GlobalSetOptions.floodcount = 10;

  split_servers = ConfigChannel.default_split_server_count;
  split_users   = ConfigChannel.default_split_user_count;

  if (split_users && split_servers && (ConfigChannel.no_create_on_split ||
                                       ConfigChannel.no_join_on_split))
  {
    splitmode     = 1;
    splitchecking = 1;
  }

  GlobalSetOptions.ident_timeout = IDENT_TIMEOUT;
  /* End of global set options */
}

/* initialize_message_files()
 *
 * inputs       - none
 * output       - none
 * side effects - Set up all message files needed, motd etc.
 */
static void initialize_message_files(void)
{
  InitMessageFile(USER_MOTD, MPATH, &ConfigFileEntry.motd);
  InitMessageFile(OPER_MOTD, OPATH, &ConfigFileEntry.opermotd);
  InitMessageFile(USER_LINKS, LIPATH, &ConfigFileEntry.linksfile);

  ReadMessageFile(&ConfigFileEntry.motd);
  ReadMessageFile(&ConfigFileEntry.opermotd);
  ReadMessageFile(&ConfigFileEntry.linksfile);
}

/* initialize_server_capabs
 *
 * inputs       - none
 * output       - none
 */
static void
initialize_server_capabs(void)
{
  /* If halfops support is disabled, remove the capab from the list. */
  if (ConfigChannel.use_halfops == 0)
    default_server_capabs &= ~CAP_HOPS;
  if (ConfigChannel.use_anonops == 0)
    default_server_capabs &= ~CAP_AOPS;

  default_server_capabs &= ~CAP_ZIP;
}

/* write_pidfile
 *
 * inputs       - filename+path of pid file
 * output       - none
 * side effects - write the pid of the ircd to filename
 */
static void
write_pidfile(const char *filename)
{
  FBFILE *fb;
  char buff[32];

  if ((fb = fbopen(filename, "w")))
  {
    unsigned int pid = (unsigned int)getpid();

    ircsprintf(buff, "%u\n", pid);

    if ((fbputs(buff, fb) == -1))
      ilog(L_ERROR, "Error writing %u to pid file %s (%s)",
           pid, filename, strerror(errno));

    fbclose(fb);
    return;
  }
  else
  {
    ilog(L_ERROR, "Error opening pid file %s", filename);
  }
}

/* check_pidfile()
 *
 * inputs       - filename+path of pid file
 * output       - none
 * side effects - reads pid from pidfile and checks if ircd is in process
 *                list. if it is, gracefully exits
 * -kre
 */
static void
check_pidfile(const char *filename)
{
  FBFILE *fb;
  char buff[32];
  pid_t pidfromfile;

  /* Don't do logging here, since we don't have log() initialised */
  if ((fb = fbopen(filename, "r")))
  {
    if (fbgets(buff, 20, fb) == NULL)
    {
      /* log(L_ERROR, "Error reading from pid file %s (%s)", filename,
       * strerror(errno));
       */
    }
    else
    {
      pidfromfile = atoi(buff);

      if (!kill(pidfromfile, 0))
      {
        /* log(L_ERROR, "Server is already running"); */
        printf("ircd: daemon is already running\n");
        exit(-1);
      }
    }

    fbclose(fb);
  }
  else if (errno != ENOENT)
  {
    /* log(L_ERROR, "Error opening pid file %s", filename); */
  }
}

/* setup_corefile()
 *
 * inputs       - nothing
 * output       - nothing
 * side effects - setups corefile to system limits.
 * -kre
 */
static void
setup_corefile(void)
{
#if !defined(VMS) && defined(HAVE_SYS_RESOURCE_H)
  struct rlimit rlim; /* resource limits */

  /* Set corefilesize to maximum */
  if (!getrlimit(RLIMIT_CORE, &rlim))
  {
    rlim.rlim_cur = rlim.rlim_max;
    setrlimit(RLIMIT_CORE, &rlim);
  }
#endif
}

int
main(int argc, char *argv[])
{
  /* Check to see if the user is running
   * us as root, which is a nono
   */
  if (geteuid() == 0)
  {
    fprintf(stderr, "Don't run ircd as root!!!\n");
    return(-1);
  }

  /*
   * save server boot time right away, so getrusage works correctly
   */
  set_time();
  /*
   * Setup corefile size immediately after boot -kre
   */
  setup_corefile();

  /*
   * set initialVMTop before we allocate any memory
   */
  initialVMTop = get_vm_top();

  ServerRunning = 0;
  /* It ain't random, but it ought to be a little harder to guess */
  srand(SystemTime.tv_sec ^ (SystemTime.tv_usec | (getpid() << 20)));
  memset(&me, 0, sizeof(me));
  memset(&meLocalUser, 0, sizeof(meLocalUser));
  me.localClient = &meLocalUser;
  dlinkAdd(&me, &me.node, &global_client_list);	/* Pointer to beginning
						   of Client list */

  memset((void *)&Count, 0, sizeof(Count));
  memset((void *)&server_state, 0, sizeof(server_state));

  Count.server = 1;     /* us */
  memset((void *)&ServerInfo, 0, sizeof(ServerInfo));
  memset((void *)&AdminInfo, 0, sizeof(AdminInfo));

  /* Initialise the channel capability usage counts... */
  init_chcap_usage_counts();

  ConfigFileEntry.dpath      = DPATH;
  ConfigFileEntry.configfile = CPATH;  /* Server configuration file */
  ConfigFileEntry.klinefile  = KPATH;  /* Server kline file         */
  ConfigFileEntry.dlinefile  = DLPATH; /* dline file                */
  ConfigFileEntry.glinefile  = GPATH;  /* gline log file            */

  myargv = argv;
  umask(077);                /* better safe than sorry --SRB */

  parseargs(&argc, &argv, myopts);

  if (printVersion)
  {
    printf("ircd: version %s\n", ircd_version);
    exit(EXIT_SUCCESS);
  }

  if (chdir(ConfigFileEntry.dpath))
  {
    perror("chdir");
    exit(EXIT_FAILURE);
  }

#ifdef __CYGWIN__
  server_state.foreground = 1;
#endif

  if (!server_state.foreground)
  {
    make_daemon();
  }
  else
  {
    print_startup(getpid());
  }

  setup_signals();
  /* We need this to initialise the fd array before anything else */
  fdlist_init();

  if (!server_state.foreground)
  {
    close_all_connections(); /* this needs to be before init_netio()! */
  }
  else
  {
      check_can_use_v6(); /* Done in close_all_connections normally */
  }

  init_log(logFileName);
  init_netio();         /* This needs to be setup early ! -- adrian */
  /* Check if there is pidfile and daemon already running */
  check_pidfile(pidFileName);
  /* Init the event subsystem */
  eventInit();
  init_sys();

  initBlockHeap();
  init_dlink_nodes();
  init_slink_nodes();
  initialize_message_files();
  linebuf_init();       /* set up some linebuf stuff to control paging */
  dbuf_init();
  init_hash();
  id_init();
  clear_scache_hash_table();    /* server cache name table */
  init_ip_hash_table();        /* client host ip hash table */
  init_host_hash();             /* Host-hashtable. */
  clear_hash_parse();
  init_client();
  initUser();
  init_channels();
  initclass();
  initwhowas();
  init_stats();
  init_hooks();
  load_all_modules(1);
#ifndef STATIC_MODULES
  load_core_modules(1);
#endif
  initServerMask();
  init_auth();                  /* Initialise the auth code */
  init_resolver();      /* Needs to be setup before the io loop */
  read_conf_files(YES);         /* cold start init conf files */
#ifndef STATIC_MODULES

  mod_add_path(IRCD_PREFIX "/modules");
  mod_add_path(IRCD_PREFIX "/modules/autoload");
#endif
   
  initialize_server_capabs();   /* Set up default_server_capabs */
  initialize_global_set_options();

  if (ServerInfo.name == NULL)
  {
    fprintf(stderr,
      "ERROR: No server name specified in serverinfo block.\n");
    ilog(L_CRIT, "No server name specified in serverinfo block.");
    exit(EXIT_FAILURE);
  }

  strlcpy(me.name, ServerInfo.name, sizeof(me.name));

  /* serverinfo{} description must exist.  If not, error out.*/
  if (ServerInfo.description == NULL)
  {
    fprintf(stderr,
      "ERROR: No server description specified in serverinfo block.\n");
    ilog(L_CRIT,
      "ERROR: No server description specified in serverinfo block.");
    exit(EXIT_FAILURE);
  }

  strlcpy(me.info, ServerInfo.description, sizeof(me.info));
#ifdef USE_IAUTH
  iAuth.flags = 0;

  ConnectToIAuth();

  if (iAuth.socket == NOSOCK)
  {
    fprintf(stderr, "Unable to connect to IAuth server\n");
    exit(EXIT_FAILURE);
  }
#endif
  me.from     = &me;
  me.servptr  = &me;

  SetMe(&me);
  make_server(&me);

  me.serv->up = me.name;
  me.lasttime = me.since = me.firsttime = CurrentTime;
  add_to_client_hash_table(me.name, &me);
  
  /* add ourselves to global_serv_list */
  dlinkAdd(&me, make_dlink_node(), &global_serv_list);

  check_class();
  write_pidfile(pidFileName);
  
  ilog(L_NOTICE, "Server Ready");
  
#ifdef VCHANS
  eventAddIsh("clear_channels", clear_channels, NULL, 1800);
#endif
  eventAddIsh("cleanup_glines", cleanup_glines, NULL, CLEANUP_GLINES_TIME);

  eventAddIsh("cleanup_tklines", cleanup_tklines, NULL, CLEANUP_TKLINES_TIME);

  /* We want try_connections to be called as soon as possible now! -- adrian */
  /* No, 'cause after a restart it would cause all sorts of nick collides */
  eventAddIsh("try_connections", try_connections, NULL, STARTUP_CONNECTIONS_TIME);

  eventAddIsh("collect_zipstats", collect_zipstats, NULL, ZIPSTATS_TIME);

  /* Setup the timeout check. I'll shift it later :)  -- adrian */
  eventAddIsh("comm_checktimeouts", comm_checktimeouts, NULL, 1);

  if (ConfigServerHide.links_delay > 0)
    eventAddIsh("write_links_file", write_links_file, NULL, ConfigServerHide.links_delay);
  else
    ConfigServerHide.links_disabled = 1;

  if (splitmode)
    eventAddIsh("check_splitmode", check_splitmode, NULL, 60);

  ServerRunning = 1;
  io_loop();
  return(0);
}

