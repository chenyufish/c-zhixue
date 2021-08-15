#include<stdio.h>
int main(void)
{
	const int price = 3;// 常量，只读常量
	int weight = 5;//变量，在程序运行中其值可改变
	int totall = price * weight;
	printf("%d\n", totall);
	return 0;
}