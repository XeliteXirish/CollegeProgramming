#include <stdio.h>
#include <stdlib.h>

enum {NORTH, SOUTH, EAST, WEST} direction;

int main()
{
    srand(time(NULL));
    int x = 0, norths = 0, souths = 0, easts = 0, wests = 0;

    printf("Fetching random directions...\n");

    for (x = 0; x < 100; x++)
    {
        direction rDir = rand() % 4;
        switch (rDir) {
        case Direction.NORTH:
            norths++;
            break;

        case 1:
            souths++;
            break;

        case 2:
            easts++;
            break;

        case 3:
            wests++;
            break;
        }
    }
    printf("\tNorths: %d\n\tSouths: %d\n\tEasts: %d\n\tWests: %d\n\n", norths, souths, easts, wests);
    return 0;
}
