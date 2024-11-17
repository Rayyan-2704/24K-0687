/* Write a recursive function bubbleSort that takes an array and its size. It performs the
bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
they are in the wrong order. */

#include <stdio.h>

void bubbleSort(int arr[], int size);

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

    bubbleSort(arr, num);

    printf("\nDisplaying the sorted array:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void bubbleSort(int arr[], int size)
{
    if (size == 1)  // For the base case: if the size is 1, it means that the array has already been sorted
    { 
        return;
    }
    else
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        bubbleSort(arr, size - 1);
    }
}
