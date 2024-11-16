/* Create a program with a constant that defines the maximum allowable temperature (in
Celsius). Write a function to compare input temperatures and use a static variable to
count how many times temperatures exceeded the limit. */

#include <stdio.h>

#define MAX_TEMP 50

void temp_check(float temp);

int main()
{
    float temp;
    char choice;
    do
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp_check(temp);
        printf("Do you want to enter temperature again? (Y/y for yes, N/n for no): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

void temp_check(float temp)
{
    static int count = 0;
    if (temp > MAX_TEMP)
    {
        count++;
        printf("Temperature %.2f exceeds the maximum limit of %d.\nLimit has been exceeded %d times.\n", temp, MAX_TEMP, count);
    }
    else
    {
        printf("Temperature %.2f lies within the maximum limit of %d.\n", temp, MAX_TEMP);
    }
}