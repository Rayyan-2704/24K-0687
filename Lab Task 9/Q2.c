/* Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values. */

#include<stdio.h>
void swapIntegers(int a, int b);

int main(){
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Before swapping: first number is %d and second number is %d.\n", num1, num2);
    swapIntegers(num1, num2);
    return 0;
}

void swapIntegers(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The numbers have been swapped. First number is %d and second number is %d.", a, b);
}
