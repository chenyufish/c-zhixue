#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
//int main()
//{
//	int i =0 ;
//	for (i = 0; i <= 100; i++)
//	{
//		printf("  %d  ", i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 90;
//	int b = 70;
//	int i=Add(a, b);
//	printf("hehe\n");
//	printf("%d\n", i);
//	return 0;
// 
//}
int main()
{
	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = 1;
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}