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

    int evensum = 0 , oddsum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(i % 2 == 0)
            evensum = evensum + A[i];
        else    
            oddsum = oddsum + A[i];
    }
    printf("Difference = %d\n",evensum , oddsum);
    free(A);
    return 0;

}
