#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int last_one[12] = {}, sum = 0;

    for(x = 0; x < 12; x++){

        printf("Please enter number %d: ", x + 1);
        scanf("%d", &last_one[x]);
        sum += last_one[x];
    }

        printf("The sum of the numbers is %d",sum);

    return 0;
}
