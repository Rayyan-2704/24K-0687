/* Using Task. 4, resize that dynamic array of character and append the array with your studentId.
That student id must be taken input from the user.

DynamicArray = "Muhib Ahmed" // Before

DynamicArray = "K241234 Muhib Ahmed"; // After the text append */

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
    getchar();

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

    char rollNum[50];
    printf("Enter your student ID (Eg: K241234): ");
    fgets(rollNum, sizeof(rollNum), stdin);
    rollNum[strcspn(rollNum, "\n")] = ' '; // Replacing new line with a space
    
    int rollNumLength = strlen(rollNum); // Includes space in length calculation
    int newTotalLength = rollNumLength + N;

    arr = realloc(arr,newTotalLength * sizeof(char));

    // Shifting the full name leftwards, starting first from the null terminator
    for(int i = N-1 ; i >= 0; i--){
        arr[i+rollNumLength] = arr[i];
    }

    // Adding the roll number to the array
    for(int i = 0 ; i < rollNumLength ; i++){
        arr[i] = rollNum[i];
    }

    printf("Dynamic array after addition of student ID: %s\n", arr);

    free(arr);
    return 0;
}
