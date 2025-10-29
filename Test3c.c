#include<stdio.h>
int main()
{
    int n=0,i;

    printf("Enter the Number: ");
    scanf("%d",&n);

    for(i=n;i>=1;--i)
    {
        printf("%d",i);
        if(i>1)
            printf("-");
    }
    return 0;
    
}

