/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  rlimits.h: sidestep configure test for RLIMIT_* values.
 *
 *  This code is in the public domain.
 *
 *  $Id: rlimits.h,v 7.1 2003/05/29 04:06:41 joshk Exp $
 */

#ifndef INCLUDED_rlimits_h
#define INCLUDED_rlimits_h

#include <sys/resource.h>

/* This nest of #ifdefs is because not all 'cpp's support #elif */

#ifdef RLIMIT_FDMAX
# define RLIMIT_FD_MAX RLIMIT_FDMAX
#else
# ifdef RLIMIT_NOFILE
#  define RLIMIT_FD_MAX RLIMIT_NOFILE
# else
#  ifdef RLIMIT_OPEN_MAX
#   define RLIMIT_FD_MAX RLIMIT_OPEN_MAX
#  else
#   warning No file descriptor limit was found
#  endif
# endif
#endif

#endif /* INCLUDED_rlimits_h */
