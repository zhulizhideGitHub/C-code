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
		printf("请猜:>\n");
		scanf("%d",&b);
		if(b>a)
		{
			printf("猜大了\n");
		}
		else if(b<a)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	
	}
	
}
void meun()
{
	printf("******************************\n");
	printf("*****1.开始       0.结束******\n");
	printf("******************************\n");

}
int main()
{   
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
	meun();
	printf("请选择>:");
	scanf("%d",&i);
	switch(i)
	{
	case 1:
		game();
		printf("");
		break;
	case 0:
		printf("退出\n");
		break;
	default:
		printf("输入错误\n");
		break;
	
	
	}
	}while(i);


	return 0;
}