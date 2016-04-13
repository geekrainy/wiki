## 1. 对下面的各种数据使用合适的数据类型： ##
a. East Simpleton 的人口 // int  
b. DVD 影碟的价格 // float  
c. 本章出现次数最多的字母  // char  
d. 这个字母出现的次数  // unsigned short  

## 2. 需要用long类型变量代替int类型变量的原因是什么？ ##
一个原因是在系统中long可以容纳比int更大的数；另一个原因是如果确实需要处理更大的值，那么使用一种在其他系统上保证至少是32位的数据类型会使程序的可移植性更好。

## 3. 获得一个32位的有符号整数，可以使用哪些可移植的数据类型？每种选择的原因是什么？ ##
需要引入inttypes.h
可使用int32_t;
要保证容纳32位有符号数的类型中长度最小的数据类型，则选择“最小长度类型”int_least32_t"；  
要保证使计算达到最快，使用“最快最小长度类型” int_fast32_t"。

## 4. 指出下列常量的类型和意义（如果有的话） ##
a. '\b' // char常量  
b. 1066 // int常量  
c. 99.44 // double常量  
d. 0XAA // unsigned int常量，十六进制整数  
e. 2.0e30 // double常量

## 5. Dottie Cawm 写的下面这个程序中有很多错误，找出这些错误。 ##
```c
include <stdio.h>    // #include <stdio.h>
main                 // int main(void)
(                    // {
	float g; h;      // float g, h;
	float tax, rate; 
	
	g = e21;         // 在e之前应该至少有一个数字 *
	tax = rate * g;  // rate 未赋值
	                 // return 0;
)                    // }
                     // 变量h从未被使用
```

## 6. 指出下表中各常量的数据类型（在声明语句中使用的数据类型）及其在printf()中的格式说明符。 ##
常量 | 类型 | 说明符
--- | --- | ---
12 | int | %d
0X3 | unsigned int | %#X
'C' | char | %c
2.34E07 | double | %e
'\040' | char | %c
7.0 | double| %f
6L | long | %ld
6.0f | float | %f

## 7. 指出下表中各常量的数据类型（在声明语句中使用的数据类型）及其在printf()中的格式说明符，假设int类型为16位长。 ##
常量 | 类型 | 说明符
--- | --- | ---
012 | unsigned int | %#o
2.9e05L | long double | %Le
's' | char | %c
100000 | long | %ld
'\n' | char | %c
20.0f | float | %f
0x44 | unsigned int | %x

## 8. 假设一个程序开始处有如下的声明： ##
```c
int imate = 2;
long shot = 53456;
char grade = 'A';
float log = 2.71828;

/* 在下面的printf()语句中添上合适的类型说明符 */
printf("The odds against the %d were %ld to 1.\n", imate, shot);
printf("A score of %f is not an %c grade.\n", log, grade);
```

## 9. 假设ch为char类型变量。使用转义序列、十进制值、八进制字符常量以及十六进制字符常量等方法将其赋值为回车符（假设使用ADCII编码值）。 ##
```c
ch = '\r'; // 转义序列
ch = '13'; // 十进制值
ch = '\015'; // 八进制字符常量
ch = '\0xD'; // 十六进制字符常量
```

## 10. 改正下面的程序。 （在C中"/"表示除法） ##
```c
void main(int) / this program is perfect /
{
	cows, legs integer;
	printf("How many cow legs did you count?\n);
	scanf("%c", legs);
	cows = legs / 4;
	printf("That implies there are %f cows.\n", cows)
}

/* 更正 */
#include <stdio.h>
int main(void) /* this program is perfect */            /* 不应忽略注释 */
{
	int cows, legs;
	printf("How many cow legs did you count?\n");
	scanf("%d", &legs); // 注意&不能忘记! *
	cows = legs / 4;
	printf("That implies there are %d cows.\n", cows);
	return 0; // 不能忘记return语句 *
}
```

## 11. 指出下列转义字符的含义。 ##
a. \n //换行符  
b. \\ // '\'字符  
c. \" // '""'字符  
d. \t // 水平制表符 