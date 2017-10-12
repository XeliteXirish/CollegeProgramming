#include <stdio.h>
#include <stdlib.h>

float compute_GPA(float grades[], int n);

int main(){

    int x, n = 12;
    float grade, gpas[] = {}, computed = 0;

    srand(time(NULL));

    printf("Grades: ");
    for (x = 0; x < n; x++) {
        grade = rand() % 100;
        gpas[x] = grade;
        printf(" %f, ", &grade);
    }

    printf("\nThe average is: %f", compute_GPA(gpas, n));

    return 0;
}

float compute_GPA(float grades[], int n){
    int x, average;
    for (x = 0; x < n; x++) {
        average += grades[x];
    }
    return average;
}
