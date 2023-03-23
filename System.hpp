//      +--------------------------------------------------------------------------------+
//      |                                  System v0.5.0                                 |
//      |  Modified Date : 2023/3/23                                                     |
//      |  Introduction : System in C/C++                                                |
//      |  License : MIT                                                                 |
//      |  Platform : Windows, Linux, macOS                                              |
//      |  C/C++ Required Version : C 90/C++ 98                                          |
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
#define SYSTEM_VERSION_MINOR 5
#define SYSTEM_VERSION_PATCH 0
#define SYSTEM_VERSION (SYSTEM_VERSION_MAJOR << 16 | SYSTEM_VERSION_MINOR << 8 | SYSTEM_VERSION_PATCH)
#define SYSTEM_VERSION_STRING "0.5.0"

//Microsoft C/C++ Compiler:
#if defined(_MSC_VER) && !defined(__clang__)
#define SYSTEM_MSC 1
#endif

//GNU C/C++ Compiler:
#if defined(__GNUC__) && !defined(__clang__)
#define SYSTEM_GCC 1
#endif

//Clang C/C++ Compiler:
#if defined(__clang__)
#define SYSTEM_CLA 1
#endif

//Standard C/C++ Compiler:
#if defined(SYSTEM_GCC) || defined(SYSTEM_CLA)
#define SYSTEM_SCC 1
#endif

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

//C Language(Microsoft C/C++ Compiler):
#if defined(SYSTEM_MSC)
#if defined(__STDC_VERSION__) && !defined(__cplusplus)
#define SYSTEM_C 1
#endif
#endif

//C Language(Standard C/C++ Compiler):
#if defined(SYSTEM_SCC)
#if defined(__STDC__) && !defined(__cplusplus)
#define SYSTEM_C 1
#endif
#endif

//C Version Definition(Microsoft C/C++ Compiler):
#if defined(SYSTEM_MSC) && defined(SYSTEM_C)
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199409L)
#define SYSTEM_C_90 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#define SYSTEM_C_99 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)
#define SYSTEM_C_11 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201710L)
#define SYSTEM_C_17 1
#endif
#endif

//C Version Definition(Standard C/C++ Compiler):
#if defined(SYSTEM_SCC) && defined(SYSTEM_C)
#if defined(__STDC__) && !defined(__STDC_VERSION__)
#define SYSTEM_C_90 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199409L)
#define SYSTEM_C_90 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
#define SYSTEM_C_99 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)
#define SYSTEM_C_11 1
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201710L)
#define SYSTEM_C_17 1
#endif
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

#if defined(SYSTEM_CXX)
namespace System
{
}
#endif

#endif