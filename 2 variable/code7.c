//
// Created by voivi on 24. 11. 24.
//
/* variable naming */
#include <stdio.h>
int main() {
    int a, A; // a, A is different
    int 1hi; // error : variable name can't start with number
    int space bar; // error : variable name can't have space

    int enum, long, double, int;
    // error : variable name can't be reserved word
    return 0;
}