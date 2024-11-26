//
// Created by sakai on 24. 11. 26.
//
/* get average */
#include <stdio.h>
int main()
{
    int arr[5];
    int i, ave = 0;

    for (i = 0; i < 5; i++)
    {
        printf("%dth number: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        ave = ave + arr[i];
    }
    printf("average: %d\n", ave / 5);
    return 0;
}