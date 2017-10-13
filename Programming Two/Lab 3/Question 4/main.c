#include <stdio.h>
#include <stdlib.h>

float compute_GPA(float grades[], int n);

int main(){

    int x, n = 12;
    float grade, gpas[12] = {}, computed = 0;

    srand(time(NULL));

    printf("Grades: ");
    for (x = 0; x < n; x++) {
        grade = 1 + rand() % 100;
        gpas[x] = grade;
        printf(" %.0lf, ", grade);
    }

    printf("\nThe average is: %.2f", compute_GPA(gpas, n));

    return 0;
}

float compute_GPA(float grades[], int n){
    int x;
    float average;
    for (x = 0; x < n; x++) {
        average += grades[x];
    }
    return average / n;
}
