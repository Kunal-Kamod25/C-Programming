#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter size of the Array: ");
    scanf("%d",&n);

    int*A=(int *)malloc(sizeof(int)*n);
    printf("Enter %d Elements: ",n);
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&A[i]);

    int i , j = 0;
    for(i = 0 ; i < n ; i++)
    {
        if(A[i] != 0)
            A[j++] = A[i];
    }
    while(j<n)
        A[j++] = 0;
    
    printf("Array after moving zeros: ");
    for(i = 0 ; i < n ; i++)
        printf("%d ",A[i]);

    free(A);
    return 0;

}
