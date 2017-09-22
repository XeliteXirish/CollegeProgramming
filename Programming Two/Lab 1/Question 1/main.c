/* ------------------------------------------------------------
Program: main.c
Programmer: Shaun O'Neill
ID: B00098451
Date: 22 September 2017
Purpose: Accepts 3 intergers
------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double numbers[3] = {}, smallest, largest = 0;

    printf("Please enter the first number: ");
    scanf("%lf",&numbers[0]);

    printf("Please enter the second number: ");
    scanf("%lf",&numbers[1]);

    printf("Please enter the third number: ");
    scanf("%lf",&numbers[2]);

    printf("\n\nThe numbers you entered are: %.2lf, %.2lf, %.2lf", numbers[0], numbers[1], numbers[2]);
    printf("\nThe sum of the numbers are: %.2lf", numbers[0] + numbers[1] + numbers[2]);
    printf("\nThe average is: %.2lf", (numbers[0] + numbers[1] + numbers[2]) / 3);
    printf("\nThe product of the numbers: %.2lf", numbers[0] * numbers[1] * numbers[2]);

    smallest = numbers[0];
    largest = numbers[0];

    for(x = 0; x < 3; x++){
        if (numbers[x] > largest) largest = numbers[x];
        if (numbers[x] < smallest) smallest = numbers[x];
    }

    printf("\nThe largest number is: %.2lf\nThe smallest number is: %.2lf", largest, smallest);

    return 0;
}
