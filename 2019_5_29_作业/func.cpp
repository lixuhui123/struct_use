#include<stdio.h>
#include"MailList.h"
void inputData()
{
	printf("����������\n");
	scanf("%49s", &g_allMsg[g_count].name);
	printf("�������Ա�f/m��\n");
	scanf("%s", &g_allMsg[g_count].gender);
	printf("����������\n");
	scanf("%d", &g_allMsg[g_count].age);
	printf("������绰����\n");
	scanf("%29s", &g_allMsg[g_count].telnum);
	printf("������סַ\n");
	scanf("%199s", &g_allMsg[g_count].addr);
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