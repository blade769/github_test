#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//只打印数字字符的代码
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//			putchar(ch);
//	}
//	return 0;
//}

//转化以下ASCII码值并输出它们73,32,99,97,110,111,32,105,116,33。
//int main()
//{
//	//printf("%c\n", 'a');//打印结果 a
//	//printf("%c\n", 97);//打印结果 a
//	
//	int arr[] = {73,32,99,97,110,111,32,105,116,33};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sizeof(arr) - 计算的是数组的总大小，单位是字节
//	//sizeof(arr[0]) - 计算的是数组元素的大小
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}

//输入一个人的出生日期（包括年月日），将该生日中的年月日分别输出。
//输入只有一行，出生日期，年月日之间没有分隔符。
//输出三行，第一行为出生年份，第二行为出生月份，第三行为出生日期，月份或天数为1位数时，前面补0。
//int main()
//{
//	//输入数据
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	//输出数据
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//
//	return 0;
//
//}

//输入2020011147；88.00，86.634，74.53
//输出The each subject score of No. 202001147 is 88.00, 86.634, 74.00.
//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	//输入
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	//输出
//	printf("The each subject score of No. %d is %.2f, %.2f ,%.2f.\n", id, c, math, eng);
//
//	return 0;
//}

//写个程序输出printf的返回值
//输出"Hello world!"
//输出printf("Hello world!")调用后的返回值
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//	return 0;
//
//}

//输出 printf("printf(\"Hello world!\\n\");\n");
//     printf("cout << \"Hello world\" << endl;");
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world\" << endl;");
//
//	return 0;
//
//}

//输入 一行四个整数 用空格隔开 
//输出 一行 一个整数 为输入四个整数的最大值
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int max = a;
//	if (b > max)
//		max = b;
//	if (c > max)
//		max = c;
//	if (d > max)
//		max = d;
//	printf("%d", max);
//	
//	return 0;
//
//}

//int main()
//{
//	int arr[4] = {0};
//	int i = 0;
//	while(i<4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		max = arr[i];
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//
//}

//输入一行，用浮点数表示球体的半径（球体体积公式：v=4/3*3.1415926*r*r*r）
//输出一行，球体的体积，小数点后保留3位
//int main()
//{
//	double r = 0.0;
//	double v = 0.0;
//
//	scanf("%lf", &r);
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//
//	printf("%.3lf\n", v);
//
//	return 0;
//
//}

//输入:两个整数分别表示体重（公斤）身高（厘米），中间用空格分隔
//输出：一行，BMI指数（保留两位小数）
//int main()
//{
//	int weight = 0;
//	int high = 0;
//	scanf("%d %d", &weight, &high);
//	float BMI = weight / (high / 100.0) / (high / 100.0);
//	printf("%.2f\n", BMI);
//
//	return 0;
//
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", arr[i]);

		}
	return 0;
}

