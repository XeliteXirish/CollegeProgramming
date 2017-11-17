#include <stdio.h>
#include <stdlib.h>

struct time split_time(long total_seconds);

struct time {
        int hours;
        int minutes;
        int seconds;
    };

int main()
{
    long totalSeconds;

    printf("Please enter total number of seconds: ");
    scanf("%ld", &totalSeconds);

    struct time timeObj = split_time(totalSeconds);
    printf("\n\t\nHours: %d\nMinutes: %d\nSeconds: %d\n", timeObj.hours, timeObj.minutes, timeObj.seconds);

    return 0;
}

struct time split_time(long total_seconds) {
    int hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    int minutes = total_seconds / 60;
    total_seconds = total_seconds % 60;
    int seconds = total_seconds;

    struct time currentTime = {hours, minutes, seconds};
    return currentTime;
};
