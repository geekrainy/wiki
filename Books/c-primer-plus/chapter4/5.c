#include <stdio.h>
#include <string.h>
int main(void)
{
	char first_name[40], last_name[40];
	int f_stl, l_stl;
	
	printf("Plsase enter your first name:\n");
	scanf("%s", first_name);
	printf("Please enter your last_name:\n");
	scanf("%s", last_name);
	f_stl = strlen(first_name);
	l_stl = strlen(last_name);
	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d\n", f_stl, f_stl, l_stl, l_stl);
	printf("%s %s\n", first_name, last_name);
	printf("%-*d %-*d", f_stl, f_stl, l_stl, l_stl);
	return 0;
}
