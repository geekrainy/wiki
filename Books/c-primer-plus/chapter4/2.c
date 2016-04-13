#include <string.h>
#include <stdio.h>
int main(void)
{
	char name[40];
	int s;
	printf("Please enter your name:\n");
	scanf("%s", name);
	s = strlen(name) + 3;
	printf("\"%s\" \"%20s\" \"%-20s\" \"%*s\"", name, name, name, s, name);
	return 0;
}
