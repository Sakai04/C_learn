//
// Created by sakai on 24. 11. 25.
//
#include <stdio.h>
int main()
{
    int i;
    int subject, score;
    double sum_score = 0;

    printf("Enter the number of subjects: ");
    scanf("%d", &subject);

    printf("\n enter the score of each subject\n");
    for (i = 1; i <= subject; i++)
    {
        printf("subject %d : ", i);
        scanf("%d", &score);
        sum_score += score;
    }
    printf("sum of scores : %.2f\n", sum_score);
    return 0;
}