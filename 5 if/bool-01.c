//
// Created by sakai on 24. 11. 25.
//
#include <stdio.h>
int main()
{
    int a;
    printf("type the number: ");
    scanf("%d", &a);

    if (a >= 10 && a < 20)
    {
        printf("%d is in the range of 10 to 20\n", a);
    }
    return 0;
}