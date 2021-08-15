#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int age = 0;
//	printf("请输入您的年龄：\n");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("不好意思，未成年请离开！");
//	}
//	else
//	{
//		printf("欢迎进入！");
//	}
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	int b=a%2;
//	printf("请输入一个数:\n");
//	scanf("%d", &a);
//	if ( b == 1)
//	
//		printf("这是一个奇数！\n");
//	
//	else
//		printf("这是一个偶数！\n");
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
