#include <stdio.h>
int main(void)
{
	int quart;
	float w_num;
	printf("Please enter water quart:\n");
	scanf("%d", &quart);
	w_num = (quart * 950) / 3E-23;
	printf("%d quart water have %e properties of water", quart, w_num);
	return 0;
}
