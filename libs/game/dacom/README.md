<h1 align="center"> Digital Anvil Common (dacom.dll) </h1>

<div align="center" style="margin: 20px 0; padding: 10px; background: #1c1917; border-radius: 10px;">
  <strong>🌐 Language: </strong>
  
  <a href="./README.ru.md" style="color: #F5F752; margin: 0 10px;">
    🇷🇺 Russian
  </a>
  | 
  <span style="color: #0891b2; margin: 0 10px;">
    ✅ 🇺🇸 English (current)
  </span>
</div>

I am reconstructing `dacom.dll` — one of the core libraries used in the original **Freelancer (2003)** engine.

During reverse engineering and runtime analysis, it became clear that this is **not just a simple version-related DLL**, as it might initially appear.

`dacom.dll` is a **shared system library** used by both the client and the server.

---

- [x] [Build instructions](../../docs/BUILD.md)
- [x] [Exported functions](docs/EXPORTS.md)
- [x] [Imported functions](docs/IMPORTS.md)
- [x] [Function reference map (labels, globals, calls)](docs/MAP_LINKS.md)
- [x] Dumps
  - [x] [Assembly function dump](docs/DUMP_ASM_FUNC.md)
  - [x] [C function dump](docs/DUMP_C_FUNC.md)

- [x] [Analysis data](docs/analyse_data)
- [x] Initial runtime reports
  - [x] [Game client](reports/client.start.ini)
  - [x] [Game server](reports/server.start.ini)

> [!CAUTION]
> This implementation does **not support legacy plugins** that rely on in-memory injection.

---

## What has been discovered

At this stage, the library is confirmed to perform several critical roles:

---

### 1. CRC / String hashing

The library is heavily used for:

- hashing strings (e.g. `HUD_targetingelement`, `*.tga`)
- resource handling (textures, UI elements)
- fast string comparison via CRC instead of `strcmp`

Example from client startup logs:

```
GetCRC32 called with parameter: data = HUD_targetingelement
GetCRC32 called with parameter: data = backgroundpattern.tga
```

This indicates that CRC is used as keys for:

- resource lookup
- data mapping
- internal tables

---

### 2. Incremental CRC

Available functions:

- `GetContinuedCRC32(crc, data)`
- `GetContinuedCRC32(crc, char)`

This suggests CRC is computed incrementally, which is useful for:

- streaming data processing
- string construction
- config parsing

---

### 3. Case-insensitive comparison

```
CompareStringsI(const char*, const char*)
```

Most likely implemented using ASCII normalization (A → a).

This is important for:

- resource names
- nicknames
- configuration files

---

### 4. Engine telemetry / logging

The library includes a `LogStream` subsystem for internal engine events.

Example:

```
LogEvent called with parameters: message = Memory_VMeshData, value = -420.09, code = 1552
```

This suggests:

- memory tracking
- subsystem monitoring (e.g. meshes)
- possible internal profiling system

---

### 5. Initialization and system functions

Exports include:

- `DACOM_Acquire` — initialization / global access point
- `DACOM_GetDllVersion` — DLL version
- `DACOM_GetVersion` — alternative (possibly packed) version

---

## Current architecture

```cpp
namespace DACOM_CRC
{
    CompareStringsI(...)
    GetCRC32(...)
    GetContinuedCRC32(...)
}

namespace LogStream
{
    Startup(...)
    FlushToDisk(...)
    LogEvent(...)
    LogNamedEvent(...)
    Update(...)
}

extern "C"
{
    DACOM_Acquire()
    DACOM_GetDllVersion()
    DACOM_GetVersion()
}
```

---

## Where it is used

### Client

- resource loading (textures, UI)
- element naming
- engine state logging
- possibly config handling

### Server

- CRC for identifiers / strings
- initialization
- possible logging

---

## Critical functions

For compatibility, the following must behave **exactly**:

- `GetCRC32`
- `GetContinuedCRC32`
- `CompareStringsI`
- `DACOM_Acquire`

If CRC behavior differs, the system may:

- fail to locate resources
- mismatch internal data
- behave unpredictably without obvious errors

---

## Secondary (but recommended)

- `LogEvent`
- `LogNamedEvent`
- `Startup`
- `FlushToDisk`
- `Update`

These can be stubbed initially, but proper implementation is preferred.

---

## Current approach

A proxy DLL is used to:

- load the original `dacom_addon.dll`
- forward all calls
- log parameters and behavior

This allows:

- understanding real function usage
- collecting runtime statistics
- reconstructing behavior without guesswork

---

## Goal

Fully reconstruct `dacom.dll`:

- without original binaries
- with full compatibility
- with a clear understanding of internal logic

---

## Hypothesis

Most likely:

**DACOM = Digital Anvil Common**

A shared library used across the engine.

---

## Status

🟡 Reverse engineering in progress
🟢 Core functions identified
🔴 Full reconstruction not yet complete

---

## Note

This project is for research purposes only.
The original **Freelancer (2003)** game is not distributed as part of this repository.
