// Example of System.hpp
// Programmer : CodeMouse179
// Platform : Windows, Linux, macOS

#include "System.hpp"
#include <stdio.h>

void write(const char* str)
{
    printf("%s", str);
}

void write_line(const char* str)
{
    printf("%s\n", str);
}

void example_start()
{
    write_line("----- Example Started -----");
}

void example_end()
{
    write_line("----- Example Finished ----");
}

void print_version()
{
    write("1.System Version    : ");
#ifdef SYSTEM_HPP
    write(SYSTEM_VERSION_STRING);
#endif
    write_line("");
}

void print_current_platform()
{
    write("2.Current Platform  : ");
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
    write("3.Current Standard  : ");
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
    write("3.Current CStandard : ");
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
    write("4.Current Compiler  : ");
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
    example_start();
    print_version();
    print_current_platform();
    int r = c_or_cpp();
    if (r == 1) print_current_c_standard();
    if (r == 2) print_current_standard();
    print_current_compiler();
    example_end();
#endif
    return 0;
}