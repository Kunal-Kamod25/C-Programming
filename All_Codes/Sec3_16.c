#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter 2 integers: ");
    scanf("%d %d",&a , &b);

    if(b != 0)
    {
        printf("Quotient = %d \n",a / b);
        printf("Remainder = %d \n",a % b);
    }
    else
        printf("Division by zero is not allowed \n");

    return 0;

}
