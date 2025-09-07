#include<stdio.h>
int main()
{
	int n=0;
	
	printf("Enter A Number=");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("The Month Is January \n");
			break;
		case 2:
			printf("The Month Is Fabruary \n");
			break;
		case 3:
			printf("The Month Is March \n");
			break;
		case 4:
			printf("The Month Is April \n");
			break;
		case 5:
			printf("The Month Is May \n");
			break;
		case 6:
			printf("The Month Is June \n");
			break;
		case 7:
			printf("The Month Is July \n");
			break;
		case 8:
			printf("The Month Is August \n");
			break;
		case 9:
			printf("The Month Is September \n");
			break;
		case 10:
			printf("The Month Is October \n");
			break;
		case 11:
			printf("The Month Is November \n");
			break;
		case 12:
			printf("The Month Is December \n");
			break;
		default:
			printf("Enter invalid number.\n");
	}
}
			
			
