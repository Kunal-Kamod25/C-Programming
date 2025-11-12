#include <stdio.h>
int main() 
{
    int x, y;
    printf("Enter integer x: ");
    scanf("%d", &x);
    printf("Enter integer y: ");
    scanf("%d", &y);

    int result = (x * x * x) + 3 * (x * x) + 4 * x - (y * y * y);
    printf("Answer is = %d\n", result);

    return 0;
}
