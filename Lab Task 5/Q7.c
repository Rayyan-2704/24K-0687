#include<stdio.h>
int main()
{ 
 int num;
 printf("Enter a single integer number: ");
 scanf("%d", &num);
 (num % 10 == 0) ? printf("Last digit is zero") : printf("Last digit is non-zero");
 return 0;
}
