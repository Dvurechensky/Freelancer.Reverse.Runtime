/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 17 апреля 2026 06:50:51
 * Version: 1.0.18
 */

#include <windows.h>
#include "globals.h"
#include "loader.h"
#include "logging.h"

// ======================================================
// globals definitions
// ======================================================

HMODULE g_original = NULL;
bool g_loadAttempted = false;

DACOM_Acquire_t            g_DACOM_Acquire = NULL;
DACOM_GetDllVersion_t      g_DACOM_GetDllVersion = NULL;
DACOM_GetVersion_t         g_DACOM_GetVersion = NULL;

CompareStringsI_t          g_CompareStringsI = NULL;
GetCRC32_1_t               g_GetCRC32_1 = NULL;
GetCRC32_2_t               g_GetCRC32_2 = NULL;
GetContinuedCRC32_1_t      g_GetContinuedCRC32_1 = NULL;
GetContinuedCRC32_2_t      g_GetContinuedCRC32_2 = NULL;

Startup_t                  g_Startup = NULL;
FlushToDisk_t              g_FlushToDisk = NULL;
LogEvent_t                 g_LogEvent = NULL;
LogNamedEvent_t            g_LogNamedEvent = NULL;
Update_t                   g_Update = NULL;

extern "C" __declspec(dllexport) void* FDUMP = NULL;

// ======================================================
// loader
// ======================================================

bool LoadOriginalDll()
{
    if (g_original != NULL)
        return true;

    if (g_loadAttempted)
        return false;

    g_loadAttempted = true;

    g_original = LoadLibraryA("legacy/dacom.dll");
    if (g_original == NULL)
    {
        LogMessage("Failed to load legacy/dacom.dll");
        return false;
    }

    g_DACOM_Acquire =
        (DACOM_Acquire_t)GetProcAddress(g_original, "DACOM_Acquire");
    g_DACOM_GetDllVersion =
        (DACOM_GetDllVersion_t)GetProcAddress(g_original, "DACOM_GetDllVersion");
    g_DACOM_GetVersion =
        (DACOM_GetVersion_t)GetProcAddress(g_original, "DACOM_GetVersion");

    g_CompareStringsI =
        (CompareStringsI_t)GetProcAddress(g_original, "?CompareStringsI@DACOM_CRC@@YAHPBD0@Z");
    g_GetCRC32_1 =
        (GetCRC32_1_t)GetProcAddress(g_original, "?GetCRC32@DACOM_CRC@@YAKPBD@Z");
    g_GetCRC32_2 =
        (GetCRC32_2_t)GetProcAddress(g_original, "?GetCRC32@DACOM_CRC@@YAKPBD0@Z");
    g_GetContinuedCRC32_1 =
        (GetContinuedCRC32_1_t)GetProcAddress(g_original, "?GetContinuedCRC32@DACOM_CRC@@YAKKPBD@Z");
    g_GetContinuedCRC32_2 =
        (GetContinuedCRC32_2_t)GetProcAddress(g_original, "?GetContinuedCRC32@DACOM_CRC@@YAKKD@Z");

    g_Startup =
        (Startup_t)GetProcAddress(g_original, "?Startup@LogStream@@YA_NPBD@Z");
    g_FlushToDisk =
        (FlushToDisk_t)GetProcAddress(g_original, "?FlushToDisk@LogStream@@YAXXZ");
    g_LogEvent =
        (LogEvent_t)GetProcAddress(g_original, "?LogEvent@LogStream@@YAXPBDMK@Z");
    g_LogNamedEvent =
        (LogNamedEvent_t)GetProcAddress(g_original, "?LogNamedEvent@LogStream@@YAXPBD0K@Z");
    g_Update =
        (Update_t)GetProcAddress(g_original, "?Update@LogStream@@YAXM@Z");

    LogFormat("Resolve CompareStringsI: %p", g_CompareStringsI);
    LogFormat("Resolve GetCRC32_1: %p", g_GetCRC32_1);
    LogFormat("Resolve GetCRC32_2: %p", g_GetCRC32_2);
    LogFormat("Resolve GetContinuedCRC32_1: %p", g_GetContinuedCRC32_1);
    LogFormat("Resolve GetContinuedCRC32_2: %p", g_GetContinuedCRC32_2);
    LogFormat("Resolve Startup: %p", g_Startup);
    LogFormat("Resolve FlushToDisk: %p", g_FlushToDisk);
    LogFormat("Resolve LogEvent: %p", g_LogEvent);
    LogFormat("Resolve LogNamedEvent: %p", g_LogNamedEvent);
    LogFormat("Resolve Update: %p", g_Update);

    return true;
}