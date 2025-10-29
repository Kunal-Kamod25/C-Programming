#include<stdio.h>

int main()
{
    int a , b , c;
    int n;

    printf("Enter a three no: \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a >= b && a >= c)
        printf("a = %d is Larger. \n",a);
    else if(b >= a && b >= c)
        printf("b = %d is larger. \n",b);
    else
        printf("c = %d is larger. \n",c);
    
    return 0;
}