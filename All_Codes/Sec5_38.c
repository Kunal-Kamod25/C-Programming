#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter a size of array: ");
    scanf("%d",&n);

    int*A=(int *)malloc(sizeof(int)*n);
    if(A == NULL)
    {
        printf("Memory allocation failed....\n");
        exit(-1);
    }
    printf("Enter %d elements: ",n);
    for(int i = 0 ; i < n ; i ++)
        scanf("%d",&A[i]);

    int max = A[0] , min = A[0];
    for(int i = 1 ; i < n ; i ++)
    {
        if(A[i] > max)max = A[i];
        if(A[i] < min)min = A[i];
    }
    printf("Maximum: %d\nMinumum: %d\n",max , min);
    free(A);
    return 0;
}