/* Implement a function that checks if a given integer is a prime number. Use this function in the
main program to check if numbers entered by the user are prime. */

#include<stdio.h>
int prime(int num);

int main(){
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
 
    if(prime(num))
      {printf("The number entered is a prime number.");}
    else
      {printf("The number entered is not a prime number.");}
    return 0;
}

int prime(int num){
    if(num<=1)
      {return 0;}
    for(int i=2 ; i<=(num/2) ; i++)
       {if(num%i==0)
          {return 0;} }
    return 1;
}