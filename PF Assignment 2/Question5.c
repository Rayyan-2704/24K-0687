#include<stdio.h>
void horizontal_histogram(int values[], int count);
void vertical_histogram(int values[], int count);


int main()
{ 
    int count;
    printf("Enter the number of values for the histogram: ");
    scanf("%d", &count);

    int values[count];
    printf("Enter %d integers:\n", count);
    for(int i=0 ; i<count ; i++)
       {printf("%d integer: ", i+1);
        scanf("%d", &values[i]);}
    
    horizontal_histogram(values, count);
    vertical_histogram(values, count);
    return 0;
}

void horizontal_histogram(int values[], int count)
{
    printf("\nHorizontal Histogram:\n");
    for(int i=0 ; i<count ; i++)
       {printf("%d: ", values[i]);
        for(int j=0 ; j<values[i] ; j++)
           {printf("*");}
        printf("\n");}
}

void vertical_histogram(int values[], int count)
{
    printf("\nVertical Histogram:\n");
    int max = values[0]; //Taking the first index value as maximum value in the array initially
    for(int i=1 ; i<count ; i++) //Finding the the maximum value in the array for the height of the histogram
       {if(values[i]>max)
          {max=values[i];} }
    
    //Printing the histogram
    for(int i=max; i>0 ; i--) //Starting with maximum value as it is the height, if the value in the array is greater or equals to the height, an asterisk is printed else a space
       {for(int j=0 ; j<count ; j++)
           {if(values[j]>=i)
              {printf("* ");}
            else
              {printf("  ");} }
        printf("\n");}

    //Printing the base of Histogram
    printf("\n");
    for(int i=0 ; i<count ; i++)
       {printf("%d ", values[i]);}
}