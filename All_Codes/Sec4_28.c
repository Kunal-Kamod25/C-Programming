#include<stdio.h>
int main()
{
    int num , fact = 1;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num > 1)
    {
        fact = fact * num;
        --num;
    }
    printf("Factorial= %d\n",fact);
    return 0;
}