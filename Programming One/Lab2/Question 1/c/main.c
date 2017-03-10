/* Calculates the area of a triangle */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 06 November 2017

Purpose: Calculates the area of a triangle

------------------------------------------------------------*/

//Program 1c---------------------------------
#include <stdio.h>
int main()
{

    int base , height , area;

    printf("Enter base and height:\n");

    scanf("%d%d", &base , &height);

    area = (base * height) * 0.5;

    printf("Area = %d\n", area);

    return 0;
}
