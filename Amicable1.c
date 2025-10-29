#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the two numbers: \n");
    scanf("%d %d", &num1, &num2);

    int sum1 = 0, sum2 = 0;

    // Find sum of proper divisors of num1
    for (int i = 1; i <= num1 / 2; ++i)
    {
        if (num1 % i == 0)
        {
            sum1 += i;
        }
    }

    // Find sum of proper divisors of num2
    for (int i = 1; i <= num2 / 2; ++i)
    {
        if (num2 % i == 0)
        {
            sum2 += i;
        }
    }

    // Check if numbers are amicable
    if (sum1 == num2 && sum2 == num1)
    {
        printf("%d and %d Are amicable numbers.\n", num1, num2);
    }
    else
    {
        printf("%d and %d Are not amicable numbers.\n", num1, num2);
    }

    return 0;
}
