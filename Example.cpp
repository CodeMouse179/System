// Example of System.hpp
// Programmer : CodeMouse179
// Platform : Windows, Linux, macOS

#include "System.hpp"
#include <iostream>

void write(const char* str)
{
    std::cout << str;
}

void write_line()
{
    std::cout << "\n";
}

void write_line(const char* str)
{
    std::cout << str << "\n";
}

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
    write("System Version   : ");
    write(SYSTEM_VERSION_STRING);
    write_line();
}

void print_current_platform()
{
    write("Current Platform : ");
#ifdef SYSTEM_WINDOWS
    write("Windows");
#endif
#ifdef SYSTEM_LINUX
    write("Linux");
#endif
#ifdef SYSTEM_MACOS
    write("macOS");
#endif
    write_line();
}

void print_current_standard()
{
    write("Current Standard : ");
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
}

void print_current_compiler()
{
    write("Current Compiler : ");
#ifdef SYSTEM_MSC
    write("Microsoft C/C++ Compiler");
#endif
#ifdef SYSTEM_GCC
    write("GNU C/C++ Compiler");
#endif
#ifdef SYSTEM_CLA
    write("Clang C/C++ Compiler");
#endif
    write_line();
}

int main()
{
#ifdef SYSTEM_HPP
    system_start();
    print_system_hpp_version();
    print_current_platform();
    print_current_standard();
    print_current_compiler();
    system_end();
#endif
    return 0;
}