#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define RAND_MAX//0~32767
void menu()
{
	printf("***********************\n");
	printf("** 1��play  0��exit  **\n");
	printf("***********************\n");
}
void game()
{
	int ret= 0;
	int guess = 0;
	ret = rand()%100+1;
	while (1)
	{
		printf("������֣�  ");
		printf("(����0-100����)\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("��´���Ŷ��\n"); 
		}
		else if (guess < ret)
		{
			printf("���С��Ŷ��\n");
		}
		else
		{
			printf("��ϲ��¶��ˣ�\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//ʱ���
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;	
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}