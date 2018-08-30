#include <stdio.h>
#include <stdlib.h>
#define ITERATIONS 1000

// Returns approximate value of e^x
// using sum of first n terms of Taylor Series
double exponential(int itters, double x)
{
    int i; // Have to do this in case you're running an old version of c
    double sum = 1.0f; // initialize sum of series

    for (i = itters - 1; i > 0; --i ) {
        sum = 1 + x * sum / i; // Calculates 1 + x + 1/2! + 1/3! etc
    }

    return sum; // Returns the answer
}

int main()
{
    double num, answer;
    printf(" Shaun O'Neill:B00098451 - Press Ctrl+C to exit the program!\n");

    while (1) {
        printf("\nPlease enter the value for x: ");
        scanf("%lf", &num); // Stores the value 'x' as variable num

        answer = exponential(ITERATIONS, num); // Calculates the exp for given itters, we use 1000

        printf("\tThe value for f(x) at x = %.3lf is equal %.3f\n\n", num, answer);
    }
    return 0;
}
