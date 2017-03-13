/*Displays a multiplication table */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 13 March 201

Purpose: Displays a multiplication table

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nValue, x, y, z = 1;

    printf("----------------------------------------------------------\n");
    printf("Please enter a N value: ");
    scanf("%d", &nValue);

    printf("\n\n");

    for (x = 1; x <= nValue; x++){

        printf("%d - ", x);

        for (y = 1; y <= nValue; y++){

            printf("%3d", y * z);
        }

        z++;
        printf("\n");
    }
    printf("----------------------------------------------------------\n");

    return 0;
}
