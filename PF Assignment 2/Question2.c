#include<stdio.h>
#include<string.h>
void frequency(char slogan[], int slogan_num);

int main() {
  int num;
  printf("Enter the number of slogans to be used: ");
  scanf("%d", &num);
  getchar();
  
  char slogans[num][20];
  printf("Enter your slogans: \n");
  for(int i=0 ; i<num ; i++)
     {printf("Slogan %d:\n", i+1);
      fgets(slogans[i], 20, stdin);
      // Remove the newline character if present
      int len = strlen(slogans[i]);
      if(len > 0 && slogans[i][len - 1] == '\n') 
        {slogans[i][len - 1] = '\0';} }
  
  for(int i=0 ; i<num ; i++)
     {frequency(slogans[i], i+1);}
  return 0;
}

void frequency(char slogan[], int slogan_num) {
   int freq[256]={0};
   
   for(int j=0 ; slogan[j] != '\0' ; j++)
      {if(slogan[j] >= 32 && slogan[j] < 256)
         {freq[slogan[j]]++;} }
   printf("Frequency for slogan %d: \n{", slogan_num);   
   for(int k=0 ; k<256 ; k++)
      {if(freq[k] > 0)
         {printf("\'%c\': %d, ", k, freq[k]);} }
      printf("}\n");
}