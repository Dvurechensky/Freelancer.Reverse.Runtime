/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 25 апреля 2026 08:09:53
 * Version: 1.0.26
 */

#include "globals.h"
#include "loader.h"
#include "logging.h"
#include "logstream.h"

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