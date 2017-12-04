#include <stdio.h>
#include <stdlib.h>

int main()
{
    char names[10];
    char sname[10];
    char id[10];
    char gpa[10];

    FILE *data = fopen("file.txt","r");
    FILE *copy = fopen("copy.txt","w");

    if(data != NULL)
    {
        fscanf(data, "%s %s %s %s", &names, &sname, &id, &gpa);
        printf("d %s %s %s %s", &names, &sname, &id, &gpa);
        fprintf(data, "%s\t%s\t%s\t%s", names, sname, id, gpa);

        while (!feof(data)) {
            fscanf(data, "%s %s %s %s", &names, &sname, &id, &gpa);
        printf("\ndad %s %s %s %s", &names, &sname, &id, &gpa);
            fprintf(copy, "%s\t%s\t%s\t%s\n", names, sname, id, gpa);
        }

        fclose(copy);
        fclose(data);
    }

    //copy = fopen("copy.txt","w");
    //fclose(copy);
    return 0;
}
