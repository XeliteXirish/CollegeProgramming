#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    bool x = true;
    double num, sum = 0;

    while (x) {
        printf("Please enter a number: ");
        scanf("%lf", &num);
        sum += num;

        printf("Sum: %.2lf\n\n", sum);

        if (num == 0) x = false;
    }
    printf("Exiting...");

    return 0;
}
