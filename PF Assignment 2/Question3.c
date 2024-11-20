#include<stdio.h>
int wordcompress(char word_input[], char compressed_word[]); //The word input here is the word stored in a row in words array

int main(){
    int num;
    printf("Enter the number of words: ");
    scanf("%d", &num);
    getchar();

    char words[num][100];
    for(int i=0 ; i<num ; i++)
       {printf("Enter word %d: ", i+1);
        fgets(words[i], 100, stdin);
        //Removing the new line that fgets reads
        int length = 0;
        while(words[i][length] != '\0') 
             {length++;}
        if(length>0 && words[i][length - 1] == '\n') 
          {words[i][length - 1] = '\0';}  }
    
    printf("[");
    for(int i=0 ; i<num ; i++)
       {char compressed_word[100];
        int words_removed = wordcompress(words[i],compressed_word);
        printf("\"%s\" (excessive words removed: %d), ", compressed_word, words_removed);}
    printf("]");
    return 0;
}

int wordcompress(char word_input[], char compressed_word[]){
    int words_removed=0, compressed_index=0; 
    for(int i=0 ; word_input[i]!='\0' ; i++)
       {if(i==0 || word_input[i]!=word_input[i-1])
          {compressed_word[compressed_index]=word_input[i];
           compressed_index++;}
        else
          {words_removed++;}}
    compressed_word[compressed_index]='\0'; //Null Terminator in last index
    return words_removed;  
}