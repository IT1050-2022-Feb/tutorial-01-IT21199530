/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1;
  int num2;
  int total;
  float average;

  printf("Enter marks1\n");
  scanf("%d",&num1);
  printf("Enter marks2\n");
  scanf("%d",&num2);
  total=num1+num2;
  average=(total/2);

  printf("average marks is :%.2f", average);

  return 0;
}

