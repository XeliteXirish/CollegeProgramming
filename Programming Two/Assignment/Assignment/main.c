#include <stdio.h>
#include <stdlib.h>

void modeOne();
void modeTwo();
double calculateSeed(int machine[5]);
int runCalc(int machine[5]);

double distance[5][5]= {{0,28,33,22,20},
    {28,0,27,40,25},
    {33,27,0,30,15},
    {22,40,30,0,18},
    {20,25,15,18,0}
};

double flow[5][5]= {{0,10,3,1,15},
    {10,0,6,8,4},
    {3,6,0,0,10},
    {1,8,0,0,3},
    {15,4,10,3,0}
};

int location[5]= {1, 2, 3, 4, 5}; //locations
int machine[5] = {1, 2, 3, 4, 5};


int main()
{
    srand(time(NULL));

    int mode = 0;
    printf("Please select which mode to run (either 1 or 2): ");
    scanf("%d", &mode);

    while (mode != 1 && mode != 2)
    {
        printf("Invalid input, enter either mode 1 or two");
        break;
    }

    if (mode == 1) modeOne();
    else if (mode == 2) modeTwo();

    return 0;
}

void modeOne()
{
    int x, y;
    FILE *input;

    input = fopen("input.txt","r");

    // Load flows and distance into array
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; x++)
        {
            fscanf(input, "%d", &flow[x][y]);
        }
    }

    for (x = 6; x < 6 + 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            fscanf(input, "%d", &distance[x][y]);
        }
    }
    fclose(input); // Done reading files, close pointer
}

void modeTwo()
{
    int runOne = -1, runTwo = -2;
    while (runOne != runTwo)
    {
        runOne = runCalc(machine);
        runTwo = runCalc(machine);
    }


    printf("Found the same seed %d - %d", runOne, runTwo);

}

int runCalc (int *machine)
{
    int x, y, seed, lowestSeed = 9999999; // So we can keep track of the previous found lowest
    for (x = 0; x < 12; x++)
    {
        randomiseMachine(machine);
        seed = calculateSeed(machine);

        if (seed < lowestSeed)
        {
            printf("Found new lowest combination (");
            for (y = 0; y < 5; y++) printf("%d ", machine[y]);
            printf(") Seed: %d\n", seed);

            lowestSeed = seed;
        }
    }
    return lowestSeed;
}

void randomiseMachine(int *currentMachineCode, int counter)
{
    int x, j, temp;
    for (x = 0; x < 5; x++)
    {
        j = (rand() % 5) + 1;
        temp = *(currentMachineCode + x);
        *(currentMachineCode + x) = *(currentMachineCode + j);
        *(currentMachineCode + j) = temp;
    }
}

/**
    Returns the seed for the given machine data
**/
double calculateSeed(int machine[5])
{
    double seed =
        distance[location[0]-1][location[1]-1]*flow[machine[0]-1][machine[1]-1]+
        distance[location[1]-1][location[2]-1]*flow[machine[1]-1][machine[2]-1]+
        distance[location[2]-1][location[3]-1]*flow[machine[2]-1][machine[3]-1]+
        distance[location[3]-1][location[4]-1]*flow[machine[3]-1][machine[4]-1]+
        distance[location[4]-1][location[5]-1]*flow[machine[4]-1][machine[5]-1]+
        distance[location[0]-1][location[2]-1]*flow[machine[0]-1][machine[2]-1]+
        distance[location[0]-1][location[3]-1]*flow[machine[0]-1][machine[3]-1]+
        distance[location[1]-1][location[3]-1]*flow[machine[1]-1][machine[3]-1]+
        distance[location[1]-1][location[4]-1]*flow[machine[1]-1][machine[4]-1];
    return seed;
}
