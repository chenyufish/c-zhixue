#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int j = 1;
//	int n = 1;
//	int sum = 0;
//	for (j = 1;j <= 10; j++)
//	{
//		for (i = 1; i <=j; i++)
//		{
//			n = n * i;
//		}
//			sum = sum + n;
//		printf("%d\n", &sum);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0, j = 0, n = 1, sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		n = 1;
//		for (j = 1; j <=i; j++)
//		{
//			n = j * n;
//		}
//		sum = sum + n;
//	}
//	printf("%d\n", sum);
//	return 0;
//
//}
int main()
{
	int i = 0, j = 0, n = 1, sum = 0;
	for (i = 1; i <= 10; i++)
	{
		n = n * i;
		sum = sum + n;
	}
	printf("%d\n", sum);
	return 0;

}