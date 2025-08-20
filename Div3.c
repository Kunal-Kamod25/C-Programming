#include<stdio.h>
int main()
{
    int i,n=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0;i<=n;i++)
    {
        if(i % 3==0)
            continue;
        else
            printf("%d\n", i);
    }
    return 0;
}