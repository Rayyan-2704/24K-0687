# Pseudocode
## Find the maximum number in any of three variables.
```
START
PRINT "Enter any three numbers"
INPUT Num1, Num2, Num3
IF Num1>Num2 AND Num1>Num3
  THEN PRINT "The maximum number is:" , Num1
ELSEIF Num2>Num1 AND Num2>Num3
  THEN PRINT "The maximum number is:" , Num2
ELSE
  PRINT "The maximum number is:" , Num3
END
```

## Take three variables as input and add them without using the + operator (Use your head for this)
```
```
## Create a small calculator which only does ‘+’ or ‘-‘ Operations.
```
START
PRINT "Enter any two numbers and the type of operation to perform"
INPUT Num1, Num2, Operation_Type
SET Answer = 0
IF Operation_Type = 1
   THEN Answer = Num1 + Num2
   PRINT Answer
ELSEIF Operation_Type = 2
   THEN Answer = Num1 - Num2
   PRINT Answer
END
```
# Algorithms
## Implement an algorithm for determining if an Nth is a divisor of an n Number (i.e. 2 is a divisor of 6). If so, determine if it’s an even number or odd number as well.
1. Start by choosing your 'Nth' number.
2. Choose your 'n' number as well.
3. Divide the 'n' number by the 'Nth' number.
4. If the remainder is not 0, the 'Nth' number is not a divisor of the 'n' number.
5. Else if the remainder is 0, then the 'Nth' number is a divisor of the 'n' number.
6. Divide your 'n' number by 2 to find whether it is even or odd.
7. If the remainder is 0, then the 'n' number is even.
8. Else, the 'n' number is odd.
## Implement an algorithm where the user enters a number, and an appropriate month is displayed.
1. Start by listing all the months in chronological order.
2. Number the months from 1 to 12 starting from January and ending at December.
3. Ask the user to input a number from 1 to 12.
4. Read the number entered by the user.
5. If it is from 1 to 12, then display the month that corresponds to the number entered.
6. Else, display an invalid number message.
## Implement an algorithm for making a simple calculator with all the operators (+,-,*,/,%)
1. Start by asking the user to enter any two numbers and the symbol of the operation.
2. Read the two numbers entered by the user and store it as Num1 and Num2 respectively.
3. Read the symbol of the operation and store it as operator.
4. If the operator is '+',
   * Set Result = Num1 + Num2
5. If the operator is '-',
   * Set Result = Num1 - Num2
6. If the operator is '*',
   * Set Result = Num1 * Num2
7. If the operator is '/',
   * Check if Num2 is 0
   * If true, then display mathematical error
   * If false, Set Result = Num1/Num2
   
  
   




