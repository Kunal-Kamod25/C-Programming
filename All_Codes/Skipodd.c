#include<stdio.h>
int main()
{
    int i,n=0;

    printf("Enter the number: \n");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    
        if(i%2==0)
        continue;
    
    else
        printf("%d is even\n",i);
        return 0;
}