#include<stdio.h>
int main()
{
    int num1 , num2;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1 , &num2);

    (num1 > num2) ? printf("Maximum is: %d\n",num1) : printf("Maximum is: %d",num2);
    return 0;
}