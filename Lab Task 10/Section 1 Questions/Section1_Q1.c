// Write a recursive function that calculates the sum of digits of a number. For example, if the input is 123, the output should be 6.

#include <stdio.h>
int sum(int num);

int main()
{
    int num;
    printf("Enter the integer: ");
    scanf("%d", &num);

    printf("The sum of digits of %d is %d.", num, sum(num));
}

int sum(int num)
{
    int digit;
    if (num > 0)
    {
        digit = num % 10;
        return digit + sum(num / 10);
    }
    else
    {
        return 0;
    }
}
