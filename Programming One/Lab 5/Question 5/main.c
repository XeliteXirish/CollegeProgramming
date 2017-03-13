/*Displays a box of a given number */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 13 March 201

Purpose: Displays a box of a given number

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x, y, z;

    printf("-------------------------------------------------------\n");
    printf("Please enter a number between one and twenty: ");
    scanf("%d", &z);

    printf("\n");

    if (z < 1 || z > 20)
    {
        printf("\nPlease enter a value only between one and twenty!\n");
        return;
    }

    for (x = 0; x < z; x++)
    {
        for(y = 0; y < z; y++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("-------------------------------------------------------\n");
    return 0;
}
