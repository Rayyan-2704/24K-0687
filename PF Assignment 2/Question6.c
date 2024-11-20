#include<stdio.h>
int matchsticks(int n);

int main(){
    int n;
    printf("Enter the number of matchsticks: ");
    scanf("%d", &n);
    if(n<=0) 
      {printf("Please enter a positive number of matchsticks.\n");
       return 1;}
    int check=matchsticks(n);
    if(check==-1)
      {printf("It is impossible for player A to win.");}
    else
      {printf("Player A should pick up %d matchstick(s) to win the game.", check);}
    return 0;
}

int matchsticks(int n){
    if(n<=0 || n%5==0)
      {return -1;}
    else
      {return n%5;}
}