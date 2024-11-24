//
// Created by sakai on 24. 11. 25.
//
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;

    while (i <= 100)
    {
        sum += i;
        i++;
    }
    printf("1 to 100 sum : %d\n", sum);

    return 0;
}