#include<stdio.h>
int main()
{
    int n=0,i=1;

    printf("Enter how many number you want to print: ");
    scanf("%d",&n);

    for(i=1; i<=n; ++i)
    {
        printf("%d \n",i);
    }
    return 0;
}