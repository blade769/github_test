#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include <string.h>
//
//#include <stdlib.h>


//forѭ�����жϲ���ʡ����ζ���жϺ���� 
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



//����n�Ľ׳�
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



//����1!+2!+3!+...+10!

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



//��һ�����������в��Ҿ����ĳ������n��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//��һ�����������в��Ҿ����ĳ������k
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�صĸ���
//	for (i = 0; i < sz; i ++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n",i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}



//���ֲ���
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//
//}



//��д���룬��ʾ����ַ��������ƶ������м���

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
//		Sleep(1000);//Ϊ������Sleep����������ͷ�ļ�<windows.h>
//		system("cls");//system��һ���⺯��������ִ��ϵͳ��������Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//��д���룬ģ���û���½�龰������ֻ�ܵ�¼���Ρ���ֻ�����������δ��룬���������ȷ����ʾ��½�ɹ���������ξ�����������˳�����

//int main()
//{
//	int i = 0;
//	int password[20] = { 0 };
//
//	for (i = 0; i < 3; i ++)
//	{
//		printf("����������>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������������˳�����\n");
//	}
//	return 0;
//
//}

//���Բ���һ��1-100�������
//������
//�´���
//��С��
//ֱ���¶���

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
//	//1.���������0~99 --> 1~100
//	int ret = rand()%100+1;//����������ĺ���
//	//2.������
//	printf("�������:>");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}

//ָ��
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//�����ֵ���������
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//
//}















