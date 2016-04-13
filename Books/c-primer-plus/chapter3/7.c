#include <stdio.h>
int main(void)
{
	int inch;
	float cm;
	printf("Please enter your height(inch):\n");
	scanf("%d", &inch);
	cm = inch * 2.54;
	printf("Your height %d inch is %.2f cm", inch, cm);
	return 0;
}
