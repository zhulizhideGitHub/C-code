#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fib(int n)
{
	int a = 1;//ǰһ����ֵ Ĭ�� 1
	int b = 1;//��һ����ֵ Ĭ�� 1
	int c = 1;//��ֵΪ 1 ʱ ������ѭ�� ֱ�ӷ�����ֵ 1
	while(n>2)//���� 2 ���ܽ���ѭ����
	{
		c = a+b; //��������ֵ �ǵ�һ����ڶ����ĺ�
		a = b;//���ڶ�����ֵ������һ�� ��һ����ֵ��ͳ��˵ڶ�����ԭ����ֵ
		b = c;//�ڶ�����ֵ������ ��һ����ڶ����ĺ�
		n--; //�� n ���ص�ֹͣ���� n С��2
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);
	printf("ret = %d\n",ret);
	return 0;
}