/* contrib/spy_trace_notice.c
 * Copyright (c) 2001 Hybrid Development Team
 *
 * $Id: spy_trace_notice.c,v 1.2 2001/12/27 11:38:18 leeh Exp $
 */

#include "modules.h"
#include "hook.h"
#include "client.h"
#include "ircd.h"
#include "send.h"

int show_trace(struct hook_spy_data *);

void
_modinit(void)
{
  hook_add_hook("doing_trace", (hookfn *)show_trace);
}

void
_moddeinit(void)
{
  hook_del_hook("doing_trace", (hookfn *)show_trace);
}

char *_version = "$Revision: 1.2 $";

int show_trace(struct hook_spy_data *data)
{
  if(MyConnect(data->source_p))
    sendto_realops_flags(FLAGS_SPY, L_ALL,
                         "trace requested by %s (%s@%s) [%s]",
                         data->source_p->name, data->source_p->username,
                         data->source_p->host, data->source_p->user->server);

  return 0;
}
