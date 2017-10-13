#include <stdio.h>
#include <stdlib.h>

float largest(float *a, float *b);

int main()
{
    float *a, *b, num1, num2, bigger = 0;
    a = &num1;
    b = &num2;

    while (1)
    {
        printf("\nPlease enter number one: ");
        scanf("%f", &num1);

        printf("Please enter number two: ");
        scanf("%f", &num2);

        if(num1 == num2)
        {
            printf("\nSorry but you can't enter the same number twice!");
        }
        else
        {
            bigger = largest(a, b);
            break;
        }
    }

    printf("\nThe biggest number is: %.0f", bigger);

    return 0;
}

float largest(float *a, float *b)
{
    if (*a > *b) return *a;
    else if (*b > *a) return *b;
}
