#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int * A = (int *)malloc(sizeof (int)*n);
    if(A == NULL)
    {
        printf("Memory allocation failed....\n");
        exit(-1);
    }
    printf("Enter %d elements: ",n);
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&A[i]);

    printf("Array in reverse order: ");
    for(int j = n-1 ; j >= 0 ; j--)
        printf("%d ",A[j]);

    free(A);
    return 0;
}