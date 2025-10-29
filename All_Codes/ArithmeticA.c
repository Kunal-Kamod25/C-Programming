#include <stdio.h>
#include <math.h> 
int main() 
{
    int x;
    double power_result;
    int expression_result;
    printf("Enter an integer x: ");
    scanf("%d", &x);
    power_result = pow(2, x); 
    expression_result = 2 + 2 * x;
    printf("a. 2^%d = %.0lf\n", x, power_result);
    printf("b. 2 + 2x = %d\n", expression_result);
    return 0;
}