/* Write a function that checks if a given number is even or odd. */

#include<stdio.h>
int odd_even(int a);

int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int check=odd_even(num);
    if(check)
      {printf("The integer entered is odd.");}
    else
      {printf("The integer entered is even.");}
    return 0;
}

int odd_even(int a){
    int c = a % 2;
    return c;
}