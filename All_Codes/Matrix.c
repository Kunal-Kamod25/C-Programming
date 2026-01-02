#include<stdio.h>
int main()
{
    int i=0, n=0, j=0;
    printf("Enter the Number: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((i*j)%5==0)
            printf("[%d]",i*j);
            else
            {
                printf("%d",i*j);
            }
        }
        printf("\n");
    }
    return 0;
}
