#include <stdio.h>
#include <math.h>
int main() 
{
    int x, y;
    printf("Enter integer x: ");
    scanf("%d", &x);
    printf("Enter integer y: ");
    scanf("%d", &y);
    double result = sqrt(2 * x * x + 4 * y + x + 10);
    printf("Answer is = %lf\n", result);
    return 0;
}
