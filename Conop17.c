#include<stdio.h>
int main()
{
        int a=0;
        int b=0;
        int max;

        printf("Enter first number: \n");
        scanf("%d",&a);
        printf("Enter second number: \n");
        scanf("%d",&b);
        
        if(a>b)
        {
            max=a;
            printf("Maximum number is a: %d\n",max);
        }
        else
        {
            max=b;
            printf("Maximum number is b: %d\n",max);
        }
        return 0;
}