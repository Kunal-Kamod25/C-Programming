#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int rows, cols, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int **A = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
        A[i] = (int *)malloc(cols * sizeof(int));

    int max = INT_MIN, min = INT_MAX;
    printf("Enter elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &A[i][j]);
            if (A[i][j] > max) max = A[i][j];
            if (A[i][j] < min) min = A[i][j];
        }
    printf("Largest: %d\nSmallest: %d\n", max, min);
    for (i = 0; i < rows; i++) 
    free(A[i]);
    free(A);
    return 0;
}
