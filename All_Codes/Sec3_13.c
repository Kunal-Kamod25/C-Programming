#include<stdio.h>
int main()
{
    int a , b , c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d",&a , &b , &c);

    if(a + b > c && a + c > b && b + c > a)
    {
        printf("Valid Triangle. \n");
       
        if(a == b && b == c)
            printf("equilateral \n");
        else if(a == b || a == c || b == c)
            printf("isosceles \n");
        else
            printf("scalene \n");
    }
    else
        printf("Invalid Triangle. \n");
    
    return 0;
}