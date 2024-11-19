/* Design a structure to store information about travel packages, including package name,
destination, duration, cost, and number of seats available. Write a program that allows
users to book a travel package and display available packages. */

#include <stdio.h>

typedef struct
{
    char package_name[30];
    char destination[30];
    int duration;
    float cost;
    int num_seats;
} Packages;

void display(Packages package[], int size);
void booking(Packages package[], int size);

int main()
{
    int option;
    Packages package[3] = {
        {"Tour de Francais", "France", 14, 799.99, 6},
        {"Home to Futbol", "Brazil", 7, 549.99, 10},
        {"Heaven on Earth", "Portugal", 10, 999.99, 8},
    };

    while (1)
    {
        printf("\nMenu:-\n1: Display Travel Packages\n2: Book a Travel Package\n3: Exit\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            display(package, 3);
            break;
        case 2:
            booking(package, 3);
            break;
        case 3:
            printf("Exiting the program...");
            return 0;
        default:
            printf("Invalid input. Please enter again.");
        }
    }
    return 0;
}

void display(Packages package[], int size)
{
    printf("\nAvailable Packages:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Package %d\n", i + 1);
        printf("Package Name: %s\t", package[i].package_name);
        printf("Destination: %s\t", package[i].destination);
        printf("Duration (in days): %d\t", package[i].duration);
        printf("Cost (in $): %.2f\t", package[i].cost);
        printf("Number of Seats: %d\t", package[i].num_seats);
        printf("\n");
    }
}

void booking(Packages package[], int size)
{
    int choice, n;
    float amount;
    printf("Enter the package number to book: ");
    scanf("%d", &choice);

    if (choice <= 0 || choice > size)
    {
        printf("Invalid package number.");
        return;
    }

    if (package[choice - 1].num_seats > 0)
    {
        printf("Enter the number of seats to buy: ");
        scanf("%d", &n);
        if (n > 0 && n <= package[choice - 1].num_seats)
        {
            package[choice - 1].num_seats = package[choice - 1].num_seats - n;
            amount = package[choice - 1].cost * n;
            printf("Booking successful for package name '%s' at %s\n", package[choice - 1].package_name, package[choice - 1].destination);
            printf("Amount to be paid is %.2f.\n", amount);
        }
        else if (n > package[choice - 1].num_seats)
        {
            printf("Number of seats available is less than the amount entered.\n");
        }
        else{
            printf("Invalid Input.");
            return;
        }
    }
    else
    {
        printf("No more seats left to be bought for package number %d.\n", choice);
    }
}