/* Write a C Program to Find Largest Number in an array Using Dynamic Memory Allocation. Note:
The array must be dynamically resized and initially the array size will be taken by the user and
then resized by the user
Example arr[5]={1,2,3,4,5}
//After resizing
Arr[7]={1,2,3,4,5,6,7}
Take the same array and resize it. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int originalSize, newSize;
    printf("Enter the inital size of the array: ");
    scanf("%d", &originalSize);

    int *arr = (int *)malloc(originalSize * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array below:\n");
    for (int i = 0; i < originalSize; i++)
    {
        printf("Enter the element to be stored at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the new size of the array: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    if (newSize > originalSize)
    {
        for (int i = originalSize; i < newSize; i++)
        {
            printf("Enter the element to be stored at index %d: ", i);
            scanf("%d", &arr[i]);
        }
    }

    int largestNumber = arr[0];
    for (int i = 0; i < newSize; i++)
    {
        if (arr[i] > largestNumber)
        {
            largestNumber = arr[i];
        }
    }

    printf("\nThe largest number in the array is %d.\n", largestNumber);

    free(arr);
    return 0;
}
