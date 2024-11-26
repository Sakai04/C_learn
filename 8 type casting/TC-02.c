//
// Created by sakai on 24. 11. 26.
//
/* ratio between two numbers */
#include <stdio.h>
int main()
{
    int a, b;
    float c, d;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    c = a / b;
    d = (float)a / b;

    printf("ratio between two numbers: %f %f", c,d);
    return 0;
}
