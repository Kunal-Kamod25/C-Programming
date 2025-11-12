#include <stdio.h>
#include <math.h>
int main() 
{
    int x, y;
    printf("Enter integer x: ");
    scanf("%d", &x);
    printf("Enter integer y: ");
    scanf("%d", &y);
    double numerator = sqrt(pow(x, 223) * 4 + 8 * y + x + 5);
    double denominator = 2 * x * x;
    double result = numerator / denominator;
    printf("Answer is = %lf\n", result);
    return 0;
}
