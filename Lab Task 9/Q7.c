/* Create a Function where it accepts a 2D array of strings where it sorts the string in the array
based on the first character’s ASCII Value in ascending order.
Example: {HELLO,JELLO,MELLO,TELLO,BELLO} //Input to function
Output from Function: {BELLO,HELLO,JELLO,MELLO,TELLO}
Hint: You can use the strcpy function for this to copy the array. */

#include<stdio.h>
#include<string.h>
void arranging_in_order(char words[5][100]);

int main(){
    char words[5][100]={"HELLO","JELLO","MELLO","TELLO","BELLO"};
    arranging_in_order(words);
}

void arranging_in_order(char words[5][100]){
    char temp[100]={0};
    for(int i=0 ; i<5 ; i++)
       {for(int j=0 ; j<5-1 ; j++)
           {if( strcmp(words[j],words[j+1])>0 )
              {strcpy(temp,words[j]);
               strcpy(words[j],words[j+1]);
               strcpy(words[j+1],temp);} } }

    printf("The ordered list of words is as follows: \n");
    for(int i=0 ; i<5 ; i++)
       {printf("%s\t", words[i]);}
}