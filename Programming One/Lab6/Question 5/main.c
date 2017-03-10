#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nValue, x, y, z = 1;

    printf("Please enter a N value: ");
    scanf("%d", nValue);

    printf("\n\n");

    for (x = 1; x <= nValue; x++){

        printf("%2d - ", x);

        for (y = 1; y <= nValue; y++){

            printf("%d", x * z);
        }

        z++;
        printf("\n");
    }

    return 0;
}
