#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for(i=0;i<sz-1 ;i++)//ȷ��ð�����������
	{
		int flag = 1;//��һ������������Ѿ����������
		int j = 0;//ÿһ�˵�ð������
		for(j=0;j<sz-1-i ;j++)
		{
			if(arr[j]>arr[j+1])//�������ų�����
			{
				int tpm = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] =  tpm;
				flag = 0;//������������ݲ���ȫ����
			}
		}
		if(flag == 1)//������������ ����ѭ��
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 4, 5, 3, 2, 6, 7, 8, 9, 1};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);//�������������Ԫ��
	bubble_sort(arr,sz);//ð��������
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);//��ӡ��arr�������������
	}
	return 0;
}