// Hourglass with the alphabets
#include<stdio.h>
int main()
{ 
  char i;
  for(i='A' ; i<='E'; i++)
   {if(i == 'A' || i == 'E')
      {printf("%c %c %c %c %c\n", i, i+1, i+2, i+3, i+4);}
    else if(i == 'B' || i == 'D')
      {printf("  %c   %c  \n", i+1, i+4);}
    else
      {printf("    %c    \n", i+2);} }
  return 0;
}


// Hourglass with asterisks
#include<stdio.h>
int main()
{
  int i;
  for(i=0 ; i<=4 ; i++)
   {if(i == 0 || i == 4)
      {printf("* * * * *\n");}
    else if(i == 1 || i == 3)
      {printf("  *   *  \n");}
    else 
      {printf("    *    \n");} }
  return 0;
}
// A better approach to this problem would be as follows:
#include<stdio.h>
int main()
{
  int i;
  for(i=1 ; i<=25 ; i++)
     {if(i<=5 || i>20)
        {printf("* ");}
      else if(((i>5 && i<=10) || (i>15 && i<=20)) && (i%5==2 || i%5==4))
        {printf("* ");}
      else if((i>10 && i<=15) && (i%5==3))
        {printf("* ");}
      else
        {printf("  ");} 
         
      if(i%5==0)
        {printf("\n");} }
  return 0;
}
