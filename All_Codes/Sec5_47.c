#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);

    int*A=(int *)malloc(sizeof(int)*n);
    printf("Enter %d elements: ",n);
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&A[i]);

    int largest = INT_MIN , secondlargest = INT_MIN ;
    int smallest = INT_MAX , secondsmallest = INT_MAX;
    for(int i = 0 ; i < n ; i++)
    {
        if(A[i] > largest)
        {
            secondlargest = largest;
            largest = A[i];
        }
        else if(A[i] > secondlargest && A[i] != largest)
            secondlargest = A[i];

        if (A[i] < smallest) 
        {
            secondsmallest = smallest;
            smallest = A[i];
        } else if (A[i] < secondsmallest && A[i] != smallest)
            secondsmallest = A[i];
    }
    printf("Second Largest: %d\nSecond Smallest: %d\n", secondlargest, secondsmallest);
    free(A);
    return 0;
}
