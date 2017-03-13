/* Calculates the height of a cylinder  */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 20 Feb 2017

Purpose: Calculates the height of a cylinder

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double radius, volume, height, pie, actualVolume;

    printf("------------------------------------------------------\n");
    printf("Please enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    printf("Please enter the volume of the cylinder: ");
    scanf("%lf", &volume);

    pie = 3.14;

    height = volume / (pie * (radius * radius));

    actualVolume = pie * (radius * radius) * height;

    printf("\nThe height of the cylinder is: %.2lf\n", height);
    printf("The actual volume of the cylinder is: %.2lf\n", actualVolume);
    printf("------------------------------------------------------\n");

    return 0;
}
