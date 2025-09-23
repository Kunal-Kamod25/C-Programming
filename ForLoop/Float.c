#include<stdio.h>

int main()
{
    float i=1.0;
    float n=0;

    printf("Enter the value : ");
    scanf("%f",&n);

    for(i=1.0;i<=n;++i)
    {
        printf("%f\n",i);
    }
    return 0;
}