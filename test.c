#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
void menu()
{
	printf("*********************************\n");
	printf("**** 1.paly           0.exit ****\n");
	printf("*********************************\n");
}
void game()
{
	char ret = 0;
	//数组-存放走的棋盘信息
	char board[ROW][COL] = {0};//调用头文件 game.h 里的行列 更改数值方便
	//初始化棋盘
	InitBoard(board,ROW,COL);//初始化键盘，不管第一个有没有元素都会被初始化成 “空格”
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋动作
	while(1)//循环下棋动作
	{
		PlayerMove(board,ROW,COL);//玩家移动棋子的函数 移动到具体的 行 列。
		DisplayBoard(board,ROW,COL);//打印棋盘样式
		//判断玩家是否赢
		ret = IsWin(board,ROW,COL);
		if(ret !='C')
		{
			break;
		}
		ComputerMove(board,ROW,COL);//电脑移动棋子 移动到具体的 行 列
		DisplayBoard(board,ROW,COL);//打印棋盘样式
		//判断电脑是否赢
		ret = IsWin(board,ROW,COL);
		if(ret !='C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("玩家赢\n");
	
	}
	else if(ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}

}
void test()
{
	int ret = 0;
	srand((unsigned int)time(NULL));//生成一个随机值
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d",&ret);
		switch(ret)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("选择错误，从新选择！\n");
			break;
		};
	}while (ret);

}
int main()
{
	test();

	return 0;
}