#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//关机程序
//1.电脑运行起来后，1分钟内关机
//2.如果输入：我是猪，就取消关机
//

//int main()
//{   
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑将在60秒内关机，如果我输入：取消，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "取消") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//使用strcpy
//int main()
//{
//    char arr1[20] = { 0 };
//    char arr2[] =  "hello bit!" ;
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//
//}