#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int mat[n][n];
    printf("Enter the elements of the %d X %d matrix: \n", n, n);
    for(int r = 0 ; r < n ; r++)
        for(int c = 0 ; c < n ; c++)
            scanf("%d",&mat[r][c]); 

    //Print the matrix
    printf("Matrix is : \n");
    for(int r = 0 ; r < n ; r++)
    { 
        for(int c = 0 ; c < n ; c++)
        {
            printf("%d\t",mat[r][c]);
        }
        printf("\n");
    }

    //Multiply the matrix with the integer value and print the matrix.
    int a,multiplication= 0;
    printf("Enter an integer value to multiply with the matrix: ");
    scanf("%d",&a);
    for(int r = 0 ; r < n ; r++)
    {
        for(int c = 0 ; c < n ; c++)
        {
            multiplication = mat[r][c] * a;
            printf("%d\t",multiplication);
        }
        printf("\n");
    }
    return 0;
}