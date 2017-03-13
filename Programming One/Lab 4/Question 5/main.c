#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double CSA, inertia, modulus;
    int x, y;
    int base[] = {2, 4, 6, 8, 10};
    int heights[] = {2, 4, 6, 8, 10, 12};

    int sizeBase = sizeof(base)/sizeof(base[0]);
    int sizeHeight = sizeof(heights)/sizeof(heights[0]);

    printf("------------------------------------------------------------------\n");
    printf("  Cross Sectional Area\t   Moment of inertia\t  Section modulus\n\n");

    for (x = 0; x < sizeBase; x++){

        for (y = 0; y < sizeHeight; y++){

            CSA = base[x] * heights[y];
            inertia = (pow(base[x] * heights[y], 3) / 12);
            modulus = CSA / 6;

            //printf("%d\t%d\n", base[x], heights[y]);
            printf("|\t%.2lf \t\t|\t %.2lf   \t|\t %.2lf \t |\n", CSA, inertia, modulus);
        }
    }
    printf("------------------------------------------------------------------\n");

    return 0;
}
