#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	
//	//printf("%d\n", sizeof(char*));
//	int a = 0x11223344;
//	int* pa=&a;
//	char* pc = &a;
//
//	printf("%p %p\n", pa,pc);
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	printf("%d\n", p);
//
//	return 0;
//}
//int main()
//{
//	int* p;
//	*p = 20;
//	printf("%d\n", p);
//
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d",*p);
//		p=p+2;
//	}
//	return 0;
//}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0] );
	return 0;
}
