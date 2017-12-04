#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void swap_2_elements(int *m)
{
  int i1; // random index 1
  int i2; // random index 2
  int v1; // value under undex i1
  int v2; // value under undex i2

  while(1)
  {
      i1 = rand()%5;
      i2 = rand()%5;

      if (i1!=i2) break;
  }

  v1 = m[i1];
  v2 = m[i2];

  m[i1] = v2;
  m[i2] = v1;
}

void swap_2_elements_n_times(int *m, int ntimes)
{
  int i;

  for(i=0; i < ntimes; i++)
    swap_2_elements(m);
}

// print table
void print_machine(int *m)
{
    int i;
    for(i=0; i<5; i++)
      printf(" i=%i ", m[i]);

      printf("\n");
}

void remember_last_array(int *m1, int *m2)
{
    int i;
    for(i=0; i<5; i++)
         m1[i] = m2[i];
}

int are_arrays_same(int *m1, int *m2)
{
   int i;

   for(i=0; i<5; i++)
   {
         if(m1[i] != m2[i])
         return 0; // no
   }

    return 1; // yes
}

int main()
 {
  int i;
  int machine1[5] = {1, 2, 3, 4, 5};
  int machine2[5] = {1, 2, 3, 4, 5};
  srand(time(NULL));

  // Print 10 sets:
  for(i = 0; i < 10; i++) // each next set is different than the previous one, but it may repeat later!
  {
    while(1)
    {
        swap_2_elements_n_times(machine2,10);   // swap two elements 6 times in the table machine
        if( are_arrays_same(machine1, machine2) == 1 ) // compare with the previous set
            continue; // sets are the same!

        remember_last_array(machine1,machine2);
        break; // set is different from previous one
    }

    print_machine(machine1);
  }

  return 0;
}
