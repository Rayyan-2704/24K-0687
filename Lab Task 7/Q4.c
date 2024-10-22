#include<stdio.h>
int main()
{
  int length=0;
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  char *ptr;

  // Using pointers to calculate the length of the string
  for( ptr=str ; *ptr != '\0' ; ptr++ )
     {length++;}
  printf("The length of the string entered is: %d", length);
  
  // Reversing the string using pointers
  // rev = str + length - 1 : means that the 'rev' pointer stores the address of the last index of 'str' array
  // ptr < rev ensures that 'ptr' pointer does not meet or cross the index 'rev' pointer
  char *rev, temp;
  for( ptr=str , rev=str + length - 1 ; ptr < rev ; ptr++ , rev-- )
     { temp = *ptr;
       *ptr = *rev;
       *rev = temp; }
  printf("\n Reversed String: %s", str);
}
