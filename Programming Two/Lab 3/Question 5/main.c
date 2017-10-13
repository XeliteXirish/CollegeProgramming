#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double compute(double num);

int main()
{
    int num, x;

    printf("Please enter a value for X: ");
    scanf("%d", &num);

    for (x = num; x >= 1; x--) {
        printf("Value %d: %.2lf\n", x, compute(x));
    }

    return 0;
}

double compute(double num) {
    return (3 * pow(num, 5)) + (2 * pow(num, 4)) - (5 * pow(num, 3)) - pow(num, 2) + (7 * num) - 6;
}
