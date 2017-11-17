#include <stdio.h>
#include <stdlib.h>

struct date {
    int day;
    int month;
    int year;
};

typedef struct date DATE;

struct personnel {
    int number;
    char surname[21];
    char first_name[11];
    DATE dob;
    DATE joined;
};

typedef struct personnel EMPLOYEE;

void display_an_employee(const EMPLOYEE personal_array[]);

int main()
{
    int x, y, maxX = 2;
    EMPLOYEE workers[maxX];

    for (x = 0; x < maxX; x++){
        printf("Enter details for worker %d", x + 1);

        printf("\nPlease enter your number: ");
        scanf("%d", &workers[x].number);

        printf("Please enter your surname: ");
        scanf("%s", &workers[x].surname);

        printf("Please enter your first name: ");
        scanf("%s", &workers[x].first_name);

        printf("Please enter your DOB (day, month and year): ");
        scanf("%d %d %d", &workers[x].dob.day, &workers[x].dob.month, &workers[x].dob.year);

        printf("Please enter the date you joined (day month and year): ");
        scanf("%d %d %d", &workers[x].joined.day, &workers[x].joined.month, &workers[x].joined.year);
    }

    for (x = 0; x < maxX; x++) {
        printf("\n\nNumber : %d", workers[x].number);
        printf("\nName: %s, %s", workers[x].surname, workers[x].first_name);
        printf("\nDate of birth: %d %d, %d", workers[x].dob.day, workers[x].dob.month, workers[x].dob.year);
        printf("\nJoin Date: %d %d, %d", workers[x].joined.day, workers[x].joined.month, workers[x].joined.year);
        printf("\n\n");
    }

    return 0;
}
