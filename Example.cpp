#include "System.hpp"
#include <iostream>

int main()
{
#ifdef SYSTEM_HPP
    std::cout << "Example started.\n";
    std::cout << "System version : " << SYSTEM_VERSION_STRING << "\n";
    std::cout << "Current platform : ";
#ifdef SYSTEM_WINDOWS
    std::cout << "Windows";
#endif
#ifdef SYSTEM_LINUX
    std::cout << "Linux";
#endif
#ifdef SYSTEM_MACOS
    std::cout << "macOS";
#endif
    std::cout << "\nExample finished.\n";
#endif
    return 0;
}