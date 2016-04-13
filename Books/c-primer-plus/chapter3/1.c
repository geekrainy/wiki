/* 处理整数上溢、浮点数上溢和浮点数下溢的情况 */
#include <stdio.h>
#include <limits.h> // 整数限制
int main(void)
{
	int a = INT_MAX;
	float f_min = -2.3E10000;
	float f_max = 2.3E200000;
	printf("%d %f %f\n", a+1, f_min, f_max);
	return 0;
}

/* 输出结果

-2147483648 -1.#INF00 1.#INF00

--------------------------------
Process exited after 0.008403 seconds with return value 0
请按任意键继续. . .

*/
