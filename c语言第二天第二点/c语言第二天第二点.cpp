#include<stdio.h>
#define PI 3.1415926//宏定义常量
int main()

{
	//const float pi = 3.1415926;//默认结果六位小数,当然可以改：把转义符%f改为%.2f，就是两位小数.另外，这种赋值在c语言中不安全
	auto float r = 5.8;//  在定义一个函数内部局部变量时，变量前可以加修饰auto，也可以不加。
	float sum=PI* r* r;//定义标识符不能用数字开头，可用只能是下划线、数字、字母。同时标识符区分大小写
	printf("%f\n", sum);//%f表示浮点型，%lf双浮点
	return 0;

}