#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        int s = n - i;
        int t_s = 0;
        
        while (t_s < s)
        {
            printf(" ");
            t_s++;
        }
        int j = 1;
        
        while (j <= i)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}