#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	char arr[20] = "hello bit!";
//	memset(arr+6, 'x', 2);
//	printf("%s\n", arr);
//}

//�������������ֵ
//int get_max(int x, int y,int z)
//{
//	return (x > y ? (y > z ? y : z) : (x > z ? x : z));
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	scanf("%d %d %d", &a, &b, &c);
//
//	int max = get_max(a, b, c);
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//void Swap(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ:a=%d,b=%d", a, b);
//	Swap(&a, &b);
//	printf("������:a=%d,b=%d", a, b);
//	return 0;
//}
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ���,�±���:%d!\n", ret);
//	}
//	return 0;
//}

//��ʽ����

//#include <string.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}

#include "add.h"
#include "sub.h"

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = add(a, b);
	int ret = sub(a, b);
	printf("%d\n", sum);
	printf("%d\n", ret);

	return 0;
}




