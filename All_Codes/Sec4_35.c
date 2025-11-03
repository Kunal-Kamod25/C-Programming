#include<stdio.h>
int main()
{
    int n , i , j , count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers between 2 and %d are: \n",n);
    for(i = 2 ; i <= n ; i++)
    {
        count = 0;
        for(j = 1 ; j <= i ; j++)
        {
            if(i % j == 0)
                count++;
        }
        if(count == 2)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}
