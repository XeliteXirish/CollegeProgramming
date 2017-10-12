#include <stdio.h>
#include <stdlib.h>

float largest(float *a, float *b);

int main()
{
    float *a, *b, num1, num2, bigger = 0;
    a = &num1;
    b = &num2;

    while (bigger != num1 || bigger != num2) {
        printf("\nPlease enter number one: ");
        scanf("%f", &num1);

        printf("\n\nPlease enter number two: ");
        scanf("%f", &num2);

        bigger = largest(a, b);
    }

    printf("\nThe biggest number is: %f", bigger);

    return 0;
}

float largest(float *a, float *b){
    if (*a > *b) return *a;
    else if (*b > *a) return *a;
    else if (*a == *b) {
        printf("\nSorry but you can't enter the same number twice, try again!");
        return *a + 10;
    }
}
