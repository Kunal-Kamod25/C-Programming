#include<stdio.h>

int main()
{
    int n;
    int a , b;
    printf("Enter a two no: \n");
    scanf("%d %d",&a , &b);

    if(a > b)
        printf("a = %d is larger. \n",a);
    else
        printf("b = %d is larger. \n",b);
}