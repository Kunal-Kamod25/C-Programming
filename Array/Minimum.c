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
        printf("Memory allocation faild......\n");
        exit(-1);
    }
    printf("Enter a array: ");
    for(int i=0; i<n; ++i)
    {
        scanf("%d",&A[i]);
    }
    for(int i=1; i<n; ++i)
    {
        int min=A[0];

        for(i=1; i<n; ++i)
        {
            if(A[i]<min)
            min=A[i];
        }
        printf("Minimum= %d\n",min);
    free(A);
    return 0;   
    }
}