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
    FILE *input;

    input = fopen("input.txt","r");

    // Load flows and distance into array
    for (x = 0; x < 5; x++){
        for (y = 0; y < 5; x++){
            fscanf(input, "%d", &flows[x][y]);
        }
    }

    for (x = 6; x < 6 + 5; x++){
        for (y = 0; y < 5; y++){
            fscanf(input, "%d", &distance[x][y]);
        }
    }
    fclose(input); // Done reading files, close pointer
}

void modeTwo(){}
