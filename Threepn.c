#include <stdio.h>
int main() 
{
    float a, b, c;

    printf("Enter three positive numbers (sides of the triangle): ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) 
    {
        printf("Sides must be positive numbers.\n");
        return 1;
    }

    
    if ( (a + b > c) && (a + c > b) && (b + c > a) ) 
    {
        if (a == b && b == c) 
        {
            printf("The triangle is equilateral.\n");
        } 
        else if (a == b || a == c || b == c) 
        {
            printf("The triangle is isosceles.\n");
        } 
        else 
        {
            printf("The triangle is scalene.\n");
        }
    } 
    else 
    {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}