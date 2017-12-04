#include <stdio.h>
#include <stdlib.h>

int machine[5] = {1, 2, 3, 4, 5};

int permutations[120][5] = {};
int baseData[5] = {1, 2, 3, 4, 5};

int main()
{
    printf("Loading permutation data..");
    loadPermData(0);
    int x, y;
    for (x = 0; x < 120; x++) {
        for (y = 0; y < 5; y++) {
            printf("%d ", permutations[x][y]);
        }
        printf("\n");
    }

    return 0;
}

void loadPermData(int k) {
    int i, lev = -1, n;
    machine[k] = ++lev;
    if(lev==n)
    {
        for(i=0;i<n;i++)
        printf("%2d", baseData[machine[i]]);
        printf("\n");
    }
    for(i=0;i<n;i++) if(machine[i]==0) loadPermData(i);
    lev--;
    machine[k]=0;
}
