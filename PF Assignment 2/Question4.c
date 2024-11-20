#include<stdio.h>
#include<string.h>
void group_transactions(char transactions[][100], int size);
void sort_transaction(char sorted_1[]);

int main() {
    int num;
    printf("Enter the number of transactions to be done: ");
    scanf("%d", &num);
    getchar();

    char transactions[num][100];
    printf("Enter the transactions below:\n");
    for(int i=0 ; i<num ; i++)
       {printf("Enter transaction %d: ", i+1);
        fgets(transactions[i], 100, stdin);
        //Removing the new line
        for(int j=0 ; transactions[i][j]!='\0' ; j++)
           {if(transactions[i][j]=='\n')
              {transactions[i][j]='\0';
               break;} } }
    
    group_transactions(transactions,num);
    return 0;
}

void group_transactions(char transactions[][100], int size) {
    char grouped[100]={0};
    char sorted[100][100];
    for(int i=0 ; i<size ; i++)
       {strcpy(sorted[i],transactions[i]);
        sort_transaction(sorted[i]);}
    
    for(int i=0; i<size; i++)
       {if(!grouped[i]) 
           {printf("Group [ %s",transactions[i]);
            grouped[i]=1;
            for(int j=i+1 ; j<size ; j++) 
               {if(strcmp(sorted[i], sorted[j])==0) 
                  {printf(", %s", transactions[j]);
                   grouped[j]=1;} }
            printf(" ]");
            printf("\n");} }
}

//This whole function is performing bubble sort
void sort_transaction(char sorted_1[]){
    char temp;
    int length=strlen(sorted_1);
    for(int i=0 ; i<length-1 ; i++) // i<length-1 for optimization
       {for(int j=1 ; j<length ; j++)
           {if(sorted_1[i]>sorted_1[j])
              {temp=sorted_1[i];
               sorted_1[i]=sorted_1[j];
               sorted_1[j]=temp;} } }
}