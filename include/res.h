/*
 * include/res.h (C)opyright 1992 Darren Reed.
 *
 * $Id: res.h,v 7.24 2003/05/12 21:56:56 stu Exp $
 */
#ifndef INCLUDED_res_h
#define INCLUDED_res_h

#ifndef INCLUDED_sys_types_h
#include <sys/types.h>       /* time_t */
#define INCLUDED_sys_types_h
#endif

struct Client;

struct DNSReply {
  char *h_name;
  int h_addrtype;
  struct irc_ssaddr addr;
};


struct DNSQuery {
  void *ptr;               /* pointer used by callback to identify request */
  void (*callback)(void* vptr, struct DNSReply *reply); /* callback to call */
};

extern void get_res(void);
extern void gethost_byname(const char* name, const struct DNSQuery* req);
extern void gethost_byaddr(const struct irc_ssaddr* name, int aftype, 
    const struct DNSQuery* req);
extern int             init_resolver(void);
extern void            restart_resolver(void);
extern void            timeout_resolver(void *);
extern void            delete_resolver_queries(const void* vptr);
extern unsigned long   cres_mem(struct Client* cptr);

/*
 * add_local_domain - append local domain suffix to hostnames that 
 * don't contain a dot '.'
 * name - string to append to
 * len  - total length of the buffer
 * name is modified only if there is enough space in the buffer to hold
 * the suffix
 */
extern void add_local_domain(char* name, int len);

#endif /* INCLUDED_res_h */

