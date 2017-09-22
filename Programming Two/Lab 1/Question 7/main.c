#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;

    printf("Number\tSquare\tCube\n");
    for(x = 0; x <= 10; x++) {
        printf("%d\t%.0lf\t%.0lf\n", x, pow(x, 2), pow(x, 3));
    }

    return 0;
}
