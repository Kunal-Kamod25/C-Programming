#include<stdio.h>
int main()
{
    int num, count, sum=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number from 1 to n:%d\n", num);
    for(count=1;count<=num;count++)
    {
        printf("%d ", count);
    }
    printf("\n");
    return 0;
}