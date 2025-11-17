#include<stdio.h>
int main()
{
    int n1=0,n2=0;
    printf("Enter two Numbers:\n");
    scanf("%d %d",&n1, &n2);
    if(n1>n2)
    {
        printf("Larger=%d\n",n1);
    }
    else
    {
        printf("Larger= %d\n",n2);
    }
    return 0;
}