#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter Two Number:");
    scanf("%d %d",&a,&b);
    result=a+b;
    printf("Addition= %d+%d=%d\n",a,b,result);
    result=a-b;
	printf("Subtraction= %d-%d=%d\n",a,b,result);
    result=a*b;
	printf("Multiplication= %d*%d=%d\n",a,b,result);
	return 0;
	
}