# ⏳ libtimer-dev

A lightweight, cross-platform timing and sleep utility for **Pure C**. 

## 🚀 The Motivation

Standard C (C89/C99/C11) does not provide a built-in, platform-independent function to pause execution for a specific number of milliseconds. While C++ developers have `std::this_thread::sleep_for`, C developers are often left to deal with OS-specific headers. 

**libtime-dev** bridges this gap, providing a unified `sys_sleep` function that works seamlessly on both **Windows** and **POSIX (Linux/Unix)** systems.



## 🛠️ Implementation Details

The library uses conditional compilation to interface with the underlying Operating System:

* **Windows:** Utilizes `Sleep()` from `windows.h`.
* **Linux/Unix:** Utilizes `usleep()` from `unistd.h` (converting milliseconds to microseconds).

## 📦 Features

- **Header-Only:** Just include `timer.h` and you are ready to go.
- **Cross-Platform:** Handles the Windows/Linux logic automatically.
- **Static Inline:** Zero overhead; the compiler embeds the function directly into your code for maximum performance.
- **Architectural Style:** Written in clean **Allman Style** with English documentation.

## 💻 Usage

```c
#include "include/timer.h"
#include <stdio.h>

int main()
{
    printf("Initializing system...\n");
    
    /* Sleep for 1500 milliseconds (1.5 seconds) */
    sys_sleep(1500);
    
    printf("System ready. Developed by hypernova-developer.\n");
    return 0;
}
```
## 📜 License
This project is protected under the GNU GPL v3.0 and belongs to **hypernova-developer**.
