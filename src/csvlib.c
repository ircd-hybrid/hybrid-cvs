/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  csvlib.c - set of functions to deal with csv type of conf files
 *
 *  Copyright (C) 2003 by Diane Bruce, Stuart Walsh
 *  Use it anywhere you like, if you like it buy us a beer.
 *  If it's broken, don't bother us with the lawyers.
 *
 *  $Id: csvlib.c,v 7.20 2003/06/14 03:39:25 db Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "s_log.h"
#include "s_conf.h"
#include "hostmask.h"
#include "client.h"
#include "irc_string.h"
#include "sprintf_irc.h"
#include "memory.h"
#include "send.h"
#include "resv.h"

static void parse_csv_line(char *line, ...);
static int write_csv_line(FBFILE *out, const char *format, ...);
static int flush_write(struct Client *source_p, FBFILE *in, FBFILE* out, 
                       const char *buf, const char *temppath);

/* parse_csv_file()
 *
 * inputs	- FILE pointer
 * 		- type of conf to parse
 * output	- none
 * side effects	-
 */
void
parse_csv_file(FBFILE *file, ConfType conf_type)
{
  struct ConfItem *conf;
  struct AccessItem *aconf;
  struct MatchItem *match_item;
  char  *name_field=NULL;
  char  *user_field=NULL;
  char  *reason_field=NULL;
  char  *oper_reason=NULL;
  char  *host_field=NULL;
  char  *port=NULL;
  char  line[BUFSIZE];
  char  *p;

  while (fbgets(line, sizeof(line), file) != NULL)
  {
    if ((p = strchr(line, '\n')) != NULL)
      *p = '\0';

    if ((*line == '\0') || (*line == '#'))
      continue;

    switch(conf_type)
    {
    case KLINE_TYPE:
      parse_csv_line(line, &user_field, &host_field, &reason_field, NULL);
      conf = make_conf_item(KLINE_TYPE);
      aconf = (struct AccessItem *)map_to_conf(conf);
      if (host_field != NULL)
	DupString(aconf->host, host_field);
      if (reason_field != NULL)
	DupString(aconf->reason, reason_field);
      if (user_field != NULL)
	DupString(aconf->user, user_field);
      if (aconf->host != NULL)
	add_conf_by_address(aconf->host, CONF_KILL, aconf->user, aconf);
      break;

    case DLINE_TYPE:
      parse_csv_line(line, &host_field, &reason_field, NULL);
      conf = make_conf_item(DLINE_TYPE);
      aconf = (struct AccessItem *)map_to_conf(conf);
      if (host_field != NULL)
	DupString(aconf->host, host_field);
      if (reason_field != NULL)
	DupString(aconf->reason, reason_field);
      conf_add_d_conf(aconf);
      break;

    case XLINE_TYPE:
      parse_csv_line(line, &name_field, &reason_field, &oper_reason, &port,
		     NULL);
      conf = make_conf_item(XLINE_TYPE);
      match_item = (struct MatchItem *)map_to_conf(conf);
      if (name_field != NULL)
	DupString(match_item->name, name_field);
      if (reason_field != NULL)
	DupString(match_item->reason, reason_field);
      if (port != NULL)
	match_item->action = atoi(port);
      break;

    case CRESV_TYPE:
      parse_csv_line(line, &name_field, &reason_field, NULL);
      (void)create_channel_resv(name_field, reason_field, 0);
      break;

    case NRESV_TYPE:
      parse_csv_line(line, &name_field, &reason_field, NULL);
      (void)create_nick_resv(name_field, reason_field, 0);
      break;

    case GLINE_TYPE:
    case CONF_TYPE:
    case OPER_TYPE:
    case CLIENT_TYPE:
    case SERVER_TYPE:
    case HUB_TYPE:
    case LEAF_TYPE:
    case ULINE_TYPE:
    case EXEMPTDLINE_TYPE:
      break;
    }
  }
}

/*
 * parse_csv_line()
 *
 * inputs	- pointer to line to parse
 * output	-
 * side effects -
 */

static void
parse_csv_line(char *line, ...)
{
  va_list args;
  char **dest;
  char *field;

  va_start(args, line);
  dest = va_arg(args, char **);
  if ((dest == NULL) || ((field = getfield(line)) == NULL))
  {
    va_end(args);
    return;
  }

  *dest = field;
    
  for(;;)
  {
    dest = va_arg(args, char **);
    if ((dest == NULL) || ((field = getfield(NULL)) == NULL))
    {
      va_end(args);
      return;
    }
    *dest = field;
  }
  /* NOT REACHED */
  va_end(args);
}


/* write_conf_line()
 *
 * inputs       - pointer to struct AccessItem
 *		- string current_date (small date)
 *              - time_t cur_time
 * output       - NONE
 * side effects - This function takes care of
 *                finding right conf file, writing
 *                the right lines to this file, 
 *                notifying the oper that their kline/dline etc. is in place
 *                notifying the opers on the server about the k/d etc. line
 *                
 * - Dianora
 */
void 
write_conf_line(ConfType type, struct Client *source_p,
		struct ConfItem *conf,
		const char *current_date, time_t cur_time)
{
  FBFILE *out;
  const char *filename;
  struct AccessItem *aconf;
  struct MatchItem *xconf;

  filename = get_conf_name(type);
  if ((out = fbopen(filename, "a")) == NULL)
  {
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "*** Problem opening %s ", filename);
    return;
  }

  switch(type)
  {
  case KLINE_TYPE:
    aconf = (struct AccessItem *)map_to_conf(conf);
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "%s added K-Line for [%s@%s] [%s]",
                         get_oper_name(source_p),
			 aconf->user, aconf->host, aconf->reason);
    sendto_one(source_p, ":%s NOTICE %s :Added K-Line [%s@%s]",
               me.name, source_p->name, aconf->user, aconf->host);
    ilog(L_TRACE, "%s added K-Line for [%s@%s] [%s]",
         source_p->name, aconf->user, aconf->host, aconf->reason);
    write_csv_line(out, "%s%s%s%s%s%s%ld",
		   aconf->user, aconf->host,
		   aconf->reason, aconf->oper_reason, current_date,
		   get_oper_name(source_p), (long)cur_time);
    break;

  case DLINE_TYPE:
    aconf = (struct AccessItem *)map_to_conf(conf);
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "%s added D-Line for [%s] [%s]",
                         get_oper_name(source_p), aconf->host, aconf->reason);
    sendto_one(source_p, ":%s NOTICE %s :Added D-Line [%s] to %s",
               me.name, source_p->name, aconf->host, filename);
    ilog(L_TRACE, "%s added D-Line for [%s] [%s]",
         get_oper_name(source_p), aconf->host, aconf->reason);
    write_csv_line(out, "%s%s%s%s%s%ld",
		   aconf->host, aconf->reason, aconf->oper_reason, 
		   current_date,
		   get_oper_name(source_p), (long)cur_time);
    break;

  case XLINE_TYPE:
    xconf = (struct MatchItem *)map_to_conf(conf);
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "%s added X-Line for [%s] [%s]",
                         get_oper_name(source_p), xconf->name, xconf->reason);
    sendto_one(source_p, ":%s NOTICE %s :Added X-Line [%s] to %s",
               me.name, source_p->name, xconf->name, filename);
    ilog(L_TRACE, "%s added X-Line for [%s] [%s]",
         get_oper_name(source_p), xconf->name, xconf->reason);
    write_csv_line(out, "%s%s%s%d%s%s%ld",
		   xconf->name, xconf->reason, xconf->oper_reason,
		   xconf->action,
		   current_date, get_oper_name(source_p), (long)cur_time);
    break;

  case GLINE_TYPE:
    aconf = (struct AccessItem *)map_to_conf(conf);
    sendto_realops_flags(UMODE_ALL, L_ALL,
			 "%s has triggered gline for [%s@%s] [%s]",
			 get_oper_name(source_p),
			 aconf->name, aconf->host, aconf->reason);
    ilog(L_TRACE, "%s added G-Line for [%s] [%s]",
         get_oper_name(source_p), aconf->name, aconf->reason);
    write_csv_line(out, "%s%s%s%d%s%s%ld",
		   aconf->name, aconf->host, aconf->reason, "", current_date,
		   get_oper_name(source_p), (long)aconf->hold);
    break;

  default:
    fbclose(out);
    return;
  }

  fbclose(out);
}

/* write_resv_line()
 *
 * blah. special form of write_conf_line() above for resvs only.
 *
 * inputs       - pointer to void * resv_p either struct * ResvChannel
 *		  or struct * ResvNick
 *              - time_t cur_time
 * output       - NONE
 * side effects - This function takes care of
 *                finding right conf file, writing
 *                the right lines to this file, 
 *                notifying the oper that their kline/dline etc. is in place
 *                notifying the opers on the server about the k/d etc. line
 *
 * - Dianora
 */
void 
write_resv_line(ConfType type, 
		struct Client *source_p /*unused*/, void *resv_p)
{
  FBFILE *out;
  const char *filename;
  struct ResvChannel *cresv_p=NULL;
  struct ResvNick *nresv_p=NULL;
  
  filename = get_conf_name(type);
  if ((out = fbopen(filename, "a")) == NULL)
  {
    sendto_realops_flags(UMODE_ALL, L_ALL,
                         "*** Problem opening %s ", filename);
    return;
  }

  switch(type)
  {
  case CONF_CRESV:
    cresv_p = (struct ResvChannel *)resv_p;

    write_csv_line(out, "%s%s",
		   cresv_p->name, cresv_p->reason);
    break;

  case CONF_NRESV:
    nresv_p = (struct ResvNick *)resv_p;

    write_csv_line(out, "%s%s",
		   nresv_p->name, nresv_p->reason);
    break;

  default:
    fbclose(out);
    return;
  }
  fbclose(out);
}

/*
 * write_csv_line()
 *
 * inputs	- pointer to FBFILE *
 *		- formatted string
 * output	-
 * side effects - single line is written to csv conf file
 */
static int
write_csv_line(FBFILE *out, const char *format, ...)
{
  char c;
  int bytes=0;
  va_list args;
  char tmp[1024];
  char *str = tmp;
  const char *null_string = "";

  if (out == NULL)
    return(0);

  va_start(args, format);

  while ((c = *format++))
  {
    if (c == '%')
    {
      c = *format++;
      if (c == 's')
      {
	const char *p1 = va_arg(args, const char *);
	if (p1 == NULL)
	  p1 = null_string;
	*str++ = '\"';
	bytes += 2;
	while (*p1 != '\0')
	{
	  *str++ = *p1++;
	  ++bytes;
        }
	*str++ = '\"';
	*str++ = ',';
	  
	bytes += 2;
	continue;
      }
      if (c == 'c')
      {
	*str++ = '\"';
	++bytes;
	*str++ = (char) va_arg(args, int);
	++bytes;
	*str++ = '\"';
	*str++ = ',';

	bytes += 2;
	continue;
      }

      if (c == 'd')
      {
	int v = va_arg(args, int);
	char t[40];
	char *p=t;

	while (v > 10)
        {
	  *p++ = (v % 10) + '0';
	  v = v/10;
	}
	*p++ = (v % 10) + '0';

	while (p != t)
	{
	  *str++ = *--p;
	  ++bytes;
	}

	*str++ = ',';
	bytes++;
	continue;
      }
      if (c != '%')
      {
	int ret;
	
	format -= 2;
	ret = vsprintf(str, format, args);
	str += ret;
	bytes += ret;
	*str++ = ',';

	++bytes;
	break;
      }
    }
    *str++ = c;
    ++bytes;
  }

  if(*(str-1) == ',')
  {
    *(str-1) = '\n';
    *str = '\0';
  }
  else
  {
    *str++ = '\n';
    *str = '\0';
  }

  va_end(args);
  str = tmp;
  fbputs(str, out);
  return bytes;
}

/*
 * getfield
 *
 * inputs	- input buffer
 * output	- next field
 * side effects	- field breakup for ircd.conf file.
 */
char *
getfield(char *newline)
{
  static char *line = NULL;
  char  *end, *field;
        
  if (newline != NULL)
    line = newline;

  if (line == NULL)
    return(NULL);

  field = line;

  while (IsSpace(*field))	/* skip to start */
    field++;

  /* skip over any beginning " */
  if(*field == '"') {
    field++;
  }
  end = field;
  
  for (;;)
  {
    /* At end of string, mark it as end and return */
    if (*end == '\0')
    {
      line = NULL;
      return(NULL);
    }
    else if (*end == '\\')      /* found escape character ? */
    {
      end++;
    }
    else if(*end == '"')	/* found terminating " */
    {
      *end++ = '\0';
      while (IsSpace(*end))	/* skip to start of next " (or '\0') */
	end++;
      while (*end == ',')
	end++;
      while (IsSpace(*end))
	end++;
      line = end;
      return(field);
    }
    else if(*end == ',')	/* found terminating , */
    {
      *end++ = '\0';
      while (IsSpace(*end))	/* skip to start of next " (or '\0') */
	end++;
      while (*end == ',')
	end++;
      while (IsSpace(*end))
	end++;
      line = end;
      return(field);
    }
    end++;
  }
  return (NULL);
}

/* remove_conf_line()
 *
 * inputs	- type of kline to remove
 *		- pointer to oper removing
 *		- pat1 pat2 patterns to match
 * output	- -1 if unsuccessful 0 if no change 1 if change
 * side effects	-
 */
int
remove_conf_line(ConfType type, struct Client *source_p, const char *pat1, const char *pat2)
{
  const char *filename;
  FBFILE *in, *out;
  int pairme=0;
  char buf[BUFSIZE], buff[BUFSIZE], temppath[BUFSIZE], *p;
  char *found1;
  char *found2;
  mode_t oldumask;

  filename = get_conf_name(type);

  if ((in = fbopen(filename, "r")) == NULL)
  {
    sendto_one(source_p, ":%s NOTICE %s :Cannot open %s", me.name,
	       source_p->name, filename);
    return(-1);
  }

  ircsprintf(temppath, "%s.tmp", filename);
  oldumask = umask(0);
  if ((out = fbopen(temppath, "w")) == NULL)
  {
    sendto_one(source_p, ":%s NOTICE %s :Cannot open %s", me.name,
	       source_p->name, temppath);
    fbclose(in);
    umask(oldumask);
    return(-1);
  }
  umask(oldumask);
  oldumask = umask(0);

  while (fbgets(buf, sizeof(buf), in) != NULL) 
  {
    if ((p = strchr(buff,'\n')) != NULL)
      *p = '\0';

    if ((*buff == '\0') || (*buff == '#'))
    {
      if(flush_write(source_p, in, out, buf, temppath) < 0)
	return(-1);
    }
    
    /* Keep copy of original line, getfield trashes line as it goes */
    strlcpy(buff, buf, sizeof(buff));
    
    if ((found1 = getfield(buff)) == NULL)
    {
      if(flush_write(source_p, in, out, buf, temppath) < 0)
	return(-1);
      continue;
    }

    if (pat2 != NULL)
    {
      if ((found2 = getfield(NULL)) == NULL)
      {
	if(flush_write(source_p, in, out, buf, temppath) < 0)
	  return(-1);
	continue;
      }
      
      if ((irccmp(pat1, found1) == 0) && (irccmp(pat2, found2) == 0))
      {
	pairme = 1;
	continue;
      }
      else
      {
	if(flush_write(source_p, in, out, buf, temppath) < 0)
	  return(-1);
	continue;
      }
    }
    else
    {
      if (irccmp(pat1, found1) == 0)
      {
	pairme = 1;
	continue;
      }
      else
      {
	if(flush_write(source_p, in, out, buf, temppath) < 0)
	  return(-1);
	continue;
      }
    }
  }

  fbclose(in);
  fbclose(out);

/* The result of the rename should be checked too... oh well */
/* If there was an error on a write above, then its been reported
 * and I am not going to trash the original kline /conf file
 */

  if (pairme == 0)
  {
    if(temppath != NULL)
      (void)unlink(temppath);
    return(0);
  }
  else
  {
    (void)rename(temppath, filename);
    rehash(0);
    return(1);
  }
}

/*
 * flush_write()
 *
 * inputs       - pointer to client structure of oper requesting unkline
 *		- in is the input file descriptor
 *              - out is the output file descriptor
 *              - buf is the buffer to write
 *              - ntowrite is the expected number of character to be written
 *              - temppath is the temporary file name to be written
 * output       - -1 for error on write
 *              - 0 for ok
 * side effects - if successful, the buf is written to output file
 *                if a write failure happesn, and the file pointed to
 *                by temppath, if its non NULL, is removed.
 *
 * The idea here is, to be as robust as possible when writing to the 
 * kline file.
 *
 * -Dianora
 */
static int
flush_write(struct Client *source_p, FBFILE *in, FBFILE* out, 
            const char *buf, const char *temppath)
{
  int error_on_write = (fbputs(buf, out) < 0) ? (-1) : (0);

  if (error_on_write)
  {
    sendto_one(source_p,":%s NOTICE %s :Unable to write to %s aborting",
	       me.name, source_p->name, temppath );
    if(temppath != NULL)
      (void)unlink(temppath);
    fbclose(in);
    fbclose(out);
  }
  return(error_on_write);
}
