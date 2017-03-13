/* Prints out some maths problems */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 06 November 2017

Purpose: Prints out some maths problems

------------------------------------------------------------*/

//Program 1b ------------------------------
#include <stdio.h>
int main ()
{
    double one = 9.0/4.0;
    double two = 17.0/3.0;

    printf("one = %.2lf\n", one);
    printf("two = %.2lf\n\n", two);

    printf("two divided by one is %.2lf\n",two/one );
    printf("two multiplied by one is %.2lf\n",two*one);

}