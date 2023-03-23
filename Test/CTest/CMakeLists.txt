cmake_minimum_required(VERSION 3.11)

set(CMAKE_C_STANDARD 90)

project(CTest)

include_directories(../../)

add_executable(c
    ../../System.hpp
    main.c
)