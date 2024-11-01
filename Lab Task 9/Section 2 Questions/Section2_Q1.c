/* Write a program that takes a destination string and a source string as input. Then, take
an integer n as input and append only the first n characters of the source string to the
destination. Print the new concatenated string. */

#include<stdio.h>
#include<string.h>

int main(){
    char destination[20]; char source[20];
    int n;

    printf("Enter your destination string: ");
    scanf("%s", destination);
    printf("Enter your source string: ");
    scanf("%s", source);
    printf("Enter the number of characters of source string to be concatenated: ");
    scanf("%d", &n);

    strncat(destination, source, n);
    printf("Concatenated String: %s", destination);
    return 0;
}
