/* Define a structure to represent a point in 2D space with x and y coordinates. Implement
functions to calculate the distance between two points and to check if a point lies within
a specific rectangular boundary. */

#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} point;

float distance(point p1, point p2);
int check_for_boundary(point p, point bottom_left, point top_right);

int main()
{
    point p1, p2;
    printf("Enter the x and y coordinates of Point 1 respectively: ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter the x and y coordinates of Point 2 respectively: ");
    scanf("%f %f", &p2.x, &p2.y);

    printf("The distance between the points is %.2f\n", distance(p1, p2));

    point bottom_left, top_right;
    printf("Enter the coordinates of the bottom-left point of the rectangle: ");
    scanf("%f %f", &bottom_left.x, &bottom_left.y);
    printf("Enter the coordinates of the top-right point of the rectangle: ");
    scanf("%f %f", &top_right.x, &top_right.y);

    // Checking for point 1
    if (check_for_boundary(p1, bottom_left, top_right))
    {
        printf("Point 1 lies within the rectangular boundary\n");
    }
    else
    {
        printf("Point 1 does not lie within the rectangular boundary\n");
    }

    // Checking for point 2
    if (check_for_boundary(p2, bottom_left, top_right))
    {
        printf("Point 2 lies within the rectangular boundary\n");
    }
    else
    {
        printf("Point 2 does not lie within the rectangular boundary\n");
    }

    return 0;
}

float distance(point p1, point p2)
{
    float answer;
    answer = sqrtf(powf(p2.x - p1.x, 2) + powf(p2.y - p1.y, 2)); // sqrt and pow would have been used for double and int
    return answer;
}

int check_for_boundary(point p, point bottom_left, point top_right)
{
    if (p.x >= bottom_left.x && p.y >= bottom_left.y && p.x <= top_right.x && p.y <= top_right.y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}