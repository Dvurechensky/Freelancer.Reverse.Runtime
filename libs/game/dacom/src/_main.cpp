/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 09 апреля 2026 01:39:45
 * Version: 1.0.1
 */

#include <windows.h>
#include <stdio.h>
#include <stdarg.h>

static HMODULE g_original = NULL;
static bool g_loadAttempted = false;

// typedefs

typedef int           (__stdcall *DACOM_Acquire_t)();
typedef int (__cdecl *DACOM_GetDllVersion_t)(const char*, int*, int*, int*);
typedef unsigned long (__stdcall *DACOM_GetVersion_t)();

typedef int           (__cdecl   *CompareStringsI_t)(const char*, const char*);
typedef unsigned long (__cdecl   *GetCRC32_1_t)(const char*);
typedef unsigned long (__cdecl   *GetCRC32_2_t)(const char*, const char*);
typedef unsigned long (__cdecl   *GetContinuedCRC32_1_t)(unsigned long, const char*);
typedef unsigned long (__cdecl   *GetContinuedCRC32_2_t)(unsigned long, char);

typedef bool           (__cdecl   *Startup_t)(const char*);
typedef void          (__cdecl   *FlushToDisk_t)();
typedef void          (__cdecl   *LogEvent_t)(const char*, float, unsigned long);
typedef void          (__cdecl   *LogNamedEvent_t)(const char*, const char*, unsigned long);
typedef void          (__cdecl   *Update_t)(float);

// globals

static DACOM_Acquire_t            g_DACOM_Acquire = NULL;
static DACOM_GetDllVersion_t      g_DACOM_GetDllVersion = NULL;
static DACOM_GetVersion_t         g_DACOM_GetVersion = NULL;

static CompareStringsI_t          g_CompareStringsI = NULL;
static GetCRC32_1_t               g_GetCRC32_1 = NULL;
static GetCRC32_2_t               g_GetCRC32_2 = NULL;
static GetContinuedCRC32_1_t      g_GetContinuedCRC32_1 = NULL;
static GetContinuedCRC32_2_t      g_GetContinuedCRC32_2 = NULL;

static Startup_t                  g_Startup = NULL;
static FlushToDisk_t              g_FlushToDisk = NULL;
static LogEvent_t                 g_LogEvent = NULL;
static LogNamedEvent_t            g_LogNamedEvent = NULL;
static Update_t                   g_Update = NULL;

// logging

void LogMessage(const char* message)
{
    FILE* file = fopen("dvurechensky_dacom.ini", "a");
    if (file)
    {
        fprintf(file, "%s\n", message);
        fclose(file);
    }
}

void LogFormat(const char* fmt, ...)
{
    char buffer[1024];
    va_list args;
    va_start(args, fmt);
    vsprintf(buffer, fmt, args);
    va_end(args);
    LogMessage(buffer);
}

// loader

bool LoadOriginalDll()
{
    if (g_original != NULL)
        return true;

    if (g_loadAttempted)
        return false;

    g_loadAttempted = true;

    g_original = LoadLibraryA("dacom_addon.dll");
    if (g_original == NULL)
    {
        LogMessage("Failed to load dacom_addon.dll");
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

// exported data

extern "C" void* FDUMP = NULL;

// stdcall exports (идут через .def)

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

// C++ exports: ВАЖНО — экспортируются реальными методами

namespace DACOM_CRC
{
    __declspec(dllexport) int __cdecl CompareStringsI(const char* str1, const char* str2);
    __declspec(dllexport) unsigned long __cdecl GetCRC32(const char* data);
    __declspec(dllexport) unsigned long __cdecl GetCRC32(const char* data1, const char* data2);
    __declspec(dllexport) unsigned long __cdecl GetContinuedCRC32(unsigned long crc, const char* data);
    __declspec(dllexport) unsigned long __cdecl GetContinuedCRC32(unsigned long crc, char ch);
}

namespace LogStream
{
    __declspec(dllexport) bool __cdecl Startup(const char* data);
    __declspec(dllexport) void __cdecl FlushToDisk();
    __declspec(dllexport) void __cdecl LogEvent(const char* message, float value, unsigned long code);
    __declspec(dllexport) void __cdecl LogNamedEvent(const char* name, const char* message, unsigned long code);
    __declspec(dllexport) void __cdecl Update(float value);
}

namespace DACOM_CRC
{
    int __cdecl CompareStringsI(const char* str1, const char* str2)
    {
        LogFormat("CompareStringsI called with parameters: str1 = %s, str2 = %s", str1, str2);
        if (!LoadOriginalDll() || !g_CompareStringsI)
            return 0;
        return g_CompareStringsI(str1, str2);
    }

    unsigned long __cdecl GetCRC32(const char* data)
    {
        LogFormat("GetCRC32 called with parameter: data = %s", data);
        if (!LoadOriginalDll() || !g_GetCRC32_1)
            return 0;

        unsigned long result = g_GetCRC32_1(data);
        LogFormat("GetCRC32 returned: %lu (0x%08lX)", result, result);
        return result;
    }

    unsigned long __cdecl GetCRC32(const char* data1, const char* data2)
    {
        LogFormat("GetCRC32 called with parameters: data1 = %s, data2 = %s", data1, data2);
        if (!LoadOriginalDll() || !g_GetCRC32_2)
            return 0;
        return g_GetCRC32_2(data1, data2);
    }

    unsigned long __cdecl GetContinuedCRC32(unsigned long crc, const char* data)
    {
        LogFormat("GetContinuedCRC32 called with parameters: crc = %lu, data = %s", crc, data);
        if (!LoadOriginalDll() || !g_GetContinuedCRC32_1)
            return 0;
        return g_GetContinuedCRC32_1(crc, data);
    }

    unsigned long __cdecl GetContinuedCRC32(unsigned long crc, char ch)
    {
        LogFormat("GetContinuedCRC32 called with parameters: crc = %lu, ch = %c", crc, ch);
        if (!LoadOriginalDll() || !g_GetContinuedCRC32_2)
            return 0;
        return g_GetContinuedCRC32_2(crc, ch);
    }
}

namespace LogStream
{
    bool __cdecl Startup(const char* data)
    {
        LogFormat("Startup called with parameter: data = %s", data);
        if (!LoadOriginalDll() || !g_Startup)
            return 0;
        return g_Startup(data);
    }

    void __cdecl FlushToDisk()
    {
        LogFormat("FlushToDisk called");
        if (!LoadOriginalDll() || !g_FlushToDisk)
            return;
        g_FlushToDisk();
    }

    void __cdecl LogEvent(const char* message, float value, unsigned long code)
    {
        LogFormat("LogEvent called with parameters: message = %s, value = %.2f, code = %lu", message, value, code);
        if (!LoadOriginalDll() || !g_LogEvent)
            return;
        g_LogEvent(message, value, code);
    }

    void __cdecl LogNamedEvent(const char* name, const char* message, unsigned long code)
    {
        LogFormat("LogNamedEvent called with parameters: name = %s, message = %s, code = %lu", name, message, code);
        if (!LoadOriginalDll() || !g_LogNamedEvent)
            return;
        g_LogNamedEvent(name, message, code);
    }

    void __cdecl Update(float value)
    {
        LogFormat("Update called with parameter: value = %.2f", value);
        if (!LoadOriginalDll() || !g_Update)
            return;
        g_Update(value);
    }
}

// DllMain

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID)
{
    if (fdwReason == DLL_PROCESS_ATTACH)
        DisableThreadLibraryCalls(hinstDLL);

    return TRUE;
}