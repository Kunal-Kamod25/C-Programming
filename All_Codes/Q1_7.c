#include<stdio.h>
#include<math.h>
int main()
{
    int x , y;
    double expression , squareRoot , finalResult;
    printf("Enter a value of x: ");
    scanf("%d",&x);
    printf("Enter a value of y: ");
    scanf("%d",&y);

    expression = (x * x * x) + (3 * x * x) + (4 * x) - (y * y * y);

    squareRoot = sqrt(expression);

    finalResult = squareRoot / (2 * x * x);

    printf("value of x³+3x²+4x-y³ = %.2f\n",expression);
    printf("Square Root of expression = %.2f\n",squareRoot);
    printf("Final Result(sqrt/2x²)= %.2f\n",finalResult);
    return 0;
}