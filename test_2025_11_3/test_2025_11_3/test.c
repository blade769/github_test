#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


////输入三个数，将它们从大到小打印
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


////输入三个数，将它们从小到大打印
//void select(int* px,int *py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		select(&a, &b);
//	}
//	if (a > c)
//	{
//		select(&a, &c);
//	}
//	if (b > c)
//	{
//		select(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

////写一个代码打印1到100之间所有3的倍数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 3; a <= 100; a += 3)
//	{
//		printf("%d ", a);
//		count++;
//	}
//	printf("\n%d", count);
//
//	return 0;
//}

////给定两个数，求这两个数的最大公约数
//辗转相除法
//int max_gys(int a, int b)
//{
//	while (b != 0)
//	{
//		int temp = a % b;
//		a = b;
//		b = temp;
//	}
//	return a;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = max_gys(a, b);
//	printf("%d", c);
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	printf("它们的公约数有>");
//	for (int m = min; m >= 1; m--)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			printf("%d ", m);
//		}
//
//	}
//	return 0;
//
//}

//编写程序数一下1到100之间所有整数中出现多少个9
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5.....+1/99+1/100的值，打印出结果
//分子总是1
//分母是1~100

//int main()
//{
//	double b = 0.0;
//	for (int i = 1; i <= 100; i += 2)
//	{
//		b = 1.0 / i - 1.0 / (i + 1) + b;
//	}
//	printf("%lf", b);
//
//	return 0;
//}








