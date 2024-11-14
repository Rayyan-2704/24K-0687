// Write a recursive function that takes an array and its size as input and prints all the elements.

#include<stdio.h>

void display_array(int arr[], int index, int size);

int main(){
    int num;
    printf("Enter the size of your array: ");
    scanf("%d", &num);
    int arr[num];
    for(int i=0 ; i<num ; i++){
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    display_array(arr, 0, num);
    return 0;
}

void display_array(int arr[], int index, int size){
    if(index<size){
        printf("%d ", arr[index]);
        display_array(arr, index+1, size);
    }
}