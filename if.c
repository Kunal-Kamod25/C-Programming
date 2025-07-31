#include <stdio.h>

int main()
{
    char op;
    int a, b;
    double ans = 0.0;

    printf("Enter Operation (+, -, *, /): ");
    scanf(" %c", &op); 
    printf("Enter two Numbers: ");
    scanf("%d %d", &a, &b);

    switch(op) 
    {
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        case '/':
            if(b != 0)
                ans = (double)a / b;
            else 
            {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid Operation: %c\n", op);
            return 1;
    }

    printf("Result = %.2lf\n", ans);
    return 0;
}
