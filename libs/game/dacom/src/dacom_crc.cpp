/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 09 апреля 2026 16:14:24
 * Version: 1.0.7
 */

#include "globals.h"
#include "loader.h"
#include "logging.h"
#include "dacom_crc.h"

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