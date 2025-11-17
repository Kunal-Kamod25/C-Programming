#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int*A=(int*)malloc(sizeof(int)*n);
    if(A==NULL)
    {
        printf("Memory allocation failed.....\n");
        return -1;
    }
    printf("Enter elements of array: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[i]==A[j])
            {
                count++;
            }
        }
    }
    printf("There are %d good pairs.\n",count);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[i]==A[j])
            {
                printf("(%d,%d)\n", i, j);
            }
        }
    }
    free(A);
    return 0;
}
