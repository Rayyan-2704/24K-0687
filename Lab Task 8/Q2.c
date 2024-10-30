#include<stdio.h>
int main()
{
    int n, start, even, odd;
    printf("Enter the number of sets required (n): ");
    scanf("%d", &n);
    printf("Enter the starting number: ");
    scanf("%d", &start);
    int arr[2][n][2];

    if(start%2==0)
      {even=start;
       odd=start-1;}
    else
      {odd=start;
       even=start-1;}
    
    for(int i=0 ; i<n ; i++)
       {for(int j=0 ; j<2 ; j++)
           {arr[0][i][j]=even;
            even=even-2;
            arr[1][i][j]=odd;
            odd=odd-2;} }

    printf("\nEven Arrays:\n");
    for(int i=0 ; i<n ; i++)
       {printf("[ ");
        for(int j=0 ; j<2 ; j++)
           {printf("%d ", arr[0][i][j]);}
        printf("]\n");}

    printf("\nOdd Arrays:\n");
    for(int i=0 ; i<n ; i++)
       {printf("[ ");
        for(int j=0 ; j<2 ; j++)
           {printf("%d ", arr[1][i][j]);}
        printf("]\n");}

    return 0;
}