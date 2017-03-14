#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lab1_array[10], last_one[12], x, total = 0;

    printf("----------------------------------------\n");
    for(x = 0; x < 10; x++)
    {
        printf("Please enter a value for position %d: ", x + 1);
        scanf("%d", &lab1_array[x]);
        printf("\n");
    }

    for(x = 0; x < 10; x++)
    {
        printf("lab1_array[%d] = %d\n", x, lab1_array[x]);
    }

    printf("\n\n\n");

    for(x = 0; x < 12; x++){
        printf("Please enter a value for position %d: ", x + 1);
        scanf("%d", &last_one[x]);

        total += last_one[x];
        printf("[Cumulative now %d]", total);

        printf("\n");
    }

    printf("----------------------------------------\n"); //TODO fix this

    return 0;
}
