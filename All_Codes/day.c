#include<stdio.h>
int main()
{
	int day=0;
	printf("Enter Day Of Week= ");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("Today is Monday");
			break;
		case 2:
			printf("Today is Tuesday");
			break;
		case 3:
			printf("Today is Wednsday");
			break;
		case 4:
			printf("Today is Thursday");
			break;
		case 5:
			printf("Today is friday");
			break;
		case 6:
			printf("Today is Saturday");
			break;
		case 7:
			printf("Today is Sunday");
			break;
		default:
			printf("Invalid Day Of week %c",day);
	}
	return 0;
}
