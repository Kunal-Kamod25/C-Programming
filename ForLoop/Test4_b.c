#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    int row=0;
    // int col=1;

    while(row<n)
    {
        int col=1;
        while(col<=n-row)
        {
            printf("%d ",col);
            ++col;
        }
        printf("\n");
        ++row;  
    }
    
}