#include <stdio.h>

int main()
{
    int n;
    int row, col;

    printf("Enter a Number: ");
    scanf("%d", &n);

    row = n;
    while (row >= 1)
    {
        col = 1;
        while (col <= row)
        {
            printf("%d", col);
            col++;
        }
        printf("\n");
        row--;          
    }

    return 0;

}
