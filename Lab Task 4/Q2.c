#include<stdio.h>
int main()
{
  int num;
  printf("Enter any number: ");
  scanf("%d", &num);
  if ( num>0 && num%2==0 && num%10==0 )
     printf("Accept the number.");
  else 
     printf("Discard the number.");
  return 0;
}