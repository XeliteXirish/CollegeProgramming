#include <stdio.h>
#include <stdlib.h>

voide runCode(int number);

int main()
{
    int number = 10;

    while (number > 9 || number < 0)
    {
        printf("Please enter a random number between 0 and 9: ");
        scanf("%d", &number);
    }

    runCode(number);
    return 0;
}

void runCode(int number)
{

    printf("\nYou entered number: ");

    if (number == 0) printf("zero");
    else if (number == 1) printf("one");
    else if (number == 2) printf("two");
    else if (number == 3) printf("three");
    else if (number == 4) printf("four");
    else if (number == 5) printf("five");
    else if (number == 6) printf("six");
    else if (number == 7) printf("seven");
    else if (number == 8) printf("eight");
    else if (number == 9) printf("nine");

    printf("\nThe number in spanish is: ");

    if (number == 0) printf("uno");
    else if (number == 1) printf("dos");
    else if (number == 2) printf("two");
    else if (number == 3) printf("tress");
    else if (number == 4) printf("cautro");
    else if (number == 5) printf("cinco");
    else if (number == 6) printf("seis");
    else if (number == 7) printf("siete");
    else if (number == 8) printf("ocho");
    else if (number == 9) printf("nueve");
    printf("\n\n");

}
