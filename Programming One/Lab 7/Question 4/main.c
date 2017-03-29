/*Outputs some maths to the console */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 27 March 2017

Purpose: Outputs some maths to the console

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y;
    double number = 0, square, cube, root;

    printf("----------------------------------------\n");
    printf("Number\tSquare\tCube\tRoot\n");

    for(x = 0; x < 10; x++)
    {

        square = pow(number, 2);
        cube = pow(number, 3);
        root = sqrt(number);

        printf("%.0lf\t%.1lf\t%.1lf\t%.1lf\n", number, square, cube, root);
        number++;
    }

        printf("----------------------------------------\n");
    return 0;
}
