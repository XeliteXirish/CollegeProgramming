#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x;
    char name[256];
    srand(time(NULL));

    printf("Please enter your name: ");
    scanf("%s", &name);

    for (x = 0; x <= rand() % 20; x++){
        printf("Output %d: %s\n", x, name);
    }


    return 0;
}
