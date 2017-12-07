#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define A2B(A, B) (A^B)
#define INVERSE(A) (A)
#define MIN(A, B) ((A < B) ? A : B)
#define MAX(A, B) ((A > B) ? A : B)
#define CUBE(A) (A ^ 3)

int main()
{
    printf("LESS %d", MIN(12, 10));
    return 0;
}
