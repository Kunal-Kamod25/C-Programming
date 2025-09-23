#include<stdio.h>
int main()
{
        int n=0,ans=0;
        printf("Enter the number: \n");
        scanf("%d",&n);

        int n1=n;
        while(n>0)
        {
                ans=(ans*10)+n%10;
                n=n/10;
        }
        printf("ans=%d",ans);
        if(ans==n1)
        printf("n=%d is palindrome",n1);
        else
        printf("Not palindrome");
        return 0;
}
