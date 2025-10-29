#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i=n-1;
    int j=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    int A[n];

    while(j<i)
    {
        int c; 
        c=A[j];
        A[i]=A[j];
        A[j]=c;

        ++j;
        --i;
    }
    printf("Final array is= %d",A[j]);
    return 0;
}