#include<stdio.h>
int main()
{
  int num, i, prime = 1;
  int first_term = 0, second_term = 1, sum, a;
  printf("Enter a number: ");
  scanf("%d", &num);
  
  if(num <= 1)
    {printf("The number entered is not a prime number.\n");}
  else
    {for(i=2 ; i<num ; i++)
      {if(num % i == 0)
         {prime = 0;
          break;} 
       else
         {continue;} }
    if(prime == 1)
      {printf("The number entered is a prime number.\n");
       printf("%d %d ", first_term, second_term);
       for(a=2 ; a < num ; a++)
        {sum = first_term + second_term;
         first_term = second_term;
         second_term = sum;
         printf("%d ", sum);} }
    else if(prime == 0)
      {printf("The number entered is not a prime number.\n");} }

  return 0;
}
