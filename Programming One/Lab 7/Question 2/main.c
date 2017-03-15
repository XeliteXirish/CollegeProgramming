#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE(x) ( sizeof(x) / sizeof((x)[0]))

int main()
{
    char name[256] = {};
    int x, y;


    printf("----------------------------------------\n");
    printf("Please enter your name: ");
    scanf("%s", &name);

    printf("\n\nPart one: \n");

    // Part One
    for (x = 0; x < 10; x++)
    {

        printf("Name: ");
        for(y = 0; y < ARRAY_SIZE(name); y++)
        {
            if(name[y] != '\0')
            {
                printf("%c", name[y]);
            }
        }
        printf("\n");
    }


    printf("\n\nPart two: \n");

    // Part Two
    for (x = 0; x < 10; x++)
    {
        printf("Name: %s\n", name);
    }

    printf("\n----------------------------------------\n");

    return 0;
}
