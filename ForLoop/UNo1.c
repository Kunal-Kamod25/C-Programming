#include<stdio.h>
int main()
{
    int n=0;
    int i=0;

    printf("Enter how many number you want to print: ");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d \n",i);
        ++i;
    }
    return 0;
}