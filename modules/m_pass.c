/************************************************************************
 *   IRC - Internet Relay Chat, modules/m_pass.c
 *   Copyright (C) 1990 Jarkko Oikarinen and
 *                      University of Oulu, Computing Center
 *
 *   See file AUTHORS in IRC package for additional names of
 *   the programmers. 
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 1, or (at your option)
 *   any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *  $Id: m_pass.c,v 1.8 2000/12/22 16:12:42 db Exp $
 */
#include "handlers.h"  /* m_pass prototype */
#include "client.h"      /* client struct */
#include "irc_string.h"  /* strncpy_irc */
#include "send.h"        /* sendto_one */
#include "numeric.h"     /* ERR_xxx */
#include "ircd.h"        /* me */
#include "msg.h"
#include "parse.h"
#include "modules.h"

struct Message pass_msgtab = {
  MSG_PASS, 0, 1, 0, MFLG_SLOW | MFLG_UNREG, 0,
  {m_pass, m_registered, m_ignore, m_registered}
};

void
_modinit(void)
{
  mod_add_cmd(&pass_msgtab);
}

void
_moddeinit(void)
{
  mod_del_cmd(&pass_msgtab);
}

char *_version = "20001122";

/*
 * m_pass() - Added Sat, 4 March 1989
 *
 *
 * m_pass - PASS message handler
 *      parv[0] = sender prefix
 *      parv[1] = password
 *      parv[2] = optional extra version information
 */
int m_pass(struct Client *cptr, struct Client *sptr, int parc, char *parv[])
{
  char* password = parc > 1 ? parv[1] : NULL;

  if (EmptyString(password))
    {
      sendto_one(cptr, form_str(ERR_NEEDMOREPARAMS),
                 me.name, parv[0], "PASS");
      return 0;
    }
  if (!MyConnect(sptr) || (!IsUnknown(cptr) && !IsHandshake(cptr)))
    {
      sendto_one(cptr, form_str(ERR_ALREADYREGISTRED),
                 me.name, parv[0]);
      return 0;
    }
  strncpy_irc(cptr->localClient->passwd, password, PASSWDLEN);
  if (parc > 2)
    {
      /* 
       * It looks to me as if orabidoo wanted to have more
       * than one set of option strings possible here...
       * i.e. ":AABBTS" as long as TS was the last two chars
       * however, as we are now using CAPAB, I think we can
       * safely assume if there is a ":TS" then its a TS server
       * -Dianora
       */
      if (0 == irccmp(parv[2], "TS"))
        cptr->tsinfo = TS_DOESTS;
    }
  return 0;
}

