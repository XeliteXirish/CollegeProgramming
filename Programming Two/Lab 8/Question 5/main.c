#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculateMean(int *p);
double calculateSD(int *numbers);

int main()
{
    int x = 0, *p = malloc(50 * sizeof(int));
    srand(time(NULL));

    printf("Numbers:\n");
    for (x = 0; x < 50; x ++)
    {
        *(p + x) = (rand() % 100) + 1;
        printf("%d\t", *(p + x));
        if ((x + 1) % 10 == 0) printf("\n");
    }

    int count = 0;
    double mean = calculateMean(p), standardD = calculateSD(p), UCL = standardD + 3, LCL = standardD - 3;
    for (x = 0; x < 50; x++) {
        if (!(*(p + x) >= LCL && *(p + x) <= UCL)) count++;
    }

    printf("\n\nMean: %lf\nStandard Deviation: %.0lf\nUCL: %.0lf\nLCL: %.0lf\nOutside control limits: %d\n\n", mean, standardD, UCL, LCL, count);


    return 0;
}

double calculateMean(int *numbers) {
    int x = 0;
    double total = 0;

    for (x = 0; x < 50; x++) {
        total += *(numbers + x);
    }
    return total / 50;
}

double calculateSD(int *numbers) {
    int x;
    double standardDeviation = 0;
    double mean = calculateMean(numbers);

    for(x = 0; x < 50; x++){
        standardDeviation += pow((*(numbers + x)) - mean, 2);
    }

    return sqrt(standardDeviation / 50 - 1);
}
