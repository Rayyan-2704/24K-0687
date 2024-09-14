#include<stdio.h>
int main()
{ 
  int customer_id, units;
  char name[20];
  float bill, surcharge, net_bill;
 
  printf("Enter your customer id: ");
  scanf("%d", &customer_id);
  printf("Enter your name: ");
  gets(name);
  scanf("%s", name);
  printf("Enter your units consumed: ");
  scanf("%d", &units);

  if (units >= 0 && units <= 199)
     {bill = units*16.20;}
  else if (units >= 200 && units < 300)
     {bill = units*20.10;}
  else if (units >= 300 && units < 500)
     {bill = units*27.10;}
  else if (units >= 500)
     {bill = units*35.90;}
  else 
     {printf("Invalid input for units consumed, must be positive. \n");}

  if (bill > 18000)
     {surcharge = bill*0.15;
      net_bill = bill + surcharge ;}
  else 
     {surcharge = 0;
      net_bill = bill;}
 
  printf("Customer ID: %d \n Customer Name: %s \n Units Consumed: %d \n Amount Charges: %.2f \n Surcharge Amount, if any: %.2f \n Net Amount to be paid by the Customer: %.2f ", customer_id, name, units, bill, surcharge, net_bill);

  return 0;
}
