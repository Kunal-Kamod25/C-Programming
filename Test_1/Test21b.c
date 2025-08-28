#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Integers: ");
    scanf("%d %d",&a,&b);

    (a>b)?printf("The Larger Number is:%d",a):printf("The Larger Number is:%d",b);
}