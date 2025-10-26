#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include <string.h>
//
//#include <stdlib.h>


//for循环的判断部分省略意味着判断恒成立 
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//
//	return 0;
//
//}



//计算n的阶乘
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1;i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}



//计算1!+2!+3!+...+10!

//int jc(int a)
//{
//	int c = 1;
//	for (int b = 1; b <= a; b++)
//	{
//		c *= b;
//	}
//	return c;
//}
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	for (a = 1; a <= 4; a++)
//	{
//		sum += jc(a);
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//在一个有序数组中查找具体的某个数字n。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//在一个有序数组中查找具体的某个数字k
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素的个数
//	for (i = 0; i < sz; i ++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n",i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}



//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		
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
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//
//}



//编写代码，演示多个字符从两端移动，向中间汇聚

//welcome ti bit!!!!
//##################
//w################!
//we##############!!
//wel############!!!
//..................
//welcome to bit!!!!

//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//为了引用Sleep函数，引用头文件<windows.h>
//		system("cls");//system是一个库函数，可以执行系统命令，清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//编写代码，模拟用户登陆情景，并且只能登录三次。（只允许输入三次代码，如果密码正确则提示登陆成功，如果三次均输入错误，则退出程序）

//int main()
//{
//	int i = 0;
//	int password[20] = { 0 };
//
//	for (i = 0; i < 3; i ++)
//	{
//		printf("请输入密码>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//	return 0;
//
//}

//电脑产生一个1-100的随机数
//猜数字
//猜大了
//猜小了
//直到猜对了

//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
////0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1.生成随机数0~99 --> 1~100
//	int ret = rand()%100+1;//生成随机数的函数
//	//2.猜数字
//	printf("请猜数字:>");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}

//指针
//int *p = NULL;
//int a =0;

//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字的整个过程
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//
//}















