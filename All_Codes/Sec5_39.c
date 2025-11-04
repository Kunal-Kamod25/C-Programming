#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter a size of array: ");
    scanf("%d",&n);

    int*A = (int*)malloc(sizeof(int)*n);
    if(A == NULL)
    {
        printf("Memory allocation failed.....\n");
        exit(-1);
    }
    printf("Enter %d elements: ",n);
    for(int i = 0 ; i < n ; i ++)
        scanf("%d",&A[i]);

    int even = 0 , odd = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(A[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even: %d , Odd: %d\n",even , odd);
    free(A);
    return 0;
}