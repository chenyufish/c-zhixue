#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//main()
//{
//	int i, j, n, m;
//	int a[16] = { 0 };
//	int clrscr();
//	printf("«Î ‰»Î ˝◊÷£∫£®0~32767£©\n");
//	scanf("%d\n", &n);
//	for (m = 0; m < 15; m++)
//	{
//		i = n % 2;
//		j = n / 2;
//		n = j;
//		a[m] = i;
//		break;
//	}
//	
//	for (m = 15; m >= 0; m--)
//	{
//		printf("%d", a[m]);
//		if (m % 4 == 0)
//			printf("");
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
int main()
{
	int a = 3;
	int b = 5;
	int max = 0;
	max = (a >b ? a : b);
	printf("%d\n", max);
	return 0;
}