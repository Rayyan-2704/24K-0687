#include<stdio.h>
int main()
{
  int temp=0, num, index=0, x=0;
  printf("Enter the size of the array: ");
  scanf("%d", &num);
  int arr[num];

  // Storing the values in the array.
  for(int i=0 ; i<num ; i++)
     {printf("Enter the number to be stored in %d index: ", i);
      scanf("%d", &arr[i]);}

  // The loop runs infinitely until a repeated number is found or the 'index' variable is equals to the size 'num' of the array.
  for( ; ; )
     {if((arr[index] == arr[x+1]) && (index != x+1))
        {temp = arr[index];
         break;}
      else
        {x++;}
      if(x >= num)
        {index++;
         x=0;}
      if(index == num)
        {break;} }
 
  // Printing the repeated number if any.
  if(temp != 0)
    {printf("Number %d occurs more than once.", temp);}
  else
    {printf("No repeated number.");}
  return 0;
}