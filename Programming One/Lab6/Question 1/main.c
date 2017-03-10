#include <stdio.h>
#include <stdlib.h>

int main()
{

    double nValue, output = 0;
    int x;

    printf("Please enter a value for n: ");
    scanf("%lf", &nValue);

    for (x = 1; x <= nValue; x++){

        output += (1.0 / x);

    }

    printf("\nCalculated value: %lf", output);


    return 0;
}
