#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fac(int n)
{
	//������ѧ������ʽ��n<1 ʱ ��᷵���� 1
	//                  n>1 ʱ ��᷵���� n*Fac(n-1)
	if(n<1)
		return 1;
	else
		return n*Fac(n-1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fac(n);//���ú���Fac ����ѭ���ݹ�����
	printf("%d",ret);
	return 0;
}