#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

char random_char_grid();
int search(char arr[6][5], char str[]);

int main(){
    char arr[6][5]={0};
    int score=0;
    char find_str[30];
    
    //Generating a grid with random elements in it
    srand(time(NULL)); 
    //Roll number in the last row
    arr[5][0]='0';
    arr[5][1]='6';
    arr[5][2]='8';
    arr[5][3]='7';
    for(int i=0 ; i<6 ; i++)
       {for(int j=0 ; j<5 ; j++)
          {if(arr[i][j]==0)
             {arr[i][j]=random_char_grid();} } }

    //Printing the grid
    for(int i=0 ; i<6 ; i++)
       {printf("[ ");
        for(int j=0 ; j<5 ; j++)
           {printf("%c ", arr[i][j]);}
        printf("]");
        printf("\n");}
    
    while(1)
         {printf("Enter the word to search in the grid or press \'E\' to end the program: ");
          scanf("%s", find_str);
          if( strcmp(find_str, "E")==0 )
            {break;}
          if( search(arr, find_str)==1 )
            {printf("%s is present.\n", find_str);
             score++;}
          else 
            {printf("%s is not present.\n", find_str);
             score--;}
          printf("Score: %d\n", score);}
    
    printf("Game over.\nTotal Score: %d", score);
    return 0;
}

char random_char_grid(){
    return (rand()%26) + 'A';
}       

int search(char arr[6][5], char str[]){
    int length=strlen(str);
    //Checking row-wise
    for(int i = 0 ; i < 6 ; i++) 
       {for(int j = 0 ; j <= 5 - length ; j++)  // j<=5-length so that the search does not go out of bounds
           {int found = 1;
            for(int k = 0 ; k < length ; k++) 
               {if(arr[i][j + k] != str[k]) 
                  {found = 0;
                   break;} } 
        if(found==1) 
          {return 1;} } }
    
    //Checking column-wise
    for(int j = 0 ; j < 5 ; j++) 
       {for(int i = 0 ; i <= 6 - length ; i++)  // i<=6-length so that the search does not go out of bounds
           {int found = 1;
            for(int k = 0 ; k < length ; k++) 
               {if(arr[i+k][j] != str[k]) 
                  {found = 0;
                   break;} } 
        if(found==1) 
          {return 1;} } }

    return 0;
}
