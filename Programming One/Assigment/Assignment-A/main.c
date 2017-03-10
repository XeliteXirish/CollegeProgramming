#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    readFileData();
    return 0;
}

void readFileData(){

    FILE *dataFile;

    dataFile = fopen("./data.txt", "r");
int x;
    for (x=1; x<=10; x++)fprintf(dataFile,"%d\n", x);

		fclose(dataFile);
}
