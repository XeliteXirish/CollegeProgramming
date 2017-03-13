/*Calculates the angle of a triangle given two sides */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 13 March 201

Purpose: Calculates the angle of a triangle given two sides

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, angle;

    printf("----------------------------------------\n");

    printf("Please enter the length of side b: ");
    scanf("%f", &b);

    printf("Please enter the length of side c: ");
    scanf("%f", &c);

    printf("Please enter the known length in degrees: ");
    scanf("%f", &angle);

    angle = angle * (3.14/360);

    a = sqrt(pow(b, 2) + pow(c, 2) - (2 * b * c) * cos(angle));

    printf("\nSide A = %.2f\n", a);

    printf("----------------------------------------");

    return 0;
}
