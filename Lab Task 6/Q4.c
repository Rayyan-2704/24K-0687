#include<stdio.h>
int main()
{ 
 int num, digit, calc=0, temp;
 printf("Enter a number: ");
 scanf("%d", &num);
 // new_num is a variable here being used to perform calculations with the value of number without actually changing that value in the num variable
 temp = num;
 while(temp > 0)
 {digit = temp % 10;
  temp = temp / 10;
  calc = calc + (digit*digit*digit);}
 if(calc == num)
   {printf("The number entered is an Armstrong number.");}
 else 
   {printf("The number entered is not an Armstrong number.");}
 return 0;
}
