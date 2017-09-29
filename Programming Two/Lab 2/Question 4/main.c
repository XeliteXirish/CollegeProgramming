#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double returnLength(double x1, double y1, double x2, double y2);

    double x1, y1, x2, y2, x3, y3, len1, len2, len3, perm;

    printf("Please enter coord 1 (format x;y): ");
    scanf("%lf;%lf", &x1, &y1);

    printf("\nPlease enter coord 2 (format x;y): ");
    scanf("%lf;%lf", &x2, &y2);

    printf("\nPlease enter coord 3 (format x;y): ");
    scanf("%lf;%lf", &x3, &y3);

    len1 = returnLength(x1, y1, x2, y2);
    len2 = returnLength(x2, y2, x3, y3);
    len3 = returnLength(x3, y3, x1, y1);

    perm = len1 + len2 + len3;

    printf("\nTriangle perimeter: %.2lf", perm);

    return 0;
}

double returnLength(double x1, double y1, double x2, double y2) {

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
