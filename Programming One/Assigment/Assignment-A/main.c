#include <stdio.h>
#include <stdlib.h>

#define CREDITS 5

void loadIntoArray();
double getGradePointValue(int grade);
void calculateGpas(int studentGrades[][12]);
int totalCredits();
char * outputClassification(double gpa);
char * getGradeName(int grade);
void outputGrades(int studentGrades[][12]);
void outputGpas(double studentGpas[]);
void outputResultsFile(double studentGpas[]);

int studentGrades[10][12] = {};
double studentGpas[10] = {};

int main()
{
    loadIntoArray();
    calculateGpas(studentGrades);
    outputGrades(studentGrades);
    outputGpas(studentGpas);
    outputResultsFile(studentGpas);

    return 0;
}

/**
This reads the data from data.txt and stores it in the array studentGrades
**/
void loadIntoArray()
{

    FILE* data = fopen("data.txt", "r");

    int number = 0, student = 0, counter = 0;

    while( fscanf(data, "%d", &number) > 0 )
    {
        studentGrades[student][counter] = number;

        if(counter % 12 == 0 && counter != 0)
        {

            student++;
            counter = 0;
        }
        counter++;
    }
    fclose(data);
}

/**
This returns the grade point value multiplied by the difficulty for a given grade
**/
double getGradePointValue(int grade)
{

    if(grade >= 80)
    {
        return 4.00 * 5;
    }
    else if(grade >= 70 && grade < 80)
    {
        return 3.50 * 5;
    }
    else if(grade >= 60 && grade < 70)
    {
        return 3.00 * 5;
    }
    else if(grade >= 55 && grade < 60)
    {
        return 2.75 * 5;
    }
    else if(grade >= 50 && grade < 55)
    {
        return 2.50 * 5;
    }
    else if(grade >= 40 && grade < 50)
    {
        return 2.00 * 5;
    }
    else if(grade >= 35 && grade < 40)
    {
        return 1.50 * 5;
    }
    else if(grade < 35)
    {
        return 0;
    }
}

// This is the total credits going for the course
int totalCredits()
{
    return 5 * 12;
}

/**
This calculates the gpas for each student and stores them in a separate array
**/
void calculateGpas(int studentGrades[][12])
{

    int x, y;

    for(x = 0; x < 10; x++)
    {
        double gpa = 0;

        for(y = 0; y < 12; y++)
        {
            gpa += getGradePointValue(studentGrades[x][y]);
        }
        studentGpas[x] = gpa / totalCredits();
    }
}

/**
This returns the degree classification for a given gpa
**/
char * outputClassification(double gpa)
{

    char *x ;
    if (gpa >= 3.25)
    {
        x = "First class Honours\t\t\t";

    }
    else if (gpa >= 3.00 && gpa < 3.25)
    {
        x = "Second class Honours, grade 1\t\t";

    }
    else if (gpa >= 2.50 && gpa < 3.00)
    {
        x = "Second class Honours, grade 2\t\t";

    }
    else if (gpa >= 2 && gpa < 2.50)
    {
        x = "Pass\t\t\t\t\t";

    }
    else
    {
        x ="Fail\t\t\t\t\t";
    }
    //printf("%s", x);
    return x;
}

char * getGradeName(int grade)
{

    char *x;
    if (grade >= 80 && grade <= 100)
    {
        x = "A";
    }
    else if (grade >= 70 && grade < 80)
    {
        x = "B+";
    }
    else if (grade >= 60 && grade < 70)
    {
        x = "B";
    }
    else if (grade >= 55 && grade < 60)
    {
        x = "B-";
    }
    else if (grade >= 50 && grade < 55)
    {
        x = "C+";
    }
    else if (grade >= 40 && grade < 50)
    {
        x = "C";
    }
    else if (grade >= 35 && grade < 40)
    {
        x = "D";
    }
    else
    {
        x = "F";
    }
    return x;
}

void outputGrades(int studentGrades[][12])
{

    int x, y;

    printf("\nThe grade results for all ten students:\n\n");
    for(x = 0; x < 10; x++)
    {
        printf("\t[Student %d:\t", x + 1);

        for(y = 0; y < 12; y++)
        {
            printf(" %s", getGradeName(studentGrades[x][y]));
            if(y != 11)
            {
                printf(",");
            }
        }
        printf("]\n");
    }
}

/**
Outputs the gpas for each student to the console window in a nice format
**/
void outputGpas(double studentGpas[])
{

    int x, y, counter = 0;
    printf("\nGPA results for all 10 students:\n\n");

    for (x = 0; x < 5; x++)
    {
        int start = x * 2;
        printf("\t");

        for (y = 0; y < 2; y++)
        {
            printf("[Student %d]\t\t\t\t", counter + 1);
            counter++;
        }

        printf("\n\t");

        for (y = 0; y < 2; y++)
        {
            printf("GPA: %.2lf\t\t\t\t", studentGpas[start + y]);
        }

        printf("\n\t");

        for (y = 0; y < 2; y++)
        {
            printf("%s", outputClassification(studentGpas[start + y]));
        }
        printf("\n\n");

    }
}

/**
Outputs the gpas for each student to results.txt in a nice format
**/
void outputResultsFile(double studentGpas[])
{
    FILE *results = fopen("results.txt", "w");

    int x, y, counter = 0;

    fprintf(results, "\nThe grade results for all ten students:\n\n");
    for(x = 0; x < 10; x++)
    {
        fprintf(results, "\t[Student %d:\t", x + 1);

        for(y = 0; y < 12; y++)
        {
            fprintf(results, "\t%s", getGradeName(studentGrades[x][y]));
            if(y != 11)
            {
                fprintf(results, ",");
            }
        }
        fprintf(results, "]\n");
    }

    fprintf(results, "\nGPA results for all 10 students:\n\n");

    for (x = 0; x < 5; x++)
    {
        int start = x * 2;
        fprintf(results, "\t");

        for (y = 0; y < 2; y++)
        {
            fprintf(results, "[Student %d]\t\t\t\t", counter + 1);
            counter++;
        }

        fprintf(results, "\n\t");

        for (y = 0; y < 2; y++)
        {
            fprintf(results, "GPA: %.2lf\t\t\t\t", studentGpas[start + y]);
        }

        fprintf(results, "\n\t");

        for (y = 0; y < 2; y++)
        {
            fprintf(results, "%s\t", outputClassification(studentGpas[start + y]));
        }
        fprintf(results, "\n\n");
    }
    fclose(results);
    printf("\n\t\t[Results have been logged to results.txt!]\n");
}


