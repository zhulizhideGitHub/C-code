#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int b = 0;
	int a = 0;
	a = rand()%100+1;
	while(1)
	{
		printf("���:>\n");
		scanf("%d",&b);
		if(b>a)
		{
			printf("�´���\n");
		}
		else if(b<a)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	
	}
	
}
void meun()
{
	printf("******************************\n");
	printf("*****1.��ʼ       0.����******\n");
	printf("******************************\n");

}
int main()
{   
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
	meun();
	printf("��ѡ��>:");
	scanf("%d",&i);
	switch(i)
	{
	case 1:
		game();
		printf("");
		break;
	case 0:
		printf("�˳�\n");
		break;
	default:
		printf("�������\n");
		break;
	
	
	}
	}while(i);


	return 0;
}