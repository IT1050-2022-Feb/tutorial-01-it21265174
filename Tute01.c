/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,avg,sum;
  printf("Enter mark 1st subject - ");
  scanf("%d",&mark1);
  printf("Enter mark 2nd subject - ");
  scanf("%d",&mark2);

  sum = mark1 + mark2;
  avg = sum /2;
  printf("sum - %d \n",sum);
  printf("average  - %d\n", avg);
  
  return 0;
}

