#include<stdio.h>
int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	int event[q], player[q];
	int yellow[100]={0}, red[100]={0};
	for(int i=0 ; i<q ; i++)
	   {
	   	scanf("%d %d", &event[i], &player[i]);
	   }
	   
	for(int i=0 ; i<q ; i++)
	   {if(event[i]==1)
	   	  {yellow[player[i]]++;}
	   else if(event[i]==2)
	     {red[player[i]]++;}
	    else if(event[i]==3)
	     {if(yellow[player[i]]==2 || red[player[i]]==1)
	        {printf("Yes\n");}
	       else
	         {printf("No\n");} }
	   
	   
	   } 
}