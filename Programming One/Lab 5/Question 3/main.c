#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;

    printf("----------------------------------------\n");
    printf("Please enter the propertry value: ");

    scanf("%f", &x);

    if(x <= 100000){
        printf("Stamp duty: 2%\n\n");

    }else if (x > 100000 && x < 150000){
        printf("Stamp duty: 5%\n\n");

    }else if (x >= 150000 && x < 200000){
        printf("Stamp duty: 7%\n\n");

    }else if (x >= 200000 && x < 250000){
        printf("Stamp duty: 10%\n\n");

    }else if (x >= 250000){
        printf("Stamp duty: 12.5%\n\n");
    }
    printf("----------------------------------------\n");
}
