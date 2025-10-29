#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);

    if(n > 0)
        printf("integer is Positive. \n");
    else if(n < 0)
        printf("integer is Negative. \n");
    else
        printf("integer is zero. \n");

    if(n != 0)
    {
        if(n % 2 == 0)
            printf("and integer is even, \n");
        else    
            printf("and integer is odd. \n");
    }
    return 0;
}