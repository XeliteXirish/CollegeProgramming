#include <stdio.h>
#include <stdlib.h>

void readFile(FILE *file);

int main()
{
    FILE *openFile;

    openFile = fopen("file1.txt", "r");
    if (openFile == NULL)
    {
        printf("WARNING: The file doesn't exit!");

    }
    else readFile(openFile);
    return 0;
}

void readFile(FILE *openFile)
{
    char name[10] = {};
    int counter = 1;

    printf("File exists...Opening\n");
    while( fscanf(openFile, "%s", &name) > 0 )
    {
        printf("Name No. %d is %s\n", counter, name);
        counter++;
    }
}
