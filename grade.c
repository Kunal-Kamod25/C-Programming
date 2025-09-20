#include<stdio.h>
int main()
{
	char grade;
	printf("Enter Your Grade(A,B,C,D,E,F): ");
	scanf("%c",&grade);
	switch(grade)
	{
		case 'A':
		case 'a':
			printf("Destination\n");
			break;
		case 'B':
		case 'b':
			printf("First Class\n");
			break;
		case 'C':
		case 'c':
			printf("Second Class\n");
			break;
		case 'D':
		case 'd':
			printf("Third Class\n");
			break;
		case 'E':
		case 'e':
			printf("Pass Class\n");
			break;									
		case 'F':
		case 'f':
			printf("Fail\n");
			break;
		default:
			printf("You enterd invalid grade.\n");
	}
	return 0;
}

		
