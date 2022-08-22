#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[3][4] = {{1,2,3},{4,5}};//[3][4]表示3行4列，3行对应为：{1，2，3，} 4列对应为：｛4，5，0，0｝缺位自动补“0” 
	int i = 0;
	for(i = 0;i<3;i++)//循环行数
	{
		int j = 0;
		for(j=0;j<4;j++)//嵌套列数
		{
			printf("%d ",arr[i][j]);//将行列[3][4]组合一起打印 
		}
		printf("\n");//格式控制：打印一个循环就换行
	}
	return 0;
}

