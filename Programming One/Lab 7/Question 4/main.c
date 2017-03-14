#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y;
    double number = 0, square, cube, root;

    printf("Number\tSquare\tCube\tRoot\n");

    for(x = 0; x < 10; x++)
    {

        square = pow(number, 2);
        cube = pow(number, 3);
        root = sqrt(number);

        printf("%.0lf\t%.1lf\t%.1lf\t%.1lf\n", number, square, cube, root);

        number++;
    }

    return 0;
}
