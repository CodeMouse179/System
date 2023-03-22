#include "System.hpp"
#include <iostream>

int main()
{
#ifdef SYSTEM_HPP
    std::cout << "Example Started!!!\n";
    std::cout << "System Version : " << SYSTEM_VERSION_STRING << "\n";
    std::cout << "Current Platform : ";
#ifdef SYSTEM_WINDOWS
    std::cout << "Windows";
#endif
#ifdef SYSTEM_LINUX
    std::cout << "Linux";
#endif
#ifdef SYSTEM_MACOS
    std::cout << "macOS";
#endif
    std::cout << "\nCurrent Compiler : ";
#ifdef SYSTEM_MSC
    std::cout << "Microsoft C/C++ Compiler";
#endif
#ifdef SYSTEM_GCC
    std::cout << "GNU C/C++ Compiler";
#endif
#ifdef SYSTEM_CLA
    std::cout << "Clang C/C++ Compiler";
#endif
    std::cout << "\nExample Finished...\n";
#endif
    return 0;
}