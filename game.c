#define _CRT_SECURE_NO_WARNINGS 1
//������ʵ�֣�
#include"game.h"
void  InitBoard(char board[ROW][COL],int row,int col)//��ӡ�� �ո� ��ʽ
{
	int i = 0;
	
	for(i = 0;i<row;i++)
	{
		int j = 0;
		for(j=0; j < col;j++)
		{
			board[i][j] = ' ';//�� �� ���� �ĵ�һ��Ԫ�ر�Ϊ �ո� 
		}
	}
}
void DisplayBoard(char board[ROW][COL],int row,int col)//��ӡ�� �� �� ��ʽ
{
	int i = 0;
	int j = 0;
	for(i=0;i<row;i++)
	{
		//��ӡ��һ�����ݣ�  |  |  
		
		for(j = 0;j<col;j++)
		{
			printf(" %c ",board[i][j]);//�� i �� j �е�Ԫ�ش�ӡ����
			if(j<col -1)// j С�� �е��� -1 �ʹ�ӡ ���ھͲ���ӡ
			{
				printf("|");
			}
		}
		printf("\n");//��ӡ��ͻ���
		//��ӡ�ָ��У�   ---|---|---
		if(i<row - 1)//���ƴ�ӡ������  ���� row - 1 �Ͳ���ӡ
		{
			for(j = 0;j<col;j++)//j ��ʼΪ 0 ;j С���� ��j ���� 1 
			{
			
				printf("---");//��ӡ��---��
				if(j<col-1)//���� j С�� �е�����-1
				{              //                              |    |
					printf("|");//��ӡ | ���롰---�����Ϊ��---|----|---
				}
			}
			printf("\n");//��ӡ��ͻ���
		}
		
	}

}
void PlayerMove(char board[ROW][COL],int row,int col)//ʵ����������ӵĲ���
{
	int x = 0;// x ����
	int y = 0;// y ����
	printf("�����:>\n");
	while(1)
	{
	printf("������Ҫ�ߵ�λ��:>");
	scanf("%d%d",&x,&y);
	//�ж� x y �����׼ȷ��Ϸ���
	if(x >=1 && x <= row && y >= 1 && y <= col)
		//x �� 1 ��ʼ  ����&&   x С�ڵ��ڵ���������
		//y �� 1 ��ʼ  ����&&   y С�ڵ��ڵ���������
	{
	
		if(board[x-1][y-1] == ' ')//��� �� �� ��Ӧ������Ϊ ' ' �ո�
		{                         //ע���� �� �� ��Ҫ -1 ���ܶ�Ӧ������������  
			board[x-1][y-1] = '*';//�� �� ��Ӧ������Ϊ ' ' �ո� �����һ����*����ȥ
			break;

		}
		else
		{
			printf("����λ���ص�ռ��\n");
		
		}
	
	}
	else
	{
	
		printf("����Ƿ�����������룡\n");
	}
	
	}

}
void ComputerMove(char board[ROW][COL],int row,int col)//ʵ�ֵ��������ӵĲ���
{
	int x = 0;// x ����
	int y = 0;// y ����
	printf("������:>\n");
	while(1)//ѭ���������
	{
		x = rand() % row;//������� ģ �����������Ǳ� ���� С���� �磺100 % 3 = 1
	    y = rand() % col;
		if(board[x][y] == ' ')//��� �� �� ��Ӧ������Ϊ ' ' �ո�
		{
			board[x][y] = '#';//�� �� ��Ӧ������Ϊ ' ' �ո� �����һ����#����ȥ
			break;//����ѭ������ѭ��������ѭ��
		}
		
			
	}

}
//�ж������Ƿ�����
//���� 1 ��ʾ����
//���� 0 ��ʾû��
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
				return 0;//û��
			
			}
		
		}
	}
	return 1;//����
}
char IsWin(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for(i = 0;i<row;i++)
	{
		//�ж� ���� �ַ��Ƿ���ͬ
		// i���±�0Ԫ���Ƿ���i���±�1��Ԫ����ͬ����i���±�1��Ԫ���Ƿ���i���±�2��Ԫ���Ƿ���ͬ����i���±�1��Ԫ�ز����ڡ��ո�
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
			//��ͬ�򷵻� ����ֵ ��*����#��
		
		}
	}
	for(i = 0;i<col;i++)
	{
		//�ж� ���� �ַ��Ƿ���ͬ
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
		
	}
	//�ж������Խ����Ƿ���ͬ
	    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
			return board[1][1];
		
		if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
			return board[1][1];
		
		//�ж��Ƿ�ƽ��
		if(1 == IsFull(board,ROW,COL))
		{
			return 'Q';
		}
		return 'C';

}