#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	if(n/2==0)
		printf("The no is even");
	else
		printf("The no is odd\n");
	return 0;
}
