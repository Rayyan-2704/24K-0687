// Mistake in question as 'temp ----> a' should have been 'temp ----> c'
/* Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. To
implement this, you need to write a function called swaped().
void swaped(int *aPtr, int *bPtr, int *cPtr);
such that;
b ----> temp
a ----> b
c ----> a
temp ----> c */

#include <stdio.h>

void swaped(int *aPtr, int *bPtr, int *cPtr);

int main()
{
    int a, b, c;
    printf("Enter the value of 'a': ");
    scanf("%d", &a);
    printf("Enter the value of 'b': ");
    scanf("%d", &b);
    printf("Enter the value of 'c': ");
    scanf("%d", &c);

    printf("Values before swapping:\n");
    printf("a = %d , b = %d , c = %d\n", a, b, c);

    swaped(&a, &b, &c);
    printf("Value after swapping:\n");
    printf("a = %d, b = %d , c = %d\n", a, b, c);

    return 0;
}

void swaped(int *aPtr, int *bPtr, int *cPtr)
{
    int temp;
    temp = *bPtr;
    *bPtr = *aPtr;
    *aPtr = *cPtr;
    *cPtr = temp;
}
