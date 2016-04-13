#include <stdio.h>
int main(void)
{
	int old;
	float s;
	printf("Please enter your old:\n");
	scanf("%d", &old);                      // 警示：缺少&使得编译通过，但程序运行出错。
	s = old * 3.156E7;
	printf("Your old is %f s", s);
	return 0;
}
