#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int i = 1 , s = (2 * n) -1;
    int tn = 1;
    while(i <= n)
    {
        int t_s = 0;
        while(t_s < s)
        {
            printf("  ");
            t_s++;
        }
        int j = 1;
        while(j <= tn)
        {
            printf("%d   ", j);
            j++;
        }
         printf("\n");
        s = s-2;
        tn ++;
        i++;
    }
    return 0;
}