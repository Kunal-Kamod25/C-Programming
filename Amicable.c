#include <stdio.h>
int main()
{
    int i,j;
    int num1 = 0;
    int num2 = 0;

    printf("Enter the two number: \n");
    scanf("%d %d",&num1, &num2);

    int ans1 = 0,ans2 = 0;
    for(i=1; i <=num1/2; ++i)
    {
        if(num1%i==0)
        {
            ans1+=i;
        }
    }
    for(j=1; j<=num2/2; ++j)
    {
        if(num2%j==0)
        {
            ans2+=j;
        }
    }
    if(ans1==num2 && ans2==num1)
    {
        printf("%d and %d are amicable numbers\n",num1,num2);
    }
    else
    {
        printf("%d and %d are not amicable numbers\n",num1,num2);
    }
    
    return 0;
}
