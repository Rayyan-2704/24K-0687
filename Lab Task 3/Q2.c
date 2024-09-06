#include<stdio.h>
int main()
{
  int num1, num2;
  printf("Enter integer number 1: \n");
  scanf("%d", &num1);
  printf("Enter integer number 2: \n");
  scanf("%d", &num2);
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("The input integers have been swapped \n number 1 is %d and number 2 is %d", num1, num2);
  return 0;
}
