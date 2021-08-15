#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define RAND_MAX//0~32767
void menu()
{
	printf("***********************\n");
	printf("** 1、play  0、exit  **\n");
	printf("***********************\n");
}
void game()
{
	int ret= 0;
	int guess = 0;
	ret = rand()%100+1;
	while (1)
	{
		printf("请猜数字：  ");
		printf("(输入0-100数字)\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("你猜大了哦！\n"); 
		}
		else if (guess < ret)
		{
			printf("你猜小了哦！\n");
		}
		else
		{
			printf("恭喜你猜对了！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//时间戳
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;	
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}