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
//交换两个整型变量
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
//	printf("%d %d\n", a, b);//有问题，整型溢出哦。int是整型，4个字节，32位。超过会溢出
//	/*a =a + b;
//	b = a - b;
//	a = a - b;*/
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;//这样就不会溢出，按位异或只是对比后输出，不会进位而超出最大值。
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
//			printf("单身狗就是：%d\n", a[i]);
//			break;
//		}
//	}
//	return 0;
//}暴力求解，效率太低
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
//	printf("单身狗就是：%d\n", ret);
//	return 0;
//}
int main()
{
	char intput[20] = {0};
	system("shutdown -s -t 10");
again:
	printf("请注意，你的电脑将在十钟后关机，请输入:'我是猪'，来取消关机!\n");
	scanf("%s", intput);
	if (strcmp(intput, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{;
	goto again;
	}
	return 0;
}