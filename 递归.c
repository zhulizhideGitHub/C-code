#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fac(int n)
{
	//套用数学函数公式：n<1 时 则会返回数 1
	//                  n>1 时 则会返回数 n*Fac(n-1)
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
	ret = Fac(n);//调用函数Fac 进行循环递归运算
	printf("%d",ret);
	return 0;
}