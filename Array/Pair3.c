#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    int*A=(int*)malloc(sizeof(int)*n);

    if(A==NULL)
    {
        printf("Memory allocation failed.....\n");
        exit(-1);
    }
    printf("Enter array elements: ");
    for(int i=0; i<n; ++i)
    {
        scanf("%d",&A[i]);
    }
    int pos=0,neg=0,zero=0;
    for(int i=0; i<n; ++i)
    {
        if(A[i]>0)
        {
            pos++;
        }
        else if(A[i]<0)
        {
            neg++;
        }
        else if(A[i]==0)
        {
            zero++;
        }
    }
    printf("Positive count: %d\n Negative count: %d\n Zero count: %d\n",pos,neg,zero);
    printf("Pairs with zero sum: \n");
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(A[i]+A[j]>0)
            {
                printf("(%d , %d)\n",A[i],A[j]);
            }
        }
    }
    free(A);
    return 0;
}