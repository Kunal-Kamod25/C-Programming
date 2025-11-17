#include<stdio.h>
int main()
{
    int n , i , count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1)
    {
        printf("%d is neither prime nor composite.\n",n);
        return 0;
    }
    for(i = 1 ; i <= n ; i++)
    {
        if(n % i == 0)
            count++;
    }
    if(count == 2)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is composite number.\n",n);
    return 0;
}