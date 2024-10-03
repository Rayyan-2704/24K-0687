#include<stdio.h>
int main()
{ 
  int registration_year, semester, current_year = 24, sec_num;
  char roll_number[8];
  printf("Please enter your roll number(Example: 21K-8675): ");
  scanf("%s", roll_number);

  registration_year = 2000 + ((roll_number[0] - '0') * 10) + (roll_number[1] - '0');
  semester = (current_year - ((roll_number[0] - '0') * 10 + (roll_number[1] - '0'))) * 2 + 1;
  
  printf("Registration Year: %d\n", registration_year);
  printf("Semester: %d\n", semester);
  
  // Although the role numbers start from 0, the mapping should have been 0 for Section A & 1 for Section B so on, but the question says that 1 is for Section A
  sec_num = roll_number[4] - '0';
  (sec_num == 1) ? printf("Section: A") :
  (sec_num == 2) ? printf("Section: B") :
  (sec_num == 3) ? printf("Section: C") :
  (sec_num == 4) ? printf("Section: D") :
  (sec_num == 5) ? printf("Section: E") :
  (sec_num == 6) ? printf("Section: F") :
  (sec_num == 7) ? printf("Section: G") :
  (sec_num == 8) ? printf("Section: H") :
  (sec_num == 9) ? printf("Section: I") : printf("Invalid roll number");

  return 0;
}
