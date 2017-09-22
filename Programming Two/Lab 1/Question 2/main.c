#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double numbers[10] = {}, sum = 0;

    for(x = 0; x < 10; x++){

        printf("Please enter number %d: ", x + 1);
        scanf("%lf", &numbers[x]);
        sum += numbers[x];
        printf("The sum at number %d is %.2lf\n", x, sum);
    }

    return 0;
}
