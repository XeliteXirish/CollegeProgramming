/* ------------------------------------------------------------
Program: main.c
Programmer: Shaun O'Neill
ID: B00098451
Date: 22 September 2017
Purpose: Accepts values and outputs the sum
------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    bool x = true;
    double num, sum = 0;

    while (x) {
        printf("Please enter a number: ");
        scanf("%lf", &num);
        sum += num;

        printf("Sum: %.2lf\n\n", sum);

        if (num == 0) x = false;
    }
    printf("Exiting...");

    return 0;
}
