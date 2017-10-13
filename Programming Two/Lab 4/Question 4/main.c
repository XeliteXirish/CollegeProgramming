#include <stdio.h>
#include <stdlib.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main()
{
    int a[] = {5, 4, 3, 1, 53, 64, 64, 53, 6, 3}, n = 10, largest, second_largest, x;

    printf("Array Values: \n");
    for (x = 0; x < n; x++)
    {
        printf("%d, ", a[x]);
    }

    find_two_largest(a, n, &largest, &second_largest);

    printf("\n\nLargest: %d\tSecond Largest: %d\n", largest, second_largest);
    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int x;
    *largest = 0, *second_largest = 0;

    // Largest
    for (x = 0; x < n; x++)
    {
        if (a[x] > *largest) *largest = a[x];
    }

    // Second Largest
    for (x = 0; x < n; x++)
    {
        if (a[x] < *largest && a[x] > a[x-1]) *second_largest = a[x];
    }
}
