#include<stdio.h>
int main()
{
    int a;

    printf("Enter a integer value: ");
    scanf("%d",&a);

    if(a % 5 == 0 && a % 7 == 0)
        printf("Hello world \n");
    else    
        printf("Bye \n");
    
    return 0;
}