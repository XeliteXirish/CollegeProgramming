#include <stdio.h>
#include <stdlib.h>

#define CREDITS 5

void loadIntoArray();
double getGradePointValue(int grade);
void calculateGpas(int studentGrades[][12]);
void outputGpas(double studentGpas[]);
int totalCredits();
void outputClassification(double gpa);

int studentGrades[10][12] = {};
double studentGpas[10] = {};

int main()
{
    loadIntoArray();
    calculateGpas(studentGrades);
    outputGpas(studentGpas);

    return 0;
}

void loadIntoArray()
{

    FILE* data = fopen("data.txt", "r");

    int number = 0, student = 0, counter = 0;

    while( fscanf(data, "%d,", &number) > 0 ) // parse %d followed by ','
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

double getGradePointValue(int grade){

    if(grade > 80){
        return 4.00 * 5;
    }else if(grade > 70 && grade < 80){
        return 3.50 * 5;
    }else if(grade > 60 && grade < 70){
        return 3.00 * 5;
    }else if(grade > 55 && grade < 60){
        return 2.75 * 5;
    }else if(grade > 50 && grade < 55){
        return 2.50 * 5;
    }else if(grade > 40 && grade < 50){
        return 2.00 * 5;
    }else if(grade > 35 && grade < 40){
        return 1.50 * 5;
    }else{
        return 0;
    }
}

int totalCredits(){
    return 5 * 12;
}

void calculateGpas(int studentGrades[][12]){

    int x, y;

    for(x = 0; x < 10; x++){
        double gpa = 0;

        for(y = 0; y < 12; y++){
            gpa += getGradePointValue(studentGrades[x][y]);
        }
        studentGpas[x] = gpa / totalCredits();
    }
}

void outputGpas(double studentGpas[]){

    int x;

    for(x = 0; x < 10; x++){
        printf("Student %d\n", x +1);
        printf("\t[GPA VALUE: %.2lf]\n", studentGpas[x]);

        outputClassification(studentGpas[x]);
        printf("\n\n");
    }
}



void outputClassification(double gpa){
    if (gpa > 3.25){
        printf("\nDegree Classification: First class Honours\n");

    }else if (gpa > 3.00 && gpa < 3.25){
        printf("\nDegree Classification: Second class Honours, grade 1\n");

    }else if (gpa > 2.50 && gpa < 3.00){
        printf("\nDegree Classification: Second class Honours, grade 2\n");

    }else if (gpa > 2 && gpa < 2.50){
        printf("\nDegree Classification: Pass\n");
    }
}


