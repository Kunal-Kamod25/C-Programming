#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int * A = (int *)malloc(sizeof(int) * n);
    int * B = (int *)malloc(sizeof(int) * n);

    printf("Enter %d elements: ",n);
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&A[i]);

    for(int j = 0 ; j < n ; j++)
        B[j] = A[j];

    printf("Copied array: ");
    for(int k = 0 ; k < n ; k++)
        printf("%d ",B[k]);

    free(A);
    free(B);
    return 0;
}