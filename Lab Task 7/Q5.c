#include<stdio.h>
int main()
{
  char str[100];
  int palindrome = 1, length=0;
  printf("Enter a string: ");
  scanf("%s", str);

  // To find out the length of the string, we need to see when the '\0' terminator appears in the string
  for(int i=0 ; str[i] != '\0' ; i++)
     {length++;}

  // Checking for palindrome
  for(int i=0 ; i<length ; i++)
     {if(str[i] != str[length-1-i])
        {palindrome = 0; 
         break;} }

  // Printing if string is palindrome or not
  if(palindrome == 1)
    {printf("The string entered is a palindrome.");}
  else if(palindrome == 0)
    {printf("The string entered is not a palindrome.");}
  return 0;
}
