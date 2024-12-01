#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// When allocating dynamic memory for an array through a function, pass it through a pointer.

void initializeInventory(char ****s_ptr, int numSpecies); // s_ptr is a pointer of a 3D array
void addSupplies(char ****s_ptr, int numSpecies, int numSupplies);
void updateSupplies(char ***speciesSupplies, int numSpecies, int numSupplies); // Now onwards, passing the 3D array only
void removeSupplies(char ***speciesSupplies, int *numSpecies, int numSupplies);
void displayInventory(char ***speciesSupplies, int numSpecies, int numSupplies);

int main()
{
    int numSpecies, numSupplies;
    char ***speciesSupplies;

    printf("Enter the number of species of pets in inventory: ");
    scanf("%d", &numSpecies);

    if (numSpecies <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    initializeInventory(&speciesSupplies, numSpecies);

    printf("Enter the number of supplies of each species in inventory: ");
    scanf("%d", &numSupplies);

    if (numSupplies <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    addSupplies(&speciesSupplies, numSpecies, numSupplies);

    int choice;
    while (1)
    {
        printf("\nWelcome to Pets in Heart inventory system\n");
        printf("\t1) Update Supplies\n");
        printf("\t2) Remove Supplies\n");
        printf("\t3) Display Inventory\n");
        printf("\t4) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            updateSupplies(speciesSupplies, numSpecies, numSupplies);
        }
        else if (choice == 2)
        {
            removeSupplies(speciesSupplies, &numSpecies, numSupplies);
        }
        else if (choice == 3)
        {
            displayInventory(speciesSupplies, numSpecies, numSupplies);
        }
        else if (choice == 4)
        {
            for (int i = 0; i < numSpecies; i++)
            {
                for (int j = 0; j < numSupplies; j++)
                {
                    free(speciesSupplies[i][j]);
                }
                free(speciesSupplies[i]);
            }
            free(speciesSupplies);
            break;
        }
        else
        {
            printf("Invalid choice. Try again!\n");
            continue;
        }
    }

    return 0;
}

void initializeInventory(char ****s_ptr, int numSpecies)
{
    // Allocating rows for species (each row corresponds to a different species)
    *s_ptr = (char ***)malloc(numSpecies * sizeof(char **)); // Dereferencing *s_ptr to get 3D array
    if (*s_ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
}

void addSupplies(char ****s_ptr, int numSpecies, int numSupplies)
{
    char buffer[100]; // Temporary array to store a single supply (string)

    for (int i = 0; i < numSpecies; i++)
    {
        // Allocating columns for supplies of each species
        (*s_ptr)[i] = (char **)malloc(numSupplies * sizeof(char *));
        if ((*s_ptr)[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        for (int j = 0; j < numSupplies; j++)
        {
            printf("Enter the supply %d for species %d: ", j + 1, i + 1);
            scanf("%s", buffer);
            int length = strlen(buffer);
            length++; // Including null terminator as well

            // Allocating space equal to the length of a single supply item (including the null terminator)
            (*s_ptr)[i][j] = (char *)malloc(length * sizeof(char));
            if ((*s_ptr)[i][j] == NULL)
            {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            strcpy((*s_ptr)[i][j], buffer);
        }
    }
}

void updateSupplies(char ***speciesSupplies, int numSpecies, int numSupplies)
{
    int updateSpecies;
    char newBuffer[100], oldBuffer[100];
    int found = 0;

    printf("Enter the species number to be updated: ");
    scanf("%d", &updateSpecies);
    if (updateSpecies > numSupplies)
    {
        printf("Invalid species number!\n");
        return;
    }
    int index = updateSpecies - 1;
    printf("Enter the name of the supply to be updated: ");
    scanf("%s", oldBuffer);
    printf("Enter the updated name of the supply: ");
    scanf("%s", newBuffer);

    for (int j = 0; j < numSupplies; j++)
    {
        if (strcmp(speciesSupplies[index][j], oldBuffer) == 0)
        {
            strcpy(speciesSupplies[index][j], newBuffer);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("The supply name entered (%s) is not found for species number %d.\n", oldBuffer, updateSpecies);
    }
}

void removeSupplies(char ***speciesSupplies, int *numSpecies, int numSupplies)
{
    int removeSpecies;
    printf("Enter the species to be removed: ");
    scanf("%d", &removeSpecies);
    if (removeSpecies > *numSpecies)
    {
        printf("Invalid species number!\n");
        return;
    }
    int index = removeSpecies - 1;

    for (int j = 0; j < numSupplies; j++)
    {
        free(speciesSupplies[index][j]);
    }
    free(speciesSupplies[index]);

    // Shifting the unchanged species up & decreasing species count
    for (int i = index; i < *numSpecies - 1; i++)
    {
        speciesSupplies[i] = speciesSupplies[i + 1];
    }
    (*numSpecies)--;

    printf("Species %d has been removed successfully.\n", removeSpecies);
}

void displayInventory(char ***speciesSupplies, int numSpecies, int numSupplies)
{
    for (int i = 0; i < numSpecies; i++)
    {
        printf("\nSupplies for pet species %d:\n", i + 1);
        for (int j = 0; j < numSupplies; j++)
        {
            printf("\t%s\n", speciesSupplies[i][j]);
        }
    }
}
