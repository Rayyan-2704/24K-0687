// Input is out of the range of integer data type as it is stored in more than 4 bytes
#include<stdio.h>
int main()
{        
   // Declare the variable as double 
   double testInteger=3000000000;
   // Print the value and type 0 between format specifier to print value with no decimal places
   printf("Number is %.0lf", testInteger);
   return 0; //
}