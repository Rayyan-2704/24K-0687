#include<stdio.h>
void print_grid(char grid[5][5]);
void find_position(char grid[5][5], int *p_row, int *p_column);
int new_position(char grid[5][5], int new_row, int new_column, int *collected_items);

int main(){
    char grid[5][5] = {
        {' ', ' ', 'I', 'X', ' '},
        {' ', 'X', ' ', ' ', ' '},
        {'I', ' ', 'X', 'X', ' '},
        {' ', ' ', ' ', 'I', 'X'},
        {' ', 'X', ' ', ' ', 'P'}
    };
    char move;
    int collected_items=0;
    int player_row, player_column;
    find_position(grid, &player_row, &player_column);

    while(1)
         {print_grid(grid);
          printf("Enter your move\n'W' to move up, 'S' to move down, 'A' to move left, 'D' to move right, 'Q' to quit: ");
          scanf(" %c", &move);
          if(move=='Q')
            {printf("Exiting the game. Thank you for playing!");
             break;}
          int new_row=player_row;
          int new_column=player_column;
          if(move=='W')
            {new_row--;}
          else if(move=='S')
            {new_row++;}
          else if(move=='A')
            {new_column--;}
          else if(move=='D')
            {new_column++;}
          else
            {printf("Invalid Input.\n");
             continue;}
          
          if(new_position(grid, new_row, new_column, &collected_items))
            {grid[player_row][player_column]=' ';
             grid[new_row][new_column]='P';
             player_row=new_row;
             player_column=new_column;} }
    return 0;
}

void print_grid(char grid[5][5]){
    for(int i=0 ; i<5 ; i++)
       {for(int j=0 ; j<5 ; j++)
           {printf("%c", grid[i][j]);
            printf(" ");} 
        printf("\n");}
}

void find_position(char grid[5][5], int *p_row, int *p_column){
    for(int i=0 ; i<5 ; i++)
       {for(int j=0 ; j<5 ; j++)
           {if(grid[i][j]=='P')
              {*p_row=i;
               *p_column=j;} } }
}

int new_position(char grid[5][5], int new_row, int new_column, int *collected_items){
    if(new_row<0 || new_row>=5 || new_column<0 || new_column>=5)
      {printf("Invalid move. Try again.\n");
       return 0;}
    
    if(grid[new_row][new_column]=='X')
      {printf("Invalid move. Try again.\n");
       return 0;}

    if(grid[new_row][new_column]=='I')
      {(*collected_items)++;
       printf("You have collected an item! Total items collected: %d\n", *collected_items);}
    return 1;
}