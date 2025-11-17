#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    //Read and print the matrix
    int mat[n][n];
    printf("Enter the elements of the %d X %d matrix: \n", n, n);
    for(int r = 0 ; r < n ; r++)
        for(int c = 0 ; c < n ; c++)
            scanf("%d",&mat[r][c]);
    
    printf("The entered matrix %d X %d is: \n", n, n);
    for(int r = 0 ; r < n ; r++)
        for(int c = 0 ; c < n ; c++)
            printf("%d ",mat[r][c]);

    //Compute and print the sum of all the elements in the 0th row
    int r_sum = 0;
    for(int c = 0 ; c < n ; c++)
        r_sum += mat[0][c];
    printf("sum of all elements in oth row: %d\n", r_sum);

    //Compute and print the multiplication of all elements in the 1st column
    int c_mul = 1;
    for(int r = 0 ; r < n ; r++)
        c_mul = c_mul * mat[r][1];
    printf("Multiplication of all elements in 1st column: %d\n", c_mul);

    //Compute and print the sum of all elements in the anti-diagonal
    int a_sum = 0;
    for(int i = 0 ; i < n ; i++)
        a_sum = a_sum + mat[i][n-1-i];
    printf("sum of all elements in anti-diagonal: %d\n", a_sum);

    //Compute and print the sum of all elements in the matrix
    int SE_sum = 0;
    for(int r = 0 ; r < n ; r++)
        for(int c = 0; c < n ; c++)    //Read and print the matrix
            SE_sum += mat[r][c];
    printf("sum of all elements in the matrix: %d\n", SE_sum);

    //Print the largest element in the matrix
    int max = mat[0][0];
    for(int r =0 ; r < n ; r++)
        for(int c = 0 ; c < n ; c++)
            if(mat[r][c] > max)
                max = mat[r][c];
    printf("Largest element in the matrix: %d\n", max);

    //Print the smallest element in the matrix
    int min = mat[0][0];
    for(int r = 0 ; r < n ; r++)
        for(int c = 0 ; c < n ; c ++)
            if(mat[r][c] < min)
                min = mat[r][c];
    printf("Smallest element in the matrix: %d\n", min);

    //Print the largest (and smallest) element on the diagonal
    int diagonal_max = mat[0][0] , diagonal_min = mat[0][0];
    for(int i = 0 ; i < n ; i++)
        if(mat[i][i] > diagonal_max)
            diagonal_max = mat[i][i];
        else if(mat[i][i] < diagonal_min)
            diagonal_min = mat[i][i];
    printf("Largest element on diagonal:%d\nSmallest element on diagonal:%d\n", diagonal_max , diagonal_min);

    //Accept a integer (between 0-n) from user and print that row
    int r;
    printf("Enter a row number: ");
    scanf("%d",&r);
    if(r >= 0 && r < n)
    {
       printf("Row %d is : ",r);
       for(int c = 0 ; c < n ; c++)
            printf("%d ",mat[r][c]);

    }
    else
        printf("No Row");
        printf("\n");

    //Accept an integer (between 0-n) from user and print that column
    int c;
    printf("Enter a column number: ");
    scanf("%d",&c);
    if(c >= 0 && c < n)
    {
        printf("Column %d is: ",c);
        for(int k = 0 ; k < n ; k++)
            printf("%d ",mat[k][c]);
    }
    else 
        printf("No column");
    printf("\n");

    return 0;

}
