#include <stdio.h>
#include <stdlib.h>

#define VOLT(V, R1, R2, R3) (V / (R1 + R2 + R3))

int main()
{
    double r1, r2, r3, voltage;
    printf("Please enter values for R1, R2 and R2: ");
    scanf("%lf %lf %lf", &r1, &r2, &r3);
    printf("Please enter the voltage: ");
    scanf("%lf", &voltage);

    printf("\nCurrent: %.2lf", VOLT(voltage, r1, r2, r3));

    return 0;
}
