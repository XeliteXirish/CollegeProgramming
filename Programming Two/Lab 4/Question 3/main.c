#include <stdio.h>
#include <stdlib.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main()
{
    double a[] = {5, 4, 3, 1, 53, 64, 67, 53, 6, 3}, sum, avg;
    int x, n = 10;

    printf("Array Values: \n");
    for (x = 0; x < 10; x++){
        printf("%.0lf, ", a[x]);
    }

    avg_sum(a, n, &sum, &avg);

    printf("\n\nSum: %.2lf\tAverage: %.2lf", sum, avg);
    return 0;
}

void avg_sum(double a[], int n, double *pSum, double *avg) {

    int x;
    double sum = 0;

    for (x = 0; x < n; x++){
        sum += a[x];
    }

    *pSum = sum;
    *avg = sum / n;
}
