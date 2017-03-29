#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SQ(x) (x*x)
#define CUBE(x) (SQ(x) *x)
#define F_POW(x) sqrt(sqrt(CUBE(x))) //fractional power

int main()
{
    double x;

    printf("Please enter a value for x: ");
    scanf("%lf", &x);

    printf("Square: %lf\nSqare (Marco): %lf\n\n", pow(x, 2), SQ(x));
    printf("Cube: %lf\nCube (Marco): %lf\n\n", pow(x, 3), CUBE(x));
    printf("Fractional power (Marco): %lf\n\n", F_POW(x));
    return 0;
}
