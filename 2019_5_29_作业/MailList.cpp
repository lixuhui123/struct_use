#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include"MailList.h"

struct MailList g_allMsg[1000];//������һ���ṹ�����飬
int g_count;
char str[256] = "0";
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
		
			printf("������Ҫ���ҵ��ַ���\n");
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
			printf("������������������\n");
			break;*/
		default:
			printf("������������������\n");
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