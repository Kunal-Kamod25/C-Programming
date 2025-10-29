#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int i;
    printf("Enter a number of element: ");
    scanf("%d",&n);

    int*A=(int*)malloc(sizeof(int)*n);
    if(A==NULL)
    {
        printf("Memory allocation faild......\n");
        exit(0);
    }
    printf("Enter the elements:%d \n",n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;++i)
    {
        printf("Array is = %d",A[i]);

    }
    free(A);
    return 0;
}