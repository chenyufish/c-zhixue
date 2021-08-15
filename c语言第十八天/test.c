#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap1(a, b);
//	printf("%d %d\n", a, b);
//	Swap2(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
int shushu(int n)
{
	int m = 0;
	for(m=2;m<=sqrt(n);m++)
	{
		if (n % m == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i=100;i <= 200;i++)
	{
		if(shushu(i)==1);
		{
			printf("%d\n", i);
		}
	}
	return 0;
}