/* Write a program that ask the user to enter the total 'N' no of characters in user's name {First
Name + Last Name} to create a dynamic array of characters. After create a dynamic array of
that 'N' no of characters using malloc or calloc function. Finally copy your full name in it that has
already been taken from the user before
Dynamic Array = "Muhib Ahmed"; */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char buffer[50];
    printf("Enter your first and last name together as a single string: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // Adding the null terminator at the end of the string
    int length = strlen(buffer);
    length++; // To count the space of the null terminator as well

    int N;
    printf("Enter the total number of characters of the full name entered (include null terminator as well): ");
    scanf("%d", &N);

    char *arr = (char *) calloc(N, sizeof(char));
    if(arr == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }

    if(N >= length){
        strcpy(arr, buffer);
    }
    else{
        printf("The size of the array, which depends on the total number of characters entered, is insufficient to store the whole name.\n");
        return 1;
    }

    printf("Dynamic array: %s\n", arr);

    free(arr);
    return 0;
}
