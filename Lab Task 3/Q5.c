#include<stdio.h>
int main()
{
  float principle, rate_interest, time, simple_interest;
  
  printf("Enter the principle amount in Rupees between 100 Rs to 1000000 Rs:");
  scanf("%f", &principle);
  if (principle<=100 || principle>=1000000)
     {printf("Value is out of range \n");}

  printf("Enter the rate of interest between 5 to 10%:");
  scanf("%f", &rate_interest);
  if (rate_interest<=5 || rate_interest>=10)
     {printf("Value is out of range \n");}

  printf("Enter the time period in years between 1 to 10 years:");
  scanf("%f", &time);
  if (time<=1 || time>=10)
     {printf("Value is out of range \n");}

  if (principle>100 && principle<1000000 && rate_interest>5 && rate_interest<10 && time>1 && time<10)
     {simple_interest=(principle * rate_interest * time)/100;
      printf("The simple interest is %.2f", simple_interest);}
  
  return 0;
}
  