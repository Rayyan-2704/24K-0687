/* Write a program to copy the contents of one file to another. (Create a File with some dummy data, The data is not required to be formatted) */

#include <stdio.h>
int main()
{
    FILE *fptr1, *fptr2;
    char stri[100];

    fptr1 = fopen("sample.txt", "w");
    fprintf(fptr1, "Hello World, my name is Rayyan Aamir!");
    fclose(fptr1);

    fptr1 = fopen("sample.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Error in opening the file.");
        return 1;
    }
    fptr2 = fopen("copy.txt", "w");
    fgets(stri, sizeof(stri), fptr1);
    fprintf(fptr2, "%s", stri);
    fclose(fptr2);
    fclose(fptr1);

    return 0;
}
