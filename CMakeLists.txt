cmake_minimum_required(VERSION 3.30)
project(C_learn C)

set(CMAKE_C_STANDARD 11)

add_library(C_learn STATIC library.c)
