#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{

    int *p = malloc(10 * sizeof(int));
    double *q = malloc(10 * sizeof(double));

    int x, *sumone = malloc(10 * sizeof(int));
    double *sumtwo = malloc(10 * sizeof(double));

    *sumone = 0;
    *sumtwo = 0;

    for (x = 0; x < 10; x ++)
    {
        *(p + x) = x + 1;
        *(q + x) = x * 1.5;
        *sumone = *sumone + *(p + x);
        *sumtwo = *sumtwo + *(q + x);
    }

    for (x = 0; x < 10; x ++)
    {
        printf("(P + %d) = %d\t\t (Q + %d) = %.2lf\n", x, *(p + x), x, *(q + x));
    }

    printf("\nACCUMULATIVE OF ONE = %d\tACCUMULATIVE OF TWO = %.2lf\n", *sumone, *sumtwo);

    return 0;
}
