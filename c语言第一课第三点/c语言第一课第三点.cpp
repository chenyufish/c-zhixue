//简单的数据计算，探究汇编语言和高级语言之间的差距
#include<stdio.h>
int main()
{
	//int a = 10, b = 20, c = 30;
	//int d = a + b + c;
	//printf("%d\n",d);
	//return 0;
	//接下来是汇编语言
	int a;
	int b;
	int c;
	__asm
	{
		mov a,3
		mov b,4
		mov eax,a
		add eax,b
		mov c,eax
	}
	printf("%d\n", c);
		return 0;
		//  \n是转义字符，就是换行
}
//汇编语言 mov移动，add添加，push压栈，pop出栈，call调用。eax32位寄存器
//逐语句F11，逐国成F10，断点F9