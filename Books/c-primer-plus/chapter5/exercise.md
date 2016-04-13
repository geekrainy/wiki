## 1.2. 假定所有的变量都是int类型。找出下面每一个变量的值： ##
```c
a. x = (2 + 3) * 6; // 30
b. x = (12 + 6) / 2*3; // 27
c. y = x = (2 + 3) / 4; // y = 1, x = 1
d. y = 3 + 2 * (x = 7/2); // x = 3, y = 9

a. x = (int)3.8 + 3.3; // 6
b. x = (2 + 3) * 10.5; // 52
c. x = 3 / 5 * 22.0; // 0
d. x = 22.0 * 3 / 5; // 13
```

## 3. 怀疑下面的程序里有一些错误，找出错误。 ##
```c
int main(void)
{
	int i = 1;
	float n;
	printf("Watch out! Here come a bunch of fractions!\n");
	while(i < 30)
	  n = 1/i;
	  printf("%f", n);
	printf("That's all, folks!\n");
	return;
}

/* 更正 */
#include <stdio.h>
int main(void)
{
	int i = 1;
	float n;
	printf("Watch out! Here come a bunch of fractions!\n");
	while(i < 30)
	{
		n = 1 / i;
		printf("%f", n);
		n++;
	}
	printf("That's all, folks!\n");
	return 0;
}
```

## 4. 这是一个试图将秒转换为分和秒的程序，但是该程序不令人满意。为什么？如何改进它？ ##
```c
#include <stdio.h>
#define S_TO_M 60
int main(void)
{
	int sec, min, left;
	printf("This program converts seconds to minutes and ");
	printf("seconds.\n");
	printf("Just enter the number of seconds.\n");
	printf("Enter 0 to end the program.\n");
	while(sec > 0){
		scanf("%d", &sec);
		min = sec / S_TO_M;
		left = sec % S_TO_M;
		printf("%d sec is %d min, %d sec. \n", sec, min, left);
		printf("Next input?\n);
	}
	printf("Bye!\n");
	return 0;
}

/* 改进 */
#include <stdio.h>
#define S_TO_M 60
int main(void)
{
	int sec, min, left;
	printf("This program converts seconds to minutes and seconds.\n");
	printf("Just enter the number of seconds.\n");
	printf("Enter 0 to end the program.\n");
	scanf("%d", &sec);
	while(sec > 0)
	{
		min = sec / S_TO_M;
		left = sec % S_TO_M;
		printf("%d sec is %d min, %d sec. \n", sec, min, left);
		printf("Next input?\n");
		scanf("%d", &sec);
	}
	printf("Bye!\n");
	return 0;
}
```

## 5. 下面的程序将打印出什么？ ##
```c
#include <stdio.h>
#define FORMAT "%s is a string\n"
int main(void)
{
	int num = 0;
	
	printf(FORMAT, FORMAT);
	printf("%d\n", ++num);
	printf("%d\n", num++);
	printf("%d\n", num--);
	printf("%d\n", num);
	return 0;
}

/*
%s is a string
 is a string
1
1
2
1
*/
```

## 6. 下面的程序打印出什么？ ##
```c
#include <stdio.h>
int main(void)
{
	char c1, c2;
	int diff;
	float num;
	
	c1 = 'D';
	c2 = 'A';
	diff = c1 - c2;
	num = diff;
	printf("%c%c%c: %d %3.2f\n", c1, c2, c1, diff, num);
	return 0;
}

/* >DAD: 3 3.00
*/
```

## 7. 下面的程序将打印出什么？ ##
```c
#include <stdio.h>
#define TEN 10
int main(void)
{
	int n = 0;
	while(n++ < TEN)
	  printf("%5d", n);
	printf("\n");
	return 0;
}

/* 
    1    2    3    4    5    6    7    8    9   10   

*/
```

## 8. 修改上一个程序，让它打印从a到g的字母。 ##
```c
#include <stdio.h>
#define G 103
int main(void)
{
	char n = 96;
	while((int)n++ < G)
	  printf("%5c", n);
	printf("\n");
	return 0;
}
```

## 9. 如果下面的片段是一个完整程序的一部分，它们将打印出什么？ ##
```c
a.
int x = 0;
while(++x < 3)
  printf("%4d", x);
/*
   1   2
*/
b.
int x = 100;

while(x++ < 103)
  printf("%4d\n", x);
  printf("%4d\n", x);
/*
 101
 102
 103
 104
*/
c.
char ch = 's';

while(ch < 'w')
{
	printf("%c", ch);
	ch++;
}
printf("%c\n", ch);
/*
stuvw

*/
```

## 10. 下面的程序将打印出什么？ ##
```c
#define MESG "COMPUTER BYTES DOG"
#include <stdio.h>
int main(void)
{
	int n = 0;
	
	while(n < 5)
	  printf("%s\n", MESG);               // 由于没有使用花括号，程序将变为死循环。 *
	  n++;
	printf("That's all.\n");
	return 0;
}

```

## 11.12. 构造完成下面功能（或者用一个术语来说，有下面的副作用）的语句： ##
```c
a. 把变量x的值增加10. // x += 10;
b. 把变量x的值增加1. // x++; ++x; x += 1;
c. 将a与b之和的两倍赋给c。 // c = (a + b) * 2;
d. 将a与两倍的b之和赋给c。 // c = a + 2 * b;

a. 把变量x的值减一。 // x--; --x; x -= 1;
b. 把n除以k所得的余数赋给m。 // m = n % k;
c. 用b减去a的差去除q，并将结果赋给p。 // p = q / (b-a);
d. 用a与b的和除以c与d的乘积，并将结果赋给x。 // x = (a + b) / (c * d);
```