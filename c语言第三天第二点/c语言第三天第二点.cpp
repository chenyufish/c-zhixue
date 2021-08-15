#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	float a = 3.14f;
	double b = 3.165;
	printf("%.2f\n", a);
	printf("%e\n", b);
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));// 浮点型储存在内存中有三个部分，分别为符号位，指数位，小数位
	getchar();// 关于大小端对其
	return 0;
}