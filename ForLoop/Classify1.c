#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0&&i%4==0)
            printf("%d->Even and Multiple of 4\n",i);
        else if(i%2==0&&i%4!=0)
            printf("%d->Even but not a multiple of 4\n",i);
        else
            printf("%d->odd\n",i);
    }
    return 0;
}
