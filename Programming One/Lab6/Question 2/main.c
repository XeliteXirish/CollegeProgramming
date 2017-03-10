#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r1, r2, r3, rSeries, rParallel;


    printf("Please enter the value of resistor one: ");
    scanf("%lf", &r1);

    printf("Please enter the value of resistor two: ");
    scanf("%lf", &r2);

    printf("Please enter the value of resistor three: ");
    scanf("%lf", &r3);

    rSeries = r1 + r2 + r3;
    rParallel = 1/ ((1/r1)+ (1/r2) + (1/r3));

    printf("\nParallel resistance: %.3lf\n", rSeries);
    printf("Series resistance: %.3lf\n", rParallel);

    return 0;
}
