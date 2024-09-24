#include<stdio.h>
int main()
{ 
  int weekday, vacay;
  printf("Is it a weekday? Enter 1 for yes or 0 for no: ");
  scanf("%d", &weekday);
  printf("Are you on vacation? Enter 1 for yes or 0 for no: ");
  scanf("%d", &vacay);
 
  if (weekday==1)
     {if (vacay==1)
         {printf("We sleep in.");}
      else if (vacay==0)
         {printf("We do not sleep in.");}
      else 
         {printf("Invalid Input.");}
     }
  else if (weekday==0)
     {if (vacay==1)
         {printf("We sleep in.");}
      else if (vacay==0)
         {printf("We sleep in.");}
      else 
         {printf("Invalid Input.");}
     }
  else 
     {printf("Invalid Input.");}
  
  return 0;
}