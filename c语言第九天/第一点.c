#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	printf("hello world!\n");
//	return 0;
//}
//�����������ͱ���
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	printf("%d %d %d\n", a, b, c);
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d %d\n", a, b, c);									  
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);//�����⣬�������Ŷ��int�����ͣ�4���ֽڣ�32λ�����������
//	/*a =a + b;
//	b = a - b;
//	a = a - b;*/
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;//�����Ͳ����������λ���ֻ�ǶԱȺ�����������λ���������ֵ��
//	printf("%d %d\n", a, b);
//	
//	return 0;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,6,5,4,3,2,1 };
//	int i = 0;
//	int sz = sizeof(a);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (a[i] == a[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("�������ǣ�%d\n", a[i]);
//			break;
//		}
//	}
//	return 0;
//}������⣬Ч��̫��
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,6,5,4,3,2,1 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(a);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ a[i];
//	}
//	printf("�������ǣ�%d\n", ret);
//	return 0;
//}
int main()
{
	char intput[20] = {0};
	system("shutdown -s -t 10");
again:
	printf("��ע�⣬��ĵ��Խ���ʮ�Ӻ�ػ���������:'������'����ȡ���ػ�!\n");
	scanf("%s", intput);
	if (strcmp(intput, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{;
	goto again;
	}
	return 0;
}