#include <stdio.h>
#include <stdlib.h>

struct module {
    char module_id[10];
    char module_name[12];
    double grade;
};

struct student {
    char ID[10];
    struct module data[3];
};

int main()
{
    int x = 0, y = 0, maxX = 2, maxY = 3;
    struct student people[maxX];

    for (x = 0; x < maxX; x++) {
        printf("Enter the data for student number %d:\n", x + 1);
        printf("Please enter the ID: ");
        scanf("%s", &people[x].ID);

        for (y = 0; y < maxY; y++) {
            printf("Please enter the module ID: ");
            scanf("%s", &people[x].data[y].module_id);

            printf("Please enter the module name for student %d: ", x +1);
            scanf("%s", &people[x].data[y].module_name);

            printf("Please enter the grade for module no. %d: ", y +1);
            scanf("%lf", &people[x].data[y].grade);
        }
    }

    for (x = 0; x < maxX; x++) {
        printf("Student Number %d\n", x+1);
        printf("\nStudent ID: %s", people[x].ID);
        for (y = 0; y < maxY; y++) {
            printf("\nModule ID: %s", people[x].data[y].module_id);
            printf("\nModule name: %s", people[x].data[y].module_name);
            printf("\nStudent Grade: %.0lf", people[x].data[y].grade);
        }
    }

    return 0;
}
