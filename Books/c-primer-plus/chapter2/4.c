#include <stdio.h>
void good(void);
void tip(void);
int main(void)
{
	good();
	good();
	good();
	tip();
	return 0;
}
void good(void)
{
	printf("For he's a jolly good fellow!\n");
}

void tip(void)
{
	printf("Which nobody can deny!\n");
}
