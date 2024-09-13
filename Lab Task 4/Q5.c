#include<stdio.h>
int main()
{
  char character;
  printf("Enter any character to check it's type: ");
  scanf(" %c", &character);

  if (character >= 'A' && character <= 'Z')
     {printf("The character entered is a capital alphabet.");}
  else if (character >= 'a' && character <= 'z')
     {printf("The character entered is a small alphabet.");}
  else if (character >= '0' && character <= '9')
     {printf("The character entered is a digit.");}
  else
     {printf("The character entered is a special character.");}
  return 0;
}