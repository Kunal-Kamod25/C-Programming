#include<stdio.h>

int main()
{
    int n;
    
    do
    {
        printf("Enter a Number: ");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n % 2!=0)
        {
            break;
        }
    }
    while(1);
    printf("Thank You.\n");

    return 0;

}
