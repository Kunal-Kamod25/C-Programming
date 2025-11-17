#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int*A=(int *)malloc(sizeof(int)*n);
    if(A == NULL)
    {
        printf("Memory allocation failed.....\n");
        exit(-1);
    }
    printf("Enter %d elements: ",n);
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&A[i]);

    int key , found = 0;
    printf("Enter number to serach: ");
    scanf("%d",&key);

    for(int j = 0 ; j < n ; j++)
    {
        if(A[j] == key)
        {
            printf("Element found at index: %d\n",j);
            found = 1;
            break ;
        }
    }
    if(!found)
        printf("Element not found..\n");
    
    free(A);
    return 0;
}