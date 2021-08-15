//system是在已经运行的程序中运行另一个程序
#include<stdlib.h>
int main(void)
{
	system("cls");//调用电脑中cmd的命令，也可以用来打开外部应用，如果有路径要使用双斜杠表示单斜杠，当然也可以用正斜杠/
	return 0;
}