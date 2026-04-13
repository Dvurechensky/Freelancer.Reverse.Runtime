/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 13 апреля 2026 12:57:27
 * Version: 1.0.12
 */

#ifndef LOGSTREAM_H
#define LOGSTREAM_H

namespace LogStream
{
    __declspec(dllexport) bool __cdecl Startup(const char* data);
    __declspec(dllexport) void __cdecl FlushToDisk();
    __declspec(dllexport) void __cdecl LogEvent(const char* message, float value, unsigned long code);
    __declspec(dllexport) void __cdecl LogNamedEvent(const char* name, const char* message, unsigned long code);
    __declspec(dllexport) void __cdecl Update(float value);
}

#endif