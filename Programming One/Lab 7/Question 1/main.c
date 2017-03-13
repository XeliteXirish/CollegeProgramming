#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DENSITY_STEEL 2400
#define PIE 3.14

int main()
{

    double height, diameter, volume, mass;

    printf("----------------------------------------\n");
    printf("Please enter the height: ");
    scanf("%lf", &height);

    printf("Please enter the diameter: ");
    scanf("%lf", &diameter);

    volume = PIE * (pow(diameter / 2, 2) * height);
    mass = DENSITY_STEEL * volume;

    printf("The volume is: %.2lf", volume);
    printf("The mass is: %.2lf", mass);


    printf("----------------------------------------\n");

    return 0;
}
