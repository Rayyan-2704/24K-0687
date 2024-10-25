#include <stdio.h> 

int main() {
   int rows;
   printf("Enter the number of rows for the upper of the diamond: ");
   scanf("%d", &rows);
   
   for(int i=1 ; i<=rows-1 ; i++)
      {for(int j=1 ; j<=(rows+1)-i ; j++)
          {printf(" ");}
       for(int j=1 ; j<=i ; j++)
          {printf("* ");}
       printf("\n");}
    for(int i=1 ; i<=rows ; i++)
      {for(int j=1 ; j<=i ; j++)
          {printf(" ");}
       for(int j=1 ; j<=(rows+1)-i ; j++)
          {printf("* ");}
       printf("\n");}
    return 0;
}