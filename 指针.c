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
	struct Book b1 ={"c++���",50};
	strcpy(b1.name,"c++���Ա��");
	printf("���ģ�%s\n",b1.name);
	/*struct Book b1 = {"C++���",50};
	struct Book* pd = &b1;
	printf("������%s\n",pd->name);
	printf("ԭ�۸�%dԪ\n",pd->price);
	(*pd).price = 118;
	printf("���ĺ�ļ۸�%dԪ\n",(*pd).price);*/
	return 0;

}