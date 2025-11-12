#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);

    if(n % 2 ==0)//Remainder = 0
        printf("Number is even.\n",n);
    else
        printf("Number is odd.\n",n);
    return 0;
}