#include<stdio.h>
int main()
{ 
  int i=0;
  do
  {if(i == 0 || i == 5)
     {printf("*       *\n");}
   else
     {printf("* * * * *\n");}
   i++; }
  while(i <= 5);
  return 0;
} 
