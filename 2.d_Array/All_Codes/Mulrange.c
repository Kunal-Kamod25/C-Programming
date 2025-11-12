#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number : \n");
    scanf("%d",& num);
     
    if(num<100)
    {
            printf("Small\n");
    }
    else if(num>=100 && num<=200)
    {
        printf("Large\n");
    }
    else if(num>=201 && num<=300)
    {
        printf("Bigger\n");
    }
    else if(num>=301 && num<=400)
    {
        printf("Largest\n");
    }
    else //num>400
    {
        printf("Very Large\n");
    }
        return 0;
}
