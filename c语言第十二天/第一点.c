#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int age = 0;
//	printf("�������������䣺\n");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("������˼��δ�������뿪��");
//	}
//	else
//	{
//		printf("��ӭ���룡");
//	}
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	int b=a%2;
//	printf("������һ����:\n");
//	scanf("%d", &a);
//	if ( b == 1)
//	
//		printf("����һ��������\n");
//	
//	else
//		printf("����һ��ż����\n");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = a % 2;
//	for (a = 1; a <= 100;)
//		if (b == 1)
//		{
//			printf("%d\n", a);
//			a++;
//		}
//		else
//			printf("0\n");
//	return 0;
//}
int main()
{
	int a = 0;
	while (a <= 10)
	{
		if (a == 5)
			continue;
		printf("%d\n", a);
		a++;
	}
	return 0;
}
