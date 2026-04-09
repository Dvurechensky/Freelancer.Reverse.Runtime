@echo off
setlocal

echo =========================
echo Building dacom.dll...
echo =========================

if not exist build mkdir build

cl /c /Iinclude src\_main.cpp            /Fobuild\_main.obj
cl /c /Iinclude src\logging.cpp          /Fobuild\logging.obj
cl /c /Iinclude src\loader.cpp           /Fobuild\loader.obj
cl /c /Iinclude src\exports_stdcall.cpp  /Fobuild\exports_stdcall.obj
cl /c /Iinclude src\dacom_crc.cpp        /Fobuild\dacom_crc.obj
cl /c /Iinclude src\logstream.cpp        /Fobuild\logstream.obj

link /DLL ^
 build\_main.obj ^
 build\logging.obj ^
 build\loader.obj ^
 build\exports_stdcall.obj ^
 build\dacom_crc.obj ^
 build\logstream.obj ^
 /DEF:src\dacom.def ^
 /OUT:build\dacom.dll ^
 user32.lib ^
 /BASE:0x065B0000

echo.
echo DONE
echo Output: build\dacom.dll
pause