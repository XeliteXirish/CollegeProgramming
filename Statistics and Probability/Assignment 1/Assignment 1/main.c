#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calStandardD(double values[], int amount);
double calMean(double values[], int amount);
double calMedian(double values[], int amount);
double calLowerQuart(double values[], int amount);
double calHigherQuart(double values[], int amount);

double set1[] = {256.18, 261.83, 256.61, 255.25, 250.75, 251.18, 245.63, 250.74, 251.02, 252.26, 249.62,
252.67, 258.26, 252.70, 257.90, 262.36, 256.97, 254.54, 256.52, 251.24, 246.58, 244.34, 248.91, 245.28};
double set2[] = {252.70, 257.90, 262.36, 256.97, 254.54, 256.52, 251.24, 246.58, 244.34, 248.91, 245.28,
239.72, 245.07, 249.12, 254.81, 251.48, 257.16, 253.60, 249.20, 252.82, 251.66, 249.48, 245.38, 242.31, 237.15};
double set3[] = {258.47, 252.91, 258.11, 262.57, 257.18, 254.75, 256.73, 251.45, 246.79, 244.55, 249.12, 245.49,
 239.93, 245.28, 249.33, 255.02, 251.69, 257.37, 253.81, 249.41, 253.03, 251.87, 249.69, 245.59, 242.52, 237.36};

int main()
{
    int amountValSet1 = 24, amountValSet2 = 25, amountValSet3 = 26, x;

    // Set 1
    printf("Method A:");
    printf("\n\tStandard Deviation: %.2lfmm", calStandardD(set1, amountValSet1));
    printf("\n\tMean: %.2lfmm", calMean(set1, amountValSet1));
    printf("\n\tMedian: %.2lfmm", calMedian(set1, amountValSet1));
    printf("\n\tLower Quart: %.2lfmm", calLowerQuart(set1, amountValSet1));
    printf("\n\tUpper Quart: %.2lfmm", calHigherQuart(set1, amountValSet1));

    // Set 2
    printf("\n\nMethod B:");
    printf("\n\tStandard Deviation: %.2lfmm", calStandardD(set2, amountValSet2));
    printf("\n\tMean: %.2lfmm", calMean(set2, amountValSet2));
    printf("\n\tMedian: %.2lfmm", calMedian(set2, amountValSet2));
    printf("\n\tLower Quart: %.2lfmm", calLowerQuart(set2, amountValSet2));
    printf("\n\tUpper Quart: %.2lfmm", calHigherQuart(set2, amountValSet2));

    // Set 3
    printf("\n\nMethod C:");
    printf("\n\tStandard Deviation: %.2lfmm", calStandardD(set3, amountValSet3));
    printf("\n\tMean: %.2lfmm", calMean(set3, amountValSet3));
    printf("\n\tMedian: %.2lfmm", calMedian(set3, amountValSet3));
    printf("\n\tLower Quart: %.2lfmm", calLowerQuart(set2, amountValSet3));
    printf("\n\tUpper Quart: %.2lfmm\n\n", calHigherQuart(set2, amountValSet3));

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

double calLowerQuart(double values[], int amount)
{
    int pos = amount / 4; // Uses an int so it rounds to the nearest position
    return values[pos];
}

double calHigherQuart(double values[], int amount)
{
    int pos = (3 * amount) / 4; // Uses an int so it rounds to the nearest position
    return values[pos];
}

double calMedian(double values[], int amount)
{
    double temp;
    int x, y;
    // the following two loops sort the array x in ascending order
    for(x=0; x < amount - 1; x++)
    {
        for(y=x+1; y < amount; y++)
        {
            if(values[y] < values[x])
            {
                // swap elements
                temp = values[x];
                values[x] = values[y];
                values[y] = temp;
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
