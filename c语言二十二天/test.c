#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int hanoi(int, char, char, char);
//    int n, counter;
//    printf("Input the number of diskes：");
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
 算法思路：1将 n-1个盘子先放到B座位上
          2.将A座上地剩下的一个盘移动到C盘上
          3、将n-1个盘从B座移动到C座上
*/
//函数声明
void move(char x, char y);

void hannuo(int n, char one, char two, char three)
{
    if (n == 1)
        move(one, three); //递归截止条件
    else
    {
        hannuo(n - 1, one, three, two);//将 n-1个盘子先放到B座位上
        move(one, three);//将A座上地剩下的一个盘移动到C盘上
        hannuo(n - 1, two, one, three);//将n-1个盘从B座移动到C座上

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
    hannuo(n, 'A', 'B', 'C');//三根针
    return 0;
}
