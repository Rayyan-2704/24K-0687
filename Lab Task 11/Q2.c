/* How would you implement a program to count the occurrences of each word in a text
file? Write the approach and code. */

/* Approach: The solution to this porblem was to first create a 2D char array that stores every word written in the text file. Then read each word till a 
space occurs and store it into a "word" char array. This word array is first compared with every string present in the 2D array to see if it is a repeated one.
If true, the count of that word is increased and a flag is raised meaning this word is NOT a new word but a repeated one and the loop breaks. If the loops ends
and the word is NOT a repeated one, a condition is to be checked outside the loop first requiring the flag to be down and the word count not exceeding the max 
limit, if true the new word is stored in the 2D array, its count is incremented to 1 and the total word count is also increased by 1. To further maintain 
consistency, all the words fetched from the file are converted to lowercase and the punctuations are removed if any. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_LENGTH 50

void change_word_to_lowercase(char *word);
void remove_punctuation(char *word);

int main()
{
    char words_array[MAX_WORDS][MAX_LENGTH];
    char word[MAX_LENGTH];
    int count_total[MAX_WORDS];
    int word_count = 0;
    int flag;

    for (int i = 0; i < MAX_WORDS; i++)
    {
        count_total[i] = 0;
    }

    FILE *fptr = fopen("worddocument.txt", "r");
    if (fptr == NULL)
    {
        printf("Error in opening the file for reading.");
        return 1;
    }

    while (fscanf(fptr, "%s", word) != EOF)
    {
        flag = 0;
        change_word_to_lowercase(word);
        remove_punctuation(word);

        for (int i = 0; i < word_count; i++)
        {
            if (strcmp(words_array[i], word) == 0)
            {
                flag = 1;
                count_total[i]++;
                break;
            }
        }

        if (flag == 0 && word_count < MAX_WORDS)
        {
            strcpy(words_array[word_count], word);
            count_total[word_count]++;
            word_count++;
        }
    }
    fclose(fptr);

    printf("Frequencies of each word:\n");
    for (int i = 0; i < word_count; i++)
    {
        printf("%s has been repeated %d time(s).\n", words_array[i], count_total[i]);
    }

    return 0;
}

void change_word_to_lowercase(char *word)
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        word[i] = tolower(word[i]);
    }
}

void remove_punctuation(char *word)
{
    char temp[MAX_LENGTH];
    int j = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= '0' && word[i] <= '9'))
        {
            temp[j] = word[i];
            j++;
        }
    }

    temp[j] = '\0';
    strcpy(word, temp);
}
