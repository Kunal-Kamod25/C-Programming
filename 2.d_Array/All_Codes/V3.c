#include<stdio.h>
int main()
{
	int A=0,B=0,C=0;
	printf("Enter Two Numbers: ");
	scanf("%d%d",&A,&B);
	printf("A=%d,B=%d",A,B);
	A=B;
	B=C;
	C=A;
	printf("A=%d,B=%d",A,B);
	return 0;
}

