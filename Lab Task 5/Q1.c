#include<stdio.h>
int main()
{
  float total_calories, fat, calories_fat, perc;
  printf("Enter the total calories in the food (must not be negative): ");
  scanf("%f", &total_calories);
  printf("Enter the total fat in the food in gram (must not be negative): ");
  scanf("%f", &fat);
 
  calories_fat = fat * 9;
  perc = (calories_fat/total_calories) * 100;

  if (total_calories < 0 || fat < 0)
     {printf("Error, either total calories or fat grams entered is negative.");}
  else if (calories_fat > total_calories)
     {printf("Error, either the calories or fat grams were incorrectly entered.");}
  else
     {printf("The percentage of calories coming from fat is %.2f.", perc);}
 
  return 0;
}



  
    
  