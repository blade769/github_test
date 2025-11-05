#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>

//实现一个函数来交换两个整数的内容

//int swap(int* px, int* py)
//{
//		int temp = 0;
//		temp = *px;
//		*px = *py;
//		*py = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后a=%d b=%d\n", a, b);
//
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//		for (int a = 1; a <= arr[i]; a++)
//		{
//			int b = a * arr[i];
//			printf("%2d*%2d=%3d ", arr[i], a, b);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int swap(int* px, int* py)
//{
//		int temp = 0;
//		temp = *px;
//		*px = *py;
//		*py = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//
//	return 0;
//}

//形参是数组的形式
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	//数组
//	//把数组的数据排成升序
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//0 1 2 3 4 5 6 7 8 9 
//	//冒泡排序的算法，对数组进行排序
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//把数组的元素排成降序

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//数组名确实能表示首元素地址，但是有两个例外：
//1：sizeof(数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	int n = sizeof(arr);
//	printf("%d\n", n);
//
//	return 0;
//}

//
// 二维数组的数组名理解

//int main()
//{
//	int arr[3][4];
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
//	printf("%p\n", arr);
//}





