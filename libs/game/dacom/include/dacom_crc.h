/*
 * Author: Nikolay Dvurechensky
 * Site: https://dvurechensky.pro/
 * Gmail: dvurechenskysoft@gmail.com
 * Last Updated: 04 июля 2026 08:04:12
 * Version: 1.0.98
 */

#ifndef DACOM_CRC_H
#define DACOM_CRC_H

namespace DACOM_CRC
{
    __declspec(dllexport) int __cdecl CompareStringsI(const char* str1, const char* str2);
    __declspec(dllexport) unsigned long __cdecl GetCRC32(const char* data);
    __declspec(dllexport) unsigned long __cdecl GetCRC32(const char* data1, const char* data2);
    __declspec(dllexport) unsigned long __cdecl GetContinuedCRC32(unsigned long crc, const char* data);
    __declspec(dllexport) unsigned long __cdecl GetContinuedCRC32(unsigned long crc, char ch);
}

#endif