#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[3][4] = {{1,2,3},{4,5}};//[3][4]��ʾ3��4�У�3�ж�ӦΪ��{1��2��3��} 4�ж�ӦΪ����4��5��0��0��ȱλ�Զ�����0�� 
	int i = 0;
	for(i = 0;i<3;i++)//ѭ������
	{
		int j = 0;
		for(j=0;j<4;j++)//Ƕ������
		{
			printf("%d ",arr[i][j]);//������[3][4]���һ���ӡ 
		}
		printf("\n");//��ʽ���ƣ���ӡһ��ѭ���ͻ���
	}
	return 0;
}

