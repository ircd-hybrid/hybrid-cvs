/*
 * $Id: sprintf_irc.h,v 7.1 1999/08/26 03:36:27 lusky Exp $
 */

#ifndef SPRINTF_IRC
#define SPRINTF_IRC

#include <stdarg.h>

/*=============================================================================
 * Proto types
 */

extern int vsprintf_irc(register char *str, register const char *format,
    register va_list);
extern int ircsprintf(register char *str, register const char *format, ...);

#endif /* SPRINTF_IRC */
