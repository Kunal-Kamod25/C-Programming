#include<stdio.h>

int main()
{
    int Marks;
    printf("Enter student marks: ");
    scanf("%d",&Marks);

    if(Marks > 90)
        printf("Grade A\n");
    else if(Marks > 75 && Marks <=90)
        printf("Grade B\n");
    else if(Marks > 60 && Marks <=75)
        printf("Grade C\n");
    else if(Marks > 45 && Marks <=60)
        printf("Grade D\n");
    else
        printf("Grade F (Fail)");
}