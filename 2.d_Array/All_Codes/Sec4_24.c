#include<stdio.h>
int main()
{
    int n;
    float sum=0;

    printf("Enter a Number: ");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; ++i )
        sum = sum + 1.0 / i;

    printf("Sum of the series = %.2f",sum);
    return 0;
}