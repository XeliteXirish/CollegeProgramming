#include <stdio.h>
#include <stdlib.h>

void writeInitFile();
void appendFile();
void readFile();

int main()
{

    writeInitFile();
    readFile();
    appendFile();
    readFile();

    return 0;
}

void writeInitFile()
{
    FILE *file = fopen("file1.txt", "w");
    if (file == NULL) return printf("\n\nERROR: FILE DOESN'T EXIST!");
    int x = 0;
    char names[100] = {};
    char sname[100] = {};
    char id[100] = {};
    char gpa[100] = {};

    for (x = 0; x < 2; x++)
    {
        printf("Please enter first name: ");
        scanf("%s", &names);

        printf("Please enter second name: ");
        scanf("%s", &sname);

        printf("Please enter ID: ");
        scanf("%s", &id);

        printf("Please enter the GPA: ");
        scanf("%s", &gpa);

        fprintf(file, "%s %s %s %s\n", names, sname, id, gpa);
    }
    fclose(file);
}

void appendFile ()
{
    FILE *file = fopen("file1.txt", "a");
    if (file == NULL) return printf("WARNING: FILE DOESN'T EXIST!");

    int x = 0;
    char names[100] = {};
    char sname[100] = {};
    char id[100] = {};
    char gpa[100] = {};

    for (x = 0; x < 2; x++)
    {
        printf("\n\nPlease enter first name: ");
        scanf("%s", &names);

        printf("Please enter second name: ");
        scanf("%s", &sname);

        printf("Please enter ID: ");
        scanf("%s", &id);

        printf("Please enter the GPA: ");
        scanf("%s", &gpa);

        fprintf(file, "%s %s %s %s\n", names, sname, id, gpa);
    }
    fclose(file);

    printf("\n\nAppended: \n");
}

void readFile()
{
    FILE *file = fopen("file1.txt", "r");
    if (file != NULL)
    {
        char names[100] = {};
        char sname[100] = {};
        char id[100] = {};
        char gpa[100] = {};

        fscanf(file, "%s%s%s%s", &names, &sname, &id, &gpa);
        while (!feof(file))
        {
            printf("%s\t%s\t%s\t%s\n", names, sname, id, gpa);
            fscanf(file, "%s %s %s %s", &names, &sname, &id, &gpa);
        }
        fclose(file);
    }
}
