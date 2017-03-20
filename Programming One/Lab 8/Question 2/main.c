#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double random[10];
    srand(time(NULL));

    for(x = 0; x < 10; x++){
        random[x] = 1 + (rand() & 1000);
    }

    printf("Array output:\n\n");
    for(x = 0; x < 10; x++){
            printf("Number %d: %.2lf\n", x, random[x]);
    }

    return 0;
}
