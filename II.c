#include<stdio.h>
int main()
{
    int Row, Col;

    printf("Enter how Many Rows: ");
    scanf("%d", &Row);

    printf("Enter how Many Columns: ");
    scanf("%d", &Col);
    
    // First matrix
    int mat1[Row][Col];
    printf("Enter the elements of the first matrix:\n");
    for(int r = 0; r < Row; r++)
        for(int c = 0; c < Col; c++)
            scanf("%d", &mat1[r][c]);

    // Second matrix
    int mat2[Row][Col];
    printf("Enter the elements of the second matrix:\n");
    for(int r = 0; r < Row; r++)
        for(int c = 0; c < Col; c++)
            scanf("%d", &mat2[r][c]);

    // Addition of matrices
    int Sum_mat[Row][Col];
    printf("\nThe sum of two matrices is:\n");
    for(int i = 0; i < Row; i++)
    {
        for(int j = 0; j < Col; j++)
        {
            Sum_mat[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t", Sum_mat[i][j]);
        }
        printf("\n");
    }

    // Subtraction of matrices
    int Sub_mat[Row][Col];
    printf("\nThe subtraction of two matrices is:\n");
    for(int i = 0; i < Row; i++)
    {
        for(int j = 0; j < Col; j++)
        {
            Sub_mat[i][j] = mat1[i][j] - mat2[i][j];
            printf("%d\t", Sub_mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
