#include<stdio.h>

int main()
{
    int n, i=0;
    int sum=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0; i<=n; ++i)
    {
        sum = i*i;
    }
    printf("The sum of square is: %d\n",sum);
    return 0;
}