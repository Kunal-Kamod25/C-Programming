#include<stdio.h>

int main()
{
    char ch;


    printf("Enter the Value : ");
    scanf("%c",&ch);

     for(;ch<='z' ;++ch)
    {
        printf("%c\n",ch);
    }
    return 0;
}
