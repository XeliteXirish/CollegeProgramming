/* ------------------------------------------------------------
Program: main.c
Programmer: Shaun O'Neill
ID: B00098451
Date: 22 September 2017
Purpose: Create an array having 10 elements and output the values to an array
------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10] = {}, x;

    for (x = 0; x < 10; x++) {
     printf("Please enter number %d: ", x + 1);

     scanf("%d", &numbers[x]);
    }

    printf("\n\nYou entered the following numbers:\n");
    for (x = 0; x < 10; x++) {
        printf("%d, ", numbers[x]);
    }

    return 0;
}
