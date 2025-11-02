#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//strcpy函数的使用
//int main()
//{
	//char arr1[20] = {0};
	//char arr2[] = "hello bit";

	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);

	//return 0;
	
//memset函数的使用

//	char arr[20] = "hello world";
//	memset(arr+6, 'y', 5);
//	printf("%s\n", arr);
//
//}

//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

////传值调用
//Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
////传址调用
//Swap2(int* x, int* y)
//{
//	int z = *x;
//	*x = *y;
//	*y = z;
//	
//}

////当实参传递给形参时，形参是形参的一份临时拷贝
////对形参的修改不会影响实参
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	Swap2(&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容
//void Swap(int* x, int* y)
//{
//	int z = *x;
//	*x = *y;
//	*y = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前a=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}

////打印100到200之间的素数
////素数是只能被1和他本身整除的数
//int main()
//{
//	int i = 0;
//	int count = 0; 
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为的素数
//		//是就打印
//		//拿2到i-1之间的数字去试除i
//		int flag = 1;//flag为1时，表示是素数
//		   int j = 0;
//			for (j = 2; j <= i - 1; j++)
//			{
//				if (i % j == 0)
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag == 1)
//			{
//				count++;
//				printf("%d ", i);
//			}
//	}
//	printf("\n素数总共有%d个\n", count);
//	return 0;
//}

////第二种版本
////m(不是素数)=a*b
////a和b中一定有一个数字是<=sqrt(m)的
////sqrt(m)是m的开平方
//int main()
//{
//	int i = 0;
//	int count = 0; 
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//flag为1时，表示是素数
//		   int j = 0;
//			for (j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag == 1)
//			{
//				count++;
//				printf("%d ", i);
//			}
//	}
//	printf("\n素数总共有%d个\n", count);
//	return 0;
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n素数有%d个\n",count);
//	return 0;
//}

//写一个函数判断一年是不是闰年
//打印1000到2000年之间的闰年
//判断是不是闰年的规则
//1.能被4整除，并且不能被100整除是闰年
//2.能被400整除是闰年
//

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//				printf("%d ", year);
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//}

////写一个函数，实现一个整形有序数组的二分查找。

//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了，返回下标
//	//找不到，返回-1
//
//	int ret = binary_search(arr, k ,sz);
//	if (ret == -1)
//		printf("找不到");
//	else
//	{
//		printf("找到了，下标是：%d", ret);
//	}
//	return 0;
//}

//形式参数的和实际参数的名字可以相同也可以不同
//数组传参实际上传的是数组首元素的地址，而不是整个数组
//无法在函数内部计算一个函数参数部分的数组的元素个数























































