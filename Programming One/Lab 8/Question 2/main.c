/*Stores random numbers in an array */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 27 March 2017

Purpose: Stores random numbers in an array

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double random[10];
    srand(time(NULL));

    for(x = 0; x < 10; x++)
    {
        random[x] = 1 + (rand() & 1000);
    }

    printf("Array output:\n\n");
    for(x = 0; x < 10; x++)
    {
        printf("Number %d: %.2lf\n", x + 1, random[x]);
    }

    return 0;
}
