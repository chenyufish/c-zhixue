#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//enum Sex
//{
//	man,
//	feman,
//	secret
//
//};
//int main()
//{
//	enum SEX s = man;
//	printf("%d\n", man);
//	printf("%d\n", secret);
//	printf("%d\n", feman);
//	return 0;
//}
//int main()
//{
//	char num1[] = "abc";//'a','b','c','\0'�������ĸ����֡���\0�����ַ����Ľ�����־
//	char num2[] = { 'a','b','c' ,0};
//	printf("%s\n", num1);
//	printf("%s\n", num2);
//	printf("%d\n", strlen(num1));
//	printf("%d\n", strlen(num2));
//	return 0;
//}
//int main()
//{
//	int intput = 0;
//	printf("�������լ�ң����Ƿ�Ҫ�ú�ѧϰ��\n");
//	printf("��ѡ����/��1/0��\n");
//	scanf("%d/n", &intput);
//	if (intput == 1)
//	printf("�ú��ӣ�\n");
//	else 
//	printf("�ϲ�\n");
//	return 0;
//
//}
int main()
{
	int line = 0;
	printf("լ��ѧϰ\n");
	printf("ÿ���ô���\n");
	while (line < 200000)
	{
		printf("�ܷ�ͼǿ:%d\n",line);
		line++;
	}
	if(line>=20000)
	printf("�ҵ��ù���\n");
	return 0;
}