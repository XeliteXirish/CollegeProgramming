#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calStandardD(double values[], int amount);
double calMean(double values[], int amount);
double calMedian(double values[], int amount);
double calLowerQuart(double values[], int amount);
double calHigherQuart(double values[], int amount);

double set1[] = {15, 20, 25, 30, 35, 40};
double set2[] = {};
double set3[] = {};

int main()
{
    int amountValues = 6;
    double standardD, mean;

    // Set 1
    printf("Set 1:");
    printf("\n\tStandard Deviation: %.2lfmm", calStandardD(set1, amountValues));
    printf("\n\tMean: %.2lfmm", calMean(set1, amountValues));
    printf("\n\tMedian: %.2lfmm", calMedian(set1, amountValues));
    printf("\n\tLower Quart: %.2lfmm", calLowerQuart(set1, amountValues));
    printf("\n\tUpper Quart: %.2lfmm", calHigherQuart(set1, amountValues));

    // Set 2
    printf("\n\nSet 2:");
    printf("\n\tStandard Deviation: %.2lfmm", calStandardD(set2, amountValues));
    printf("\n\tMean: %.2lfmm", calMean(set2, amountValues));
    printf("\n\tMedian: %.2lfmm", calMedian(set2, amountValues));
    printf("\n\tLower Quart: %.2lfmm", calLowerQuart(set2, amountValues));
    printf("\n\tUpper Quart: %.2lfmm", calHigherQuart(set2, amountValues));

    // Set 3
    printf("\n\nSet 3:");
    printf("\n\tStandard Deviation: %.2lfmm", calStandardD(set3, amountValues));
    printf("\n\tMean: %.2lfmm", calMean(set3, amountValues));
    printf("\n\tMedian: %.2lfmm", calMedian(set3, amountValues));
    printf("\n\tLower Quart: %.2lfmm", calLowerQuart(set2, amountValues));
    printf("\n\tUpper Quart: %.2lfmm", calHigherQuart(set2, amountValues));

    return 0;
}

double calMean(double values[], int amount)
{
    int x;
    double sum = 0.0;

    for (x = 0; x < amount; x++)
    {
        sum += values[x];
    }
    return sum / amount;
}

double calStandardD(double values[], int amount)
{
    int x;
    double standardDeviation = 0.0;
    double mean = calMean(values, amount);

    for(x=0; x < amount; ++x)
    {
        standardDeviation += pow(values[x] - mean, 2);
    }

    return sqrt(standardDeviation/amount);
}

double calLowerQuart(double values[], int amount) {
    int pos = amount / 4; // Uses an int so it rounds to the nearest position
    return values[pos];
}

double calHigherQuart(double values[], int amount) {
    int pos = (3 * amount) / 4; // Uses an int so it rounds to the nearest position
    return values[pos];
}

double calMedian(double values[], int amount)
{
    double temp;
    int i, j;
    // the following two loops sort the array x in ascending order
    for(i=0; i < amount - 1; i++)
    {
        for(j=i+1; j < amount; j++)
        {
            if(values[j] < values[i])
            {
                // swap elements
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }

    if(amount%2==0)
    {
        // if there is an even number of elements, return mean of the two elements in the middle
        return((values[amount / 2] + values[amount/2 - 1]) / 2.0);
    }
    else
    {
        // else return the element in the middle
        return values[amount/2];
    }
}
