/*Outputs your name a random amount of times */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 27 March 2017

Purpose: Outputs your name a random amount of times

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x;
    char name[256];
    srand(time(NULL));

    printf("Please enter your name: ");
    scanf("%s", &name);

    for (x = 0; x < 1 + rand() % 20; x++){
        printf("Output %d: %s\n", x + 1, name);
    }

    return 0;
}
