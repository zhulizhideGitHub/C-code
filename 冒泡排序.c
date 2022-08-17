#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for(i=0;i<sz-1 ;i++)//确定冒泡排序的趟数
	{
		int flag = 1;//这一趟排序的数据已经是有序的了
		int j = 0;//每一趟的冒泡排序
		for(j=0;j<sz-1-i ;j++)
		{
			if(arr[j]>arr[j+1])//将数组排成升序
			{
				int tpm = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] =  tpm;
				flag = 0;//本趟排序的数据不完全有序
			}
		}
		if(flag == 1)//本次数据有序 跳出循环
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 4, 5, 3, 2, 6, 7, 8, 9, 1};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);//计算出整个数组元素
	bubble_sort(arr,sz);//冒泡排序函数
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);//打印出arr数组的所有数据
	}
	return 0;
}