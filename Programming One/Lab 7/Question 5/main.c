#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    double grades[3][4], lowestGrade = 100, highestGrade = 0, average;

    printf("Please enter the grades for the first student: ");
    scanf("%lf,%lf,%lf,%lf", &grades[0][0], &grades[0][1], grades[0][2], grades[0][3]);

    printf("\nPlease enter the grades for the second student: ");
    scanf("%lf %lf %lf %lf", &grades[1][0], &grades[1][1], grades[1][2], grades[1][3]);

    printf("Please enter the grades for the third student: ");
    scanf("%lf %lf %lf %lf", &grades[2][0], &grades[2][1], grades[2][2], grades[2][3]);

    printf("The array is: \n");
    printf("\t\t\t\t[0]\t[1]\t[2]\t[3]");

    printf("studentGrades[0]\t%lf\t%lf\t%lf\t%lf", grades[0][0], grades[0][1], grades[0][2], grades[0][3]);
    printf("studentGrades[1]\t%lf\t%lf\t%lf\t%lf", grades[1][0], grades[1][1], grades[1][2], grades[1][3]);
    printf("studentGrades[2]\t%lf\t%lf\t%lf\t%lf", grades[2][0], grades[2][1], grades[2][2], grades[2][3]);

    for (x = 0; x < 3; x++){
        for (y = 0; y < 4; y++){

            // Highest Grade
            if (grades[x][y] > highestGrade){
                highestGrade = grades[x][y];
            }

            // Lowest Grade
            if (grades[x][y] < lowestGrade){
                lowestGrade = grades[x][y];
            }
        }
    }

    printf("Lowest Grade: %lf\nHighest Grade: %lf\n", lowestGrade, highestGrade);


    for (x = 0; x < 3; x++){
        average = (grades[x][0] + grades[x][1] + grades[x][2] + grades[x][3]) / 4;
        printf("The average grade for students %d is %lf", x, average);
    }

    return 0;
}
