#include <stdio.h>
#define MILE_TO_KM 1.609
#define GALLON_TO_L 3.758
int main(void)
{
	float mile, gallon;
	
	printf("Please enter mile:\n");
	scanf("%f", &mile);
	printf("Please enter gallon:\n");
	scanf("%f", &gallon);
	printf("%.1f\n", mile / gallon);
	printf("%.1f", mile * 1.609 / (gallon * 3.758 / 100));
	return 0;
}
