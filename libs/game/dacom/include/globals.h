/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 21 апреля 2026 06:51:04
 * Version: 1.0.22
 */

#ifndef GLOBALS_H
#define GLOBALS_H

#include <windows.h>

// ======================================================
// typedefs
// ======================================================

typedef int           (__stdcall *DACOM_Acquire_t)();
typedef int           (__cdecl   *DACOM_GetDllVersion_t)(const char*, int*, int*, int*);
typedef unsigned long (__stdcall *DACOM_GetVersion_t)();

typedef int           (__cdecl   *CompareStringsI_t)(const char*, const char*);
typedef unsigned long (__cdecl   *GetCRC32_1_t)(const char*);
typedef unsigned long (__cdecl   *GetCRC32_2_t)(const char*, const char*);
typedef unsigned long (__cdecl   *GetContinuedCRC32_1_t)(unsigned long, const char*);
typedef unsigned long (__cdecl   *GetContinuedCRC32_2_t)(unsigned long, char);

typedef bool          (__cdecl   *Startup_t)(const char*);
typedef void          (__cdecl   *FlushToDisk_t)();
typedef void          (__cdecl   *LogEvent_t)(const char*, float, unsigned long);
typedef void          (__cdecl   *LogNamedEvent_t)(const char*, const char*, unsigned long);
typedef void          (__cdecl   *Update_t)(float);

// ======================================================
// globals
// ======================================================

extern HMODULE g_original;
extern bool g_loadAttempted;

extern DACOM_Acquire_t            g_DACOM_Acquire;
extern DACOM_GetDllVersion_t      g_DACOM_GetDllVersion;
extern DACOM_GetVersion_t         g_DACOM_GetVersion;

extern CompareStringsI_t          g_CompareStringsI;
extern GetCRC32_1_t               g_GetCRC32_1;
extern GetCRC32_2_t               g_GetCRC32_2;
extern GetContinuedCRC32_1_t      g_GetContinuedCRC32_1;
extern GetContinuedCRC32_2_t      g_GetContinuedCRC32_2;

extern Startup_t                  g_Startup;
extern FlushToDisk_t              g_FlushToDisk;
extern LogEvent_t                 g_LogEvent;
extern LogNamedEvent_t            g_LogNamedEvent;
extern Update_t                   g_Update;

// exported data
extern "C" __declspec(dllexport) void* FDUMP;

#endif