#include<stdio.h>
int main()
{
    int i, j, k;
    int matrix[3][3];
    int min_row, column_index;
    int found=0;
    printf("Enter the elements for a 3x3 matrix.\n");
    for(i=0 ; i<3 ; i++)
       {for(j=0 ; j<3 ; j++)
           {printf("Enter the element to be stored in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);} }

    for(i=0 ; i<3 ; i++)
       {min_row=matrix[i][0];   //Assuming that the first column element in a row is minimum and then comparing the rest of the elements in the row with it
        column_index=0;
        for(j=1 ; j<3 ; j++)
           {if(matrix[i][j]<min_row)
              {min_row=matrix[i][j];  //Updating the minimum element and its column index if we find a lesser element in the same row 
               column_index=j;} }
        
        //Checking if the minimum element is the maximum one in its own column (saddle point)
        int saddle_point=1;
        for(k=0 ; k<3 ; k++)
           {if(matrix[k][column_index]>min_row) //If we find another element that is greater than minimum element in its own column, it is not a saddle point and the loop breaks 
              {saddle_point=0;
               break;} }

        if(saddle_point==1)
          {found=1;
           printf("The saddle point found is %d in index [%d][%d].\n", min_row, i, column_index);} }

    if(found==0)
      {printf("No saddle points found in the matrix.");}
    return 0;
}