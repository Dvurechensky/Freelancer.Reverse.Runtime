/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 26 апреля 2026 09:56:13
 * Version: 1.0.28
 */

#include <stdio.h>
#include <stdarg.h>
#include "logging.h"

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