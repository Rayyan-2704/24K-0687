/* Create a function that reverses a given string and returns the reversed string. Use this function
in the main program to display the reversed string entered by the user. */

#include<stdio.h>
#include<string.h>
void reverse(char arr[]);

int main(){
    char arr[20];
    printf("Enter your string: ");
    fgets(arr, 20, stdin);
    reverse(arr);
    fputs(arr, stdout);
    return 0;
}

void reverse(char arr[]){
    strrev(arr);
}