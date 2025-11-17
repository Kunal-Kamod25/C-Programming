#include<stdio.h>
int main()
{
    int n, i, num, result=0;
    printf("Enter the numbers: ");
    scanf("%d", &n);

    printf("Enter %d Integers: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &num);
        if(i%2==0)
        {
           result+=num; // Even number
        }
        else
        {
            result-=num; // Odd number
        }
        printf("Result = %d\n",result);
    }
    return 0;
}