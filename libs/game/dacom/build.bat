@echo off
setlocal

echo =========================
echo Building dacom.dll...
echo =========================

if not exist build mkdir build

cl /c /Iinclude src\_main.cpp        /Fobuild\_main.obj

link /DLL ^
 build\_main.obj ^
 /DEF:src\dacom.def ^
 /OUT:build\dacom.dll user32.lib ^
 /BASE:0x065B0000

echo.
echo DONE
echo Output: build\dacom.dll
pause