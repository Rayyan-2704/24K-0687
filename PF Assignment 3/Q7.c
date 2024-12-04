#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    float score;
    int duration;
} MediaInfo;

typedef struct
{
    int quality;
    int watchHistory;
    int dataUsage;
} UserDevicePreferences;

double **allocateEngagementData(int rows, int cols);
UserDevicePreferences ***allocateUserDeviceData(int users, int gadgets);
MediaInfo ***allocateMediaInfo(int genres, int items);
void populateEngagementData(double **data, int users, int genres);
void populateUserDeviceData(UserDevicePreferences ***data, int users, int gadgets);
void populateMediaInfo(MediaInfo ***data, int genres, int items);
void displayEngagementData(double **data, int users, int genres);
void displayUserDeviceData(UserDevicePreferences ***data, int users, int gadgets);
void displayMediaInfo(MediaInfo ***data, int genres, int items);

int main()
{
    int numUsers, numGenres, numGadgets, numItems, i, j;
    printf("Enter the number of users: ");
    scanf("%d", &numUsers);
    printf("Enter the number of genres: ");
    scanf("%d", &numGenres);
    printf("Enter the number of gadgets: ");
    scanf("%d", &numGadgets);
    printf("Enter the number of media items: ");
    scanf("%d", &numItems);
    double **engagementData = allocateEngagementData(numUsers, numGenres);
    UserDevicePreferences ***userDeviceData = allocateUserDeviceData(numUsers, numGadgets);
    MediaInfo ***mediaData = allocateMediaInfo(numGenres, numItems);
    populateEngagementData(engagementData, numUsers, numGenres);
    populateUserDeviceData(userDeviceData, numUsers, numGadgets);
    populateMediaInfo(mediaData, numGenres, numItems);
    displayEngagementData(engagementData, numUsers, numGenres);
    displayUserDeviceData(userDeviceData, numUsers, numGadgets);
    displayMediaInfo(mediaData, numGenres, numItems);
    for (i = 0; i < numUsers; i++)
    {
        free(engagementData[i]);
    }
    free(engagementData);
    for (i = 0; i < numUsers; i++)
    {
        for (j = 0; j < numGadgets; j++)
        {
            free(userDeviceData[i][j]);
        }
        free(userDeviceData[i]);
    }
    free(userDeviceData);
    for (i = 0; i < numGenres; i++)
    {
        for (j = 0; j < numItems; j++)
        {
            free(mediaData[i][j]);
        }
        free(mediaData[i]);
    }
    free(mediaData);
    return 0;
}

double **allocateEngagementData(int rows, int cols)
{
    int i;
    double **data = (double *)malloc(rows * sizeof(double));
    for (i = 0; i < rows; i++)
    {
        data[i] = (double *)malloc(cols * sizeof(double));
    }
    return data;
}

UserDevicePreferences ***allocateUserDeviceData(int users, int gadgets)
{
    int i, j;
    UserDevicePreferences **data = (UserDevicePreferences *)malloc(users * sizeof(UserDevicePreferences *));
    for (i = 0; i < users; i++)
    {
        data[i] = (UserDevicePreferences *)malloc(gadgets * sizeof(UserDevicePreferences));
        for (j = 0; j < gadgets; j++)
        {
            data[i][j] = (UserDevicePreferences *)malloc(sizeof(UserDevicePreferences));
        }
    }
    return data;
}

MediaInfo ***allocateMediaInfo(int genres, int items)
{
    int i, j;
    MediaInfo **data = (MediaInfo *)malloc(genres * sizeof(MediaInfo *));
    for (i = 0; i < genres; i++)
    {
        data[i] = (MediaInfo *)malloc(items * sizeof(MediaInfo));
        for (j = 0; j < items; j++)
        {
            data[i][j] = (MediaInfo *)malloc(sizeof(MediaInfo));
        }
    }
    return data;
}

void populateEngagementData(double **data, int users, int genres)
{
    int i, j;
    for (i = 0; i < users; i++)
    {
        for (j = 0; j < genres; j++)
        {
            data[i][j] = (i + 1) * (j + 1) * 0.1;
        }
    }
}

void populateUserDeviceData(UserDevicePreferences ***data, int users, int gadgets)
{
    int i, j;
    for (i = 0; i < users; i++)
    {
        for (j = 0; j < gadgets; j++)
        {
            data[i][j]->quality = (j + 1) * 800;
            data[i][j]->watchHistory = i * 5;
            data[i][j]->dataUsage = 1200 + i * 200;
        }
    }
}

void populateMediaInfo(MediaInfo ***data, int genres, int items)
{
    int i, j;
    for (i = 0; i < genres; i++)
    {
        for (j = 0; j < items; j++)
        {
            snprintf(data[i][j]->name, sizeof(data[i][j]->name), "Genre %d - Item %d", i + 1, j + 1);
            data[i][j]->score = (i + 1) * 0.5 + 3.0;
            data[i][j]->duration = 100 + j * 20;
        }
    }
}

void displayEngagementData(double **data, int users, int genres)
{
    int i, j;
    printf("Engagement Data:\n");
    for (i = 0; i < users; i++)
    {
        for (j = 0; j < genres; j++)
        {
            printf("%.2f ", data[i][j]);
        }
        printf("\n");
    }
}

void displayUserDeviceData(UserDevicePreferences ***data, int users, int gadgets)
{
    int i, j;
    printf("\nUser Device Data:\n");
    for (i = 0; i < users; i++)
    {
        for (j = 0; j < gadgets; j++)
        {
            printf("User %d, Gadget %d - Quality: %d, Watch History: %d, Data Usage: %d KB\n",
                   i + 1, j + 1, data[i][j]->quality, data[i][j]->watchHistory, data[i][j]->dataUsage);
        }
    }
}

void displayMediaInfo(MediaInfo ***data, int genres, int items)
{
    int i, j;
    printf("\nMedia Info:\n");
    for (i = 0; i < genres; i++)
    {
        for (j = 0; j < items; j++)
        {
            printf("Genre %d, Item %d - Name: %s, Score: %.1f, Duration: %d min\n",
                   i + 1, j + 1, data[i][j]->name, data[i][j]->score, data[i][j]->duration);
        }
    }
}
