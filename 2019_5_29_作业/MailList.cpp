#include<stdio.h>
#include<stdlib.h>
#include"MailList.h"

struct MailList g_allMsg[1000];
int g_count;
int menu()
{
	int tmp;
	printf("1.�����ϵ����Ϣ\n"
	"2.ɾ��ָ����ϵ����Ϣ\n"
	"3.����ָ����ϵ����Ϣ\n"
	"4.�޸�ָ����ϵ����Ϣ\n"
	"5.��ʾ������ϵ����Ϣ\n"
	"6.���������ϵ��\n"
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
			printf("������������������\n");
			break;
		default:
			printf("������������������\n");
		}
	}
}
int main()
{
	MailList();
	system("pause");
	return 0;
}