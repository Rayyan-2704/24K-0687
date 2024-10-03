#include<stdio.h>
int main()
{ 
 int num, digit, calc=0, new_num;
 printf("Enter a number: ");
 scanf("%d", &num);
 // new_num is a variable here being used to perform calculations with the value of number without actually changing that value in the num variable
 new_num=num;
 while(new_num>0)
 {digit = new_num % 10;
  new_num = new_num / 10;
  calc=calc + (digit*digit*digit);}
 if(calc == num)
   {printf("The number entered is an Armstrong number.");}
 else 
   {printf("The number entered is not an Armstrong number.");}
 return 0;
}
