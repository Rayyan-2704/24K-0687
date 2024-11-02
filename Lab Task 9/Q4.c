/* Write a C program with a user-defined function calculate to perform basic arithmetic operations
such as addition, subtraction, multiplication, and division. The program should take two
numbers and an operation choice as input, and then use the function to perform the operation. */

#include<stdio.h>
void calculation(float num1, float num2, char op);

int main(){
    float num1, num2;
    char op;
    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number: ");
    scanf("%f", &num2);
    printf("Enter the symbol of the operation to be performed: ");
    scanf(" %c", &op);
    calculation(num1, num2, op);
    return 0;
}

void calculation(float num1, float num2, char op){
    if(op=='+')
      {printf("The result is %.2f", num1+num2);}
    else if(op=='-')
      {printf("The result is %.2f", num1-num2);}
    else if(op=='*')
      {printf("The result is %.2f", num1*num2);}
    else if(op=='/')
      {if(num2!=0)
         {printf("The result is %.2f", num1/num2);}
       else
         {printf("Math Error. Denominator (Number 2) should not be zero for division.");} }
    else
      {printf("Invalid symbol entered.");}
}