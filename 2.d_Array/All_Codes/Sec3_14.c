#include<stdio.h>
int main()
{
    int day;

    printf("Enter week number: ");
    scanf("%d",&day);

    if(day == 1)
        printf("It's Monday \n");
    else if(day == 2)
        printf("It's Tuesday \n");
    else if(day == 3)
        printf("It's Wednesday \n");
    else if(day == 4)
        printf("It's Thursday \n");
    else if(day == 5)
        printf("It's Friday \n");
    else if(day == 6)
        printf("It's Saturday \n");
    else if(day == 7)
        printf("It's Sunday \n");
    else
        printf("Invalid week number \n");

    return 0;
}