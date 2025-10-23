#include<stdio.h>
int main()
{
    int month , year;

    printf("Enter month number: ");
    scanf("%d",&month);
    printf("Enter year: ");
    scanf("%d",&year);

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Number of days = 31 \n");
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        printf("Number of days = 30 \n");
    else if(month == 2)
    {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            printf("Number of days = 29 (Leap Year) \n");
        else
            printf("Number of days = 28 \n");
    }
    else
        printf("Invalid month number. \n");
    return 0;
}