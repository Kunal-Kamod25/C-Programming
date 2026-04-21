#include <stdio.h>
int main() 
{
    int x, y;
    printf("Enter An Integer x: ");
    scanf("%d", &x);
    printf("Enter An Integer y: ");
    scanf("%d", &y);

    int result = (x * x * x) + 3 * (x * x) + 4 * x - (y * y * y);
    printf("Answer is = %d\n", result);

    return 0;
}
