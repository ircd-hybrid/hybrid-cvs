/*
 * include/irc_res.h for referencing functions in src/irc_res.c
 *
 * $Id: irc_res.h,v 7.1 2003/05/13 02:32:11 joshk Exp $
 */

#ifdef INCLUDED_irc_res_h
#define INCLUDED_irc_res_h

int init_resolver(void);
void restart_resolver(void);
void add_local_domain(char *hname, int size);
void timeout_resolver(void *notused);
void delete_resolver_queries(const void *vptr);
void gethost_byname_type(const char *name, const struct DNSQuery *query, int type);
void gethost_byname(const char *name, const struct DNSQuery *query);
void gethost_byaddr(const struct irc_ssaddr *addr, const struct DNSQuery *query);

#endif
