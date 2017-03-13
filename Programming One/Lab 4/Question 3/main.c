#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n------------------------------------------------------\n");

    int x = 1;

    printf("While Loop:\n\n");
    while (x <= 10)
    {
        printf("%d - I love to while loop!", x);

        if (x % 2 == 0)
        {
            printf("\tThis number is even!!\n");
        }
        else
        {
            printf("\n");
        }

        x++;
    }
    printf("\n------------------------------------------------------\n");

    printf("For Loop:\n\n");
    for (x = 1; x <= 10; x++)
    {
        printf("%d - For loops are easier to use!!!!", x);

        if (x % 2 != 0)
        {
            printf("\tThis number is odd!!\n");
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}
