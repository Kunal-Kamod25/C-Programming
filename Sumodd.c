#include<stdio.h>
int main()
{
    int num;
    int i=1;
    
    printf("Enter a number: "); //Ask the user for input the value
    scanf("%d",&num);

    while(i<=num)
    {
        if(i % 3 !=0)
        {
            printf("%d ", i); //Print even numbers
        }
        i++;
    }
    return 0;
}
