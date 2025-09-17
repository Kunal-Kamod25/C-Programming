#include<stdio.h>
int main()
{
    int n=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=1;i<n;++i)
    {
        if(i % 2 == 0)
        {
            if(i % 4 == 0)
            {
                printf("%d is Even & div by 4 \n",i);
            }
            else
            {
                printf("%d is Even & not div by 4 \n",i);
            }
        }
        else
        {
            printf("%d is odd \n",i);
        }
        printf("\n");
    }
    return 0;
}
