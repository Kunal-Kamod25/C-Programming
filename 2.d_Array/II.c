#include<stdio.h>
int main()
{
    int Row , Col;
    printf("Enter a how many Rows: ");
    scanf("%d",&Row);
    printf("Enter a how many Columns: ");
    scanf("%d",&Col);
    
    //First matrix
    int mat1[Row][Col];
    printf("Enter a first matrix elements: \n");
    for(int r = 0 ; r < Row ; r ++)
        for(int c = 0 ; c < Col ; c++)
            scanf("%d",&mat1[r][c]);

    //Second matrix
    int mat2[Row][Col];
    printf("Enter a second matrix elements: \n");
    for(int r = 0 ; r < Row ; r ++)
        for(int c = 0 ; c < Col ; c++)
            scanf("%d",&mat2[r][c]);

    //addition of the two matrices
    int Sum_mat[Row][Col];
    printf("The sum of two matrices is:\n");
    for(int i = 0 ; i < Row ; i++)
    {
        for(int j = 0 ; j < Col ; j++)
        {
            Sum_mat[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t",Sum_mat[i][j]);
        }
        printf("\n");
    }

    //subtraction of the two matrices
    int Sub_mat[Row][Col];
    printf("The subtraction of two matrices is: \n");
    for(int i = 0 ; i < Row ; i++)
    {
        for(int j = 0 ; j < Col ; j++)
        {
            Sub_mat[i][j] = mat1[i][j] - mat2[i][j];
            printf("%d\t",Sub_mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}