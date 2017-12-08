#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define A2B(A, B) pow(A, B)
#define INVERSE(A) (1 / A)
#define MIN(A, B) ((A < B) ? A : B)
#define MAX(A, B) ((A > B) ? A : B)
#define CUBE(A) pow(A, 3)

int main()
{
    FILE *output = fopen("output.txt", "w");
    fprintf(output, "A2B (2^3) = %.1lf\n", A2B(2, 3));
    fprintf(output, "INVERSE (2) = %.1lf\n", INVERSE(2.0));
    fprintf(output, "MIN (10, 20) = %d\n", MIN(10, 20));
    fprintf(output, "MAX(20, 30) = %d\n", MAX(20, 30));
    fprintf(output, "CUBE (3) = %.1lf\n", CUBE(3));
    fclose(output);

    printf("Reading from file...\n\n");
    FILE *input = fopen("output.txt", "r");
    char c;
    int x = 0;
    do
    {
        fscanf(input, "%c", &c);
        printf("%c", c);
        if (c == '\n') x++;

    }
    while (x < 5);
    fclose(input);

    return 0;
}
