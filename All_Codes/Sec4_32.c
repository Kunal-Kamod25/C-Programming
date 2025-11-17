#include<stdio.h>
int main()
{
    int n;
    printf("Enter a limit: ");
    scanf("%d",&n);

    printf("Even numbers from 1 to %d are: \n",n);
    for(int i=1 ; i <= n ; ++i)
    {
        if(i % 2 != 0)
            continue;
        printf("%d ",i);
    }
    // printf("\n");
    return 0;
}