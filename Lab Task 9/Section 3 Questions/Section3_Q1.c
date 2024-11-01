/* Write a program that initializes a 2D character array with a list of words. Then, take a
word as input from the user and check if it exists in the array. Display "Found" if it’s
there, otherwise display "Not Found" */

#include<stdio.h>
#include<string.h>

int main(){
    char words[5][30]={"Python", "Java", "C++", "SQL", "HTML"};
    char str[30];
    int found=0;

    printf("Enter the word to be searched: ");
    scanf("%s", str);

    for(int i=0 ; i<5 ; i++)
       {if(strcmp(words[i], str)==0)
          {found=1;
           break;} }

    if(found)
      {printf("The word entered has been found.");}
    else
      {printf("The word entered has not been found.");}
    return 0;
}
