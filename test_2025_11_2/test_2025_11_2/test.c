#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdbool.h>

#include <math.h>

#include "add.h"

#include "sub.h"

#include <string.h>

////布尔类型
////打印100-200的所有素数
//
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n素数总共有%d个\n", count);
//	return 0;
//}

////写一个函数，每次调用这个函数，num的值增加1
//int add(int n)
//{
//	return n + 1;
//}
//
//int main()
//{
//	int num = 0;
//	num = add(num);
//	printf("%d\n", num);
//	return 0;
//}

////函数可以嵌套调用，但不可以嵌套定义。
//
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	//链式访问
//	printf("%d\n", strlen("abcdef"));
//
//	printf("%d", printf("%d", printf("%d", 43)));//打印4321
//	return 0;
//}

////函数不写返回值的时候，默认返回只是int
//add(int a,int b)//不推荐
//{
//	printf("hehe\n");
//	return a + b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

////明确的说明，main函数不需要参数
////
////本质上main函数是有参数的
//int main(void)
//{
//	return 0;
//}
//
////main函数有三个参数
//int main(int argc,char* argv[],char* envp[])
//{
//	return 0;
//}

////函数的声明和定义
//
////函数的声明
//int add(int, int);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
////函数的定义
//int add(int x,int y)
//{
//	return x + y;
//}

//#pragma comment(lib, "add.lib")//导入静态库
//
//int main()
//{
//	int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int sum = add(a, b);
//    printf("%d\n", sum);
//
//	return 0;
//}

////递归的实现
////接受一个整型值（无符号)，按照顺序打印它的每一位。
////例如：
////输入：1234，输出1 2 3 4.
////%d 打印有符号的整数（会有正负数）
////%u 打印无符号的整数
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//
//	return 0;
//}


//编写函数不允许创建临时变量，求字符串长度。

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}

////用递归来写
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//
//	return 0;
//}


//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d", ret);
//
//	return 0;
//}


//
//求第n个斐波那契数列
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55
//用递归方式
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

//用循环方式
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}









