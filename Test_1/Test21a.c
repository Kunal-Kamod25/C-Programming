#include<stdio.h>
int main()
{
    int amount=0;
    printf("Enter the amount:");
    scanf("%d",&amount);

    if(amount<50)
    {
        printf("The Discount You get 0%%\n");
    }
    else if(amount>=50 && amount<=100)
    {
        printf("The Discount You get 10%%\n");
    }
    else if(amount>=101 && amount<200)
    {
        printf("The Discount You get 20%%\n");
    }
    else
    {
        printf("The discount You get 30%%\n");
    }
    return 0;
}