#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int*A=(int *)malloc(sizeof(int)*n);
    if(A==NULL)
    {
        printf("Memory allocation failed....\n");
        exit(-1);
    }
    printf("Enter %d elements: ",n);
    for(int i = 0 ; i < n ; i ++)
        scanf("%d",&A[i]);

    int poscount = 0 , negcount = 0;
    for(int j = 0 ; j < n ; j++)
    {
        if(A[j] >= 0)
            poscount++;
        else    
            negcount++;
    }
    int*B=(int *)malloc(sizeof(int)*poscount);
    int*C=(int *)malloc(sizeof(int)*negcount);

    int p=0 , q=0;
    for(int K = 0 ; K < n ; K++)
    {
        if(A[K] >= 0)
            B[p++] = A[K];
        else
            C[q++] = A[K];
    }
    printf("Positive numbers: ");
    for(int i = 0 ; i<poscount ; i++)
        printf("%d ",B[i]);

    printf("\nNegative numbers: ");
    for(int i = 0 ; i<negcount ; i++)
        printf("%d ",C[i]);

    free(A);
    free(B);
    free(C);
    return 0;
}