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
        printf("Memory Allocation Faild.....\n");
        exit(-1);
    }
    printf("Enter a array: ");
    for(int i=0; i<n; ++i)
    {
        scanf("%d",&A[i]);
    }
    int max=A[0];
    for(int i=1;i<n; ++i)
        {
            if(A[i]>max)
            max=A[i];
        }
        printf("Maximum= %d\n",max);
    free(A);
    return 0;
    
}
