## 1. 如何称呼C程序的基本模块？ ##
函数是C语言的基本模块。

## 2. 什么是语法错误？给出它的一个英语例子和C语言例子。 ##
C的语法错误是指把正确的C符号放在了错误的位置。  
英语例子：name Rainy My is.  
```c
/* C语言例子——语法错误 */
#include <stdio.h>
int main(void)
(
	printf{"My name is Rainy"};    //函数参数应使用'('')'
	return 0;
)
```

## 3. 什么是语义错误？给出它的一个英语例子和C语言例子。 ##
当遵守C语言的规则，但是结果不正确的时候，即犯语义错误。  
英语例子：Furry inflation thinks greenly.  
```c
/* C语言例子——语义错误 */
#include <stdio.h>
int main(void)
{
	int n, n2, n3;
	
	n = 2;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n=%d, n squared = %d, n cubed = %d\n", n, n2, n3);
	return 0;
}
```

## 4.  Indiana Sloth 已经编好了下面的程序，并想征求您的意见。请帮助他评定。 ##
```c
include studio.h
int main{void} /*  该程序可显示出一年中有多少周 /*
(
int s
s : = 56;
print (There are s weeks in a year.);
return 0;
```

```c
/* 更正 */
#include <stdio.h>
int main(void) /* 改程序可显示出一年中有多少周 */
{
	int s;
	s = 56;
	printf("There are %d weeks in a year.", s);
	return 0;
}
```

## 5. 假设下面的每一个例子都是某个完整程序的一部分，它们每个将输出什么结果？ ##
```c
a. printf ("Baa Baa Black Sheep.");  
   printf ("Have you any wool?\n");  
b. printf ("Begone!\nO creature of lard!");  
c. printf ("What?\nNo/nBonzo?\n");  
d. int num;
   num = 2;
   printf("%d + %d = %d", num, num, num + num);


/* 输出结果 */
Baa Baa Black Sheep.Have you any wool?

Begone!
O creature of lard!

What?
No/nBonzo?

2 + 2 = 4
```

## 6. 下面哪几个是C的关键字？main, int, function, char, = ##
关键字: int, char

## 7. 如何以下面的格式输出words和lines的值："There were 3020 words and 350 lines" ?这里，3020和350代表两个变量的值。 ##
```c
printf("There were %d words and %d lines.\n", words, lines);
```

## 8. 考虑下面的程序，请问在第5行、第6行和第7行之后程序的状态分别是什么？ ##
```c
#include <stdio.h>
int main(void)
{
	int a, b;
	
	a = 5;
	b = 2;   // 第7行   a=5,b=2
	b = a;   // 第8行   a=5,b=5        
	a = b;   // 第9行   a=5,b=5
	printf("%d %d\n", b, a);
	return 0;
}
```