#include<stdio.h>
int main()
{ 
  int arr[10];
  int freq[100] = {0};
  printf("Please enter 10 integer numbers between 0 and 99 inclusive:\n");
  
  // Storing the 10 integers in the 'arr' array. For a valid input, the frequency of the integer is also updated in the 'freq' array.
  for(int i=0 ; i<10 ; i++)
     {printf("Enter the number to be stored in %d index: ", i);
      scanf("%d", &arr[i]);
      if(arr[i]>=0 && arr[i]<=99)
        {freq[arr[i]]++;}
      else
        {printf("Error! Invalid input, enter again.");
         i--;} }
  
  // 'j', which is the index of 'freq' array, is also the value that is stored in the 'arr' array and its frequency is the value stored in 'freq' index. 
  for(int j=0 ; j<100 ; j++)
     {if(freq[j] > 0)
        {printf("Frequency of number %d: %d\n", j, freq[j]);} }
  return 0;
}