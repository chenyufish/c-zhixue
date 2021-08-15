#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
int main()
{
	int a = 10;
	int b = 30;
	int sum = 0;
	sum=Add(a, b);
	printf("%d\n", sum);
	sum = division(a, b);
	printf("%d\n", sum);
	sum = multiplication(a, b);
	printf("%d\n", sum);
	sum = subtraction(a, b);
	printf("%d\n", sum);
	return 0;
}