/* Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
For example: "madam", "racecar", "level", "radar". */

#include<stdio.h>
#include<string.h>
void palindrome_check(char arr[], int index);

int main(){
    char arr[5][20];
    printf("Enter your strings\n");
    for(int i=0 ; i<5 ; i++)
       {printf("Enter string %d: ", i+1);
        scanf("%s", arr[i]);}
    printf("\n");
    for(int i=0 ; i<5 ; i++)
       {palindrome_check(arr[i], i);}

    return 0;
}

void palindrome_check(char arr[], int index){
    int flag=1;
    int length=strlen(arr);
    for(int i=0 ; i<(length/2) ; i++)
       {if(arr[i]!=arr[length-1-i])
          {flag=0;
           break;} }

    if(flag)
      {printf("String %d is a palindrome.\n", index+1);}
    else
      {printf("String %d is not a palindrome.\n", index+1);}
}