#include <stdio.h>
#include <stdlib.h>

void start();
void readDataToFile();
void modeOne();
void modeTwo();
double calculateSeed(int machine[5]);
int runCalc(int machine[5], int runTimes);
void swap (int *x, int *y);
int calcFact (size_t n);
int possiblePerms (size_t n, size_t k);
void permute (int *a, size_t i, size_t n);
void permArray (int *a, size_t sz);

int distance[5][5]= {};
int flow[5][5]= {};

int location[5]= {1, 2, 3, 4, 5};
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
        printf("Invalid input, enter either mode 1 or two: ");
        scanf("%d", &mode);
    }

    size_t size = sizeof machine/sizeof *machine;
    permute(machine, 0, size);
    if (mode == 1) modeOne();
    else if (mode == 2) modeTwo();

    return 0;
}

void modeOne()
{
    printf("Starting.... reading flow and direction data from file!\n");

    FILE *input;
    input = fopen("input.txt","r");

    readDataToFile(input);
    fclose(input);

    // Display flow and distance data
    int x, y;
    printf("\nFlow Data:\n");
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            printf("%d\t", flow[x][y]);
        }
        printf("\n");
    }
    printf("\nDistance Data:\n");
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            printf("%d\t", distance[x][y]);
        }
        printf("\n");
    }

    start();
}

void modeTwo()
{
    printf("Starting... generating random flow and direction data!\n");

    FILE *output;
    output = fopen("modetwo.txt", "w");
    generateRandomValues(output);
    fclose(output);

    FILE *read;
    read = fopen("modetwo.txt", "r");
    readDataToFile(read);
    fclose(read);

    // Display flow and distance data
    int x, y;
    printf("\nFlow Data:\n");
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            printf("%d\t", flow[x][y]);
        }
        printf("\n");
    }
    printf("\nDistance Data:\n");
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            printf("%d\t", distance[x][y]);
        }
        printf("\n");
    }

    start();
}

void start ()
{
    printf("\n\nStarting calculations...\n");
    printf("----------------------------\n");

    int runOne = 0, runTwo = 0;
    runOne = runCalc(machine, 1);

    printf("\nStarting seed: %d\n", runOne);
    while (runOne > runTwo || runTwo == 0)
    {

        if(runTwo < runOne && runTwo != 0) runOne = runTwo;

        runTwo = runCalc(machine, 10);
    }


    printf("\n-----------------------------------------\n");
    printf(" No improved solution found, result: %d", runOne);
    printf("\n-----------------------------------------\n");

    FILE *output;
    output = fopen("output.txt", "w");

    int x, y;
    fprintf(output, "Flow Data:\n");
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            fprintf(output, "%d\t", flow[x][y]);
        }
        fprintf(output, "\n");
    }
    fprintf(output, "\nDistance Data:\n");
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            fprintf(output, "%d\t", distance[x][y]);
        }
        fprintf(output, "\n");
    }

    fprintf(output, "\n-----------------------------------------\n");
    fprintf(output, " No improved solution found, result: %d", runOne);
    fprintf(output, "\n-----------------------------------------\n");
    fclose(output);

}

void generateRandomValues(FILE *dataFile)
{

    if (dataFile == NULL) return printf("ERROR: FILE DOESN'T EXIST! Exiting...");
    int x, y, num;
    for (x = 0; x < 11; x++)
    {
        if (x == 5)
        {
            fprintf(dataFile, "\n");
            continue;
        }
        for (y = 0; y < 5; y++)
        {
            num = (rand() % 99) + 1;
            fprintf(dataFile, "%d\t", num);
        }
        fprintf(dataFile, "\n");
    }
}

void readDataToFile(FILE *dataFile)
{

    int x, y;
    if (dataFile == NULL) return printf("ERROR: FILE DOESN'T EXIST! Exiting...");

    // Load flows and distance into array
    for (x = 1; x <= 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            fscanf(dataFile, "%d ", &flow[x][y]);
        }
    }

    for (x = 7; x <= 6 + 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            fscanf(dataFile, "%d", &distance[x - 7][y]);
        }
    }
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
        }

        if(runTimes > 1)
        {

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
    for (x = 0; x < 5; x++)
    {
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
        distance[location[0]-1][location[2]-1]*flow[machine[0]-1][machine[2]-1]+
        distance[location[0]-1][location[3]-1]*flow[machine[0]-1][machine[3]-1]+
        distance[location[1]-1][location[2]-1]*flow[machine[1]-1][machine[2]-1]+
        distance[location[1]-1][location[3]-1]*flow[machine[1]-1][machine[3]-1]+
        distance[location[1]-1][location[4]-1]*flow[machine[1]-1][machine[4]-1]+
        distance[location[2]-1][location[3]-1]*flow[machine[2]-1][machine[3]-1]+
        distance[location[3]-1][location[4]-1]*flow[machine[3]-1][machine[4]-1]+
        distance[location[4]-1][location[5]-1]*flow[machine[4]-1][machine[5]-1];
    return seed;
}

/* Function to swap values at two pointers */
void swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// calculate n factorial
int calcFact (size_t n)
{
    if (n <= 0) return 1;
    int s = n;

    while (--n) s *= n;

    return s;
}

// calculate all possible permutations
int possiblePerms (size_t n, size_t k)
{
    size_t d = (k < n ) ? n - k : 1;
    return calcFact (n) / calcFact (d);
}

// permute integer array for elements 'i' through 'n'
void permute (int *a, size_t i, size_t n)
{
    size_t j;
    if (i == n)
        permArray (a, n);
    else
        for (j = i; j < n; j++)
        {
            swap ((a+i), (a+j));
            permute (a, i+1, n);
            swap ((a+i), (a+j));  // backtrack
        }
}

void permArray (int *a, size_t sz)
{
    size_t i;
    for (i = 0; i < sz; i++) permutations[permCounter][i] = a[i];
    permCounter++;
}
