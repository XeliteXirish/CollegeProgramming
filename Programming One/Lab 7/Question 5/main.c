/*Outputs some grades to the console */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 27 March 2017

Purpose: Outputs some grades to the console

------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    double grades[3][4] = {}, lowestGrade = 100, highestGrade = 0, average;

    printf("-----------------------------------------------------------------\n");
    for (x = 0; x < 3; x++)
    {
        printf("Please enter the grades for the next student (g1 g2 g3 g4): ");
        scanf("%lf %lf %lf %lf", &grades[x][0], &grades[x][1], &grades[x][2], &grades[x][3]);
    }

    printf("\n\nThe array is: \n");
    printf("\t\t\t[0]\t[1]\t[2]\t[3]\n");

    for (x = 0; x < 3; x++)
    {
        printf("studentGrades[%d]\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", x, grades[x][0], grades[x][1], grades[x][2], grades[x][3]);
    }

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 4; y++)
        {

            // Highest Grade
            if (grades[x][y] > highestGrade)
            {
                highestGrade = grades[x][y];
            }

            // Lowest Grade
            if (grades[x][y] < lowestGrade)
            {
                lowestGrade = grades[x][y];
            }
        }
    }

    printf("\nLowest Grade: %.2lf\nHighest Grade: %.2lf\n\n", lowestGrade, highestGrade);


    for (x = 0; x < 3; x++)
    {
        average = (grades[x][0] + grades[x][1] + grades[x][2] + grades[x][3]) / 4;
        printf("The average grade for students %d is %.2lf\n", x, average);
    }

    printf("-----------------------------------------------------------------\n");
    return 0;
}
