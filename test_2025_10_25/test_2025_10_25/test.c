#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//ֻ��ӡ�����ַ��Ĵ���
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

//ת������ASCII��ֵ���������73,32,99,97,110,111,32,105,116,33��
//int main()
//{
//	//printf("%c\n", 'a');//��ӡ��� a
//	//printf("%c\n", 97);//��ӡ��� a
//	
//	int arr[] = {73,32,99,97,110,111,32,105,116,33};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sizeof(arr) - �������������ܴ�С����λ���ֽ�
//	//sizeof(arr[0]) - �����������Ԫ�صĴ�С
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}

//����һ���˵ĳ������ڣ����������գ������������е������շֱ������
//����ֻ��һ�У��������ڣ�������֮��û�зָ�����
//������У���һ��Ϊ������ݣ��ڶ���Ϊ�����·ݣ�������Ϊ�������ڣ��·ݻ�����Ϊ1λ��ʱ��ǰ�油0��
//int main()
//{
//	//��������
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	//�������
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//
//	return 0;
//
//}

//����2020011147��88.00��86.634��74.53
//���The each subject score of No. 202001147 is 88.00, 86.634, 74.00.
//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	//����
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	//���
//	printf("The each subject score of No. %d is %.2f, %.2f ,%.2f.\n", id, c, math, eng);
//
//	return 0;
//}

//д���������printf�ķ���ֵ
//���"Hello world!"
//���printf("Hello world!")���ú�ķ���ֵ
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//	return 0;
//
//}

//��� printf("printf(\"Hello world!\\n\");\n");
//     printf("cout << \"Hello world\" << endl;");
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world\" << endl;");
//
//	return 0;
//
//}

//���� һ���ĸ����� �ÿո���� 
//��� һ�� һ������ Ϊ�����ĸ����������ֵ
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

//����һ�У��ø�������ʾ����İ뾶�����������ʽ��v=4/3*3.1415926*r*r*r��
//���һ�У�����������С�������3λ
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

//����:���������ֱ��ʾ���أ������ߣ����ף����м��ÿո�ָ�
//�����һ�У�BMIָ����������λС����
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

