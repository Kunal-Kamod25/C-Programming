#include<stdio.h>
int main()
{
    int n, i, num, result=0;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &num);
        if(i%2==0)
        {
           result+=num; // Even number
        }
        else
        {
            result-=num; // Odd number
        }
    }
    printf("Result = %d\n",result);
    return 0;
}