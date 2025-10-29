#include<stdio.h>

int main()
{
    int n;
    int row=1 , col=1;
    printf("Enter a element: ");
    scanf("%d",&n);

    for(row=1; row <= n; ++row)
    {
        for(col=1; col <= row; ++col)
    {
        printf("*",col);
    }
        printf("\n");
    }
    return 0;
}