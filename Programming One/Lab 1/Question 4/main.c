/*Prints out the dates and days of a month */

/* ------------------------------------------------------------

Program: main.c

Programmer: Shaun O'Neill

ID: B00098451

Date: 30 January 2017

Purpose: The program uses a for loop to list through the days of a month, also displaying the day of each date.

------------------------------------------------------------*/

#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int totalDates = 35;
    int datesInMonth = 31;
    int columns = 7;

    int x = 0;
    int date = 1;

    printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
    printf("\t\t\t\t");

    for(x = 0; x <= totalDates; x++)
    {
        // Makes sure it doesnt start counting when the 4 tabs are there.
        if(x > 4)
        {

            // Just so it doesnt place more then 31 dates in the mon
            if(date <= datesInMonth)
            {
                printf("%d\t", date);

                // Checks to see if x/columns == 0. So it skips a line every 7 days.
                if(x % columns == 0)
                {
                    printf("\n");
                }
            }

            date++;
        }
    }

    return 0;
}
