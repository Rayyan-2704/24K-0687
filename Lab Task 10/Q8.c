/* Write a recursive function linearSearch that takes an array, its size, the target element
to search for, and the current index. It checks if the target is at the current index and
continues searching in the subsequent indices until it either finds the target or exhausts
the array. */

#include <stdio.h>

int linearSearch(int arr[], int index, int size, int target);

int main()
{
    int num;
    printf("Enter the size of the array: ");
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter the element at %d index: ", i);
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target element to be searched: ");
    scanf("%d", &target);

    int answer = linearSearch(arr, 0, num, target);
    if (answer == -1)
    {
        printf("Target element %d was not found in the array.", target);
    }
    else
    {
        printf("Target element %d was found at index %d of the array.", target, answer);
    }

    return 0;
}

int linearSearch(int arr[], int index, int size, int target)
{
    if (index == size)
    {
        return -1;
    }

    if (arr[index] == target)
    {
        return index;
    }
    else
    {
        return linearSearch(arr, index + 1, size, target);
    }
}
