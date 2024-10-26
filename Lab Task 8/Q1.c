#include<stdio.h>
int main() {
    int start, end;
    printf("Enter the lower bound of the range: ");
    scanf("%d", &start);
    printf("Enter the upper bound of the range:  ");
    scanf("%d", &end);
    
    int prime_nums[end-start+1], count=0;
    //Initializing prime array elements to zero
    for(int i=0 ; i < (end-start+1) ; i++)
       {prime_nums[i]=0;}

    for(int num=start ; num<=end ; num++)
       {int prime = 1;
        if(num<=1)
          {prime = 0;}
        else
          {for(int i=2 ; i <= (num/2) ; i++)
              {if(num%i==0)
                  {prime=0;
                   break;}} }
        
        if(prime == 1)
          {prime_nums[count]=num;
           count++;} }
    
    printf("The prime numbers in the range are:\n");
    for(int i=0 ; i < count ; i++)
       {printf("%d ", prime_nums[i]);}
    
    return 0;}