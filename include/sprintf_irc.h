/*
 * $Id: sprintf_irc.h,v 7.5 2001/12/10 02:59:43 db Exp $ 
 */

#ifndef SPRINTF_IRC
#define SPRINTF_IRC

#include <stdarg.h>

/*=============================================================================
 * Proto types
 */

extern int vsprintf_irc(char *str, const char *format, va_list);
extern int vsnprintf_irc(char *, int, const char*, va_list);
extern int ircsprintf(char *str, const char *format, ...);

#endif /* SPRINTF_IRC */
