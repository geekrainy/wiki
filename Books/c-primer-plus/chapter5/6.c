#include <stdio.h>
float cube(float num);
int main(void)
{
	float num;
	printf("Please enter a float number:\n");
	scanf("%f", &num);
	printf("%f cube is %f", num, cube(num));
}
float cube(float num)
{
	return num * num * num;
}
