//
// Created by sakai on 24. 11. 26.
//
/* save me */
#include <stdio.h>
int main() {
  int input;

  printf("weclome \n");
  printf("what do u want to do? \n");
    printf("1. add \n");
    printf("2. sub \n");
    printf("3. mul \n");

    scanf("%d", &input);

    if (input == 1) {
      printf("add \n");
    } else if (input == 2) {
      printf("sub \n");
    } else if (input == 3) {
      printf("mul \n");
    } else {
      printf("wrong input \n");
    }
    return 0;
}