#include <stdio.h>
#include <stdlib.h>

int calculateTime(int data[3]);

int main()
{
    int data[3] = {};

    printf("Please enter the number of hours: ");
    scanf("%d", &data[0]);

    printf("Please enter the number of minutes: ");
    scanf("%d", &data[1]);

    printf("Please enter the number of seconds: ");
    scanf("%d", &data[2]);

    int time = calculateTime(data);
    printf("\n\nThe total time in seconds: %d", time);

    return 0;
}

int calculateTime(int data[3]) {
    int seconds = data[2];
    seconds += (data[1] * 60); //Minutes
    seconds += (data[0] * 3600) // Hours

    return seconds;
}
