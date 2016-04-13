#include <stdio.h>
int main(void)
{
	float height;
	char name[20];
	
	printf("Please enter your height and name:\n");
	scanf("%f%s", &height, name);
	printf("%s, you are %.3f feet tall", name, height * 0.08);   // OR height / 12
	return 0;
}
