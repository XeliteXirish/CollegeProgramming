#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, c, dots, doubleSize, floatSize, intSize, charSize;

    doubleSize = sizeof(double);
    floatSize = sizeof(float);
    intSize = sizeof(int);
    charSize = sizeof(char);

    printf("Please select one:\n1) Doubles\n2) Floats\n3) Ints\n4) Characters\nSelect: ");
    scanf("%d", &c);

    if (c == 1) dots = doubleSize;
    else if (c == 2) dots = floatSize;
    else if (c == 3) dots = intSize;
    else if (c == 4) dots = charSize;
    else printf("Please enter a number between 1 and 4! Exiting..");

    printf("\nMemory Bytes (%d): \n", dots);
    for (x = 0; x < dots; x++) {
        printf("* \t");
    }

    return 0;
}
