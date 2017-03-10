/* Aaks the user to enter 5 numbers, then adds them together and displays the sum */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 30 January 2017

Purpose: Aaks the user to enter 5 numbers, then adds them together and displays the sum

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int integer1, integer2, integer3, integer4, integer5, answer;

    printf("Please enter 5 numbers to calculate the sum! Enter one then press enter!\n");

    scanf("%d%d%d%d%d", &integer1, &integer2, &integer3, &integer4, &integer5);

    answer = integer1 + integer2 + integer3 + integer4 + integer5;

    printf("The sum of %d,%d,%d,%d and %d is %d", integer1, integer2, integer3, integer4, integer5, answer);
    return 0;
}
