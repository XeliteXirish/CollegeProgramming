#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));

    int random = (rand() % 100 + 1), guess = 0;

    while (guess != random) {
        printf("Please enter a guess between 1 and 100: ");
        scanf("%d", &guess);

        if (guess < 1) {
            printf("You must enter a guess between 1 and 100!\n\n
                   ");
            continue;
        }

        if (random != guess) {
            if (guess > random) printf("Incorrect guess, you guessed too high!\n\n");
            else if (guess < random) printf("Incorrect guess, you guessed too low!\n\n");
        }
    }

    printf("\n\nYour guess of %d was correct!", guess);

    return 0;
}
