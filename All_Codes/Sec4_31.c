#include<stdio.h>
int main()
{
    int n , count = 0;
    float num , sum =0 , average;
    printf("Enter how many numbers you want input: ");
    scanf("%d",&n);

    for(int i=1 ; i <= n ; ++i)
    {
        printf("Enter a number %d: ",i);
        scanf("%f",&num);
        if(num > 0)
        {
            sum = sum + num;
            count ++;
        }
    }
    if(count > 0)
    {
        average = sum / count;
        printf("\nAverage of positive numbers = %.2f\n",average);
    }
    else
        printf("\nNo positive numbers entered.\n");
    return 0;    
}