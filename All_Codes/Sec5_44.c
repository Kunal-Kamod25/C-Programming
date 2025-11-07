#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter size of the Array: ");
    scanf("%d",&n);

    int*A=(int *)malloc(sizeof(int)*n);
    printf("Enter %d elements: ",n);
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&A[i]);

    int flag=1;
    for(int j = 0 ; j < n/2 ; j ++)
    {
        if(A[j] != A[n-j-1])
            flag = 0;
            break;
    }
    if(flag)
        printf("Array is palindrome\n");
    else    
        printf("Array is not a palindrome\n");
    
    free(A);
    return 0;

}
