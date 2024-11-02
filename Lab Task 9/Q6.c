/* Create a function that returns the maximum and minimum element in an integer array. Use this
function in the main program to find the maximum and minimum from an array entered by the
user. */

#include <stdio.h>
void search_max_min(int arr[], int size, int *max, int *min);

int main(){
    int n;
    printf("Enter the size of your array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
       {printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);}
    int max, min;
    search_max_min(arr, n, &max, &min);
    
    printf("The maximum element in the array is %d.\n", max);
    printf("The minimum element in the array is %d.\n", min);
    return 0;
}

void search_max_min(int arr[], int size, int *max, int *min){
    *max=arr[0];
    *min=arr[0];
    for(int i=1 ; i<size ; i++)
       {if(arr[i]>*max)
          {*max=arr[i];}
        else if(arr[i]<*min) 
          {*min=arr[i];} }
}
