#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degrees = 0, x;
    double radians = 0;

    printf("\n------------------------------------------------------\n");
    for (x = 1; x <= 360; x++)
    {

        radians = x * (3.14 / 180);
        printf("%d degrees is equal to %.3lf radians.\n", x, radians);
    }

    printf("\n------------------------------------------------------\n");

    return 0;
}
