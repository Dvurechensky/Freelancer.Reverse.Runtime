<h1 align="center"> Build </h1>

<div align="center" style="margin: 20px 0; padding: 10px; background: #1c1917; border-radius: 10px;">
  <strong>🌐 Language: </strong>
  
  <a href="./BUILD.ru.md" style="color: #F5F752; margin: 0 10px;">
    🇷🇺 Russian
  </a>
  | 
  <span style="color: #0891b2; margin: 0 10px;">
    ✅ 🇺🇸 English (current)
  </span>
</div>

## Requirements

The project is built using a legacy toolchain compatible with the original binaries of **Freelancer (2003)**.

You need to install:

- **Microsoft Visual C++ Toolkit 2003 / VC71**
- **Platform SDK for Windows Server 2003 R2**
- Windows x86 environment (Windows 10 works fine)

---

## Environment Setup

Before building, you must load the required environment variables:

- [Microsoft Visual C++ Toolkit 2003](https://archive.org/details/microsoft-visual-c-toolkit-2003)
- [Microsoft Platform SDK for Windows Server 2003 R2](https://archive.org/details/platform-sdk-for-microsoft-windows-server-2003-r2-march-2006-edition-english)

---

### Running the environment [`vc71_env.bat`](vc71_env.bat)

- Specify your local installation paths inside [`vc71_env.bat`](vc71_env.bat):
  - [x] `set VC71=C:\Program Files (x86)\Microsoft Visual C++ Toolkit 2003`
  - [x] `set SDK=C:\Program Files\Microsoft Platform SDK for Windows Server 2003 R2\`

---

## Build process

After initializing the environment:

- Run [`build.bat`](../build.bat)

```
build.bat
```

- A `build` folder will be created containing `dacom.dll`
