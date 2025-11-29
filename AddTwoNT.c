#include<stdio.h>
int main()
{
    int num1=0,num2=0,result;
    char Operator='+';
    printf("Enter two numbers: ");
    scanf("%d %d",&num1 , &num2);
    result=(Operator='+')?(num1+num2):(num1-num2);
    printf("%d",result);
    return 0;

}
