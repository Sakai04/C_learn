//
// Created by sakai on 24. 11. 25.
//
/* half */
#include <stdio.h>
int main()
{
    double i, j;
    printf("enter the number: ");
    scanf("%lf %lf", &i, &j);

    printf("%f + %f = %f\n", i, j, i / j);
    return 0;

}