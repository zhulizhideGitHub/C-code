#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>// �������(rand())���õ�ͷ�ļ�
#include<time.h>//ʱ������õ�ͷ�ļ�
#define ROW 3 //ROW: ��ʾ��	
#define COL 3 //COL����ʾ��
//�ô������������������Ĵ�С ���� ͷ�ļ�����ʹ��
//ͷ�ļ�������
//�������
void  InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
//��������
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);
//�ж���Ӯ
char IsWin(char board[ROW][COL],int row,int col);