/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 16 мая 2026 10:45:57
 * Version: 1.0.49
 */

#ifndef EXPORTS_STDCALL_H
#define EXPORTS_STDCALL_H

extern "C" int __stdcall DACOM_Acquire();
extern "C" int __cdecl DACOM_GetDllVersion(
    const char* modulePathOrModuleName,
    int* outMajor,
    int* outMinor,
    int* outBuild);
extern "C" unsigned long __stdcall DACOM_GetVersion();

#endif