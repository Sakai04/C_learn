//
// Created by sakai on 24. 11. 25.
//
/* f to celc */
#include <stdio.h>
int main()
{
    double celcius;

    printf("please enter the celcius: ");
    scanf("%lf", &celcius);

    printf("the value of celcius is %f", celcius, 9 * celcius / 5 + 32);

    return 0;
}