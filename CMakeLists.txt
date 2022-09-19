cmake_minimum_required(VERSION 3.23)
project(c C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(c
        1.1.c
        1.2.1.c
        1.2.c)
