#include <stdio.h>
#include <stdlib.h>

void editData(int *one, char *two, double *three);

int main()
{
    int one[15] = {}, x = 0;
    char two[15] = {};
    double three[15] = {};

    editData(one, two, three);

    printf("Edited Data:\n\nIntegers: ");
    for (x = 1; x < 15; x++)
    {
        if (x % 2 == 0)
        {
            printf("%d ", one[x]);
        }
    }

    printf("\nChars: ");
    for (x = 1; x < 15; x++)
    {
        if (x % 2 == 0)
        {
            printf("%c", two[x]);
        }
    }

    printf("\nDoubles: ");
    for (x = 1; x < 15; x++)
    {
        if (x % 2 == 0)
        {
            printf("%.0lf ", three[x]);
        }
    }
    printf("\n\n");

    return 0;
}

void editData(int *one, char *two, double *three)
{
    int x = 0;

    for (x = 0; x < 15; x++)
    {
        one[x] = x;
        two[x] = 100 + x;
        three[x] = x * 1000;

    }
}
