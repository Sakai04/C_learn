//
// Created by sakai on 24. 11. 25.
//
#include <stdio.h>
int main()
{
    int usr_input;

    printf("guess the correct number: \n");

    for (;;)
    {
        scanf("%d", &usr_input);
        if (usr_input == 3)
        {
            printf("correct!\n");
            break;
        }else{
            printf("wrong! try again: \n");
        }
    }
    return 0;
}