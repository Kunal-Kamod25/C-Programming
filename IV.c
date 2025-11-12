#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter the elements of the %d X %d matrix: \n", n, n);
    for (int r = 0; r < n; r++)
        for (int c = 0; c < n; c++)
            scanf("%d", &mat[r][c]);

    // Print the matrix
    printf("Matrix is : \n");
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            printf("%d\t", mat[r][c]);
        }
        printf("\n");
    }

    // Accept the array
    int a[n];
    printf("Enter the elements of the array of size %d: \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Multiply matrix and array
    int result[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = 0;
        for (int j = 0; j < n; j++)
            result[i] += mat[i][j] * a[j];
    }
    // Print the result
    printf("\nResultant array after multiplication:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    printf("\n");
    return 0;
}
