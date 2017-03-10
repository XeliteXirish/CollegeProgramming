#include <stdio.h>
#include <stdlib.h>

int main()
{
    double height, weight, bmi;

    printf("------------------------------------------------------\n");

    printf("Please enter your height in meters: ");
    scanf("%lf", &height);

    printf("Please enter your weight in kilograms: ");
    scanf("%lf", &weight);

    bmi = weight / (height * height);

    printf("\nYour calculated BMI is: %.2lf", bmi);

    sortBmi(bmi);

    printf("\n------------------------------------------------------\n");

    return 0;
}


/**
Question 2
**/
void sortBmi(double bmi){

    if (bmi <= 18.5){
        printf("\nYour BMI of %.2lf appears to be underweight.", bmi);

    }else if (bmi > 18.5 && bmi < 25){
        printf("\nYour BMI of %.2lf appears to be normal weight.", bmi);

    }else if (bmi >= 25 && bmi < 30){
        printf("\nYour BMI of %.2lf appears to be overweight.", bmi);

    }else if(bmi > 30){
        printf("\nYour BMI of %.2lf appears to be obese.", bmi);

    }
}
