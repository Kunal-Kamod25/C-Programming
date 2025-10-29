#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    for(; a<=10; a++)
    {
        printf("%d\n",a);
    }
    return 0;
}