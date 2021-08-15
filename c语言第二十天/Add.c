#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int x, int y)

{
	int z = 0;
	z = x + y;
	return z;
}
int subtraction(int x, int y)
{
	int z = 0;
	z = x - y;
	return z;

}
int multiplication(int x, int y)
{
	int z = 0;
	z = x * y;
	return z;
}
int division(int x, int y)
{
	int z = 0;
	if (y != 0)
	{
		z = x / y;
		return z;
	}
	else
	{
		printf("被除数不能为0！\n");
	}
}