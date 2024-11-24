//
// Created by sakai on 24. 11. 25.
//
#include <stdio.h>
int main ()
{
    int height, weight;
    printf("enter the height and weight: ");
    scanf("%d %d", &height, &weight);

    if (height >= 190 || weight >= 100)
    {
        printf("You are a giant\n");
    }
    return 0;
}