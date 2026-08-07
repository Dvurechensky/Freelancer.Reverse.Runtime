/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 07 августа 2026 08:22:14
 * Version: 1.0.133
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