@echo off
REM $Id$

cd include
del setup.h >nul
copy ..\contrib\setup-win32.h .\setup.h
cd ..\src
del *.obj >nul
del blalloc.c >nul
del dynlink.c >nul
del irc_res.c >nul
del irc_reslib.c >nul
del ircd_signal.c >nul
del rsa.c rsa.c.bak >nul
del s_bsd_devpoll.c >nul
del s_bsd_kqueue.c >nul
del s_bsd_poll.c >nul
del s_bsd_select.c >nul
del s_bsd_sigio.c >nul
cl /nologo /TC /ZI /MLd /c /w /I"..\include" /I"..\lib\pcre" *.c
cd ..\modules
del *.obj >nul
del m_challenge.c >nul
del m_cryptlink.c >nul
cl /nologo /TC /ZI /MLd /c /w /I"..\include" /I"..\lib\pcre" *.c
cd core
del *.obj >nul
cl /nologo /TC /ZI /MLd /c /w /I"..\..\include" /I"..\..\lib\pcre" *.c
cd ..\..\lib\pcre
del *.obj >nul
cl /nologo /TC /ZI /MLd /c /w /I"..\..\include" *.c
cd ..\..
link /nologo /debug src/*.obj modules/*.obj modules/core/*.obj wsock32.lib user32.lib /subsystem:windows /out:ircd.exe

