#include <stdio.h>

int main()
{
    int n;
    int row, col;

    printf("Enter a number: ");
    scanf("%d", &n);

    row = n;
    while (row >= 1)   // outer loop goes downwards
    {
        col = 1;
        while (col <= row)   // print stars for current row
        {
            printf("%d",col);
            col++;
        }
        printf("\n");   // move to next line
        row--;          // decrease row
    }

    return 0;
}