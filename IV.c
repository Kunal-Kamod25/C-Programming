#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int mat[n][n];
<<<<<<< HEAD
    printf("Enter the elements of the %d X %d matrix:\n", n, n);
=======
    printf("Enter the elements of the %d X %d matrix: \n", n, n);
>>>>>>> f656aca4000c3683553068cbe4f278b8d31428a9
    for (int r = 0; r < n; r++)
        for (int c = 0; c < n; c++)
            scanf("%d", &mat[r][c]);

    // Print the matrix
<<<<<<< HEAD
    printf("Matrix is:\n");
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
            printf("%d\t", mat[r][c]);
=======
    printf("Matrix is : \n");
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            printf("%d\t", mat[r][c]);
        }
>>>>>>> f656aca4000c3683553068cbe4f278b8d31428a9
        printf("\n");
    }

    // Accept the array
    int a[n];
<<<<<<< HEAD
    printf("Enter the elements of the array of size %d:\n", n);
=======
    printf("Enter the elements of the array of size %d: \n", n);
>>>>>>> f656aca4000c3683553068cbe4f278b8d31428a9
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
<<<<<<< HEAD

=======
>>>>>>> f656aca4000c3683553068cbe4f278b8d31428a9
    // Print the result
    printf("\nResultant array after multiplication:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    printf("\n");
    return 0;
}
