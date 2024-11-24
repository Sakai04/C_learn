cmake_minimum_required(VERSION 3.30)
project(C_learn C)

set(CMAKE_C_STANDARD 11)

add_library(C_learn STATIC library.c
        "1 start/code1.c"
        "1 start/code2.c"
        "2 variable/code3.c"
        "2 variable/code4.c"
        "2 variable/code5.c"
        "2 variable/code6.c"
        "2 variable/code7.c"
        "3 Operator/OP - 01.c"
        "3 Operator/OP-02.c"
        "3 Operator/OP-03.c"
        "3 Operator/OP-04.c"
        "3 Operator/OP-05.c"
        "3 Operator/OP-06.c")
