/*
Name:       Shaun O'Neill
ID:         B00098451
Date:       23/10/2017
Program:    Reading matrices from "inputf.txt" file and multiply the matrices.
            The product matrix is then send to a "out.txt".
*/

#include<stdio.h>
#include<math.h>

int main()
{
    FILE *input1, *input2, *output; // pointer to file

    int matrix1[100][100] = {};
    int matrix2[100][100] = {};
    int matrix3[100][100] = {};
    int r1,c1,r2,c2;

    int x,y,k; //counters

    printf("Please enter the number of rows and columns for each matrices:\n");

    printf("\n\n---Matrix A---\n");
    printf("Enter Number of Rows: ");
    scanf("%d",&r1);
    printf("Enter the number of Columns: ");
    scanf("%d", &c1);


    printf("\n\n---Matrix B---\n");
    printf("Enter Number of Rows: ");
    scanf("%d",&r2);
    printf("Enter the number of Columns: ");
    scanf("%d", &c2);

    while (c1 != r2)
    {
        printf("Error! Column of the Matrix A is not equal to Row of Matrix B\nPlease enter the rows and columns for both matrices again");

        printf("\n\n---Matrix A---\n");
        printf("Enter Number of Rows:");
        scanf("%d",&r1);
        printf("Enter the number of Columns: ");
        scanf("%d", &c1);


        printf("\n\n---Matrix B---\n");
        printf("Enter Number of Rows: ");
        scanf("%d",&r2);
        printf("Enter the number of Columns: ");
        scanf("%d", &c2);
    }

    input1 = fopen("input2.txt","r");

    printf("\n-MATRIX A-\n");

//getting the values for first matrix
    for(x=0; x<r1; x++)
    {
        for(y=0; y<c1; y++)
        {
            fscanf(input1,"%d",&matrix1[x][y]);
            printf(" %d ",matrix1[x][y]);
        }
        printf("\n\n");
    }

    fclose(input1);

    input2 = fopen("input1.txt", "r");


//Getting the values for second matrix
    printf("\n-MATRIX B-\n");

    for(x=0; x<r2; x++)
    {
        for(y=0; y<c2; y++)
        {
            fscanf(input2, "%d", &matrix2[x][y]);
            printf(" %d ", matrix2[x][y]);
        }
        printf("\n\n");
    }

    fclose(input2);

//Multiplication of First and Second Matrix
    for(x=0; x<r1; ++x)
    {
        for(y=0; y<c2; ++y)
        {
            for(k=0; k<c1; ++k)
            {
                matrix3[x][y] = matrix3[x][y] + (matrix1[x][k] * matrix2[k][y]);

            }
        }
    }

//Displaying the result of multiplication of First and Second Matrix
    printf("Matrix C = Matrix A * Matrix B\n\n");

    for(x = 0; x < r1; ++x)
    {
        for(y = 0; y < c2; ++y)
        {
            printf(" %d ", matrix3[x][y]);
            if(y == c2-1) printf("\n\n");
        }
    }

    output = fopen("output.txt", "w"); //writing the values to output file

    fprintf(output, "Output result:\n");
    for(x = 0; x < r1; x++)
    {
        for(y = 0; y < c2; y++)
        {
            fprintf(output,"%d ", matrix3[x][y]);
        }
        fprintf(output, "\n");
    }

    fclose(output);

    return 0;
}
