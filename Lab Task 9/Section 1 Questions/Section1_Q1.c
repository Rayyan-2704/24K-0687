/* Write a C function that takes two numbers as input and returns their product .*/

#include<stdio.h>
float product(float a, float b);

int main(){
    float num1, num2;
    printf("Enter any 2 numbers: ");
    scanf("%f %f", &num1, &num2);
    float result=product(num1,num2);
    printf("The product of the 2 numbers is %.2f", result);
    return 0;
}

float product(float a, float b){
    float c = a * b;
    return c;
 }
