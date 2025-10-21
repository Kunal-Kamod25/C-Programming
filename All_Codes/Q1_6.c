#include<stdio.h>
int main()
{
    int x;
    int a,b;
    printf("Enter an integer value of x: ");
    scanf("%d",&x);

    a = x * x ;
    b = (x * x) + (2 * x);

    printf("x² = %d\n",a);
    printf("x²+2x = %d\n",b);
    return 0;
}