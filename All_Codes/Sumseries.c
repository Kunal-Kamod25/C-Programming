#include<stdio.h>
int main()
{
    int num;
    int i=1;
    int sum = 0; 

    printf("Enter a number: ");
    scanf("%d",&num);

    while(i <=num)
    {
        sum=sum+(i/2);
        i++;
    }
    printf("sum of the sries is: %d\n",sum);
}