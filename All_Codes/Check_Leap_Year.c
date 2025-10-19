#include<stdio.h>

int main()
{
    int Year;
    printf("Enter a Year: ");
    scanf("%d",&Year);

    if((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
        printf("%d is a leap year. \n",Year);
    else
        printf("%d is not a leap year. \n",Year);
}