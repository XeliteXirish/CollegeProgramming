#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculateDis(int x1, int y1, int x2, int y2);

int main()
{

    double x1, y1, x2, y2, x3, y3, dis1, dis2, perimiter, area;

    printf("Please enter the first (x, y) pair: ");
    scanf("%lf, %lf", &x1, &y1);

    printf("Please enter the second (x, y) pair: ");
    scanf("%lf, %lf", &x2, &y2);

    printf("Please enter the third (x, y) pair: ");
    scanf("%lf, %lf", &x3, &y3);

    dis1 = calculateDis(x1, y1, x2, y2);
    dis2 = calculateDis(x2, y2, x3, y3);

    perimiter = (dis1 * 2) + (dis2 * 2);
    area = dis1 * dis2;

    printf("\nThe perimiter of the rectangle is: %.2lf\n", perimiter);
    printf("The area of the rectangle is: %.2lf\n", area);

    return 0;
}

double calculateDis(int x1, int y1, int x2, int y2){

    double distance = 0;

    distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return distance;
}
