//
// Created by voivi on 24. 11. 24.
//
/* bit operator */
#include <stdio.h>
int main() {
    int a = 0xAF; // 1010 1111
    int b = 0xB5; // 1011 0101

    printf("%x\n", a & b); // 1010 0101
    printf("%x\n", a | b); // 1011 1111
    printf("%x\n", a ^ b); // 0001 1010
    printf("x\n", ~a); // 0101 0000
    printf("%x\n", a << 2); // 1010 1111 00
    printf("x\n", b >> 3); // 0001 0110

    return 0;
}