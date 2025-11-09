#include<stdio.h>

int main()
{
    int n;
    int i=0;

    printf("Enter a Element: ");
    scanf("%d",&n);

    // int*A=(int*)malloc(sizeof(int)*n)
    printf("\n n::%d",n);

    while(i>n)
    {
        if(i % 3==0 && i % 5==0)
        {
            printf("%d Epic Combo\n",i);
        }
        else if(i % 2==0 && i % 3==0)
        {
            printf("%d FizzTwo\n",i);
        }
        else if(i % 5==0)
        {
            printf("%d Buzz Deep\n",i);
        }
        else if(i % 3==0)
        {
            printf("%d Fizz\n",i);
        }
        else
        {
            printf("%d Chill\n",i);
        }
        i--;
    }
    return 0;

}
