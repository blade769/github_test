#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	//不完全初始化，剩余的默认元素
//	int arr[10] = { 1,2,3 };
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	char ch1[10] = { 'a','b','c' };
//	//a b c 0 0 0 0 0 0 0 
//	char ch2[10] = "abc";
//	//a b c \0 0 0 0 0 0 0
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	//for (int i = sz-1; i >= 0; i--)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	
//	return 0;
//}

////打印10个整数里的最大值
//get_max(int a, int b)
//{
//	return (a > b) ? a : b;
//}
//
//int main()
//{
//	//准备10个整数
//	int arr[10] = { -4,-2,22,4,45,6,-7,8,-9,10 };
//	//找出最大值
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1; i < sz; i++)
//	{
//		max = get_max(max, arr[i]);
//	}
//	printf("%d", max);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	for(int i=0;i<sz;i++)
//	{
//		int b = 1;
//		for (int a = arr[i]; b <= a; b++)
//		{
//			int c = a * b;
//			printf("%d*%d=%2d ", a, b, c);//%2d 两位右对齐 %-2d 两位左对齐
//		}
//		printf("\n");
//	}
//
//	return 0;
//
//}