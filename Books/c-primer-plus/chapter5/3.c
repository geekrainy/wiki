#include <stdio.h>
int main(void)
{
	int day, week, left;
	printf("This program convert day to week, \
you can enter 'q' to exit program.\n");
	printf("please enter a number of day:\n");
	const D_TO_W = 7;
	int status;
	status = scanf("%d", &day);
	while(status == 1)
	{
		week = day / D_TO_W;
		left = day % D_TO_W;
		printf("%d days are %d weeks, %d days.\n", day, week, left);
		printf("Input next day number or input q to quit.\n");
		status = scanf("%d", &day);
	}
	printf("Bye!\n");
	return 0;
}
