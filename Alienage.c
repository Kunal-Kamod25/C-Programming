#include<stdio.h>
int main()
{
    int age=0;
    printf("Enter the Alien Age: ");
    scanf("%d", &age);
    if(age < 5)
    {
        printf("Infant\n");
    }
    else if(age>=5 && age<=50)
    {
        printf("teenager\n");
    }
    else if(age>=51 && age<=300)
    {
        printf("Adult\n");
    }
    else if(age>300)
    {
        printf("Ancient\n");
    }
    else
    {
        printf("Invalid Age\n");
    }
    return 0;

}
