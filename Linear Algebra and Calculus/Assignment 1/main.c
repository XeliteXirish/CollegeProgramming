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
    FILE *input, *output; // pointer to file

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

    while (c1 > 10 || c2 > 10 || r1 > 10 || r2 > 10)   // Makes sure numbers are less then or equal to 10
    {
        printf("\nError! Columns and rows cannot be greater then 10! Try again!\n");

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

    while (c1 != r2) // Makes sure columns are equal to rows
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

    input = fopen("input.txt","r");


//getting the values for first matrix
    printf("\n-MATRIX A-\n");
    for(x=0; x<r1; x++)
    {
        for(y=0; y<c1; y++)
        {
            fscanf(input,"%d",&matrix1[x][y]);
            printf(" %d ",matrix1[x][y]);
        }
        printf("\n\n");
    }

//Getting the values for second matrix
    printf("\n-MATRIX B-\n");
    for (x = 12; x < (r2 + 12); x++)
    {
        for(y=0; y<c2; y++)
        {
            fscanf(input, "%d", &matrix2[x-12][y]);
            printf(" %d ", matrix2[x-12][y]);
        }
        printf("\n\n");
    }

    fclose(input);

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
    printf("Matrix C = Matrix A * Matrix B\n\n\n");

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
