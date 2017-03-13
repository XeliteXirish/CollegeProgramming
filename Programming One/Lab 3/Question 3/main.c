/* Calculates the interest due on an amount */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 20 Feb 2017

Purpose: Calculates the interest due on an amount

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double cash, interest, interestDue, cashDue;
    printf("-------------------------------------------\n");

    printf("Please enter a cash amount (Euros): ");
    scanf("%lf", &cash);

    printf("Please enter a tax rate (percent): ");
    scanf("%lf", &interest);

    interestDue = cash * (interest / 100);
    cashDue = cash + interestDue;

    printf("\nInterest due (euros): %.0lf\n", interestDue);
    printf("Total amount (euros): %.0lf\n", cashDue);
    printf("-------------------------------------------\n");

    return 0;
}
