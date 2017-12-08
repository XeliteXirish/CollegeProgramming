#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[100] = {}, string2[100] = {};

    printf("Please enter string one: ");
    scanf("%s", &string1);
    printf("Please enter string two: ");
    scanf("%s", &string2);

    printf("\n\nString One: %s\nStringTwo: %s", string1, string2);

    fixStrings(string1, string2);
    printf("\n\nAfter change:\nString One: %s\nStringTwo: %s\n\n", string1, string2);

    return 0;
}

void fixStrings(char *string1, char *string2) {
    strupr(string1);
    strlwr(string2);
}
