#include<stdio.h>
int main()
{
    int num , temp , rev = 0;
    printf("Enter a numbers: ");
    scanf("%d",&num);

    temp = num;
    while(temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if(rev == num)
        printf("Palindrome\n");
    else    
        printf("Not a palindrome\n");

    return 0;
}