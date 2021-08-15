//#define _CRT_SECURE_NO_WARNINGS//这是我知道避免警告的意思，不然会报错
#include<stdio.h>
#pragma warning(disable:4996)//当然用这个也行
int main(void)
{
	float a;//unsigned表示无符号，相反sign是有符号  
	printf("请输入值");
	scanf("%f", &a);
	printf("%f\n", a);
	return 0;
}