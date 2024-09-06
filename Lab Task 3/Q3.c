#include<stdio.h>
int main()
{
  float salary, tax_rate, tax_amount, salary_after_tax;
  printf("Enter your initial salary amount before tax: \n");
  scanf("%f", &salary);
  printf("Enter the tax rate: \n");
  scanf("%f", &tax_rate);
  tax_amount = salary * (tax_rate/100);
  salary_after_tax = salary - tax_amount;
  printf("The tax amount is %.2f \n The salary after tax is %.2f", tax_amount, salary_after_tax);
  return 0;
}