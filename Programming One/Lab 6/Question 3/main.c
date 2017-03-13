/*Calculates the height of a building from the time it takes to fall */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 13 March 201

Purpose: Calculates the height of a building from the time it takes to fall

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double t1, t2, t3, tAverage, height;

    printf("----------------------------------------------------------\n");
    printf("Please enter the first time: ");
    scanf("%lf", &t1);

    printf("Please enter the second time: ");
    scanf("%lf", &t2);

    printf("Please enter the third time: ");
    scanf("%lf", &t3);

    tAverage = (t1 + t2 + t3) / 3;

    height = (9.81 * pow(tAverage, 2)) * 0.5;

    printf("\n\nHeight of the building: %.2lf meters", height);
    printf("\n----------------------------------------------------------\n");

    return 0;
}
