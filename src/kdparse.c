/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  kdparse.c: Parses K and D lines.
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
 *  $Id: kdparse.c,v 7.11 2003/02/23 04:16:11 db Exp $
 */

#include "stdinc.h"
#include "tools.h"
#include "s_log.h"
#include "s_conf.h"
#include "hostmask.h"
#include "client.h"
#include "irc_string.h"
#include "memory.h"

/*
 * parse_k_file
 * Inputs       - pointer to line to parse
 * Output       - NONE
 * Side Effects - Parse one new style K line
 */

void
parse_k_file(FBFILE *file)
{
  struct ConfItem *aconf;
  char* user_field=NULL;
  char* reason_field=NULL;
  char* host_field=NULL;
  char  line[BUFSIZE];
  char* p;

  while (fbgets(line, sizeof(line), file))
    {
      if ((p = strchr(line, '\n')) != NULL)
        *p = '\0';

      if ((*line == '\0') || (*line == '#'))
        continue;

      if ((user_field = getfield(line)) == NULL)
	continue;

      if ((host_field = getfield(NULL)) == NULL)
	continue;

      if ((reason_field = getfield(NULL)) == NULL)
	continue;
	  
      aconf = make_conf(CONF_KILL);
      conf_add_fields(aconf,host_field,reason_field,user_field,0,NULL);

      if (aconf->host != NULL)
	add_conf_by_address(aconf->host, CONF_KILL, aconf->user, aconf);
    }
}

/*
 * parse_d_file
 * Inputs       - pointer to line to parse
 * Output       - NONE
 * Side Effects - Parse one new style D line
 */

void
parse_d_file(FBFILE *file)
{
  struct ConfItem *aconf;
  char* reason_field=NULL;
  char* host_field=NULL;
  char  line[BUFSIZE];
  char* p;

  while (fbgets(line, sizeof(line), file))
    {
      if ((p = strchr(line, '\n')))
        *p = '\0';

      if ((*line == '\0') || (line[0] == '#'))
        continue;

      if ((host_field = getfield(line)) == NULL)
	continue;

      if ((reason_field = getfield(NULL)) == NULL)
	continue;
	  
      aconf = make_conf(CONF_DLINE);
      conf_add_fields(aconf,host_field,reason_field,"",0,NULL);
      conf_add_d_conf(aconf);
    }
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

  /* XXX make this skip to first " if present */
  if(*field == '"')
  {
    field++;
    end = field;
  }
  else
    return(NULL);		/* mal-formed field */

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
    end++;
  }
  return (NULL);
}

