#define M_TO_H 60
#include <stdio.h>
int main(void)
{
	int min, hour, left;
	printf("This program converts minutes to hours and minutes.\n");
	printf("Enter the number of minutes and enter 0 to end the program.\n");
	scanf("%d", &min);
	while(min>0)
	{
		hour = min / M_TO_H;
		left = min % M_TO_H;
		printf("%d min is %d hour, %d min. \n", min, hour, left);
		printf("Next input?\n");
		scanf("%d", &min);
	}
	printf("Program done!\n");
	return 0;
}
