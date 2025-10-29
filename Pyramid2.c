#include <stdio.h>

int main()
{
    int n;
    int row, col;

    printf("Enter a number: ");
    scanf("%d", &n);

    row = n;
    while (row >= 1) // outer loop
    {
        col = 1;
        while (col <= row) // inner loop
        {
            printf("%d ",col);
            col++;
        }
        printf("\n");  
        row--; 
    }

    return 0;
}