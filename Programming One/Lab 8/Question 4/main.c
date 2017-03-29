/*Simulates a roulette wheel */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 27 March 2017

Purpose: Simulates a roulette wheel

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void checkGuess(int guess);
void retry();

int number, guess;

int main()
{
    srand(time(NULL));

    number = 1 + rand() % 100;
    printf("I have a number between 1 and 100.\nCan you guess my number? (Number %d)", number);
    scanf("%d", &guess);
    checkGuess(guess);

    return 0;
}

void checkGuess(int guess)
{
    if (guess == number)
    {
        printf("\n\nCongrats! You guessed correctly!\n");
    }
    else if (guess > number)
    {
        printf("\nYou're guess is too high, try again!\n");
        retry();
    }
    else if (guess < number)
    {
        printf("\nYou're guess is too low, try again!\n");
        retry();
    }
}

void retry()
{
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    checkGuess(guess);
}
