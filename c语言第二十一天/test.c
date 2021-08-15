#define _CRT_SECURE_NO_WARNINGS
#include"Add.h"
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 80;
//	int sum = Add(a, b);
//	printf(" %d\n", sum);
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//void prinf(int n)//(ucrtbased.dll) 将一个无效参数传递给了将无效参数视为严重错误的函数。
//{
//	if (n > 9)
//	{
//		prinf(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int sum=0;
//	scanf("%d", &sum);
//	prinf(sum);
//}
//int main()
//{
//	printf("hehe");
//	return 0;
//}
#include<string.h>
//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//my_strlen(char* str)
//{
//	if (*str != '\0')//开始递归
//	{
//		return 1 + my_strlen(str + 1);
//
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hehenm";
//	int len =  my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int Fac(int i)
//{
//	if (i <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fac(i - 1) * i;
//	}
//}
//int main()
//{
//	int n;
//	int m = 0;
//	scanf("%d", &n);
//	m = Fac(n);
//	printf("%d\n", m);
//	return 0;
//}
int count = 0;

int Fib(i)

{
	if (i == 3)
		count++;
	int m;
	if (i <= 2)
	{
		return 1;
	}
	else
	{
		m = Fib(i - 1) + Fib(i - 2);
		return m;
	}
}
int Fia(x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{
		c = a + b;
		a = b; 
		b = c;
		x--;
	}
	return c;

}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fia(n);
	printf("%d\n", ret);
	//printf("%d", count);
	return 0;
}