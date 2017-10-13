#include <stdio.h>
#include <stdlib.h>

double swapNums(double *num1, double *num2);

int main()
{
    double num1, num2;

    printf("Please enter number one: ");
    scanf("%lf", &num1);

    printf("Please enter number two: ");
    scanf("%lf", &num2);

    printf("\nYou entered values %.2lf and %.2lf\n", num1, num2);

    swapNums(&num1, &num2);

    printf("\n(Swapped) You entered values %.2lf and %.2lf\n", num1, num2);
    return 0;
}

double swapNums(double *num1, double *num2) {
    double temp  = *num1;
    *num1 = *num2;
    *num2 = temp;
}
