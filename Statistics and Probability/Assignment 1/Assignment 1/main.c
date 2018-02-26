#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculateStandardD(double values[], int amount);
double calculateMean(double values[], int amount);
double calculateMedian(double values[], int amount);

double set1[] = {15, 20, 25, 30, 35, 40};
double set2[] = {};
double set3[] = {};

int main()
{
    printf("S %.2lf", calculateStandardD(set1, 6));
    return 0;
}

double calculateMean(double values[], int amount)
{
    int x;
    double sum = 0.0;

    for (x = 0; x < amount; x++)
    {
        sum += values[x];
    }
    return sum / amount;
}

double calculateStandardD(double values[], int amount)
{
    int i;
    double standardDeviation = 0.0;
    double mean = calculateMean(values, amount);

    for(i=0; i< amount; ++i)
    {
        standardDeviation += pow(values[i] - mean, 2);
    }

    return sqrt(standardDeviation/amount);
}

double calculateMedian(double values[], int amount)
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
