//
// Created by sakai on 24. 11. 26.
//
/* ignore */

#include <stdio.h>
int main()
{
    int a;
    double b;

    b = 2.4;
    a =b;

    printf("%d", a);
    return 0;
}

// it doesnt work because of type casting
// we need to use (int) to convert double to int
// a = (int)b;
// then it will work