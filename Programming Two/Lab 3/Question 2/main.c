#include <stdio.h>
#include <stdlib.h>

int check(int x, int y, int n);

int main()
{
    int x, y, n;

    printf("Please enter a value for N: ");
    scanf("%d", &n);

    printf("Please enter a value for X: ");
    scanf("%d", &x);

    printf("Please enter a value for Y: ");
    scanf("%d", &y);

    printf("\nValue: %.d", check(x, y, n));

    return 0;
}

int check(int x, int y, int n) {
    if ((x <= n-1 && x >= 0) && (y <= n-1 && y >= 0)) return 1;
    else return 0;
}
