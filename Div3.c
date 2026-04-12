#include<stdio.h>
int main()
{
    int i,n=0;
    printf("Enter an Number: ");
    scanf("%d", &n);

    for(i=0;i<=n;i++)
    {
        if(i % 4==0)
            continue;
        else
            printf("%d\n", i);
    }
    return 0;
}
