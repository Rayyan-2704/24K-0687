#include <stdio.h>

int main() 
{
    int num1, num2, result;
    char op;

  
    printf("Enter your first number: ");
    scanf("%d", &num1);

  
    printf("Enter your second number: ");
    scanf("%d", &num2);

    printf("Enter the type of operator to be used (+, -, *, /): ");
    scanf(" %c", &op);   
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("The result is %d\n", result);
            break;
        
        case '-':
            result = num1 - num2;
            printf("The result is %d\n", result);
            break;
        
        case '*':
            result = num1 * num2;
            printf("The result is %d\n", result);
            break;
        
        case '/':
            if (num2 == 0) 
                {printf("Math Error: Division by zero is not allowed.\n");}
            else
                {result = num1 / num2;
                printf("The result is %d\n", result);}
            break;

        default:
            printf("Invalid Operator\n");
            break;
    }

    return 0;
}
