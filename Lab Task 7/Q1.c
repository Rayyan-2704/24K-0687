#include<stdio.h>
int main()
{
  int arr[100];
  int num,temp;
  printf("Enter the amount of integers to be stored in the array: ");
  scanf("%d", &num);
  
  // Storing the values entered by the user in the array
  for(int i=0 ; i<num ; i++)
     {printf("Enter the number to be stored in %d index: ", i);
      scanf("%d", &arr[i]);}
  
  // Starting from the last index
  for(int i=num-1 ; i>0 ; i--)
     {if(i == num-1)
        {temp=arr[i];}
      
      arr[i] = arr[i-1];}
  arr[0] = temp;
   
  // Printing the new array
  for(int i=0 ; i<num ; i++)
     {printf("%d\n", arr[i]);}
  
  return 0;
}

  