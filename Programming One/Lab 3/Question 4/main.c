/* Reverses a given number */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 20 Feb 2017

Purpose: Reverses a given number

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, reverseNo = 0;

    printf("-------------------------------------------\n");
    printf("Please enter three digit number: ");
    scanf("%d", &number);

    reverseNo = reverseNumber(number);

    printf("\nNumber reversed: %d\n", reverseNo);
    printf("-------------------------------------------");

    return 0;
}

int reverseNumber(int num)
{

    int sum = 0, rem, temp;

    for(temp = num; num > 0;)
    {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num = num / 10;
    }
    return sum;
}
