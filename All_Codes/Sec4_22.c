#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int i=1;
    while(i <= n)
    {
        if(i % 2 == 0)
            printf("%d\n",i);
        ++i;
    }
    return 0;
}