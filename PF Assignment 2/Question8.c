#include<stdio.h>
int bin_to_dec(int num);
int dec_to_bin(int num);
void dec_to_hex(int num);
void hex_to_dec(char hex_num[]);
void bin_to_hex(int num);
void hex_to_bin(char hex_num[]);

int main(){
    int conv_type, num;
    char hex_num[20];
    
    //Using while(1) the loop will run infinitely unless the program is exited using the return 0 command when the user opts for number 6
    while(1){
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Hexadecimal to Decimal\n");
    printf("5. Binary to Hexadecimal\n");
    printf("6. Hexadecimal to Binary\n");
    printf("7. Exit\n");
    printf("Enter the type of conversion: ");
    scanf("%d", &conv_type);
    
    switch(conv_type) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%d", &num);
            printf("Equivalent decimal number: %d\n", bin_to_dec(num));
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &num);
            printf("Equivalent binary Number: %d\n", dec_to_bin(num));
            break;
        case 3:
            printf("Enter a decimal number: ");
            scanf("%d",&num);
            dec_to_hex(num);
            break;
        case 4:
            printf("Enter a hexadecimal number: ");
            scanf("%s", hex_num);
            hex_to_dec(hex_num);
            break;
        case 5:
            printf("Enter a binary number: ");
            scanf("%d", &num);
            bin_to_hex(num);
            break;
        case 6:
            printf("Enter a hexadecimal number: ");
            scanf("%s", hex_num);
            hex_to_bin(hex_num);
            break;
        case 7:
            printf("Exiting the program.");
            return 0;
        default:
            printf("Invalid Input. Try again.");
        }
    }
    return 0;
}

int bin_to_dec(int num){
    int decimal_num=0, base=1, digit;
    while(num>0)
         {digit=num%10;
          num=num/10;
          decimal_num+=(digit*base);
          base=base*2;}
    return decimal_num;
}

int dec_to_bin(int num){
    int binary_num=0, base=1;
    while(num>0)
         {binary_num+=(num%2)*base;
          num=num/2;
          base=base*10;}
    return binary_num;
}

void dec_to_hex(int num){
    char hex[20];
    int i=0, j;
    while(num>0) 
         {int temp = num%16;
          if(temp<10)
        	{hex[i]=temp+'0';}  //we can also write hex[i]=temp+48; 0+48 will give the ASCII value of '0' 
		  else
			{hex[i]=temp+55;}    //10+55 will give the ASCII value of 'A'; can also write hex[i]=temp-10+'A'
          num=num/16;
          i++;}
    hex[i]='\0'; //Last index of the array will store the null terminator
    
    //Reversing the hex array
    for(j=0; j<i/2; j++)
       {char temp=hex[j];
        hex[j]=hex[(i-1)-j];
        hex[(i-1)-j]=temp;}

    printf("Equivalent hexadecimal Number: %s\n",hex);
}

void hex_to_dec(char hex_num[]){
    int decimal_num=0, base=1, length=0;
    while(hex_num[length] != '\0')
        {length++;}
    for(int i=length-1 ; i>=0 ; i--)  //Starting the index from the very last because that is how we do the conversion normally
       {if(hex_num[i]>='0' && hex_num[i]<='9')
          {decimal_num+=(hex_num[i]-'0')*base;}
        else if(hex_num[i]>='A' && hex_num[i]<='F')
            {decimal_num+=(hex_num[i]-55)*base;}
        else
            {printf("Input invalid.\n");
            return;}
        base*=16;}
    printf("Equivalent decimal number: %d\n", decimal_num);
}

void bin_to_hex(int num){
    int decimal_num=bin_to_dec(num);
    dec_to_hex(decimal_num);         //Using the 2 functions created above in this function
}

void hex_to_bin(char hex_num[]){
    int decimal_num=0, base=1, length=0;
    while(hex_num[length] != '\0')
        {length++;}
    for(int i=length-1 ; i>=0 ; i--)  //Starting the index from the very last because that is how we do the conversion normally
       {if(hex_num[i]>='0' && hex_num[i]<='9')
          {decimal_num+=(hex_num[i]-'0')*base;}
        else if(hex_num[i]>='A' && hex_num[i]<='F')
            {decimal_num+=(hex_num[i]-55)*base;}
        else
            {printf("Input invalid.\n");
            return;}
        base*=16;}
    int binary_num=dec_to_bin(decimal_num);
    printf("Equivalent binary number: %d\n", binary_num);
}