/* Write a program that calculates the sum of all the elements in array using pointers
(Note: Generate the array via user) */

#include <stdio.h>

int main()
{
    int n, sum = 0;
    int *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array below:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element to be stored at %d index: ", i);
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("The sum of the elements in the array is %d.\n", sum);
    return 0;
}
