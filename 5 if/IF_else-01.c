//
// Created by sakai on 24. 11. 25.
//
#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 7)
    {
        printf("Lucky 7\n");
    }
    else
    {
        printf("Not lucky 7\n");
    }
}