// Do while is the suitable option as the loop will run once atleast regardless if the condition inside while is true or not
#include<stdio.h>
int main()
{ 
  int num, sum=0;
  do 
  {printf("Enter a number: ");
   scanf("%d", &num);
   if(num == 0)
      break;
   sum = sum + num;
   printf("The value stored in the variable adds to %d\n", sum);}
   while(num != 0);
   printf("Data entered succcessfully");
   return 0;
 } 
