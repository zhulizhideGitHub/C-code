#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ 
	char i[20]={0};
	system("shutdown -s -t 200");
again:
	printf("һ�����ڻ�ػ��������������ȡ���ػ�\n������>;");
	scanf("%s",i);
	if(strcmp(i,"������")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}