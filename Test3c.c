#include<stdio.h>
int main()
{
    int N=0,i;

    printf("Enter the Number: ");
    scanf("%d",&N);

    for(i=N;i>=1;--i)
    {
        printf("%d",i);
        if(i>1)
            printf("-");
    }
    return 0;
    
}
