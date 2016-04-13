## 1. 运行程序talkback.c，当要求输入名字时，输入名字和姓氏，发生了什么？为什么？ ##
```c
// talkback.c
#include <stdio.h>
#include <string.h> // 提供strlen()函数的原型
#define DENSITY 62.4 // 人的密度（单位：英镑/每立方英尺）
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40]; // name 是一个有40个字符的数组
	
	printf("Hi! What's your first name?\n");
	scanf("%s", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet. \n",
	       name, volume);
    printf("Also, your first name has %d letters, \n", size);
	return 0;
}

/* 运行结果如下：
Hi! What's your first name?
Rainy Geek
Rainy, what's your weight in pounds?
Well, Rainy, your volume is 0.00 cubic feet.
Also, your first name has 5 letters,
and we have 40 bytes to store it in.

--------------------------------
Process exited after 6.74 seconds with return value 0
请按任意键继续. . .

Hi! What's your first name?
Rainy 122
Rainy, what's your weight in pounds?
Well, Rainy, your volume is 1.96 cubic feet.
Also, your first name has 5 letters,
and we have 40 bytes to store it in.

--------------------------------
Process exited after 12.72 seconds with return value 0
请按任意键继续. . .
*/
```
程序不能正常工作。第一个scanf()语句只是读入名而没有读入姓，姓依然存储在输入“缓冲区”中，当下一个scanf()语句想要读入体重时，它从上次读入结束的地方开始，这样就试图把姓作为体重来读取。这会使scanf()失败。如果对姓名请求做出像Rainy 122这样的回应，则会把122当作体重输入。

## 2. 他们的打印结果分别是什么？ ##
```c
a. printf("He sold the painting for $%2.2f.\n", 2.345e2); // He sold the painting for $234.50.
b. printf("%c%c%c\n", 'H', 105, '\41'); // Hi！ /* '\41' '\041'这种写法会被解释为八进制数，41转换为八进制为33，表示'!'。 */
c. #define Q "His Hamlet was funny without being vulgar. "
   printf("%s\nhas %d characters.\n", Q, strlen(Q)); // His Hamlet was funny without being vulgar. 
                                                    // has 42 characters.
d. printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0); // Is 1.20e+003 the same as 1201.00?
```

## 3. 在问题2c中，应进行哪些更改以使字符串Q在双引号中输出？ ##
使用\"。示例如下：
```c
printf("\"%s\"\nhas %d characters.\n", Q, strlen(Q));  // 即将Q作为字符串，而非符号常量
```

## 4. 找出下列程序中的错误。 ##
```c
define B booboo
define X 10
main(int)
{
	int age;
	char name;
	
	printf("Please enter your first name. ");
	scanf("%s", name);
	printf("All right, %c, what's your age?\n", name);
	scanf("%f", age);
	xp = age + X;
	printf("That's a %s! You must be at least %d.\n", B xp);
	rerun 0;
}

/* 更正 */
#include <stdio.h>
#define B "booboo"
#define X 10
int main(void)
{
	int age;
	int xp; // 声明所有的变量。 *
	char name[30];
	
	printf("Please enter your first name.\n"); // 为了可读性，使用\n。 *
	scanf("%s", name);
	printf("All right, %s, what's your age?\n", name);
	scanf("%d", &age); // &age *
	xp = age + X;
	printf("That's a %s! You must be at least %d.\n", B, xp);
	return 0;
}
```

## 5. 假设一个程序以这样开始，请构造一个printf()语句，使用BOOK、cost和percent打印下列内容： ##
```c
/* print -> This copy of "War and Peace" sells for $12.99.
            That is 80% of list.
*/

#include <stdio.h>
#define BOOK "war and Peace"
int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
	printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
	printf("That is %0.0f%% of list.\n", percent);	
	return 0;
}

/* 必须分割一个字符串，有三个选项可供选择:
方法一：
使用多个printf()语句;
方法二：
printf("My name is \
Rainy\n");
方法三：
printf("My name is"
       "Rainy")    // 两个字符串之间仅以空白字符分隔，当作一个字符串处理。
*/
```

## 6. 使用什么转换说明来打印下列各项内容？ ##
```c
a. 一个字段宽度等于数字位数的十进制整数。 // %d
b. 一个形如8A、字段宽度为4的十六进制整数。 // %4X
c. 一个形如232.346、字段宽度为10的浮点数。 // %10.3f
d. 一个形如2.33e+002、字段宽度为12的浮点数。 // %12.2e
e. 一个字段宽度为30、左对齐的字符串。 // %-30s
```

## 7. 使用什么转换说明来打印下列各项内容？ ##
```c
a. 一个字段宽度为15的unsigned long整数。 // %15lu
b. 一个形如0x8a、字段宽度为4的十六进制整数。 // %#4x
c. 一个形如2.33E+02、字段宽度为12、左对齐的浮点数。 // %-12.2E
d. 一个形如+232.346、字段宽度为10的浮点数。 // %+10.3f
e. 一个字符串的前8个字符，字段宽度为8字符。 // %8.8s
```

## 8. 使用什么转换说明来打印下列各项内容？ ##
```c
a. 一个字段宽度为6、最小有4位数字的十进制整数。 // %6.4d
b. 一个字段宽度在参数列表中给定的八进制整数。 // %*o
c. 一个字段宽度为2的字符。 // %2c
d. 一个形如+3.13、字段宽度等于数字中字符个数的浮点数。 // %+.2f
e. 一个字符串的前5个字符，字段宽度为7、左对齐。 // %-7.5s
```

## 9. 为下列每个输入行提供一个对其进行读取的scanf()语句，并声明语句中用到的所有变量或数组。 ##
```c
a. 101
   /* int num;
      scanf("%d", &num);
   */
b. 22.32 8.34E-09
   /* float a, b;
      scanf("%f%f", &a, &b);  // %f决定数据类型
   */
c. linguini
   /* char a[9];
      scanf("%s", a);
   */
d. catch 22
   /* char ch[9];
      scanf("%s", ch);
   */
e. catch 22 (但是跳过catch)
   /* char a;
      scanf("%d", &a);
   */
```

## 10. 什么是空白字符？ ##
空格、换行符和制表符。

## 11. 假设你想在程序中使用圆括号代替花括号。以下方法可以吗？ ##
```c
#define ( {
#define ) }

/* 不可以，符号常量的名字必须满足变量命名规则，只能包括数字、字母和下划线。 */
```