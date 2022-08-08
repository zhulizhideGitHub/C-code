#define _CRT_SECURE_NO_WARNINGS 1
//函数的实现：
#include"game.h"
void  InitBoard(char board[ROW][COL],int row,int col)//打印出 空格 格式
{
	int i = 0;
	
	for(i = 0;i<row;i++)
	{
		int j = 0;
		for(j=0; j < col;j++)
		{
			board[i][j] = ' ';//将 行 与列 的第一个元素标为 空格 
		}
	}
}
void DisplayBoard(char board[ROW][COL],int row,int col)//打印出 行 列 格式
{
	int i = 0;
	int j = 0;
	for(i=0;i<row;i++)
	{
		//打印第一行数据：  |  |  
		
		for(j = 0;j<col;j++)
		{
			printf(" %c ",board[i][j]);//将 i 行 j 列的元素打印出来
			if(j<col -1)// j 小于 列的数 -1 就打印 大于就不打印
			{
				printf("|");
			}
		}
		printf("\n");//打印完就换行
		//打印分割行：   ---|---|---
		if(i<row - 1)//控制打印的行数  超过 row - 1 就不打印
		{
			for(j = 0;j<col;j++)//j 初始为 0 ;j 小于列 ；j 自增 1 
			{
			
				printf("---");//打印“---”
				if(j<col-1)//限制 j 小于 列的数量-1
				{              //                              |    |
					printf("|");//打印 | 会与“---”组合为：---|----|---
				}
			}
			printf("\n");//打印完就换行
		}
		
	}

}
void PlayerMove(char board[ROW][COL],int row,int col)//实现玩家走棋子的步骤
{
	int x = 0;// x 坐标
	int y = 0;// y 坐标
	printf("玩家走:>\n");
	while(1)
	{
	printf("请输入要走的位置:>");
	scanf("%d%d",&x,&y);
	//判断 x y 坐标的准确与合法行
	if(x >=1 && x <= row && y >= 1 && y <= col)
		//x 从 1 开始  并且&&   x 小于等于到行数结束
		//y 从 1 开始  并且&&   y 小于等于到列数结束
	{
	
		if(board[x-1][y-1] == ' ')//如果 行 列 对应的坐标为 ' ' 空格
		{                         //注：行 与 列 需要 -1 才能对应到输入的坐标点  
			board[x-1][y-1] = '*';//行 列 对应的坐标为 ' ' 空格 会放入一个‘*’进去
			break;

		}
		else
		{
			printf("坐标位置重叠占用\n");
		
		}
	
	}
	else
	{
	
		printf("坐标非法，请从新输入！\n");
	}
	
	}

}
void ComputerMove(char board[ROW][COL],int row,int col)//实现电脑走棋子的步骤
{
	int x = 0;// x 坐标
	int y = 0;// y 坐标
	printf("电脑走:>\n");
	while(1)//循环找随机数
	{
		x = rand() % row;//用随机数 模 行数余数会是比 行数 小的数 如：100 % 3 = 1
	    y = rand() % col;
		if(board[x][y] == ' ')//如果 行 列 对应的坐标为 ' ' 空格
		{
			board[x][y] = '#';//行 列 对应的坐标为 ' ' 空格 会放入一个‘#’进去
			break;//跳出循环跳到循环处继续循环
		}
		
			
	}

}
//判断棋盘是否满了
//返回 1 表示满了
//返回 0 表示没满
int IsFull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
			{
				return 0;//没满
			
			}
		
		}
	}
	return 1;//满了
}
char IsWin(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for(i = 0;i<row;i++)
	{
		//判断 三行 字符是否相同
		// i行下标0元素是否与i行下标1的元素相同并且i行下标1的元素是否与i行下标2的元素是否相同并且i行下标1的元素不等于“空格”
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
			//相同则返回 该数值 “*”或“#”
		
		}
	}
	for(i = 0;i<col;i++)
	{
		//判断 三列 字符是否相同
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
		
	}
	//判断三个对角线是否相同
	    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
			return board[1][1];
		
		if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
			return board[1][1];
		
		//判断是否平局
		if(1 == IsFull(board,ROW,COL))
		{
			return 'Q';
		}
		return 'C';

}