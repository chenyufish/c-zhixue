#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
void initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Displayboard(char board[ROWS][COLS],int rows,int cols );
void SetMine(char board[ROWS][COLS],int row,int col);
#define EASY_COUNT 10
#define DIFFICULT_COUNT 30
#define HARD_COUNT 40
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);



