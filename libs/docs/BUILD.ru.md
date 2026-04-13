<h1 align="center"> Сборка </h1>

<div align="center" style="margin: 20px 0; padding: 10px; background: #1c1917; border-radius: 10px;">
  <strong>🌐 Язык: </strong>
  
  <span style="color: #F5F752; margin: 0 10px;">
    ✅ 🇷🇺 Русский (текущий)
  </span>
  | 
  <a href="./BUILD.md" style="color: #0891b2; margin: 0 10px;">
    🇺🇸 English
  </a>
</div>

## Требования

Для сборки используется старый toolchain, совместимый с оригинальными бинарниками Freelancer.

Нужно установить:

- **Microsoft Visual C++ Toolkit 2003 / VC71**
- **Platform SDK for Windows Server 2003 R2**
- Windows x86 окружение (Windows 10 классическая сработает)

---

## Подготовка окружения

Перед сборкой нужно загрузить переменные среды:

- [Microsoft Visual C++ Toolkit 2003](https://archive.org/details/microsoft-visual-c-toolkit-2003)
- [Microsoft Platform SDK for Windows Server 2003 R2](https://archive.org/details/platform-sdk-for-microsoft-windows-server-2003-r2-march-2006-edition-english)

### Запуск окружения [`vc71_env.bat`](vc71_env.bat)

- Укажите свои адреса до папок в скрипте [`vc71_env.bat`](vc71_env.bat)
  - [x] set VC71=C:\Program Files (x86)\Microsoft Visual C++ Toolkit 2003
  - [x] set SDK=C:\Program Files\Microsoft Platform SDK for Windows Server 2003 R2\

### Сборка после запуска окружения

- Запустите [build.bat](../build.bat)

```
build.bat
```

- Появится папка `build` с `dacom.dll`
