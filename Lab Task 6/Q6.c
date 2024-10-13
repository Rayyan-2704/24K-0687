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

// A better approach to this problem would be as follows:
#include<stdio.h>
int main()
{
  int i=1;
  do
  {if(i>5 && i<26)
     {printf("* ");}
   else if((i<=5 || i>=26) && (i%5==1 || i%5==0))
     {printf("* ");}
   else 
     {printf("  ");}
     
   if(i%5 == 0)
     {printf("\n");}
   i++;}
  while(i<=30);
  return 0;
}
