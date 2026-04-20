/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 20 апреля 2026 16:20:41
 * Version: 1.0.21
 */

#include "globals.h"
#include "loader.h"
#include "logging.h"
#include "exports_stdcall.h"

extern "C" int __stdcall DACOM_Acquire()
{
    LogFormat("DACOM_Acquire called");
    if (!LoadOriginalDll() || !g_DACOM_Acquire)
        return -1;

    return g_DACOM_Acquire();
}

extern "C" int __cdecl DACOM_GetDllVersion(
    const char* modulePathOrModuleName,
    int* outMajor,
    int* outMinor,
    int* outBuild)
{
    LogFormat(
        "DACOM_GetDllVersion called: module=%s, outMajor=%p, outMinor=%p, outBuild=%p",
        modulePathOrModuleName ? modulePathOrModuleName : "<null>",
        outMajor, outMinor, outBuild);

    if (!LoadOriginalDll() || !g_DACOM_GetDllVersion)
        return -1;

    return g_DACOM_GetDllVersion(modulePathOrModuleName, outMajor, outMinor, outBuild);
}

extern "C" unsigned long __stdcall DACOM_GetVersion()
{
    LogFormat("DACOM_GetVersion called");
    if (!LoadOriginalDll() || !g_DACOM_GetVersion)
        return 0;

    return g_DACOM_GetVersion();
}