#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    double grades[3][4] = {}, lowestGrade = 100, highestGrade = 0, average;

    for (x = 0; x < 3; x++)
    {
        printf("Please enter the grades for the next student: ");
        scanf("%lf %lf %lf %lf", &grades[x][0], &grades[x][1], &grades[x][2], &grades[x][3]);
    }

    printf("\nThe array is: \n");
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

    printf("\nLowest Grade: %lf\nHighest Grade: %.2lf\n\n", lowestGrade, highestGrade);


    for (x = 0; x < 3; x++)
    {
        average = (grades[x][0] + grades[x][1] + grades[x][2] + grades[x][3]) / 4;
        printf("The average grade for students %d is %.2lf\n", x, average);
    }

    return 0;
}
