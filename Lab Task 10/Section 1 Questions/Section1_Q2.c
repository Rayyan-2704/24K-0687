// Write a recursive function that takes a string as input and returns the reversed string.
#include <stdio.h>
#include <string.h>
void reverse_string(char arr[], int start_index, int last_index);

int main()
{
    char stri[50];
    printf("Enter your string: ");
    scanf("%s", stri);

    int length = strlen(stri);
    reverse_string(stri, 0, length - 1);
    printf("Reversed String: %s", stri);
    return 0;
}

void reverse_string(char arr[], int start_index, int last_index)
{
    if (start_index >= last_index)
    {
        return;
    }
    else
    {
        char temp;
        temp = arr[start_index];
        arr[start_index] = arr[last_index];
        arr[last_index] = temp;
        reverse_string(arr, start_index + 1, last_index - 1);
    }
}