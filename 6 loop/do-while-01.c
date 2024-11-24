//
// Created by sakai on 24. 11. 25.
//
#include <stdio.h>
int main()
{
    int i = 1, sum = 0;

    do
    {
        sum +=i;
        i++;
    }while (i < 1);

    printf("sum : %d\n", sum);
    return 0;
}