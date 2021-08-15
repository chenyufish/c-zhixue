#include<stdio.h>
int main(void)
{
	int a = 10;
	short b = 20;
	long c = 30;
	long long d = 50;
	unsigned int len = sizeof(long);
	printf("%d\n", a);
	printf("%hd\n", b);
	printf("%ld\n", c);
	printf("%lld\n", d);
	
	return 0;
}