#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//enum Sex
//{
//	man,
//	feman,
//	secret
//
//};
//int main()
//{
//	enum SEX s = man;
//	printf("%d\n", man);
//	printf("%d\n", secret);
//	printf("%d\n", feman);
//	return 0;
//}
//int main()
//{
//	char num1[] = "abc";//'a','b','c','\0'里面有四个数字。’\0‘是字符串的结束标志
//	char num2[] = { 'a','b','c' ,0};
//	printf("%s\n", num1);
//	printf("%s\n", num2);
//	printf("%d\n", strlen(num1));
//	printf("%d\n", strlen(num2));
//	return 0;
//}
//int main()
//{
//	int intput = 0;
//	printf("在暑假里宅家，你是否要好好学习？\n");
//	printf("请选择：是/否（1/0）\n");
//	scanf("%d/n", &intput);
//	if (intput == 1)
//	printf("好孩子！\n");
//	else 
//	printf("废柴！\n");
//	return 0;
//
//}
int main()
{
	int line = 0;
	printf("宅家学习\n");
	printf("每天敲代码\n");
	while (line < 200000)
	{
		printf("奋发图强:%d\n",line);
		line++;
	}
	if(line>=20000)
	printf("找到好工作\n");
	return 0;
}