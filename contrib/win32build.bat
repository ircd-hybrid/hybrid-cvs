@echo off

if exist src\ircd.c goto start
if exist ..\src\ircd.c goto start2
echo Are you sure you are executing this from ircd-hybrid sources directory?
goto end

:start2
cd ..

:start
if %1'==msvc' goto build
if %1'==bcc' goto build

cls
echo.
echo IRCD-Hybrid Windows build script
echo (C) Copyright 2005 by the past and present ircd coders, and others.
echo.
echo Do you want to edit default ircd settings now? [Type YES or NO]
echo @echo off >yes.bat
echo edit contrib\setup-win32.h >>yes.bat
echo exit >>yes.bat
echo @exit >no.bat
%COMSPEC% /k prompt Your choice? 
del yes.bat
del no.bat

echo.
echo ------------------------------------------------
echo.
echo Which compiler do you want to use?
echo * If you are going to compile with Borland C++ Compiler, type: BCC
echo * If you want to use Microsoft Visual C++ Compiler, type: MSVC
echo @echo off >msvc.bat
echo call contrib\win32build msvc >>msvc.bat
echo exit >>msvc.bat
echo @echo off >bcc.bat
echo call contrib\win32build bcc >>bcc.bat
echo exit >>bcc.bat
%COMSPEC% /k prompt Your choice? 
del bcc.bat
del msvc.bat
goto end2

:build
echo.
echo *** Building ircd-hybrid
copy contrib\setup-win32.h include\setup.h >nul
if exist ircd.exe del ircd.exe
if exist src\blalloc.c del src\blalloc.c
if exist src\dynlink.c del src\dynlink.c
if exist src\irc_res.c del src\irc_res.c
if exist src\irc_reslib.c del src\irc_reslib.c
if exist src\ircd_signal.c del src\ircd_signal.c
if exist src\rsa.c del src\rsa.c
if exist src\s_bsd_devpoll.c del src\s_bsd_devpoll.c
if exist src\s_bsd_kqueue.c del src\s_bsd_kqueue.c
if exist src\s_bsd_poll.c del src\s_bsd_poll.c
if exist src\s_bsd_select.c del src\s_bsd_select.c
if exist src\s_bsd_sigio.c del src\s_bsd_sigio.c
if exist modules\m_challenge.c del modules\m_challenge.c
if exist modules\m_cryptlink.c del modules\m_cryptlink.c

if %1'==msvc' goto msvc
set COMPILER=BCC
bcc32 -tW -6 -O -w- -eircd.exe -I"include" -I"lib\pcre" src\*.c modules\*.c modules\core\*.c lib\pcre\*.c
goto built
:msvc
set COMPILER=MSVC
cl /nologo /O2 /w /Feircd.exe /I"include" /I"lib\pcre" src\*.c modules\*.c modules\core\*.c lib\pcre\*.c user32.lib wsock32.lib /link /subsystem:windows

:built
if errorlevel 1 goto error
if not exist ircd.exe goto error
for %%a in (src\*.obj) do del %%a
for %%a in (modules\*.obj) do del %%a
for %%a in (modules\core\*.obj) do del %%a
for %%a in (lib\pcre\*.obj) do del %%a
for %%a in (*.obj) do del %%a

echo.
echo *** Installing ircd-hybrid into C:\IRCD ...
echo.
if exist c:\ircd\bin md c:\ircd\bin
copy ircd.exe c:\ircd\bin >nul
if not exist c:\ircd\etc md c:\ircd\etc
for %%a in (etc\*) do if not exist c:\ircd\%%a copy %%a c:\ircd\etc >nul
if not exist c:\ircd\help md c:\ircd\help
if not exist c:\ircd\help\opers md c:\ircd\help\opers
if not exist c:\ircd\help\users md c:\ircd\help\users
for %%a in (help\opers\* help\users\*) do if not exist c:\ircd\%%a copy %%a c:\ircd\%%a >nul
if not exist c:\ircd\logs md c:\ircd\logs
echo *** Installation complete!
echo.
echo Remember to create the 'ircd.conf' file before actually starting the IRCD.
goto end

:error
echo.
echo The compilation has failed. Make sure the %COMPILER% compiler you choose 
echo is actually installed, and that you haven't accidentally corrupted
echo your setup.h file. A common problem is also not having the directory of
echo compiler binary in PATH environment variable.
if %COMPILER%==MSVC goto end
echo.
echo Borland C++ Compiler 5.5 users please remember to set up BCC32.CFG
echo in your C:\BCC\BIN directory (or wherever you installed it)!
echo It should contain two lines like -IC:\BCC\INCLUDE and -LC:\BCC\LIB.

:end
echo.
pause
:end2
rem $Id$
