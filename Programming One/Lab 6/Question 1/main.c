/*Calculates the sum of a given number of harmonics */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 13 March 201

Purpose: Calculates the sum of a given number of harmonics

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    double nValue, output = 0;
    int x;

    printf("----------------------------------------\n");

    printf("Please enter a value for n: ");
    scanf("%lf", &nValue);

    for (x = 1; x <= nValue; x++){

        output += (1.0 / x);

    }

    printf("\nCalculated value: %lf", output);
    printf("\n----------------------------------------\n");

    return 0;
}
