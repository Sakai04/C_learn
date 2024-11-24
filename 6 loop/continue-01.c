//
// Created by sakai on 24. 11. 25.
//
#include <stdio.h>
int main()
{
    int i;

    for (i = 0; i < 100; i++)
    {
        if (i % 5 == 0) continue;;

        printf("%d", i);
    }
    return 0;
}