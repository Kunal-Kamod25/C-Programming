#include<stdio.h>
int main()
{
    int i , j;
    printf("Multiplication tables from 1 to 10:\n\n");
    
    for(i = 1 ; i <= 10 ; i++)
    {
        printf("Table of %d: \n",i);
        for(j = 1 ; j <= 10 ; j++)
        {
            printf("%d X %d = %d\n", i , j , i * j);
        }
        printf("\n");
    }
    return 0;
}