# System 0.5.1

[README - 中文](https://github.com/CodeMouse179/System/blob/main/Doc/README_CN.md)

[README - русский](https://github.com/CodeMouse179/System/blob/main/Doc/README_RU.md)

[README - türkçe](https://github.com/CodeMouse179/System/blob/main/Doc/README_TR.md)

## System in C/C++

License : MIT

Platform : Windows, Linux, macOS

C/C++ Required Version : C 90/C++ 98

API Family : [System](https://github.com/CodeMouse179/System)

## Introduction

System.hpp is a fundamental platform-specific header file for C/C++.

The purpose is to provide C/C++ programmers with convenient and reliable macros.

## Inspiration

[predef](https://github.com/cpredef/predef)

## Installation

System.hpp is distributed as a single header file so it's easy to install, just follow 2 steps:

1. Copy System.hpp into your project

2. #include "System.hpp"

## Compile and Run Example

Windows : Open System.sln with VisualStudio and click Windows Debugger

Linux, macOS : cmake . && make && ./s

## Documentation

[Documentation](https://github.com/CodeMouse179/System/blob/main/Doc/README.md)

## Tutorial

``` cpp
// Example of System.hpp
// Programmer : CodeMouse179
// Platform : Windows, Linux, macOS

#include "System.hpp"

#ifdef SYSTEM_CXX
#include <iostream>
void write(const char* str)
{
    std::cout << str;
}
void write_line(const char* str)
{
    std::cout << str << "\n";
}
#else
#include <stdio.h>
void write(const char* str)
{
    printf(str);
}
void write_line(const char* str)
{
    printf(str);
    printf("\n");
}
#endif

void system_start()
{
    write_line("----- System Example Started -----");
}

void system_end()
{
    write_line("----- System Example Finished ----");
}

void print_system_hpp_version()
{
    write("1.System Version   : ");
#ifdef SYSTEM_HPP
    write(SYSTEM_VERSION_STRING);
#endif
    write_line("");
}

void print_current_platform()
{
    write("2.Current Platform : ");
#ifdef SYSTEM_WINDOWS
    write("Windows");
#endif
#ifdef SYSTEM_LINUX
    write("Linux");
#endif
#ifdef SYSTEM_MACOS
    write("macOS");
#endif
    write_line("");
}

int c_or_cpp()
{
#ifdef SYSTEM_C
    return 1;
#endif
#ifdef SYSTEM_CXX
    return 2;
#endif
    return 0;
}

void print_current_standard()
{
    write("3.Current Standard : ");
#ifdef SYSTEM_CXX_20
    write_line("C++ 20");
    return;
#endif
#ifdef SYSTEM_CXX_17
    write_line("C++ 17");
    return;
#endif
#ifdef SYSTEM_CXX_14
    write_line("C++ 14");
    return;
#endif
#ifdef SYSTEM_CXX_11
    write_line("C++ 11");
    return;
#endif
#ifdef SYSTEM_CXX_98
    write_line("C++ 98");
    return;
#endif
    write_line("");
}

void print_current_c_standard()
{
    write("3.Current CStandard: ");
#ifdef SYSTEM_C_17
    write_line("C 17");
    return;
#endif
#ifdef SYSTEM_C_11
    write_line("C 11");
    return;
#endif
#ifdef SYSTEM_C_99
    write_line("C 99");
    return;
#endif
#ifdef SYSTEM_C_90
    write_line("C 90");
    return;
#endif
    write_line("");
}

void print_current_compiler()
{
    write("4.Current Compiler : ");
#ifdef SYSTEM_MSC
    write("Microsoft C/C++ Compiler");
#endif
#ifdef SYSTEM_GCC
    write("GNU C/C++ Compiler");
#endif
#ifdef SYSTEM_CLA
    write("Clang C/C++ Compiler");
#endif
    write_line("");
}

int main()
{
#ifdef SYSTEM_HPP
    system_start();
    print_system_hpp_version();
    print_current_platform();
    int r = c_or_cpp();
    if (r == 1) print_current_c_standard();
    if (r == 2) print_current_standard();
    print_current_compiler();
    system_end();
#endif
    return 0;
}
```

## API Family

* [System](https://github.com/CodeMouse179/System)

* [System.String](https://github.com/CodeMouse179/String)