#include <stdio.h>
#include <stdlib.h>

double triangle_area(double base, double height);

int main()
{
    double b, h;

    printf("Please enter the base: ");
    scanf("%lf", &b);

    printf("Please enter the height: ");
    scanf("%lf", &h);

    printf("\nThe area is %.2lf", triangle_area(b, h));

    return 0;
}

double triangle_area(double base, double height) {

    return (base * height) / 2;
}
