/*Retuns the grade you got from a percentage */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 13 March 201

Purpose: Retuns the grade you got from a percentage

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade;

    printf("----------------------------------------\n");

    printf("Please enter your grade as a percentage: ");
    scanf("%f", &grade);

    if (grade >= 80)
    {
        printf("\nYou got an A!\n");

    }
    else if (grade >= 70 && grade < 80)
    {
        printf("\nYou got a B!\n");

    }
    else if (grade >= 50 && grade < 70)
    {
        printf("\nYou got a C!\n");

    }
    else if (grade >= 40 && grade < 50)
    {
        printf("\nYou got a D!\n");

    }
    else if (grade <= 40)
    {
        printf("\nYou got an F!\n");
    }

    printf("----------------------------------------\n");

    return 0;
}
