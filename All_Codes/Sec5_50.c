#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int **A = (int **)malloc(rows * sizeof(int *));
    int **B = (int **)malloc(rows * sizeof(int *));
    int **sum = (int **)malloc(rows * sizeof(int *));
    int **diff = (int **)malloc(rows * sizeof(int *));

    for (i = 0; i < rows; i++) 
    {
        A[i] = (int *)malloc(cols * sizeof(int));
        B[i] = (int *)malloc(cols * sizeof(int));
        sum[i] = (int *)malloc(cols * sizeof(int));
        diff[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    printf("Sum of matrices:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Difference of matrices (A - B):\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            diff[i][j] = A[i][j] - B[i][j];
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) 
    {
        free(A[i]); free(B[i]); free(sum[i]); free(diff[i]);
    }
    free(A); free(B); free(sum); free(diff);

    return 0;
}
