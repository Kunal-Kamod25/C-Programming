#include<stdio.h>
int main()
{
    int a , b , temp;
    printf("Enter a two integers: \n");
    scanf("%d %d",&a , &b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swap: a = %d , b = %d\n",a,b);
    return 0;
}
