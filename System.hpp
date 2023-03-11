//      +--------------------------------------------------------------------------------+
//      |                                  System v0.1.0                                 |
//      |  Modified Date : 2023/3/11                                                     |
//      |  Introduction : System in C++                                                  |
//      |  License : MIT                                                                 |
//      |  Platform : Windows, Linux, macOS                                              |
//      |  C++ Required Version : C++ 98                                                 |
//      |  API Family : https://github.com/CodeMouse179/System                           |
//      |  Repository : https://github.com/CodeMouse179/System                           |
//      |                                                                                |
//      |                             Designer : CodeMouse179                            |
//      |  Email : codemouse179@gmail.com                                                |
//      |  Github : https://github.com/CodeMouse179                                      |
//      |  Bilibili : https://space.bilibili.com/3461577785215838                        |
//      +--------------------------------------------------------------------------------+

#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#define SYSTEM_VERSION_MAJOR 0
#define SYSTEM_VERSION_MINOR 1
#define SYSTEM_VERSION_PATCH 0
#define SYSTEM_VERSION (SYSTEM_VERSION_MAJOR << 16 | SYSTEM_VERSION_MINOR << 8 | SYSTEM_VERSION_PATCH)
#define SYSTEM_VERSION_STRING "0.1.0"

//Windows Platform:
#if defined(WIN32) || defined(_WIN32)
#define SYSTEM_WINDOWS 1
#endif

//Linux Platform:
#if defined(__linux__)
#define SYSTEM_LINUX 1
#endif

//macOS Platform:
#if defined(__APPLE__) && defined(__MACH__)
#define SYSTEM_MACOS 1
#elif defined(__APPLE__)
#define SYSTEM_MACOS 2
#endif

//POSIX Platform:
#if defined(SYSTEM_LINUX) || defined(SYSTEM_MACOS)
#define SYSTEM_POSIX 1
#endif

namespace System
{
}

#endif