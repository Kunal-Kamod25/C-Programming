#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int rows, cols, i, j, sum = 0;
    printf("Enter rows and Columns: ");
    scanf("%d %d", &rows, &cols);

    int **A= (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
        A[i] = (int *)malloc(cols * sizeof(int));

    printf("Enter elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &A[i][j]);
            sum = sum + A[i][j];
        }

    printf("Sum of all elements: %d\n", sum);
    for (i = 0; i < rows; i++) 
    free(A[i]);
    free(A);
    return 0;
}

