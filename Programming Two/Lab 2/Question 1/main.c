#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printStatus(double windSpeed);

int main()
{
    double windSpeed = 0;

    printf("Please enter the wind velocity: ");
    scanf("%lf", &windSpeed);

    printStatus(windSpeed);

    printf("\n\nCalculating random speed description..\n");

    srand(time(NULL));
    double randomSpeed = (rand() % 100 + 1);
    printStatus(randomSpeed);


    return 0;
}

void printStatus(double windSpeed) {
    printf("The wind speed of %.0lf is: ", windSpeed);

    if (windSpeed < 1) printf("calm\n");
    else if (windSpeed >= 1 && windSpeed <= 3) printf("light air\n");
    else if (windSpeed >= 4 && windSpeed <= 27) printf("breeze\n");
    else if (windSpeed >= 28 && windSpeed <= 47) printf("gale\n");
    else if (windSpeed >= 48 && windSpeed <= 63) printf("storm\n");
    else if (windSpeed > 63) printf("hurricane\n");
}
