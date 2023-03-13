//      +--------------------------------------------------------------------------------+
//      |                                  System v0.2.0                                 |
//      |  Modified Date : 2023/3/13                                                     |
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
#define SYSTEM_VERSION_MINOR 2
#define SYSTEM_VERSION_PATCH 0
#define SYSTEM_VERSION (SYSTEM_VERSION_MAJOR << 16 | SYSTEM_VERSION_MINOR << 8 | SYSTEM_VERSION_PATCH)
#define SYSTEM_VERSION_STRING "0.2.0"

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

//C++ Language:
#if defined(__cplusplus)
#define SYSTEM_CXX 1
#endif

//C++ Version Definition(Windows):
#if defined(SYSTEM_WINDOWS) && defined(_MSVC_LANG)
#if (_MSVC_LANG >= 199711L)
#define SYSTEM_CXX_98 1
#endif
#if (_MSVC_LANG >= 201103L)
#define SYSTEM_CXX_11 1
#endif
#if (_MSVC_LANG >= 201402L)
#define SYSTEM_CXX_14 1
#endif
#if (_MSVC_LANG >= 201703L)
#define SYSTEM_CXX_17 1
#endif
#if (_MSVC_LANG >= 202002L)
#define SYSTEM_CXX_20 1
#endif
#endif

//C++ Version Definition(POSIX):
#if defined(SYSTEM_POSIX) && defined(__cplusplus)
#if (__cplusplus >= 199711L)
#define SYSTEM_CXX_98 1
#endif
#if (__cplusplus >= 201103L)
#define SYSTEM_CXX_11 1
#endif
#if (__cplusplus >= 201402L)
#define SYSTEM_CXX_14 1
#endif
#if (__cplusplus >= 201703L)
#define SYSTEM_CXX_17 1
#endif
#if (__cplusplus >= 202002L)
#define SYSTEM_CXX_20 1
#endif
#endif

namespace System
{
}

#endif