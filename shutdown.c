#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ 
	char i[20]={0};
	system("shutdown -s -t 200");
again:
	printf("一分钟内会关机，输入我是猪会取消关机\n请输入>;");
	scanf("%s",i);
	if(strcmp(i,"我是猪")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}