#include<stdio.h>
int main()
{
    char clr;
    printf("enter the character:");
    scanf("%c",&clr);
    switch(clr)
    {
        case 'R':
            printf("angry");
            break;
        case 'G':
            printf("happy");
            break;
        case 'B':
            printf("sad");
            break;
        case 'C':
            printf("cool");
            break;
        default:printf("invalid character");
    }
    return 0;
}
