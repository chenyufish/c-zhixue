#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void test(int arr[3][5])
//{
//
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//void (*signal(int, void(*)(int)))(int)
//{
//
//}
//int main()
//{
//	signal(0,0);
//	return 0;
//}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n",parr[i](2, 3));
	}
	return 0;
}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));
//	printf("%d\n", Add(2, 3));
//	return 0;
//}
int main()
{

	return 0;
}