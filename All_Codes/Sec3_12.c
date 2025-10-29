#include<stdio.h>
int main()
{
    int a , b , c;
    printf("Enter three angles: ");
    scanf("%d %d %d",&a , &b , &c);

    if(a > 0 && b > 0 && c > 0 && (a + b + c) == 180)
        printf("Valid Triangle. \n");
    else 
        printf("Invalid Triangle. \n");
    
    return 0;
}