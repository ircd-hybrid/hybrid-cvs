/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_challenge.c: Allows an IRC Operator to securely authenticate.
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
 *  $Id: m_challenge.c,v 1.43 2003/04/13 09:46:54 michael Exp $
 */

#include "stdinc.h"
#include "handlers.h"
#include "client.h"
#include "ircd.h"
#include "modules.h"
#include "numeric.h"
#include "send.h"
#include "s_conf.h"
#ifdef HAVE_LIBCRYPTO
#include "rsa.h"
#endif
#include "msg.h"
#include "parse.h"
#include "irc_string.h"
#include "s_log.h"
#include "s_user.h"

#ifndef HAVE_LIBCRYPTO
/* Maybe this should be an error or something?-davidt */
#ifndef STATIC_MODULES
void
_modinit(void)
{
  return;
}

void
_moddeinit(void)
{
  return;
}

const char *_version = "$Revision: 1.43 $";
#endif
#else

static void failed_challenge_notice(struct Client *, const char *, const char *);
static void m_challenge(struct Client *, struct Client *, int, char **);
void binary_to_hex(unsigned char * bin, char * hex, int length);

/* We have openssl support, so include /CHALLENGE */
struct Message challenge_msgtab = {
  "CHALLENGE", 0, 0, 2, 0, MFLG_SLOW, 0,
  {m_unregistered, m_challenge, m_ignore, m_challenge}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
  mod_add_cmd(&challenge_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&challenge_msgtab);
}

const char *_version = "$Revision: 1.43 $";
#endif
/*
 * m_challenge - generate RSA challenge for wouldbe oper
 * parv[0] = sender prefix
 * parv[1] = operator to challenge for, or +response
 *
 */
static void m_challenge(struct Client *client_p, struct Client *source_p,
                        int parc, char *parv[])
{
  char * challenge;
  dlink_node *ptr;
  struct ConfItem *aconf, *oconf;

  if (!(source_p->user) || !source_p->localClient)
    return;
  
  /* if theyre an oper, reprint oper motd and ignore */
  if (IsOper(source_p))
  {
    sendto_one(source_p, form_str(RPL_YOUREOPER), me.name, parv[0]);
    SendMessageFile(source_p, &ConfigFileEntry.opermotd);
    return;
  }

  if (*parv[1] == '+')
  {
    /* Ignore it if we aren't expecting this... -A1kmm */
    if (!source_p->user->response)
      return;
     
    if (irccmp(source_p->user->response, ++parv[1]))
    {
      sendto_one(source_p, form_str(ERR_PASSWDMISMATCH), me.name,
		 source_p->name);
      failed_challenge_notice(source_p, source_p->user->auth_oper, "challenge failed");
      return;
    }
     
    if (!(aconf = find_conf_by_name(source_p->user->auth_oper, CONF_OPERATOR)))
    {
      sendto_one (source_p, form_str(ERR_NOOPERHOST), me.name, parv[0]);
      log_failed_oper(source_p, source_p->user->auth_oper);
      return;
    }

    ptr   = source_p->localClient->confs.head;
    oconf = ptr->data;
    detach_conf(source_p,oconf);

    if(attach_conf(source_p, aconf) != 0)
    {
      sendto_one(source_p,":%s NOTICE %s :Can't attach conf!",
		 me.name, source_p->name);   
      failed_challenge_notice(source_p, aconf->name, "can't attach conf!");
      attach_conf(source_p, oconf);
      log_failed_oper(source_p, source_p->user->auth_oper);
      return;
    }
     
    oper_up(source_p, aconf);

    ilog(L_TRACE, "OPER %s by %s!%s@%s",
	 source_p->user->auth_oper, source_p->name, source_p->username,
	 source_p->host);
    log_oper(source_p, source_p->user->auth_oper);

    MyFree(source_p->user->response);
    MyFree(source_p->user->auth_oper);
    source_p->user->response  = NULL;
    source_p->user->auth_oper = NULL;
    return;
  }

  MyFree(source_p->user->response);
  MyFree(source_p->user->auth_oper);
  source_p->user->response  = NULL;
  source_p->user->auth_oper = NULL;

  if (!(aconf = find_conf_exact(parv[1], source_p->username, source_p->host,
	             		CONF_OPERATOR)) &&
      !(aconf = find_conf_exact(parv[1], source_p->username,
                                source_p->localClient->sockhost,
                                CONF_OPERATOR)))
  {
    sendto_one (source_p, form_str(ERR_NOOPERHOST), me.name, parv[0]);
    failed_challenge_notice(source_p, parv[1], find_conf_by_name(parv[1], CONF_OPERATOR)
                            ? "host mismatch" : "no oper {} block");
    log_failed_oper(source_p, parv[1]);
    return;
  }
  if (!aconf->rsa_public_key)
  {
    sendto_one (source_p, ":%s NOTICE %s :I'm sorry, PK authentication "
		"is not enabled for your oper{} block.", me.name,
		parv[0]);
    return;
  }
  if (
   !generate_challenge (&challenge, &(source_p->user->response), aconf->rsa_public_key)
     )
  {
    sendto_one (source_p, form_str(RPL_RSACHALLENGE), me.name, parv[0],
		challenge);
  }
  DupString(source_p->user->auth_oper, aconf->name);
  MyFree(challenge);
  return;
}

/* failed_challenge_notice()
 *
 * inputs       - pointer to client doing /oper ...
 *              - pointer to nick they tried to oper as
 *              - pointer to reason they have failed
 * output       - nothing
 * side effects - notices all opers of the failed oper attempt if enabled
 */
static void
failed_challenge_notice(struct Client *source_p, const char *name, const char *reason)
{
  if (ConfigFileEntry.failed_oper_notice)
    sendto_realops_flags(UMODE_ALL, L_ALL, "Failed CHALLENGE attempt as %s "
                         "by %s (%s@%s) - %s", name, source_p->name,
                         source_p->username, source_p->host, reason);
}
#endif /* HAVE_LIBCRYPTO */

