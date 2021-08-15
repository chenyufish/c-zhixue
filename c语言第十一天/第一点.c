#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void test()
//
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//			i++;
//     }
//	return 0;
//}
//#define MAX(x,y) (x<y?x;y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Max=MAX(a, b);
//	printf("%d\n", Max);
//	Max = MAX(a, b);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n",&a);
//	printf("%p\n",p);
//	return 0;
//}
int main()
{
	/*int a = 10;
	int* p = &a;
	printf("%p\n", p);
	*p = 20;
	printf("%d\n", a);*/
	double a = .1415;
	double* p = &a;
	*p = 6.28;
	printf("%lf\n", a);
	printf("%d\n", sizeof(a));
	return 0;

}