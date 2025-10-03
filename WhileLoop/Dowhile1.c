#include<stdio.h>

int main()
{
    int n;
    int i=1;

    printf("Enter the Number: ");
    scanf("%d",&n);

    do
    {
        printf("%d\n",i);
        ++i;
    } while (i <= n);
    return 0;
    
}
