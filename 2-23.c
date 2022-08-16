#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	scanf("%d%d",&num1,&num2);
	num3 = num1 % num2;
	printf("num3 = %d\n",num3);
	

	return 0;

}