#include<stdio.h>
int main()
{
  char arr[100];
  int count_a=0, count_e=0, count_i=0, count_o=0, count_u=0;
  printf("Enter a string: ");
  scanf("%s", arr);
  
  for(int i=0; arr[i] != '\0' ; i++)
     {switch(arr[i]) 
             {case 'A':
              case 'a':
                  count_a++;
                  break;
              case 'E':
              case 'e':
                  count_e++;
                  break;
              case 'I':
              case 'i':
                  count_i++;
                  break;
              case 'O':
              case 'o':
                  count_o++;
                  break;
              case 'U':
              case 'u':
                  count_u++;
                  break;} }
  
  printf("a=%d\n e=%d\n i=%d\n o=%d\n u=%d\n", count_a, count_e, count_i, count_o, count_u);
  return 0;
}