#include<stdio.h>
int main()
{
    int n;

    printf("Enter the Number: ");
    scanf("%d",&n);

    for(int i=0;i<=n;++i)
    {
            if(i%2 == 0)
            {
                if(i%4 == 0)
                {
                    printf("%d is Even and multiple of 4\n",i);
                }
                else
                {
                    printf("%d is Even but not a multiple of 4\n",i);
                }
            }
            else
            {
                printf("%d is Odd \n",i);    
            }
    }
    return 0;
}