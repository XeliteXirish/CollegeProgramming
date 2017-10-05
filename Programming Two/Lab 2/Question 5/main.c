#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

double calculateEnds(double r);

int main()
{
    double r, h, cost;

    printf("Please enter the radius: ");
    scanf("%lf", &r);

    printf("Please enter the height: ");
    scanf("%lf", &h);

    printf("\nPlease enter the cost: ");
    scanf("%lf", &cost);

    double surfaceArea = calculateEnds(r, h)

    return 0;
}

double calculateSurfaceArea(double r, double h) {

    double ends = (PI * (pow(r), 2) * 2);
    double body = (2 * (PI * r * h))

    return ends + body;
}
