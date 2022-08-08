#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>// 随机函数(rand())引用的头文件
#include<time.h>//时间戳引用的头文件
#define ROW 3 //ROW: 表示行	
#define COL 3 //COL：表示列
//好处：可以任意更改数组的大小 引用 头文件即可使用
//头文件的声明
//玩家下棋
void  InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
//电脑下棋
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);
//判断输赢
char IsWin(char board[ROW][COL],int row,int col);