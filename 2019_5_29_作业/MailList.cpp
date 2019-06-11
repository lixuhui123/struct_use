#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include"MailList.h"

struct MailList g_allMsg[1000];//定义了一个结构体数组，
int g_count;
char str[256] = "0";
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
	//return ret ? tmp : -1;
	if (ret > 0)
	{
		return tmp;
	}
	else if (ret < 0)
	{
		return -1;
	}
	else if (ret == 0)
	{
		return -1;
	}
}
void MailList()

{
	
	while (1)
	{

		int op = menu();
		switch (op)
		{
		
		case ADD_MSG:
			inputData();
			break;
		case DELETE_MSG:
			break;
		case SEARCH_MSG:
		
			printf("请输入要查找的字符串\n");
			scanf("%s", &str);
			searchData(str);
			break;
		case CHANGE_MSG:
			break;
		case DISPALY_MSG:
			outputData();
			break;
		case EMPTY_MSG:
			memset(g_allMsg, 0, g_count * sizeof(struct MailList));
			g_count = 0;
			break;
		/*case -1:
			printf("输入有误请重新输入\n");
			break;*/
		default:
			printf("输入有误请重新输入\n");
			return;
		
		}
	}
}
int main()
{
	MailList();
	system("pause");
	return 0;
}