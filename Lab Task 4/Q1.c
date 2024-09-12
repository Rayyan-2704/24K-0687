#include<stdio.h>
int main()
{ 
  int num;
  printf("Enter an integer number: ");
  scanf("%d", &num);
  if ( num%3==0 )
     printf("This number is a multiple of 3");
  else
     printf("This number is not a multiple of 3");
  return 0;
}