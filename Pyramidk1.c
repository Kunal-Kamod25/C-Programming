#include<stdio.h>
int main()
{
    int n;
    int row = 1 , col;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(row <= n)
    {
        col = 1;
        while(col <= row)
        {
            printf("%d ",col);
            col++;
        }
        printf("\n");
        row++;
    }
}