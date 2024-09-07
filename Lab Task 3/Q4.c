#include<stdio.h>
int main()
{
  int distance_AB = 1207;
  int forward_fuelprice = 118;
  int return_fuelprice = 123;
  int fuelavg; 
  float fuelconsumed_AB, total_fuel_cost, total_fuelconsumed;
  printf("Enter your car's fuel average(should be positive):");
  scanf("%d", &fuelavg);
  if (fuelavg>0)
    {fuelconsumed_AB = distance_AB/fuelavg;
     total_fuel_cost = (fuelconsumed_AB * forward_fuelprice) + (fuelconsumed_AB * return_fuelprice);
     total_fuelconsumed = fuelconsumed_AB * 2;
     printf("The total fuel cost for both ways is %f \n The total fuel consumed for the whole trip is %f", total_fuel_cost, total_fuelconsumed);}
  else
    {printf("Fuel average should be a positive value, not a negative value.");}
  return 0;
}
