#include <stdio.h>
#include <stdlib.h>

#define DOUBLE(x) 2*x

int main()
{
    printf("Initial Macro:\n");
    printf("DOUBLE(1+2): %d\n", DOUBLE(1+2));
    printf("DOUBLE(2): %d\n", DOUBLE(2));
    printf("4 / DOUBLE(2): %d\n", 4/DOUBLE(2));

    #define DOUBLE(x) ((2) * (x))
    printf("\n\nFixed Macro:\n");
    printf("DOUBLE(1+2): %d\n", DOUBLE(1+2));
    printf("DOUBLE(2): %d\n", DOUBLE(2));
    printf("4 / DOUBLE(2): %d\n", 4/DOUBLE(2));

    return 0;
}
