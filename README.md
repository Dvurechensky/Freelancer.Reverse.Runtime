<div align="center">

# Freelancer.Reverse.Runtime

### I am building a **runtime layer on top of Freelancer (2003)**

![Status](https://shields.dvurechensky.pro/badge/status-active-2ea043)
![Stage](https://shields.dvurechensky.pro/badge/stage-runtime--reconstruction-1f6feb)
![Language](https://shields.dvurechensky.pro/badge/language-C%2B%2B-00599C)
![Reverse](https://shields.dvurechensky.pro/badge/reverse-engineering-important)
![Platform](https://shields.dvurechensky.pro/badge/platform-Windows-0078D6)

</div>

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

---

> [!CAUTION]
> This project is not just about reversing individual functions.  
> I am gradually building a **custom managed runtime layer on top of the original Freelancer engine**.

---

<div align="center">
<h1> About the Project 🎇 </h1>
<img src="media/Freelancer.jpg"></img>
<br><br><br>
</div>

`Freelancer (2003)` is an `American` `space` `trading` and `combat` `simulation` game developed by `Digital Anvil` and published by Microsoft Game Studios on `March 4, 2003`.

> [!CAUTION]
> My modification of `Freelancer (2003)` — [Lizerium](https://lizup.ru) | [Lizerium - sources](https://github.com/Lizerium)

The goal of this project is not just to analyze original binaries, but to **gradually reconstruct, document, and safely extend the behavior of the game and server using compatible proxy DLLs, runtime components, and reverse engineering**.

Instead of chaotic memory patching, I follow a more controlled approach:  
I build **compatible system modules** that can:

- replace original DLLs
- act as observation points for engine behavior
- be extended with custom logic
- evolve into a clean and controlled C++ layer

> [!IMPORTANT]
> Over the past 20+ years, many plugin libraries have been created to extend the game, but they relied on direct memory manipulation.  
> My goal is to move away from that approach and build a **reliable, controlled system based on source code**.

---

## Project Idea

The idea is **not to break the original engine**, but to **build an engineering layer around it** that allows:

- understanding how Freelancer actually works internally
- reconstructing DLL system contracts
- safely injecting new functionality
- documenting the architecture of the legacy engine
- transforming the “black box” binaries into a **controlled C++ system**

Essentially, this is a path toward **partial reconstruction of Freelancer’s runtime architecture**.

> [!NOTE]
> I am not trying to “rewrite the game from scratch”.  
> I am building a **compatible behavior layer** that integrates with the original binaries.

---

## Current Progress

The project has already moved beyond the idea stage into a **working state**.

### Completed

#### `dacom.dll`

- [x] created a working proxy module [`dacom.dll`](libs/game/dacom)
  - [x] implemented loading of the original DLL via `dacom_addon.dll`
  - [x] reconstructed and proxied core exports
  - [x] added logging of function parameters
  - [x] confirmed real participation in:
    - [x] CRC / string hashing
    - [x] string comparison
    - [x] internal telemetry / logging layer
    - [x] system initialization

##### 👍 Verified

- module loads successfully in the game
- exported functions are called correctly
- proxy implementation does not break startup
- logging confirms real runtime usage of `dacom.dll`
- not compatible with legacy plugins relying on memory hacks

> [!IMPORTANT]
> `dacom.dll` is no longer just a reverse-engineered assumption.  
> It is a **verified runtime component**, tested in a real game environment.

---

## Project Approach

> [!TIP]
> Core idea:
>
> **Externally — full compatibility.  
> Internally — fully controlled custom code.**

---

## Current Direction

The project is currently evolving towards:

- reconstructing other system DLLs
- building a unified runtime infrastructure
- creating reusable proxy components
- forming a structured reverse-engineering documentation base

> [!WARNING]
> This is an experimental engineering project.  
> Some parts of the architecture are still being validated through runtime tracing.

---

## Current Components

### Reverse / Proxy Modules

- [`dacom`](libs/game/dacom) — working proxy module for a system DLL involved in CRC, string utilities, and telemetry

### Existing DLL Hooks

- [`custom`](libs/custom) — a collection of hooks for Freelancer modifications (written by me or others and rebuilt by me), intended for future integration into `Reverse / Proxy Modules`

---

## Vision

The long-term goal is to transform Freelancer’s closed runtime into a **documented, researchable, and partially controllable C++ system**, enabling developers to work with it as an engineering architecture rather than a “black box”.

---

## Note

This project is developed for research purposes and does not distribute original game assets or binaries.
