#include<stdio.h>
int main()
{ 
  int i;
  for(i=0 ; i<=5 ; i++)
  {if(i==0 || i==5)
     {printf("* * * * *\n");}
   else 
     {printf("*       *\n");} }
  return 0;
}

// A better approach to this problem would be as follows:
#include<stdio.h>
int main()
{
  int i;
  for(i=1 ; i<=30 ; i++)
    {if(i<=5 || i>=26)
        {printf("* ");}
     else if((i>5 || i<26) && (i%5==1 || i%5==0))
        {printf("* ");}
     else 
        {printf("  ");}
     
     if(i%5 == 0)
        {printf("\n");} }
        return 0;
}
