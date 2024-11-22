/* Define a date structure with variables day, month and year. Write functions to
1. Calculate the number of days between two days.
2. Find the day of the week for a given date
3. Check if a date is valid accounting for leap years. */

#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} date;

int valid_date_check(date date_user);
int leap_year(int year);
int days_in_month(int month, int year);
int days_between(date date1, date date2);
void day_of_week(date date_user);

int main()
{
    date date1, date2;
    printf("Enter the first date (dd-mm-yy): ");
    scanf("%d-%d-%d", &date1.day, &date1.month, &date1.year);
    printf("Enter the second date (dd-mm-yy): ");
    scanf("%d-%d-%d", &date2.day, &date2.month, &date2.year);

    if (valid_date_check(date1))
    {
        printf("The first date entered is a valid date.\n");
    }
    else
    {
        printf("The first date entered is not a valid date.\n");
    }

    if (valid_date_check(date2))
    {
        printf("The second date entered is a valid date.\n");
    }
    else
    {
        printf("The second date entered is not a valid date.\n");
    }

    printf("The number of days between the two dates is %d.\n", days_between(date1, date2));

    day_of_week(date1);
    day_of_week(date2);
    return 0;
}

int valid_date_check(date date_user)
{
    if (date_user.year <= 0)
    {
        return 0;
    }
    if (date_user.month < 1 || date_user.month > 12)
    {
        return 0;
    }
    if (date_user.day < 1)
    {
        return 0;
    }

    if (date_user.month == 1 || date_user.month == 3 || date_user.month == 5 || date_user.month == 7 || date_user.month == 8 || date_user.month == 10 || date_user.month == 12)
    {
        if (date_user.day > 31)
        {
            return 0;
        }
    }
    else if (date_user.month == 4 || date_user.month == 6 || date_user.month == 9 || date_user.month == 11)
    {
        if (date_user.day > 30)
        {
            return 0;
        }
    }
    else
    {
        if ((date_user.year % 4 == 0 && date_user.year % 100 != 0) || date_user.year % 400 == 0)
        {
            if (date_user.day > 29)
            {
                return 0;
            }
        }
        else
        {
            if (date_user.day > 28)
            {
                return 0;
            }
        }
    }

    return 1;
}

int leap_year(int year)
{
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int days_in_month(int month, int year)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    if (month == 2)
    {
        return leap_year(year) ? 29 : 28;
    }
    return 0;
}

int days_between(date date1, date date2)
{
    int total_days1 = 0, total_days2 = 0;

    for (int i = 1; i < date1.year; i++)
    {
        total_days1 += (leap_year(i) ? 366 : 365);
    }

    for (int i = 1; i < date1.month; i++)
    {
        total_days1 += days_in_month(i, date1.year);
    }
    total_days1 += date1.day;

    for (int i = 1; i < date2.year; i++)
    {
        total_days2 += (leap_year(i) ? 366 : 365);
    }

    for (int i = 1; i < date2.month; i++)
    {
        total_days2 += days_in_month(i, date2.year);
    }
    total_days2 += date2.day;

    return total_days2 - total_days1;
}

void day_of_week(date date_user)
{
    int day = date_user.day, month = date_user.month, year = date_user.year;
    if (month < 3)
    {
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;
    int i = (day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;
    const char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    printf("The day of the week for %d-%d-%d is: %s\n", day, month, year, days[i]);
}
