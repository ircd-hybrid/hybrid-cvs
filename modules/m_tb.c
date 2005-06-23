/*  contrib/m_tburst.c
 *  Copyright (C) 2002, 2003, 2004, 2005 Hybrid Development Team
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *
 *  1.Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *  2.Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *  3.The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 *  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 *  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 *  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 *  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 *  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 *  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 *  $Id: m_tb.c,v 1.25 2005/06/23 16:04:39 michael Exp $
 */

#include "stdinc.h"
#include "handlers.h"
#include "client.h"
#include "common.h"
#include "ircd.h"
#include "send.h"
#include "msg.h"
#include "modules.h"
#include "hook.h"
#include "hash.h"
#include "s_serv.h"
#include "s_conf.h"


/* TBURST_PROPAGATE
 *
 * If this is defined, when we receive a TBURST thats successful
 * (ie: our topic changes), the TBURST will be propagated to other
 * servers that support TBURST
 */
#define TBURST_PROPAGATE

static void ms_tburst(struct Client *, struct Client *, int, char *[]);
static void set_topic(struct Client *, struct Channel *, time_t, char *, char *);
int send_tburst(struct hook_burst_channel *);

struct Message tburst_msgtab = {
  "TBURST", 0, 0, 6, 0, MFLG_SLOW, 0,
  {m_ignore, m_ignore, ms_tburst, m_ignore, m_ignore, m_ignore}
};

#ifndef STATIC_MODULES

void
_modinit(void)
{
  mod_add_cmd(&tburst_msgtab);
  hook_add_hook("burst_channel", (hookfn *)send_tburst);
  add_capability("TBURST", CAP_TBURST, 1);
}

void
_moddeinit(void)
{
  mod_del_cmd(&tburst_msgtab);
  hook_del_hook("burst_channel", (hookfn *)send_tburst);
  delete_capability("TBURST");
}

const char *_version = "$Revision: 1.25 $";

#endif /* !STATIC_MODULES */

/* ms_tburst()
 * 
 *      parv[0] = sender prefix
 *      parv[1] = channel timestamp
 *      parv[2] = channel
 *      parv[3] = topic timestamp
 *      parv[4] = topic setter
 *      parv[5] = topic
 */
static void
ms_tburst(struct Client *client_p, struct Client *source_p,
          int parc, char *parv[])
{
  struct Channel *chptr;
  time_t oldchannelts = atol(parv[1]);
  time_t oldtopicts = atol(parv[3]);

  if ((chptr = hash_find_channel(parv[2])) == NULL)
    return;

  /* If the topics are the same (due to lag) ignore it */
  if ((chptr->topic != NULL) && !strcmp(chptr->topic, parv[5]))
    return;

  /* Only allow topic change if we are the newer TS and server
   * sending TBURST has older TS and topicTS on older TS is
   * newer than current topicTS. -metalrock
   */
  if ((oldchannelts <= chptr->channelts) &&
      ((chptr->topic == NULL) || (oldtopicts > chptr->topic_time)))
    set_topic(source_p, chptr, oldtopicts, parv[4], parv[5]);
}

static void
set_topic(struct Client *source_p, struct Channel *chptr, 
          time_t oldtopicts, char *topicwho, char *topic)
{
  set_channel_topic(chptr, topic, topicwho, oldtopicts);

  sendto_channel_local(ALL_MEMBERS, chptr, ":%s TOPIC %s :%s",
		       ConfigServerHide.hide_servers ? me.name : source_p->name,
		       chptr->chname, chptr->topic == NULL ? "" : chptr->topic);

#ifdef TBURST_PROPAGATE
  sendto_server(source_p, NULL, chptr, CAP_TBURST, NOCAPS, NOFLAGS,
		":%s TBURST %lu %s %lu %s :%s",
		me.name, (unsigned long)chptr->channelts, chptr->chname,
		(unsigned long)chptr->topic_time, 
                chptr->topic_info == NULL ? "" : chptr->topic_info,
                chptr->topic == NULL ? "" : chptr->topic);
#endif
}

int
send_tburst(struct hook_burst_channel *data)
{
  if (data->chptr->topic != NULL && IsCapable(data->client, CAP_TBURST))
    sendto_one(data->client, ":%s TBURST %lu %s %lu %s :%s",
               me.name, (unsigned long)data->chptr->channelts, data->chptr->chname,
	       (unsigned long)data->chptr->topic_time, data->chptr->topic_info, 
	       data->chptr->topic);
  return(0);
}
