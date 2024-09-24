#include<stdio.h>
int main()
{ 
 float gpa;
 printf("Enter GPA between 0 and 4: ");
 scanf("%f", &gpa);
 (gpa > 4.0 || gpa < 0.0) ? printf("Invalid GPA.") :
 (gpa <= 4.0 && gpa >= 3.5) ? printf("Highest honors for semester.") :
 (gpa < 3.5 && gpa >= 3.0) ? printf("Dean's list for semester.") :
 (gpa < 3.0 && gpa >= 2.0) ? printf("(no message)") :
 (gpa < 2.0 && gpa >= 1.0) ? printf("On probation for next semester.") :
 printf("Failed semester-registration suspended.");
 return 0;
}