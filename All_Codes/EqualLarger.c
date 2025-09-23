#include<stdio.h>
int main()
{
    int a=0, b=0;
    printf("Enter the first number: \n");
    scanf("%d",&a);
    printf("Enter the second number: \n");
    scanf("%d",&b);

    if(a==b)
    printf("The number are equal \n");

    else if(a>b)
    printf("The number a is larger than b \n");

    else
    printf("The number b is larger than a \n");
}