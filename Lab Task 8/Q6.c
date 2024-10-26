#include<stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows needed for the Pascal Triangle: ");
    scanf("%d", &rows);
    int arr[rows][rows];  //Same number of rows and columns
    //Initializing all elements of the array to zero 
    for(int i=0 ; i<rows ; i++)
       {for(int j=0 ; j<rows ; j++)
           {arr[i][j]=0;} }
    
    //The value for a specific position in the Pascal Triangle will be the sum of the value in the previous row, previous column & the previous row, same column.
    for(int i=0 ; i<rows ; i++)
       {arr[i][0]=1;  //The first column (index 0) of each row should be 1 
        for(int j=1 ; j<=i ; j++)
           {arr[i][j] = arr[i-1][j-1] + arr[i-1][j];} }
    
    //Formatting the pascal triangle 
    for(int i=1 ; i<=rows ; i++)
       {for(int j=1 ; j<=(rows+1)-i ; j++)
           {printf(" ");}
        for(int j=1 ; j<=i ; j++)
           {printf("%d ", arr[i-1][j-1]);}
        printf("\n");}
    return 0;
}
