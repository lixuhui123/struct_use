#include<stdio.h>
#include"MailList.h"
void inputDate()
{
	printf("请输入姓名\n");
	scanf("%49s", &g_allMsg[g_count].name);
	printf("请输入性别（f/m）\n");
	scanf("%s", &g_allMsg[g_count].gender);
	printf("请输入年龄\n");
	scanf("%d", &g_allMsg[g_count].age);
	printf("请输入电话号码\n");
	scanf("%29s", &g_allMsg[g_count].telnum);
	printf("请输入住址\n");
	scanf("%199s", &g_allMsg[g_count].addr);
	g_count++;
}