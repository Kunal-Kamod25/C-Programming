#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter a two integers: \n");
    scanf("%d %d",&a , &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d , b = %d\n",a , b);
    return 0;
}
