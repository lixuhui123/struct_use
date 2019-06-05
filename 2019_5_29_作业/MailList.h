#pragma once
#ifndef MAILLIST_H // include guard for 3rd party interop
#define MAILLIST_H
struct MailList {
	char name[50];
	char gender;
	char telnum[30];
	char addr[200];
	int age;
};//声明一般放在头文件里，定义放在源文件
enum {
	ADD_MSG = 1,
	DELETE_MSG,
	SEARCH_MSG,
	CHANGE_MSG,
	DISPALY_MSG,
	EMPTY_MSG

};
extern struct MailList g_allMsg[1000];
extern int g_count;
void inputData();
void outputData();
void searchData(char *find);
#endif //