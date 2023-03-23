#include "System.hpp"
#include <stdio.h>

int main()
{
#ifdef SYSTEM_C
    printf("std c\n");
#endif
    return 0;
}