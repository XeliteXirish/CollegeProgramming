#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, x3, y3, perm;

    printf("Please enter coord 1 (format x;y): ");
    scanf("%lf;%lf", &x1, &y1);

    printf("\nPlease enter coord 2 (format x;y): ");
    scanf("%lf;%lf", &x2, &y2);

    printf("\nPlease enter coord 3 (format x;y): ");
    scanf("%lf;%lf", &x3, &y3);


    perm = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\nTriangle perimeter: %.2lf", perm);



    return 0;
}
