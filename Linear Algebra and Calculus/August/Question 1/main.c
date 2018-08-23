#include <stdio.h>
#include <stdlib.h>

#define ITERATIONS 10

float factorial(int n){
    if (n==0) return 1;
    else return n * factorial(n-1);
}

int main()
{
    float num, sum = 0;

    printf("Please enter the input variable: ");
    scanf("%f", &num);

    int c, i;
    for (i=0; i<= ITERATIONS; i++) {
        c = (i % 2) == 0 ? 1 : -1;
        sum = sum + (c * pow(num, 2 * i + 1)) / (factorial(2 * i + 1));
    }

    printf("The value is %f\n", sum);
    return 0;
}
