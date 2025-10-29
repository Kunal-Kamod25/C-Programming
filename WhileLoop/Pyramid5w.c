#include <stdio.h>

int main()
{
    int n;
    int row = 1, col;

    printf("Enter an Element: ");
    scanf("%d", &n);

    while (row <= n)   // outer loop
    {
        col = 1;
        while (col <= row)   // inner loop
        {
            printf("%d",col);
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}

