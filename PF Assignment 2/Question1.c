#include<stdio.h>
int main()
{
  int arr[5];
  int smallest = 9999, second_smallest = 9999; 
  
  // Storing the values entered by the user in the array
  printf("Please enter any 5 numbers in the array (Value must be less than 9999):\n");
  for(int i=0 ; i<5 ; i++)
     {printf("Value to be stored in the %d index: ", i);
      scanf("%d", &arr[i]);
      if(arr[i] >= 9999)
        {printf("Error! Value entered is equals to or greater than 9999. Please enter the value again.\n");
         i--;} }

  // Checking for the second smallest number in the array
  for(int i=0 ; i<5 ; i++)
     {if(arr[i] < smallest)
        {second_smallest = smallest;
         smallest = arr[i];}
      else if(arr[i] < second_smallest && arr[i] != smallest)
        {second_smallest = arr[i];}
      else
        {continue;} }

  // Printing the second smallest number in the array
  if(second_smallest == 9999)
    {printf("No distinct second smallest value.");}
  else
    {printf("The second smallest number stored in the array is %d.", second_smallest);}
  return 0;
}