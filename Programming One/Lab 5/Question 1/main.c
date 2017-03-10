#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int x;
    double data[10];
    double mean, standardD, upperCl, lowerCl;

    printf("Please enter ten values: \n");
    for(x=0; x < 10; ++x)
    {
        scanf("%lf", &data[x]);
    }

    mean = calculateMean(data);
    standardD = calculateStandardDev(data);
    upperCl = calculateUpperCL(data);
    lowerCl = calculateLowerCL(data);

    printf("\nMean: %lf\n", mean);
    printf("Standard Deviation: %.2lf\n", standardD);
    printf("Upper critical limit: %.2lf\n", upperCl);
    printf("Lower critical limit: %.2lf\n", lowerCl);


    return 0;
}

int calculateMean(double data[])
{
    int i, sum = 0;
    for(i=0; i<10; ++i)
    {
        sum += data[i];
    }
    return sum/10;

}

int calculateStandardDev(double data[])
{

    float sum = 0.0, mean, standardDeviation = 0.0;

    int i;

    for(i=0; i<10; ++i)
    {
        sum += data[i];
    }

    mean = sum/10;

    for(i=0; i<10; ++i)
    {
        standardDeviation += pow(data[i] - mean, 2);
    }

    return sqrt(standardDeviation/10);
}

int calculateUpperCL(double data[]){

    double mean = calculateMean(data);
    double sd = calculateStandardDev(data);

    return sd * (mean + 3);
}

int calculateLowerCL(double data[]){

    double mean = calculateMean(data);
    double sd = calculateStandardDev(data);

    return sd * (mean - 3);
}
