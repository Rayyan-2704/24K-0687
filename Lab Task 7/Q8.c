#include<stdio.h>
int main()
{ 
    char eq[100];
    int temp=0, result=0, i;
    char last_op = '+';
    printf("Enter your equation: ");
    scanf("%s", eq);

    for(i=0 ; eq[i]!='\0' ; i++)
       {if((eq[i]=='+' || eq[i]=='-') && eq[i+1]=='\0')
          {printf("Invalid expression.");
           return 0;}
        
        if(eq[i]>='0' && eq[i]<='9')
          {temp = (temp*10) + (eq[i]-'0');}
        else if(eq[i]=='+')
          {if(last_op=='+')
             {result+=temp;}
           else if(last_op=='-')
             {result-=temp;}
            temp=0;
            last_op='+';}
        else if(eq[i]=='-')
          {if(last_op=='+')
             {result+=temp;}
           else if(last_op=='-')
             {result-=temp;}
            temp=0;
            last_op='-';}
        else
          {printf("Invalid character entered.");
           return 1;}}
    if(last_op=='+')
      {result+=temp;}
    else if(last_op=='-')
      {result-=temp;}
    printf("Answer: %d", result);
    return 0;
}