/* ------------------------------------------------------------
Program: main.c
Programmer: Shaun O'Neill
ID: B00098451
Date: 22 September 2017
Purpose: Prints some maths to the console
------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int even = 0, odd = 0, y;

    for(x = 0; x < 20; x++){

        printf("Please enter number %d: ", x + 1);
        scanf("%d", &y);

        if (y == 0) return printf("\nSorry but you cannot enter 0..Exiting");

        if (y % 2 == 0) even++;
        else if (y % 2 != 0) odd++;
    }

    printf("\nOdd Numbers: %d - Even Numbers: %d", odd, even);

    return 0;
}
