#include<stdio.h>
int main() {
    int matrix1[3][3], matrix2[3][3];
    int matrix3[3][3], matrix4[3][3];
    
    printf("Enter the elements for matrix A (3x3):\n");
    for(int i=0 ; i<3 ; i++)
       {for(int j=0 ; j<3 ; j++)
           {printf("Row %d Column %d: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);} }
    
    printf("Enter the elements for matrix B (3x3):\n");
    for(int i=0 ; i<3 ; i++)
       {for(int j=0 ; j<3 ; j++)
           {printf("Row %d Column %d: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);} }

    //Initializing matrix 3 (the resultant matrix after multiplication) & matrix 4 (resultant matrix after subtraction) to zero
    for(int i=0 ; i<3 ; i++)
       {for(int j=0 ; j<3 ; j++)
           {matrix3[i][j]=0;} }
    for(int i=0 ; i<3 ; i++)
       {for(int j=0 ; j<3 ; j++)
           {matrix4[i][j]=0;} }
    
    //Multiplication 
    for(int i=0 ; i<3 ; i++)
       {for(int j=0 ; j<3 ; j++)
           {for(int k=0 ; k<3 ; k++)
               {matrix3[i][j] += (matrix1[i][k] * matrix2[k][j]);} } }
    
    //Subtraction of Matrix 3 from Matrix A
    for(int i=0 ; i<3 ; i++)
       {for(int j=0 ; j<3 ; j++)
           {matrix4[i][j] = matrix1[i][j] - matrix3[i][j];} }
    
    printf("Resultant Matrix after multiplication:\n");
    for(int i=0 ; i<3 ; i++)
       {for(int j=0 ; j<3 ; j++)
           {printf("%d\t", matrix3[i][j]);}
        printf("\n");}
    
    printf("Subtraction of Resultant Matrix from Matrix A:\n");
    for(int i=0 ; i<3 ; i++)
       {for(int j=0 ; j<3 ; j++)
           {printf("%d\t", matrix4[i][j]);}
        printf("\n");}

    return 0; }