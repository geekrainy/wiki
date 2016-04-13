#include <stdio.h>
int main(void)
{
	int num, i;
	printf("Please enter a number: \n");
	scanf("%d", &num);
	i = num + 10;
	printf("%d\n", num);
	while(num++ < i)
	  printf("%d\n", num);
	return 0;
}