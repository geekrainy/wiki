#include <stdio.h>
int main(void)
{
	int count, sum, day;
	
	count = 0;
	sum = 0;
	printf("Enter days:\n");
	scanf("%d", &day);
	const DAY_L = day;
	while(count++ < DAY_L)
	  sum = sum + count * count;
	printf("sum = $%d\n", sum);
	return 0;
}
