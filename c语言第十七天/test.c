#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	char arr1 []= "hello";
//	char arr2 []= "######";
//	memset(arr1, '*', 3);
//	printf("%s\n", arr1);
//	return 0;
//}
//int getmax(int x, int y)
//{
//	if (x < y)
//	{
//		return y;
//	}
//	else
//	{
//		return x;
//	}		
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = getmax(a, b);
//	printf("那么较大数就是：%d\n", max);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//void Swap(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
int main()
{
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	tmp=a;
	a=b;
	b = tmp;
	//Swap(a, b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}