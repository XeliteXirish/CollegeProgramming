#include <stdio.h>
#include <stdlib.h>

void modeOne();
void modeTwo();

double flows[100][100] = {};
double distance[100][100] = {};

int main()
{
    int mode = 0;
    printf("Please select which mode to run (either 1 or 2): ");
    while (mode != 1 || mode != 2){
        scanf("%d", &mode);

        if (mode == 1) modeOne();
        else if (mode == 2) modeTwo();
        else console.log("Invalid input, enter either mode 1 or two");
    }
    return 0;
}

void modeOne() {
    int x, y;

    // Load flows and distance into array
    for (x = 0; x < 5; x++){
        for (y = 0; y < 5; x++){

        }
    }
}

void modeTwo(){}
