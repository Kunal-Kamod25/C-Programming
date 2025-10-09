#include<stdio.h>
int main()
{
    int i;
    int n=0;
    int ans=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        int R=n%10;
        ans=(ans*10)+R;
        n=n/10;
    }
    printf("ans=%d\n",ans);
    return 0;
}
