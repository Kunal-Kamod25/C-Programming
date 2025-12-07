#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Num:");
    scanf("%d",&n);
    if(n<100)
        printf("small");
    else if(n>100&&n<200)
        printf("large");
    else if(n>201&&n<300)
        printf("bigger");
    else if(n>301&&n<400)
        printf("largest");
    else if(n>400)
        printf("very large");
    else
        printf("invalid num");
    return 0;

}
