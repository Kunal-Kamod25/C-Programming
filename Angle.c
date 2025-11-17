#include <stdio.h>
int main() 
{
    int angle1, angle2, angle3, sum;

    printf("Enter three angles of a triangle (in degrees):\n");
    printf("Angle 1: ");
    scanf("%d", &angle1);
    printf("Angle 2: ");
    scanf("%d", &angle2);
    printf("Angle 3: ");
    scanf("%d", &angle3);

    sum = angle1 + angle2 + angle3;

    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && sum == 180) 
    {
        printf("The triangle is VALID.\n");
    } else 
    {
        printf("The triangle is NOT VALID.\n");
    }

    return 0;
}
