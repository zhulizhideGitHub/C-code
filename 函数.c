#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fib(int n)
{
	int a = 1;//前一个数值 默认 1
	int b = 1;//后一个数值 默认 1
	int c = 1;//数值为 1 时 会跳过循环 直接返回数值 1
	while(n>2)//大于 2 才能进入循环体
	{
		c = a+b; //第三个数值 是第一个与第二个的和
		a = b;//将第二个数值赋给第一个 第一个数值则就成了第二个的原来数值
		b = c;//第二个数值则变成了 第一个与第二个的和
		n--; //将 n 返回到停止条件 n 小于2
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