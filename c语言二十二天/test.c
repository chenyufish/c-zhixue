#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int hanoi(int, char, char, char);
//    int n, counter;
//    printf("Input the number of diskes��");
//    scanf("%d", &n);
//    printf("\n");
//    counter = hanoi(n, 'A', 'B', 'C');
//    return 0;
//}
//int hanoi(int n, char x, char y, char z)
//{
//    int move(char, int, char);
//    if (n == 1)
//        move(x, 1, z);
//    else
//    {
//        hanoi(n - 1, x, z, y);
//        move(x, n, z);
//        hanoi(n - 1, y, x, z);
//    }
//    return 0;
//}
//int move(char getone, int n, char putone)
//{
//    static int k = 1;
//    printf("%2d:%3d # %c---%c\n", k, n, getone, putone);
//    if (k++ % 3 == 0)
//        printf("\n");
//    return 0;
//}
#include <stdio.h>
#include <string.h>
/*
 �㷨˼·��1�� n-1�������ȷŵ�B��λ��
          2.��A���ϵ�ʣ�µ�һ�����ƶ���C����
          3����n-1���̴�B���ƶ���C����
*/
//��������
void move(char x, char y);

void hannuo(int n, char one, char two, char three)
{
    if (n == 1)
        move(one, three); //�ݹ��ֹ����
    else
    {
        hannuo(n - 1, one, three, two);//�� n-1�������ȷŵ�B��λ��
        move(one, three);//��A���ϵ�ʣ�µ�һ�����ƶ���C����
        hannuo(n - 1, two, one, three);//��n-1���̴�B���ƶ���C����

    }
}
void move(char x, char y)
{
    printf(" %c--->%c \n", x, y);
}

int main()
{
    int n;
    printf("input your number:");
    scanf("%d", &n);
    hannuo(n, 'A', 'B', 'C');//������
    return 0;
}
