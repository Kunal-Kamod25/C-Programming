#include<stdio.h>
int main()
{
    int n=0, i=0, j=0;
    printf("Enter The Number: ");
    scanf("%d", &n);

    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            printf("%d",i+j);
        }
        printf("\n");
    }
    return 0;
}