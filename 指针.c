#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 ={"c++编程",50};
	strcpy(b1.name,"c++语言编程");
	printf("更改：%s\n",b1.name);
	/*struct Book b1 = {"C++编程",50};
	struct Book* pd = &b1;
	printf("书名：%s\n",pd->name);
	printf("原价格：%d元\n",pd->price);
	(*pd).price = 118;
	printf("更改后的价格：%d元\n",(*pd).price);*/
	return 0;

}