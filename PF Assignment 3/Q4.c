#include <stdio.h>
#include <stdlib.h>

#define MIN_RATING 1
#define MAX_RATING 10

typedef struct
{
    int **ratings;
    int totalScore;
} Employee;

void inputEmployees(int **ratings, int numEmployees, int numPeriods);
void displayPerformance(int **ratings, int numEmployees, int numPeriods);
int findEmployeeOfTheYear(int **ratings, int numEmployees, int numPeriods);
int findWorstPerformingEmployee(int **ratings, int numEmployees, int numPeriods);
int findHighestRatedPeriod(int **ratings, int numEmployees, int numPeriods);

int main()
{
    Employee employees;
    int numEmployees, numPeriods;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);
    printf("Enter the number of evaluation periods: ");
    scanf("%d", &numPeriods);

    employees.ratings = (int **)malloc(numEmployees * sizeof(int *));
    if (employees.ratings == NULL)
    {
        printf("Memory allocation failed for rows.\n");
        return 1;
    }

    for (int i = 0; i < numEmployees; i++)
    {
        employees.ratings[i] = (int *)malloc(numPeriods * sizeof(int));
        if (employees.ratings[i] == NULL)
        {
            printf("Memory allocation failed for row %d.\n");
        }
    }

    inputEmployees(employees.ratings, numEmployees, numPeriods);
    displayPerformance(employees.ratings, numEmployees, numPeriods);

    printf("\nThe employee of the year (employee with the highest average rating) is Employee %d at index %d.\n", findEmployeeOfTheYear(employees.ratings, numEmployees, numPeriods) + 1, findEmployeeOfTheYear(employees.ratings, numEmployees, numPeriods));
    printf("\nThe worst performing employee (employee with the lowest average rating) is Employee %d at index %d.\n", findWorstPerformingEmployee(employees.ratings, numEmployees, numPeriods) + 1, findWorstPerformingEmployee(employees.ratings, numEmployees, numPeriods));
    printf("\nThe highest rated evaluation period is Period %d.", findHighestRatedPeriod(employees.ratings, numEmployees, numPeriods) + 1);

    // Free the dynamic allocated memmory
    for (int i = 0; i < numEmployees; i++)
    {
        free(employees.ratings[i]);
    }
    free(employees.ratings);

    return 0;
}

void inputEmployees(int **ratings, int numEmployees, int numPeriods)
{
    for (int i = 0; i < numEmployees; i++)
    {
        printf("\nEnter the ratings for Employee %d between %d and %d inclusive:\n", i + 1, MIN_RATING, MAX_RATING);
        for (int j = 0; j < numPeriods; j++)
        {
            int rating;
            while (1)
            {
                // Loop to check the rating entered is valid
                printf("\tPeriod %d: ", j + 1);
                scanf("%d", &rating);
                if (rating >= MIN_RATING && rating <= MAX_RATING)
                {
                    ratings[i][j] = rating;
                    break; // Exit the loop if the input is valid
                }
                else
                {
                    printf("Invalid rating! Please enter a value between %d and %d.\n", MIN_RATING, MAX_RATING);
                }
            }
        }
    }
}

void displayPerformance(int **ratings, int numEmployees, int numPeriods)
{
    printf("\nPerformance Ratings:\n");
    for (int i = 0; i < numEmployees; i++)
    {
        printf("Employee %d: ", i + 1);
        for (int j = 0; j < numPeriods; j++)
        {
            printf("%d ", ratings[i][j]);
        }
        printf("\n");
    }
}

int findEmployeeOfTheYear(int **ratings, int numEmployees, int numPeriods)
{
    int sum;
    float avg, highestAvg = 0.0;
    int bestEmployee = 0;

    for (int i = 0; i < numEmployees; i++)
    {
        sum = 0;
        avg = 0.0;
        for (int j = 0; j < numPeriods; j++)
        {
            sum += ratings[i][j];
        }
        avg = (float)sum / numPeriods; // Typecasting to float
        if (avg > highestAvg)
        {
            highestAvg = avg;
            bestEmployee = i;
        }
    }

    return bestEmployee;
}

int findWorstPerformingEmployee(int **ratings, int numEmployees, int numPeriods)
{
    int sum;
    float avg, lowestAvg = 9999.99;
    int worstEmployee = 0;

    for (int i = 0; i < numEmployees; i++)
    {
        sum = 0;
        avg = 0.0;
        for (int j = 0; j < numPeriods; j++)
        {
            sum += ratings[i][j];
        }
        avg = (float)sum / numPeriods; // Typecasting to float
        if (avg < lowestAvg)
        {
            lowestAvg = avg;
            worstEmployee = i;
        }
    }

    return worstEmployee;
}

int findHighestRatedPeriod(int **ratings, int numEmployees, int numPeriods)
{
    int sum;
    float avg, highestAvg = 0.0;
    int periodOfHighestAvg = 0;

    for (int j = 0; j < numPeriods; j++)
    {
        sum = 0;
        avg = 0.0;
        for (int i = 0; i < numEmployees; i++)
        {
            sum += ratings[i][j];
        }
        avg = (float)sum / numEmployees; // Typecasting to float
        if (avg > highestAvg)
        {
            highestAvg = avg;
            periodOfHighestAvg = j;
        }
    }

    return periodOfHighestAvg;
}
