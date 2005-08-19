REM $Id$
cd include
del setup.h
copy ..\contrib\setup-win32.h .\setup.h
cd ..\src
del *.obj
del dynlink.c
del irc_res.c irc_res.c
del irc_reslib.c
del ircd_signal.c
del rsa.c rsa.c.bak
del s_bsd_devpoll.c
del s_bsd_kqueue.c
del s_bsd_poll.c
del s_bsd_select.c
del s_bsd_sigio.c
cl /nologo /TC /ZI /MLd /c /w /I"..\include" *.c
cd ..\modules
del *.obj
del m_challenge.c
del m_cryptlink.c
del m_rxline.c m_rxline.c.bak
cl /nologo /TC /ZI /MLd /c /w /I"..\include" *.c
cd core
del *.obj
cl /nologo /TC /ZI /MLd /c /w /I"..\..\include" *.c
cd ..\..
link /nologo /debug src/*.obj modules/*.obj modules/core/*.obj wsock32.lib user32.lib /subsystem:windows /out:ircd.exe

