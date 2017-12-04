#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int low(int seed);
int first(int seed);

int main()
{
    srand(time(NULL));
    int i, k, x[10];
    int c1, c2;

    c1=first(k);

    while(c1!=c2)
    {
        for(i=0; i<10; i++)
        {
            x[i]=low(i);
            printf("seed = %d",x[i]);
            printf("\n\n");
            if(x[i]<c2)
            {
                c2= x[i];
            }

        }

        if(c1<c2) break;
    }
    return 0;
}

int first(int k)
{
    int i;
    double distance[5][5]= {{0,28,33,22,20},
        {28,0,27,40,25},
        {33,27,0,30,15},
        {22,40,30,0,18},
        {20,25,15,18,0}
    };

    double flow[5][5]= {{0,10,3,1,15},
        {10,0,6,8,4},
        {3,6,0,0,10},
        {1,8,0,0,3},
        {15,4,10,3,0}
    };

    int location[5]= {1,2,3,4,5};
    int machine[5]= {4,5,3,1,2};

    double seed =
        distance[location[0]-1][location[1]-1]*flow[machine[0]-1][machine[1]-1]+
        distance[location[1]-1][location[2]-1]*flow[machine[1]-1][machine[2]-1]+
        distance[location[2]-1][location[3]-1]*flow[machine[2]-1][machine[3]-1]+
        distance[location[3]-1][location[4]-1]*flow[machine[3]-1][machine[4]-1]+
        distance[location[4]-1][location[5]-1]*flow[machine[4]-1][machine[5]-1]+
        distance[location[0]-1][location[2]-1]*flow[machine[0]-1][machine[2]-1]+
        distance[location[0]-1][location[3]-1]*flow[machine[0]-1][machine[3]-1]+
        distance[location[1]-1][location[3]-1]*flow[machine[1]-1][machine[3]-1]+
        distance[location[1]-1][location[4]-1]*flow[machine[1]-1][machine[4]-1];

    printf("Current:\n");
    for(i =0; i<5; i++)
    {
        printf("%d",location[i]);
    }
    printf("\n");
    for(i =0; i<5; i++)
    {
        printf("%d",machine[i]);
    }

    printf("\nseed = %.0lf\n\n",seed);
    return seed;
}

int low(int i)
{
    int location[5]= {1,2,3,4,5};
    int machine[5];
    int x, p, count;
    int k=0;

    int seed;
    double distance[5][5]=
    {
        {0,28,33,22,20},
        {28,0,27,40,25},
        {33,27,0,30,15},
        {22,40,30,0,18},
        {20,25,15,18,0}
    };

    double flow[5][5]=
    {
        {0,10,3,1,15},
        {10,0,6,8,4},
        {3,6,0,0,10},
        {1,8,0,0,3},
        {15,4,10,3,0}
    };

    for(count=0; count<5; count++)
    {
        machine[count]=rand()%5+1;
    }

    while(k<5)
    {
        int r=rand()%5+1;

        for (x = 0; x < k; x++)
        {
            if(machine[x]==r)
            {
                break;
            }
        }
        if(x==k)
        {
            machine[k++]=r;
        }
    }
    for(p=0; p<10; p++)
    {
        seed =
            distance[location[0]-1][location[1]-1]*flow[machine[0]-1][machine[1]-1]+
            distance[location[0]-1][location[2]-1]*flow[machine[0]-1][machine[2]-1]+
            distance[location[0]-1][location[3]-1]*flow[machine[0]-1][machine[3]-1]+
            distance[location[1]-1][location[2]-1]*flow[machine[1]-1][machine[2]-1]+
            distance[location[1]-1][location[3]-1]*flow[machine[1]-1][machine[3]-1]+
            distance[location[1]-1][location[4]-1]*flow[machine[1]-1][machine[4]-1]+
            distance[location[2]-1][location[3]-1]*flow[machine[2]-1][machine[3]-1]+
            distance[location[2]-1][location[4]-1]*flow[machine[2]-1][machine[4]-1]+
            distance[location[2]-1][location[5]-1]*flow[machine[2]-1][machine[5]-1]+
            distance[location[3]-1][location[4]-1]*flow[machine[3]-1][machine[4]-1]+
            distance[location[3]-1][location[5]-1]*flow[machine[3]-1][machine[5]-1]+
            distance[location[3]-1][location[5]-1]*flow[machine[3]-1][machine[5]-1]+
            distance[location[3]-1][location[5]-1]*flow[machine[3]-1][machine[5]-1]+
            distance[location[4]-1][location[5]-1]*flow[machine[4]-1][machine[5]-1];
    }

    for(p=0; p<5; p++)
    {
        printf("%d",location[p]);
    }

    printf("\n");

    for(p=0; p<5; p++)
    {
        printf("%d",machine[p]);
    }
    printf("\n");
    return seed;
}
