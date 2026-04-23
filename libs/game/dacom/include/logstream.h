/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 23 апреля 2026 06:50:52
 * Version: 1.0.24
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