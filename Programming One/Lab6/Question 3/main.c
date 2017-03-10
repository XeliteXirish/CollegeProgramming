#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double t1, t2, t3, tAverage, height;

    printf("Please enter the first time: ");
    scanf("%lf", &t1);


    printf("Please enter the second time: ");
    scanf("%lf", &t2);

    printf("Please enter the third time: ");
    scanf("%lf", &t3);

    tAverage = (t1 + t2 + t3) / 3;

    height = (9.81 * pow(tAverage, 2)) * 0.5;

    printf("\nHeight of the building: %.2lf", height);

    return 0;
}
