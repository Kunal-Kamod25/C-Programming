#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n , i ;
    float sum = 0 , average;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int*A=(int *)malloc(sizeof(int)*n);
    if(A == NULL)
    {
        printf("Memory allocation failed.....\n");
        exit (-1);
    }
    printf("Enter %d elements: \n",n); // read array element
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&A[i]);
        sum = sum + A[i]; //add to sum
    }
    average = sum / n;
    printf("\nSum of elements = %.2f",sum);
    printf("\nAverage of elements = %.2f",average);

    free(A);
    return 0;
}