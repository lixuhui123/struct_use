#include<stdio.h>
#include<string.h>
#include"MailList.h"
void inputData()
{
	int i = 0;
	struct MailList tmp;
	printf("����������\n");
	scanf("%49s", tmp.name);
	printf("�������Ա�f/m��\n");
	scanf("%s", &tmp.gender);
	printf("����������\n");
	scanf("%d", &tmp.age);
	printf("������绰����\n");
	scanf("%29s", tmp.telnum);
	printf("������סַ\n");
	scanf("%199s", tmp.addr);
	for (i = 0; i < g_count; i++)
	{
		if (strcmp(g_allMsg[i].name, tmp.name)>0)
		{
			break;
        }
	}
	int j=0;
	for (j = g_count; j > i; --j)
	{
		g_allMsg[j] = g_allMsg[j - 1];
	}
	g_allMsg[i] = tmp;
	g_count++;

}
void outputData()
{
	int i = 0;
	printf("    ����       �Ա� ����     �绰       סַ \n");
	for (i = 0; i < g_count; ++i)
	{
		printf("%10s      %c  %3d  %11s  %s\n",
			g_allMsg[i].name,
			g_allMsg[i].gender,
			g_allMsg[i].age,
			g_allMsg[i].telnum,
			g_allMsg[i].addr);
	}
}
void searchData(char *find)

{
	char *ret;
	char age[4] = "0";
	//sprintf(age,"%d",g_allMsg[i].age)��
	//sprintf()��ctrcpy��ʲô����
	int i;
	for (i = 0; i < g_count; ++i)
	{
		do 
		{
			ret = strstr(g_allMsg[i].name, find);
			if (ret)
			{
				printf("%10s      %c  %3d  %11s  %s\n",
					g_allMsg[i].name,
					g_allMsg[i].gender,
					g_allMsg[i].age,
					g_allMsg[i].telnum,
					g_allMsg[i].addr);
				break;
			}
			ret = strstr(g_allMsg[i].telnum, find);
			if (ret)
			{
				printf("%10s      %c  %3d  %11s  %s\n",
					g_allMsg[i].name,
					g_allMsg[i].gender,
					g_allMsg[i].age,
					g_allMsg[i].telnum,
					g_allMsg[i].addr);
				break;
			}
			ret = strstr(&g_allMsg[i].gender, find);
			if (ret)
			{
				printf("%10s      %c  %3d  %11s  %s\n",
					g_allMsg[i].name,
					g_allMsg[i].gender,
					g_allMsg[i].age,
					g_allMsg[i].telnum,
					g_allMsg[i].addr);
				break;
			}
			sprintf(age, "%d", g_allMsg[i].age);
			ret = strstr(age, find);
			if (ret)
			{
				printf("%10s      %c  %3d  %11s  %s\n",
					g_allMsg[i].name,
					g_allMsg[i].gender,
					g_allMsg[i].age,
					g_allMsg[i].telnum,
					g_allMsg[i].addr);
				break;
			}
			ret = strstr(g_allMsg[i].addr, find);
			if (ret)
			{
				printf("%10s      %c  %3d  %11s  %s\n",
					g_allMsg[i].name,
					g_allMsg[i].gender,
					g_allMsg[i].age,
					g_allMsg[i].telnum,
					g_allMsg[i].addr);
				break;
			}
			
		}
		
		while (0);
		
	}
}
