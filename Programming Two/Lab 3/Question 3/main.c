#include <stdio.h>
#include <stdlib.h>

int num_digits(int n);

int main()
{
    int number = 0;

    while (number <= 0 || number >= 50000) {
        printf("\nPlease enter a number between 1 and 50000: ");
        scanf("%d", &number);
    }

    printf("\nThe number %d has %d digits!\n", number, num_digits(number));

    return 0;
}

int num_digits(int n) {

    int digits = 0;
    if (n == 0) return 1;
    while(n) {
        n /= 10;
        digits++;
    }
    return digits;
}
