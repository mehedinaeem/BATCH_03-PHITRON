#include <stdio.h>

//user defined function for calculate sum
void matrix_sum(int A[][3], int B[][3], int AB[][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            AB[i][j] = A[i][j] + B[i][j];
        }
    }
}


//user defined function for print output
void display_matrix(int matrix[][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[3][3], B[3][3], AB[3][3];
    int i, j;

    // Taking input for array A
    printf("Enter values for array A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Taking input for array B
    printf("Enter values for array B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Calculating the sum of arrays A and B
    matrix_sum(A, B, AB);

    // Displaying the resulting array AB
    printf("Resultant array AB:\n");
    display_matrix(AB);

    return 0;
}
