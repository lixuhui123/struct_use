#include<stdio.h>
#include"MailList.h"
void inputDate()
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