//
// Created by sakai on 24. 11. 25.
//
/* 1 to 19 */
#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 0; i < 20; i++)
    {
        sum += i;
    }
    printf("sum : %d\n", sum);
    return 0;
}