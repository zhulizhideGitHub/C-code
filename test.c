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
	//����-����ߵ�������Ϣ
	char board[ROW][COL] = {0};//����ͷ�ļ� game.h ������� ������ֵ����
	//��ʼ������
	InitBoard(board,ROW,COL);//��ʼ�����̣����ܵ�һ����û��Ԫ�ض��ᱻ��ʼ���� ���ո�
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//���嶯��
	while(1)//ѭ�����嶯��
	{
		PlayerMove(board,ROW,COL);//����ƶ����ӵĺ��� �ƶ�������� �� �С�
		DisplayBoard(board,ROW,COL);//��ӡ������ʽ
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board,ROW,COL);
		if(ret !='C')
		{
			break;
		}
		ComputerMove(board,ROW,COL);//�����ƶ����� �ƶ�������� �� ��
		DisplayBoard(board,ROW,COL);//��ӡ������ʽ
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board,ROW,COL);
		if(ret !='C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("���Ӯ\n");
	
	}
	else if(ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}
void test()
{
	int ret = 0;
	srand((unsigned int)time(NULL));//����һ�����ֵ
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d",&ret);
		switch(ret)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("ѡ����󣬴���ѡ��\n");
			break;
		};
	}while (ret);

}
int main()
{
	test();

	return 0;
}