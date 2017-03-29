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

void inputChoice();
void doColour();
void retry();

int main()
{
    inputChoice();

    return 0;
}

void inputChoice()
{
    int choice;

    printf("Choose one of the following colours: ");
    printf("\n\n1. Black\n2. Red\n\nChoice: ");

    scanf("%d", &choice);
    if (choice == 1)
    {
        doColour();
    }
    else if (choice == 2)
    {
        doColour();
    }
    else
    {
        retry();
    }

}

void doColour()
{
    srand(time(NULL));
    int random;
    double betValue, winValue;

    printf("Please enter a bet value: ");
    scanf("%lf", &betValue);

    random = rand() % 37;

    if (random % 2 == 0){
        // Blacks
        winValue = betValue * 1.47;
        printf("\n\nThe ball has landed on a black, you have won %.2lf! Congradulations!\n", winValue);

    }else if (random % 2 != 0){
        // Reds
        winValue = betValue * 1.47;
        printf("\n\nThe ball has landed on a red, you have won %.2lf! Congradulations!\n", winValue);

    }else{
        winValue = 0;
        printf("\n\nSorry but the ball has landed on 0, you have lost, here's you're money pack!\n");
    }
}

void retry()
{
    printf("\nPlease only enter 1 or 2, try again!\n");
    inputChoice();

}

