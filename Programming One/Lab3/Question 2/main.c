/* Calculates volume and mass of an object */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 20 Feb 2017

Purpose: Calculates volume and mass of an object

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double length, width, height, volume, mass;

    printf("-------------------------------------------\n");
    printf("Please enter length, width and height (cm):\n");

    scanf("%lf %lf %lf", &length, &width, &height);

    volume = length * width * height;
    mass = volume * 2.7;

    printf("\n\nVolume: %.2lf (cm) cubed\n", volume);
    printf("Dimentional weight (Kg) : %.2lf\n", mass/1000);
    printf("-------------------------------------------\n");

    return 0;
}
