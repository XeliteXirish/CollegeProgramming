#include <stdio.h>
#include <stdlib.h>

int main()
{
#include <stdio.h>
#define BOTTOM_SPACE "\n\n\n\n\n"
#define HEIGHT 17
#define OFFSET " " /*17 blanks*/
#define TOP_SPACE "\n\n\n\n\n"
    int i;
    printf(TOP_SPACE);
    printf(OFFSET "CCCCCCCCCCCC\n");
    for(i=0; i<HEIGHT; i++)
    {
        printf(OFFSET "I\n");
    }
    printf(OFFSET "CCCCCCCCCCCC\n");
    printf(BOTTOM_SPACE);
    return 0;
}
