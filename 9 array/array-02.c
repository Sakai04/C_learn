//
// Created by sakai on 24. 11. 26.
//
/* print array */
#include <stdio.h>
int main()
{
    int arr[10] =  {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }
    return 0;
}