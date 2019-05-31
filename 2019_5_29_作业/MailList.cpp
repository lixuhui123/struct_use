#include<stdio.h>
#include<stdlib.h>
#include"MailList.h"

struct MailList g_allMsg[1000];
int g_count;
int menu()
{
	int tmp;
	printf("1.添加联系人信息\n"
	"2.删除指定联系人信息\n"
	"3.查找指定联系人信息\n"
	"4.修改指定联系人信息\n"
	"5.显示所有联系人信息\n"
	"6.清空所有联系人\n"
	);
	
	int ret = scanf("%d", &tmp);
	return ret ? tmp : -1;
}
void MailList()

{
	
	while (1)
	{
		int op = menu();
		switch (op)
		{
		case ADD_MSG:
			inputDate();
			break;
		case DELETE_MSG:
			break;
		case SEARCH_MSG:
			break;
		case CHANGE_MSG:
			break;
		case DISPALY_MSG:
			break;
		case EMPTY_MSG:
			break;
		case -1:
			printf("输入有误请重新输入\n");
			break;
		default:
			printf("输入有误请重新输入\n");
		}
	}
}
int main()
{
	MailList();
	system("pause");
	return 0;
}