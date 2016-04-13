#include <stdio.h>
int main(void)
{
	float num;
	printf("Please enter a float number:\n"); 
	scanf("%f", &num);
	printf("The input is %.6f or %e", num, num);
	return 0;
}
