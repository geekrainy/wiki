#include <stdio.h>
int main(void)
{
	int ascii;
	printf("Please enter a code:\n");
	scanf("%d",&ascii);
	printf("The code for %c is %d", ascii, ascii);
	return 0;
}
