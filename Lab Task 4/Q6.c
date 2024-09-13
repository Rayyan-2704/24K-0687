#include<stdio.h>
int main()
{
  float cost, saved_amount, finalcost;
  printf("Enter the cost of the item: ");
  scanf("%f", &cost);
  
   if (cost<500)
       {printf("No discount, the cost of the item to be paid is %.2f", cost);}
   else if (cost>=500 && cost<=2000)
       {saved_amount = cost*0.05;
        finalcost = cost - saved_amount;
        printf("Cost of the item was %.2f \n saved amount is %.2f \n final cost after discount is %.2f", cost, saved_amount, finalcost);}
   else if (cost>2000 && cost<=4000)
       {saved_amount = cost*0.10;
        finalcost = cost - saved_amount;
        printf("Cost of the item was %.2f \n saved amount is %.2f \n final cost after discount is %.2f", cost, saved_amount, finalcost);}
   else if (cost>4000 && cost<=6000)
       {saved_amount = cost*0.20;
        finalcost = cost - saved_amount;
        printf("Cost of the item was %.2f \n saved amount is %.2f \n final cost after discount is %.2f", cost, saved_amount, finalcost);}
   else 
       {saved_amount = cost*0.35;
        finalcost = cost - saved_amount;
        printf("Cost of the item was %.2f \n saved amount is %.2f \n final cost after discount is %.2f", cost, saved_amount, finalcost);}
   return 0;
}

   