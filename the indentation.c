#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	int z = 0;//左下标
	int y = strlen(arr1)-1;//右下标
	while(z<=y)
	{
    arr2[z] = arr1[z];
	arr2[y] = arr1[y];
	printf("%s\n",arr2);
	z++;
	y--;
	}
	return 0;
}
