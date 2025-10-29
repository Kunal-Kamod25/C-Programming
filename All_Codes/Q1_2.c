#include<stdio.h>

int main()
{
    int a , b , c;
    printf("Enter two integers: \n");
    scanf("%d %d",&a , &b);

    c = a + b;
    printf("Addition = %d\n",c);

    c = a - b;
    printf("Subtraction = %d\n",c);

    c = a / b;
    printf("Division = %d\n",c);

    return 0;
}