#include <stdio.h>
#include <stdlib.h>

void modeOne();
void modeTwo();
double calculateSeed(int machine[5]);
int runCalc(int machine[5], int runTimes);
void swap (int *x, int *y);
unsigned long long nfact (size_t n);
unsigned long long pnk (size_t n, size_t k);
void permute (int *a, size_t i, size_t n);
void prnarray (int *a, size_t sz);

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
int machine[5] = {4, 5, 3, 1, 2};

int permutations[120][5] = {};
int permCounter = 0;
int permUseCount = 0;

int runCounter = 0;


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

    size_t size = sizeof machine/sizeof *machine;
    permute(machine, 0, size);
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
    int runOne = 0, runTwo = 0;
    runOne = runCalc(machine, 1);

    printf("\nStarting seed: %d\n", runOne);
    while (runOne > runTwo || runTwo == 0){

    if(runTwo < runOne && runTwo != 0) runOne = runTwo;

        runTwo = runCalc(machine, 10);
    }


    printf("Found the same seed %d - %d", runOne, runTwo);

}

int runCalc (int *machine, int runTimes)
{
    int x, y, seed, lowestSeed = 9999999; // So we can keep track of the previous found lowest

    for (x = 0; x < runTimes; x++)
    {
        randomiseMachine(machine);
        seed = calculateSeed(machine);

        if (seed < lowestSeed)
        {
            lowestSeed = seed;
            printf("%d )New lowest seed found (", runCounter);
            for (y = 0; y < 5; y++) printf("%d ", machine[y]);
            printf(") Seed: %d\n", seed);
        }
            runCounter++;
    }
    return lowestSeed;
}

void randomiseMachine(int *currentMachineCode, int counter)
{
    int x, i, count;
    for (x = 0; x < 5; x++) {
        machine[x] = permutations[permUseCount][x];
    }
    permUseCount++;
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

/* Function to swap values at two pointers */
void swap (int *x, int *y)
{   int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* calculate n factorial */
unsigned long long nfact (size_t n)
{   if (n <= 0) return 1;
    unsigned long long s = n;

    while (--n) s *= n;

    return s;
}

/* calculate possible permutations */
unsigned long long pnk (size_t n, size_t k)
{   size_t d = (k < n ) ? n - k : 1;
    return nfact (n) / nfact (d);
}

/* permute integer array for elements 'i' through 'n' */
void permute (int *a, size_t i, size_t n)
{   size_t j;
    if (i == n)
        prnarray (a, n);
    else
        for (j = i; j < n; j++) {
            swap ((a+i), (a+j));
            permute (a, i+1, n);
            swap ((a+i), (a+j));  // backtrack
        }
}

void prnarray (int *a, size_t sz)
{   size_t i;
    for (i = 0; i < sz; i++) permutations[permCounter][i] = a[i];
    permCounter++;
}


