/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  s_log.c: Logger functions.
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
 *  $Id: s_log.c,v 7.54 2003/06/14 17:31:18 adx Exp $
 */

#include "stdinc.h"
#ifdef USE_SYSLOG
/* XXX #ifdef HAVE_SYSLOG_H */
#include <syslog.h>
#endif
#include "client.h"	/* Needed for struct Client */
#include "common.h"
#include "s_log.h"
#include "fileio.h"
#include "irc_string.h"
#include "sprintf_irc.h"
#include "ircd.h"
#include "s_misc.h"
#include "event.h"	/* Needed for EVH etc. */
#include "s_conf.h"
#include "memory.h"

/* some older syslogs would overflow at 2024 */
#define LOG_BUFSIZE 2000

static FBFILE *logFile;
static int logLevel = INIT_LOG_LEVEL;
int use_logging = YES;


#ifndef SYSLOG_USERS
static EVH user_log_resync;
static FBFILE *user_log_fb = NULL;
#endif


#ifdef USE_SYSLOG
static int sysLogLevel[] =
{
  LOG_CRIT,
  LOG_ERR,
  LOG_WARNING,
  LOG_NOTICE,
  LOG_INFO,
  LOG_INFO,
  LOG_INFO
};
#endif

static const char *logLevelToString[] =
{
  "L_CRIT",
  "L_ERROR",
  "L_WARN",
  "L_NOTICE",
  "L_TRACE",
  "L_INFO",
  "L_DEBUG"
};

/*
 * open_log - open ircd logging file
 * returns true (1) if successful, false (0) otherwise
 */
static int 
open_log(const char *filename)
{
  if (!server_state.foreground)
    close(2); /* let the logfile grab fd 2 to catch stderr */

  logFile = fbopen(filename, "a");

  if (logFile == NULL)
  {
#ifdef USE_SYSLOG
    syslog(LOG_ERR, "Unable to open log file: %s: %s",
           filename, strerror(errno));
#endif
    return(0);
  }

  return(1);
}

#ifdef __vms
void send_opcom(const char *message)
{
    struct {
        struct hdr {                    /* Trust me, this is necessary */
            unsigned char type;         /*  Read up on SYS$SNDOPR and you'll */
            unsigned short target_0_15; /*  see why. */
            unsigned char target_16_23;
            unsigned long rqst_id;
        } h;
        char msg[200];
    } opc_request;
    struct dsc$descriptor opc;

    opc_request.h.type = OPC$_RQ_RQST;  /* Send out the string */
    opc_request.h.target_0_15 = OPC$M_NM_CENTRL;    /* To main operator */
    opc_request.h.target_16_23 = 0;
    opc_request.h.rqst_id = 0L;         /* Default it */

    strcpy(opc_request.msg, message);         /* Copy the string */

    opc.dsc$a_pointer = &opc_request;   /* Build a descriptor for the block */
    opc.dsc$w_length = strlen(message) + sizeof(struct hdr);

    sys$sndopr(&opc, 0);
}
#endif

static void 
write_log(const char *message)
{
  char buf[LOG_BUFSIZE];

  if (logFile == NULL)
    return;

  snprintf(buf, sizeof(buf), "[%s] %s\n",
           smalldate(CurrentTime), message);
  fbputs(buf, logFile);
}
   
void
ilog(int priority, const char *fmt, ...)
{
  char buf[LOG_BUFSIZE];
  va_list args;

  assert(-1 < priority);

  if (fmt == NULL)
    return;

  if (priority > logLevel)
    return;

  va_start(args, fmt);
  vsprintf(buf, fmt, args);
  va_end(args);

#ifdef USE_SYSLOG  
  if (priority <= L_DEBUG)
    syslog(sysLogLevel[priority], "%s", buf);
#endif
  if (use_logging)
    write_log(buf);

#ifdef __vms
  send_opcom(buf);
#endif
}
  
void
init_log(const char *filename)
{
  open_log(filename);
#ifdef USE_SYSLOG
  openlog("ircd", LOG_PID | LOG_NDELAY, LOG_FACILITY);
#endif
#ifndef SYSLOG_USERS
  eventAddIsh("user_log_resync", user_log_resync, NULL, 60);
#endif
}

void
reopen_log(const char *filename)
{
  fbclose(logFile);
  open_log(filename);
}

void
set_log_level(int level)
{
  if (L_ERROR < level && level <= L_DEBUG)
    logLevel = level;
}

int
get_log_level(void)
{
  return(logLevel);
}

const char *
get_log_level_as_string(int level)
{
  if (level > L_DEBUG)
    level = L_DEBUG;
  else if (level < L_ERROR)
    level = L_ERROR;

  return(logLevelToString[level]);
}

/* log_user_exit()
 *
 * inputs	- pointer to connecting client
 * output	- NONE
 * side effects - Current exiting client is logged to
 *		  either SYSLOG or to file.
 */
void
log_user_exit(struct Client *source_p)
{
  time_t on_for;

  on_for = CurrentTime - source_p->firsttime;

#ifdef SYSLOG_USERS
  if (IsPerson(source_p))
  {
    ilog(L_INFO, "%s (%3ld:%02ld:%02ld): %s!%s@%s %ld/%ld\n",
         myctime(source_p->firsttime),
	  (signed long) on_for / 3600,
	  (signed long) (on_for % 3600)/60,
	  (signed long) on_for % 60,
	  source_p->name, source_p->username, source_p->host,
	  source_p->localClient->sendK,
	  source_p->localClient->receiveK);
    }
#else
  {
    char linebuf[BUFSIZ];

    /*
     * This conditional makes the logfile active only after
     * it's been created - thus logging can be turned off by
     * removing the file.
     * -Taner
     */
    if (IsPerson(source_p))
    {
      if (user_log_fb == NULL)
      {
	if((ConfigFileEntry.fname_userlog[0] != '\0') && 
	   (user_log_fb = fbopen(ConfigFileEntry.fname_userlog, "r")) != NULL )
	{
	  fbclose(user_log_fb);
	  user_log_fb = fbopen(ConfigFileEntry.fname_userlog, "a");
	}
      }
      if (user_log_fb != NULL)
      {
	ircsprintf(linebuf,
		   "%s (%3ld:%02ld:%02ld): %s!%s@%s %d/%d\n",
		   myctime(source_p->firsttime),
		   (signed long) on_for / 3600,
		   (signed long) (on_for % 3600)/60,
		   (signed long) on_for % 60,
		   source_p->name, source_p->username, source_p->host,
		   source_p->localClient->sendK,
		   source_p->localClient->receiveK);
	
	fbputs(linebuf, user_log_fb);
      }
    }
  }
#endif
}

#ifndef SYSLOG_USERS
/* user_log_resync()
 *
 * inputs	- NONE
 * output	- NONE
 * side effects	-
 */
static void
user_log_resync(void *notused)
{
  if (user_log_fb != NULL)
  {
    fbclose(user_log_fb);
    user_log_fb = NULL;
  }
}
#endif

/* XXX log_oper and log_failed_oper should be combined in future */
/* log_oper()
 *
 * inputs	- pointer to client being opered up
 * output	- none
 * side effects - ConfigFileEntry.fname_operlog is written to, if its present
 */
void
log_oper(struct Client *source_p, const char *name)
{
  FBFILE *oper_fb;
  char linebuf[BUFSIZE];

  if (ConfigFileEntry.fname_operlog[0] == '\0')
    return;
  
  if (IsPerson(source_p))
  {
    if ((oper_fb = fbopen(ConfigFileEntry.fname_operlog, "r")) != NULL)
    {
      fbclose(oper_fb);
      oper_fb = fbopen(ConfigFileEntry.fname_operlog, "a");
    }

    if (oper_fb != NULL)
    {
      ircsprintf(linebuf, "%s OPER (%s) by (%s!%s@%s)\n",
		 myctime(CurrentTime), name, source_p->name,
                 source_p->username, source_p->host);

      fbputs(linebuf,oper_fb);
      fbclose(oper_fb);
    }
  }
}

/* log_failed_oper()
 *
 * inputs	- pointer to client that failed top oper up
 * output	- none
 * side effects - ConfigFileEntry.fname_foperlog is written to, if its present
 */
void
log_failed_oper(struct Client *source_p, const char *name)
{
  FBFILE *oper_fb;
  char linebuf[BUFSIZE];

  if (ConfigFileEntry.fname_foperlog[0] == '\0')
    return;
  
  if (IsPerson(source_p))
  {
    if ((oper_fb = fbopen(ConfigFileEntry.fname_foperlog, "r")) != NULL)
    {
      fbclose(oper_fb);
      oper_fb = fbopen(ConfigFileEntry.fname_foperlog, "a");
    }

    if (oper_fb != NULL)
    {
      ircsprintf(linebuf, "%s FAILED OPER (%s) by (%s!%s@%s)\n",
		 myctime(CurrentTime), name, source_p->name,
                 source_p->username, source_p->host);

      fbputs(linebuf,oper_fb);
      fbclose(oper_fb);
    }
  }
}

#ifdef __vms
const char *
ircd$format_error(int status)
{
	static char msg[257];
	struct dsc$descriptor msgd;
	int msg_len;
	char temp[512];

	msg_len = 0;
	msgd.dsc$w_length = 256;
	msgd.dsc$a_pointer = msg;
	sys$getmsg(status, &msg_len, &msgd, 0, &temp);
	msg[msg_len] = '\0';
	return msg + 1;
}
#endif
