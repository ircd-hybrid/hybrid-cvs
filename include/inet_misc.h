/* inet_misc.h - see src/inet_misc.c *
 * $Id: inet_misc.h,v 7.1 2003/05/13 15:03:52 joshk Exp $ *
 */

#ifndef INCLUDED_inet_misc_h
#define INCLUDED_inet_misc_h

const char * inet_ntop(int af, const void *src, char *dst, size_t size);
int inet_pton(int af, const char *src, void *dst);
int inet_aton(const char *cp, struct in_addr * addr);

#endif /* INCLUDED_inet_misc_h */
